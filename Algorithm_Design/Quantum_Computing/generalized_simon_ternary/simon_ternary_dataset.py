from qiskit import QuantumCircuit, QuantumRegister
from qiskit.circuit.library import XGate
from qiskit.qasm3 import dump
import random
import math
import argparse
import os
import glob
from simon_ternary_generation import simon_ternary_algorithm
from simon_ternary_post_processing import *
from simon_ternary_utils import *


def simon_oracle_3d(n, secret_string, key_string):
    """Creates a Ternary Simon oracle for the given secret string s"""

    def find_ternary_cycles(n, secret_string):

        def generate_ternary_numbers(qudits_num):

            if qudits_num == 0:
                return [""]
            smaller = generate_ternary_numbers(qudits_num - 1)
            return [x + y for x in smaller for y in "012"]

        def add_ternary(t1, t2):

            return ''.join(str((int(t1[i]) + int(t2[i])) % 3) for i in range(len(t1)))

        def find_cycle(start, secret_string):

            current = start
            ternary_cycle = []
            seen_cycles = set()
            while current not in seen_cycles:
                seen_cycles.add(current)
                ternary_cycle.append(current)
                current = add_ternary(current, secret_string)
            return ternary_cycle

        # Generate all n-digit ternary numbers
        ternary_numbers = generate_ternary_numbers(n)

        # Initialize the list of cycles and a set to track seen numbers
        cycles = []
        seen = set()

        # Iterate over all ternary numbers and find the cycle for each unseen number
        for number in ternary_numbers:
            if number not in seen:
                cycle = find_cycle(number, secret_string)
                cycles.append(cycle)
                seen.update(cycle)

        return cycles

    cycles = find_ternary_cycles(n, secret_string)

    # Define the quantum registers: 2n for the Simon problem, fewer qubits for the compressed encoding
    qr1 = QuantumRegister(2 * n)
    qr2 = QuantumRegister(math.ceil(math.log2(len(cycles))))
    oracle = QuantumCircuit(qr1, qr2)

    base_gate = XGate()

    for cycle_idx, cycle in enumerate(cycles):
        binary_idx = format(cycle_idx, f'0{math.ceil(math.log2(len(cycles)))}b')  # Binary encoding of the cycle index
        for number in cycle:
            ctrl_states = ''.join(format(int(digit), '02b') for digit in number)
            # For each bit in the binary index, add control logic to the corresponding ancilla qubit
            for bit_pos, bit in enumerate(binary_idx):
                if bit == '1':
                    cgate = base_gate.control(num_ctrl_qubits=len(ctrl_states), ctrl_state=ctrl_states)
                    oracle.append(cgate, qr1[:len(ctrl_states)] + [qr2[bit_pos]])

    for qubit in range(2 * n, math.ceil(math.log2(len(cycles)))):
        key_string2 = ''.join(format(int(digit), '02b') for digit in key_string)
        if key_string2[qubit - n] == "1":
            oracle.x(qubit)

    oracle_gate = oracle.to_gate()
    oracle_gate.name = "Oracle"

    return oracle_gate


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_random_strings(n, test_num=5):
    """Generates secret strings of length n as test cases."""
    num_strings = min(3 ** (n - 2), test_num)
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("012") for _ in range(n)))

    return list(selected_strings)


def generate_circuit_qasm(test_num=5):
    """Generates QASM files for the Simon algorithm with different oracles."""
    for n in range(2, 31):
        directory = f"full_circuit/simon_ternary_n{n}"
        secret_strings = generate_random_strings(n, test_num)
        key_strings = generate_random_strings(n, test_num)
        for secret_string in secret_strings:
            for key_string in key_strings:
                oracle = simon_oracle_3d(n, secret_string, key_string)
                circuit = simon_ternary_algorithm(n, oracle)
                filename = f"simon_ternary_n{n}_s{secret_string}_k{key_string}.qasm"
                save_qasm(circuit, directory, filename)


