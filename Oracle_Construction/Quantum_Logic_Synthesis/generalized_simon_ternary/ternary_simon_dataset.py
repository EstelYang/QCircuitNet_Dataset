from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import os
import re
import random
import argparse
import math
from io import StringIO
from ternary_simon_generation import simon_oracle_3d


def normalize_gate_definitions_cu(qasm_code, gate_prefix):
    # Find all gate definitions
    gate_definitions = re.findall(rf'(gate {gate_prefix}_\d*\([^)]+\)\s*[\w\s,]+\s*{{[^}}]*}})', qasm_code)

    # Track unique gate bodies and their new names
    unique_gate_bodies = {}
    gate_mapping = {}
    new_definitions = []
    gate_count = 1

    for gate_definition in gate_definitions:
        # Extract the body of the gate definition
        match = re.match(rf'gate ({gate_prefix}_\d*)\(([^)]+)\)\s*([\w\s,]+)\s*{{([^}}]*)}}', gate_definition)
        if match:
            old_gate_name = match.group(1)
            params = match.group(2)
            qubits = match.group(3)
            body = match.group(4).strip()

            # Check if this body has been encountered before
            if body not in unique_gate_bodies:
                new_gate_name = f'{gate_prefix}_{gate_count}'
                unique_gate_bodies[body] = new_gate_name
                gate_mapping[old_gate_name] = new_gate_name
                new_definitions.append(f'gate {new_gate_name}({params}) {qubits} {{ {body} }}\n')
                gate_count += 1
            else:
                new_gate_name = unique_gate_bodies[body]
                gate_mapping[old_gate_name] = new_gate_name

    # Replace all occurrences of the old gate names with the new gate names
    for old_gate_name, new_gate_name in gate_mapping.items():
        qasm_code = re.sub(rf'\b{old_gate_name}\b', new_gate_name, qasm_code)

    # Remove all old gate definitions
    qasm_code = re.sub(rf'gate {gate_prefix}_\d*\([^)]+\)\s*[\w\s,]+\s*{{[^}}]*}}', '', qasm_code).strip()

    # Add the new unique gate definitions at the beginning of the code
    qasm_code = '\n\n'.join(new_definitions) + '\n\n' + qasm_code

    return qasm_code


def normalize_gate_definitions(qasm_code, gate_prefixes):
    # Initialize a dictionary to track unique gate bodies and their new names for all prefixes
    unique_gate_bodies = {}
    gate_mapping = {}
    new_definitions = []
    gate_counts = {prefix: 1 for prefix in gate_prefixes}

    for gate_prefix in gate_prefixes:
        # Update the regular expression to correctly match gate definitions with the given prefix
        pattern = r'gate\s+(mcx_\d+)\s+([\w\s,]+)\s*\{\s*([\w\s,;]+)\s*\}'

        gate_definitions = re.findall(pattern, qasm_code)

        # print(gate_definitions)
        for old_gate_name, params, body in gate_definitions:
            # print(f'old:{old_gate_name}')
            # print(f'params:{params}')
            # print(f'body:{body}')
            # Check if this body has been encountered before
            if body not in unique_gate_bodies:
                new_gate_name = f'{gate_prefix}_{gate_counts[gate_prefix]}'
                unique_gate_bodies[body] = new_gate_name
                gate_mapping[old_gate_name] = new_gate_name
                new_definitions.append(f'gate {new_gate_name}({params}) {{ {body} }}\n')
                gate_counts[gate_prefix] += 1
            else:
                new_gate_name = unique_gate_bodies[body]
                gate_mapping[old_gate_name] = new_gate_name

    # Replace all occurrences of the old gate names with the new gate names
    for old_gate_name, new_gate_name in gate_mapping.items():
        qasm_code = re.sub(rf'\b{old_gate_name}\b', new_gate_name, qasm_code)

    # Remove all old gate definitions
    for gate_prefix in gate_prefixes:
        qasm_code = re.sub(rf'gate\s+{gate_prefix}_\d+\s+[\w\s,]+\s*\{{[^}}]*\}}', '', qasm_code).strip()

    # Add the new unique gate definitions at the beginning of the code
  #  qasm_code = '\n\n'.join(new_definitions) + '\n\n' + qasm_code

    return qasm_code


