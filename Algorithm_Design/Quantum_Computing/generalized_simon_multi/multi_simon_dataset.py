from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import random
import argparse
import re
import os
import glob
from multi_simon_generation import multi_simon_algorithm
from multi_simon_post_processing import *
from multi_simon_utils import *

from qiskit import QuantumCircuit, transpile, QuantumRegister, ClassicalRegister, AncillaRegister
from qiskit.qasm3 import dump
from qiskit_aer import AerSimulator
import os
import random
from multi_simon_post_processing import recover_secret_string


def multi_simon_oracle(n, s1, s2, key_string):
    """Creates a Simon oracle for the given secret string s.

    Parameters:
    - n (int): number of qubits
    - s (str): the secret string of length n

    Returns:
    - Gate: the Simon oracle circuit as a gate
    """

    # Reverse the secret string to fit qiskit's qubit ordering
    key_string = key_string[::-1]
    s1 = s1[::-1]

    qr = QuantumRegister(2 * n)
    ac = 2 * n
    multi_simon_oracle = QuantumCircuit(2 * n + 1)
    oracle1 = QuantumCircuit(qr)

    # Copy the first register to the second register
    for qubit in range(n):
        oracle1.cx(qubit, qubit + n)

    # If s is not all-zero, find the first non-zero bit j in the secret string
    if s1 != "0" * n:
        i = s1.find("1")
        # Do |x> -> |s.x> on condition that q_i is 1
        # Refer to qiskit_textbook.simon_oracle for more details.
        for qubit in range(n):
            if s1[qubit] == "1":
                oracle1.cx(i, qubit + n)

    oracle1 = oracle1.to_gate()
    multi_simon_oracle.append(oracle1.control(1), [ac] + list(range(2 * n)))
    multi_simon_oracle.x(2 * n)

    s2 = s2[::-1]

    oracle2 = QuantumCircuit(qr)

    # Copy the first register to the second register
    for qubit in range(n):
        oracle2.cx(qubit, qubit + n)

    # If s is not all-zero, find the first non-zero bit j in the secret string
    if s1 != "0" * n:
        i = s2.find("1")
        # Do |x> -> |s.x> on condition that q_i is 1
        # Refer to qiskit_textbook.simon_oracle for more details.
        for qubit in range(n):
            if s2[qubit] == "1":
                oracle2.cx(i, qubit + n)

    oracle2 = oracle2.to_gate()
    multi_simon_oracle.append(oracle2.control(1), [ac] + list(range(2 * n)))

    # Apply a random permutation to the second register to alter the function
    for qubit in range(n, 2 * n):
        if key_string[qubit - n] == "1":
            multi_simon_oracle.x(qubit)

    oracle_gate = multi_simon_oracle.to_gate()
    oracle_gate.name = "Oracle"

    return oracle_gate


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    qasm_path = os.path.join(directory, filename)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)

    with open(qasm_path, "r") as file:
        qasm_content = file.read()

    # Replace all occurrences of '-' with '_'
    qasm_content = re.sub(r'-', '_', qasm_content)

    # Save the modified content back to the file
    with open(qasm_path, "w") as file:
        file.write(qasm_content)


def generate_random_strings(n, test_num=5):
    """Generates secret strings of length n as test cases."""
    num_strings = min(2 ** (n - 2), test_num)
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def generate_circuit_qasm(test_num=5):
    """Generates QASM files for the Simon algorithm with different oracles."""
    for n in range(2, 31):
        directory = f"full_circuit/multi_simon_n{n}"
        secret_strings1 = generate_random_strings(n, test_num)
        secret_strings2 = generate_random_strings(n, test_num)
        key_strings = generate_random_strings(n, test_num)
        for secret_string1, secret_string2 in zip(secret_strings1, secret_strings2):
            for key_string in key_strings:
                oracle = multi_simon_oracle(n, secret_string1, secret_string2, key_string)
                circuit = multi_simon_algorithm(n, oracle)
                filename = f"multi_simon_n{n}_s(1){secret_string1}_s(2){secret_string2}_k{key_string}.qasm"
                save_qasm(circuit, directory, filename)