def extract_gate_definition():
    """Extracts the oracle definition from the original QASM file and saves the algorithm circuit alone."""
    for n in range(2, 31):
        input_dir = f"full_circuit/simon_ternary_n{n}"
        output_qasm_file = f"simon_ternary_n{n}.qasm"
        oracle_file = "oracle.inc"

        qasm_files = glob.glob(os.path.join(input_dir, "*.qasm"))

        circuit_save = False
        t = 0
        for input_file in qasm_files:
            t += 1
            secret_string = input_file.split("_")[-2][1:]
            key_string = input_file.split("_")[-1].split(".")[0][1:]
            oracle_dir = f"test_oracle/n{n}/trial{t}"

            if not os.path.exists(oracle_dir):
                os.makedirs(oracle_dir)

            txt_file_name = "oracle_info.txt"
            with open(f"{oracle_dir}/{txt_file_name}", "w") as file:
                file.write(f"Secret string: {secret_string}\n")
                file.write(f"Key string: {key_string}\n")

            with open(input_file, "r") as file:
                content = file.read()

            gh_pos = content.find("gate GH")
            if gh_pos == -1:
                raise ValueError("GH gate not found in the file")

            igh_pos = content.find("gate IGH")
            if igh_pos == -1:
                raise ValueError("IGH gate not found in the file")

            bit_pos = content.find("bit[", igh_pos)
            if bit_pos == -1:
                raise ValueError("bit array definition not found in the file")

            # Extract the portion between GH and bit definitions
            oracle_def = content[gh_pos:bit_pos].strip()

            # Filter out GH and IGH gate definitions from the oracle_def
            gh_end = gh_pos + content[gh_pos:].find("}") + 1
            igh_end = igh_pos + content[igh_pos:].find("}") + 1
            oracle_def = oracle_def.replace(content[gh_pos:gh_end].strip(), "")
            oracle_def = oracle_def.replace(content[igh_pos:igh_end].strip(), "").strip()

            with open(f"{oracle_dir}/{oracle_file}", "w") as file:
                file.write(oracle_def)

            if not circuit_save:
                rest_qasm = (
                        content[:gh_end].strip()  # Keep GH definition
                        + "\n\n" + content[igh_pos:igh_end].strip()  # Keep IGH definition
                        + f'\n\ninclude "{oracle_file}";\n'
                        + content[bit_pos:].strip()  # Keep the rest of the circuit
                )
                with open(output_qasm_file, "w") as file:
                    file.write(rest_qasm)
                circuit_save = True


def generate_dataset_json():
    """Generates a JSON dataset for the Algorithm.
    Format: {"input": description, "output": circuit}

    """
    # Replace the placeholder in the description with the qubit number
    # Create the json file with different entries.
    pass


def remove_header(qasm_code):
    """Remove the first two lines (OPENQASM 3; and include "stdgates.inc";) from the QASM code."""
    lines = qasm_code.splitlines()
    # Remove the first two lines if they exist
    if lines[0].startswith("OPENQASM") and lines[1].startswith("include"):
        return "\n".join(lines[2:])
    return qasm_code


def remove_space_between_cu_and_parenthesis(qasm_code):
    """
    Remove spaces between 'cu_{n}' and '('.
    """
    # 正则表达式用于查找 cu_n 和 ( 之间的空格
    pattern = re.compile(r'(cu_\d+)\s+\(')
    # 用re.sub方法将其替换为没有空格的形式
    modified_qasm = pattern.sub(r'\1(', qasm_code)
    return modified_qasm


def check_dataset():
    """Check the generated dataset."""
    text = []
    shots = 10
    aer_sim = AerSimulator()
    for n in range(3, 11):
        print_and_save(f"Verifying Ternary Simon's Algorithm for n={n}", text)
        filename = f"simon_ternary_n{n}.qasm"
        with open(filename, "r") as file:
            qasm_code = file.read()

        # Verify the syntax of the QASM code with the first test case oracle
        t = 1
        with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
            oracle_def = file.read()

        oracle_def = remove_header(oracle_def)

        full_qasm = plug_in_oracle(qasm_code, oracle_def)
        full_qasm = remove_space_between_cu_and_parenthesis(full_qasm)
        circuit = verify_qasm_syntax(full_qasm)

        if circuit is None:
            continue

        # Verify the algorithm with different test cases
        total_success = 0
        total_fail = 0
        t_range = min(10, 4 ** (n - 2))
        for t in range(1, 1 + t_range):
            print(t)
            print('*'*10)
            print_and_save(f"   Running Test Case {t}", text)
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            oracle_def = remove_header(oracle_def)
            full_qasm = plug_in_oracle(qasm_code, oracle_def)
            full_qasm = remove_space_between_cu_and_parenthesis(full_qasm)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                content = file.read()
            match = re.search(r"Secret string: ([012]+)", content)
            if match:
                secret_string = match.group(1)
            else:
                raise ValueError("Secret string not found in the file.")

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction = run_and_analyze(circuit.copy(), aer_sim)

                n = len(secret_string)
                equivalents = set()
                equivalents.add(secret_string)
                rotated_string = ''.join(
                    str((int(secret_string[i]) + int(secret_string[i])) % 3) for i in range(len(secret_string)))
                equivalents.add(rotated_string)

                if not isinstance(prediction, str):
                    raise TypeError("Predicted secret string should be a string.")
                if prediction in equivalents:
                    cnt_success += 1
                else:
                    cnt_fail += 1
            print_and_save(
                f"        Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}",
                text,
            )
            total_success += cnt_success
            total_fail += cnt_fail
        print_and_save(
            f"   Total Success: {total_success}; Total Fail: {total_fail}", text
        )
    with open("ternary_simon_verification.txt", "w") as file:
        text = [line + "\n" for line in text]
        file.write("".join(text))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-f",
        "--func",
        choices=["qasm", "json", "gate", "check"],
        help="The function to call: generate qasm circuit, json dataset or extract gate definition.",
    )
    args = parser.parse_args()
    if args.func == "qasm":
        generate_circuit_qasm()
    elif args.func == "json":
        generate_dataset_json()
    elif args.func == "gate":
        extract_gate_definition()
    elif args.func == "check":
        check_dataset()


if __name__ == "__main__":
    main()
