from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import random
import argparse
import os
import glob
from simon_generation import simon_algorithm
from simon_post_processing import *
from simon_utils import *


def simon_oracle(n, secret_string, key_string):
    """Creates a Simon oracle for the given secret string s."""

    oracle = QuantumCircuit(2 * n)
    secret_string = secret_string[::-1]
    key_string = key_string[::-1]

    for qubit in range(n):
        oracle.cx(qubit, qubit + n)

    if secret_string != "0" * n:
        i = secret_string.find("1")
        for qubit in range(n):
            if secret_string[qubit] == "1":
                oracle.cx(i, qubit + n)

    for qubit in range(n, 2 * n):
        if key_string[qubit - n] == "1":
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
    num_strings = min(2 ** (n - 2), test_num)
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def generate_circuit_qasm(test_num=5):
    """Generates QASM files for the Simon algorithm with different oracles."""
    for n in range(2, 31):
        directory = f"full_circuit/simon_n{n}"
        secret_strings = generate_random_strings(n, test_num)
        key_strings = generate_random_strings(n, test_num)
        for secret_string in secret_strings:
            for key_string in key_strings:
                oracle = simon_oracle(n, secret_string, key_string)
                circuit = simon_algorithm(n, oracle)
                filename = f"simon_n{n}_s{secret_string}_k{key_string}.qasm"
                save_qasm(circuit, directory, filename)


def extract_gate_definition():
    """Extracts the oracle definition from the original QASM file and save the algorithm circuit alone."""
    for n in range(2, 31):
        input_dir = f"full_circuit/simon_n{n}"
        output_qasm_file = f"simon_n{n}.qasm"
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

            oracle_pos = content.find("gate Oracle")
            if oracle_pos == -1:
                raise ValueError("Oracle gate not found in the file")

            register_pos = content.find("bit")
            if register_pos == -1:
                raise ValueError("Register not found in the file")

            oracle_def = content[oracle_pos:register_pos]
            with open(f"{oracle_dir}/{oracle_file}", "w") as file:
                file.write(oracle_def)

            if not circuit_save:
                rest_qasm = (
                    content[:oracle_pos]
                    + f'include "{oracle_file}";\n'
                    + content[register_pos:]
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
    for n in range(2, 11):
        print_and_save(f"Verifying Simon's Algorithm for n={n}", text)
        filename = f"simon_n{n}.qasm"
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
            print_and_save(f"   Running Test Case {t}", text)
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_code, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                content = file.read()
            match = re.search(r"Secret string: ([01]+)", content)
            if match:
                secret_string = match.group(1)
            else:
                raise ValueError("Secret string not found in the file.")

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction = run_and_analyze(circuit.copy(), aer_sim)
                if not isinstance(prediction, str):
                    raise TypeError("Predicted secret string should be a string.")
                if prediction == secret_string:
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
    with open("simon_verification.txt", "w") as file:
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