def modify_qasm_file(filepath):
    """Read, modify, and save the QASM file."""
    with open(filepath, 'r') as file:
        qasm_code = file.read()

    # 进行 QASM 代码的处理
    qasm_code = normalize_gate_definitions(qasm_code, 'mcx')
    qasm_code = normalize_gate_definitions_cu(qasm_code, 'cu1')

    # 保存修改后的 QASM 代码
    with open(filepath, 'w') as file:
        file.write(qasm_code)


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_random_strings(n, num_strings):
    """Generates 2^(n-2) secret strings of length n."""
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("012") for _ in range(n)))

    return list(selected_strings)


def generate_circuit_qasm():
    """Generate QASM files for the Simon oracle with different settings."""
    for n in range(2, 15):
        directory = f"ternary_simon_n{n}"
        secret_strings = generate_random_strings(n, 3 ** (n - 2))
        key_strings = generate_random_strings(n, min(3 ** (n - 2), 20))
        for secret_string in secret_strings:
            subdirectory = f"{directory}/s{secret_string}"
            for key_string in key_strings:
                oracle = simon_oracle_3d(n, secret_string, key_string)
                cycles = 3 ** n / 3
                circuit = QuantumCircuit(2 * n + math.ceil(math.log2(cycles)) + 1)
                circuit.append(oracle, range(2 * n + math.ceil(math.log2(cycles))))
                filename = f"ternary_simon_n{n}_s{secret_string}_k{key_string}.qasm"
                filepath = os.path.join(subdirectory, filename)
                save_qasm(circuit, subdirectory, filename)
                #modify_qasm_file(filepath)


def extract_gate_definition():
    """Extracts the gate definition from the original QASM file and save the simplified QASM oracle."""
    for n in range(2, 15):
        input_dir = f"full_circuit/ternary_simon_n{n}"
        input_file = f"diffusion_n{n}.qasm"
        output_dir = f"diffusion_operator_n{n}"
        customgate_file = "customgates.inc"
        output_qasm_file = f"diffusion_n{n}.qasm"
        if not os.path.exists(output_dir):
            os.makedirs(output_dir)
        with open(f"{input_dir}/{input_file}", "r") as file:
            content = file.read()

        include_pos = content.find('include "stdgates.inc";')
        if include_pos == -1:
            raise ValueError("Include statement not found in the file")

        diffuser_pos = content.find("gate Diffuser")
        if diffuser_pos == -1:
            raise ValueError("Diffuser gate not found in the file")

        custom_gates = content[
            include_pos + len('include "stdgates.inc";') : diffuser_pos
        ].strip()
        custom_gates = custom_gates.replace("mcx_gray", "mcx")

        rest_qasm = (
            content[: include_pos + len('include "stdgates.inc";')]
            + f'\ninclude "{customgate_file}";\n'
            + content[diffuser_pos:]
        )
        rest_qasm = rest_qasm.replace("mcx_gray", "mcx")

        with open(f"{output_dir}/{customgate_file}", "w") as file:
            file.write(custom_gates)

        with open(f"{output_dir}/{output_qasm_file}", "w") as file:
            file.write(rest_qasm)


def generate_dataset_json():
    """Generates a JSON dataset for the simon oracle.
    Format: {"prompt": description, "completion": circuit}

    """
    with open("simon/simon_description.txt", "r") as f:
        template = f.read()
    DATA = []
    for n in range(2, 15):
        directory = f"simon/simon_n{n}"
        data = []
        for secret in os.listdir(directory):
            current_dir = os.path.join(directory, secret)
            secret_string = secret[1:]
            for key in os.listdir(current_dir):
                key_string = key.split('_')[3].split('.')[0][1:]
                with open(os.path.join(current_dir, key), "r") as f:
                    completion = f.read()
            prompt = template.replace("$\{qubit number\}", f"{n}$").replace("$\{key string\}", f"{key_string}$").replace("$\{secret string\}", f"{secret_string}$").replace("\{QASM / Qiskit\}", "QASM")
            dic = {"prompt": prompt, "completion": completion}
            data.append(dic)
        DATA.append(data)
    return DATA

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-f",
        "--func",
        choices=["qasm", "json"],
        help="The function to call: generate qasm circuit or json dataset.",
    )
    args = parser.parse_args()
    if args.func == "qasm":
        generate_circuit_qasm()
    elif args.func == "json":
        generate_dataset_json()


if __name__ == "__main__":
    main()
