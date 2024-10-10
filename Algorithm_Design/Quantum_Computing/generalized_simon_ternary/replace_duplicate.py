import os
import re
from qiskit.qasm3 import loads
from qiskit_aer import AerSimulator


def replace_igh_and_rcccx_dg(qasm_string):
    lines = qasm_string.splitlines()
    new_lines = []
    inside_igh_definition = False
    inside_rcccx_dg_definition = False

    for line in lines:
        if "gate IGH" in line:
            inside_igh_definition = True
            continue
        if inside_igh_definition and "}" in line:
            inside_igh_definition = False
            continue

        if "gate rcccx_dg" in line:
            inside_rcccx_dg_definition = True
            continue
        if inside_rcccx_dg_definition and "}" in line:
            inside_rcccx_dg_definition = False
            continue

        if not inside_igh_definition and not inside_rcccx_dg_definition:
            new_line = line.replace("IGH", "inv @ GH")
            new_line = new_line.replace("rcccx_dg", "inv @ rcccx")
            new_lines.append(new_line)

    optimized_qasm = "\n".join(new_lines)
    return optimized_qasm


def detect_and_replace_duplicate_gates(qasm_string):
    gate_definitions = {}
    gate_replacement_mapping = {}
    gate_counter = 1

    gate_pattern = re.compile(r'gate\s+(\w+)\s*\(([^)]*)\)\s+(\w+(?:,\s*\w+)*)\s*\{([^}]*)\}', re.DOTALL)
    matches = gate_pattern.findall(qasm_string)

    for match in matches:
        gate_name, gate_params, gate_qubits, gate_body = match
        gate_body = gate_body.strip()
        gate_signature = (gate_params.strip(), gate_qubits.strip(), gate_body)
        if gate_signature in gate_definitions:
            gate_replacement_mapping[gate_name] = gate_definitions[gate_signature]
        else:
            new_name = f"cu_{gate_counter}"
            gate_definitions[gate_signature] = new_name
            gate_replacement_mapping[gate_name] = new_name
            gate_counter += 1

    # 替换QASM字符串中的门名称，包括定义和调用
    optimized_qasm = qasm_string
    for old_name, new_name in gate_replacement_mapping.items():
        print(old_name, new_name)
        # 先替换定义
        # optimized_qasm = re.sub(rf'gate\s+{old_name}\b', f'gate {new_name}', optimized_qasm)
        # 再替换调用
        # optimized_qasm = re.sub(rf'\b{old_name}\b', new_name, optimized_qasm)
        optimized_qasm = optimized_qasm.replace(old_name, new_name)

    qasm_string = optimized_qasm
    gate_pattern = re.compile(r'gate\s+(\w+)\s*\(([^)]*)\)\s+(\w+(?:,\s*\w+)*)\s*\{([^}]*)\}', re.DOTALL)
    matches = gate_pattern.findall(qasm_string)

    header_pattern = re.compile(r'OPENQASM\s+3;\s*include\s+\"stdgates\.inc\";\s*', re.DOTALL)
    header_match = header_pattern.search(qasm_string)
    if header_match:
        header = header_match.group(0)
    else:
        header = "OPENQASM 3;\ninclude \"stdgates.inc\";\n"

    unique_gate_definitions = set()
    gate_definitions_section = []

    for match in matches:
        gate_name, gate_params, gate_qubits, gate_body = match
        gate_body = gate_body.strip()
        gate_signature = (gate_params.strip(), gate_qubits.strip(), gate_body)
        if gate_signature not in unique_gate_definitions:
            unique_gate_definitions.add(gate_signature)
            gate_definitions_section.append(
                f"gate {gate_name} ({gate_params}) {gate_qubits} {{{gate_body}}}")

    non_gate_qasm = gate_pattern.sub('', optimized_qasm).strip()
    non_gate_qasm = header_pattern.sub('', non_gate_qasm).strip()

    optimized_qasm = '\n\n'.join([header] + gate_definitions_section + [non_gate_qasm])

    return optimized_qasm


def detect_and_remove_redundant_gates(qasm_string):
    redundant_gates = set()
    gate_pattern = re.compile(r'gate\s+(\w+)\s+([^{]+)\s*\{\s*mcx\s+([^{]+)\s*;\s*\}', re.DOTALL)
    matches = gate_pattern.findall(qasm_string)

    for match in matches:
        gate_name, gate_params, mcx_params = match
        if gate_params.strip() == mcx_params.strip():
            redundant_gates.add(gate_name)

    optimized_qasm = qasm_string
    for gate_name in redundant_gates:
        optimized_qasm = re.sub(rf'gate\s+{gate_name}\s+[^{{]+\{{[^}}]*\}}', '', optimized_qasm)

    for gate_name in redundant_gates:
        optimized_qasm = re.sub(rf'\b{gate_name}\b', 'mcx', optimized_qasm)

    optimized_qasm = re.sub(r'\n\s*\n', '\n', optimized_qasm).strip()

    return optimized_qasm


def process_oracle_files(root_directory):
    for n in range(2, 12):
        nx_directory = os.path.join(root_directory, f"n{n}")
        if not os.path.exists(nx_directory):
            continue

        for trail_dir in os.listdir(nx_directory):
            trail_path = os.path.join(nx_directory, trail_dir)
            oracle_file = os.path.join(trail_path, "oracle.inc")

            if os.path.isfile(oracle_file):
                with open(oracle_file, 'r') as file:
                    qasm_string = file.read()

                optimized_qasm = replace_igh_and_rcccx_dg(qasm_string)
                optimized_qasm = detect_and_replace_duplicate_gates(optimized_qasm)
                optimized_qasm = detect_and_remove_redundant_gates(optimized_qasm)

                with open(oracle_file, 'w') as file:
                    file.write(optimized_qasm)

                print(f"Processed: {oracle_file}")


root_directory = "test_oracle"
process_oracle_files(root_directory)

print("All files in the dataset have been processed.")