def extract_gate_definition():
    """Extracts the oracle definition from the original QASM file and save the algorithm circuit alone."""
    for n in range(2, 31):
        input_dir = f"full_circuit/multi_simon_n{n}"
        output_qasm_file = f"multi_simon_n{n}.qasm"
        oracle_file = "oracle.inc"

        qasm_files = glob.glob(os.path.join(input_dir, "*.qasm"))

        circuit_save = False
        t = 0
        for input_file in qasm_files:
            t += 1
            file_parts = input_file.split("_")
            secret_string1 = file_parts[-3][4:]
            secret_string2 = file_parts[-2][4:]
            key_string = file_parts[-1].split(".")[0][1:]

            oracle_dir = f"test_oracle/n{n}/trial{t}"

            if not os.path.exists(oracle_dir):
                os.makedirs(oracle_dir)

            txt_file_name = "oracle_info.txt"
            with open(f"{oracle_dir}/{txt_file_name}", "w") as file:
                file.write(f"Secret string 1: {secret_string1}\n")
                file.write(f"Secret string 2: {secret_string2}\n")
                file.write(f"Key string: {key_string}\n")

            with open(input_file, "r") as file:
                content = file.read()

            # 查找 gate Oracle 的定义位置
            oracle_pos = content.find("gate Oracle")
            if oracle_pos == -1:
                raise ValueError("Oracle gate not found in the file")

            # 查找 qubit 和 bit 的定义位置
            register_pos = content.find("bit")
            if register_pos == -1:
                raise ValueError("Register not found in the file")

            # 提取从第一个 gate 定义开始的内容
            first_gate_pos = content.find("gate ")
            pre_gate_def = content[first_gate_pos:register_pos]

            # 保存所有 gate 定义（包括 Oracle）到 oracle.inc 文件中
            with open(f"{oracle_dir}/{oracle_file}", "w") as file:
                file.write(pre_gate_def)

            # 修改 QASM 文件，将 Oracle 部分替换为 include 语句
            if not circuit_save:
                rest_qasm = (
                    content[:first_gate_pos]  # 保留到第一个 gate 之前的内容
                    + f'include "{oracle_file}";\n'
                    + content[register_pos:]  # 从 bit 定义开始的内容
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


def check_dataset():
    """Check the generated dataset."""
    text = []
    shots = 10
    aer_sim = AerSimulator()
    for n in range(4, 31):
        print_and_save(f"Verifying Multi Simon's Algorithm for n={n}", text)
        filename = f"multi_simon_n{n}.qasm"
        with open(filename, "r") as file:
            qasm_code = file.read()

        # Verify the syntax of the QASM code with the first test case oracle
        t = 1
        with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
            oracle_def = file.read()
        full_qasm = plug_in_oracle(qasm_code, oracle_def)
        circuit = verify_qasm_syntax(full_qasm)
        if circuit is None:
            continue

        # Verify the algorithm with different test cases
        total_success = 0
        total_fail = 0
        t_range = min(10, 4 ** (n - 2))
        for t in range(1, 1 + t_range):
            # print(t)
            # print('*'*10)
            print_and_save(f"   Running Test Case {t}", text)
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_code, oracle_def)
            print(f't:{t}')
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                content = file.read()
            match1 = re.search(r"Secret string 1: ([012]+)", content)
            match2 = re.search(r"Secret string 2: ([012]+)", content)

            if match1 and match2:
                secret_string1 = match1.group(1)
                secret_string2 = match2.group(1)

            else:
                raise ValueError("Secret string not found in the file.")

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction1, prediction2 = run_and_analyze(circuit.copy(), aer_sim)

                if not isinstance(prediction1, str):
                    raise TypeError("Predicted secret string should be a string.")
                if not isinstance(prediction2, str):
                    raise TypeError("Predicted secret string should be a string.")
                if prediction1 == secret_string1 or prediction2 == secret_string2:
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
    with open("multi_simon_verification.txt", "w") as file:
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

