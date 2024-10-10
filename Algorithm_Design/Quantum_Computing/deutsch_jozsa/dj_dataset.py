from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import random
import os
import glob
import argparse
from dj_generation import deutsch_jozsa_algorithm
from dj_utils import *
from dj_post_processing import run_and_analyze


def deutsch_jozsa_oracle(n, is_constant, key_string):
    """Generates the oracle for the Deutsch-Jozsa algorithm."""
    oracle = QuantumCircuit(n + 1)

    if is_constant:
        if key_string[-1] == "1":
            oracle.x(n)
        else:
            oracle.id(n)
    else:
        for qubit in range(n):
            if key_string[qubit] == "1":
                oracle.x(qubit)

        for qubit in range(n):
            oracle.cx(qubit, n)

        for qubit in range(n):
            if key_string[qubit] == "1":
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


def generate_random_strings(n, test_num=20):
    """Generates secret strings of length n as test cases."""
    num_strings = min(2 ** (n - 2), test_num)
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def generate_circuit_qasm(test_num=20):
    """Generates QASM files for the Deutsch-Jozsa algorithm with different oracles."""
    for n in range(2, 31):
        directory = f"full_circuit/deutsch_jozsa_n{n}"
        for i in range(2):
            key_string = "0" if i == 0 else "1"
            oracle_const = deutsch_jozsa_oracle(n, True, key_string)
            circuit_const = deutsch_jozsa_algorithm(n, oracle_const)
            filename = f"dj_n{n}_constant_{key_string}.qasm"
            save_qasm(circuit_const, directory, filename)

        key_strings = generate_random_strings(n)
        for key_string in key_strings:
            oralce_balanced = deutsch_jozsa_oracle(n, False, key_string)
            circuit_balanced = deutsch_jozsa_algorithm(n, oralce_balanced)
            filename = f"dj_n{n}_balanced_{key_string}.qasm"
            save_qasm(circuit_balanced, directory, filename)


def extract_gate_definition():
    """Extracts the oracle definition from the original QASM file and save the algorithm circuit alone."""
    for n in range(2, 31):
        input_dir = f"full_circuit/deutsch_jozsa_n{n}"
        output_qasm_file = f"deutsch_jozsa_n{n}.qasm"
        oracle_file = "oracle.inc"

        qasm_files = glob.glob(os.path.join(input_dir, "*.qasm"))

        circuit_save = False
        const = 0
        bal = 2
        for input_file in qasm_files:
            balance_string = input_file.split("_")[-2]
            key_string = input_file.split("_")[-1].split(".")[0]

            if balance_string == "constant":
                const += 1
                oracle_dir = f"test_oracle/n{n}/trial{const}"
            else:
                bal += 1
                oracle_dir = f"test_oracle/n{n}/trial{bal}"

            if not os.path.exists(oracle_dir):
                os.makedirs(oracle_dir)

            txt_file_name = "oracle_info.txt"
            with open(f"{oracle_dir}/{txt_file_name}", "w") as file:
                file.write(f"Balanced: {balance_string}\n")
                file.write(f"Secret string: {key_string}\n")

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
        print_and_save(f"Verifying Deutsch-Jozsa Algorithm for n={n}", text)
        filename = f"deutsch_jozsa_n{n}.qasm"
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
        t_range = min(10, 2 ** (n - 2)) + 2
        for t in range(1, 1 + t_range):
            print_and_save(f"   Running Test Case {t}", text)
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_code, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                first_line = file.readline().strip()
                balance_type = first_line.split(": ")[1]

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction = run_and_analyze(circuit.copy(), aer_sim)
                if not isinstance(prediction, str):
                    raise TypeError("Predicted should be a string.")
                if prediction == balance_type:
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
    with open("dj_verification.txt", "w") as file:
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
