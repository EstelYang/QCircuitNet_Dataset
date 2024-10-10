from qiskit.qasm3 import dump
from qiskit import QuantumCircuit
import random
import argparse
import glob
import os
from qft_generation import generate_qft_circuit
from qft_post_processing import run_and_analyze
from qft_utils import *


def generate_random_strings(n, test_num=20):
    """Generates secret strings of length n as test cases."""
    num_strings = min(2 ** (n - 2), test_num)
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def create_psi_state(n, x_string):
    """Creates a psi state for the QFT algorithm."""
    x_string = x_string[::-1]
    oracle = QuantumCircuit(n)
    for qubit in range(n):
        if x_string[qubit] == "1":
            oracle.x(qubit)
    psi_gate = oracle.to_gate()
    psi_gate.name = "Psi"
    return psi_gate


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_circuit_qasm(test_num=20):
    """Generates QASM files for the QFT algorithm."""
    for n in range(2, 31):
        directory = f"full_circuit/qft_n{n}"
        secret_strings = generate_random_strings(n, test_num)
        for secret_string in secret_strings:
            psi_gate = create_psi_state(n, secret_string)
            qft_circuit = generate_qft_circuit(n, psi_gate)
            filename = f"qft_n{n}_s{secret_string}.qasm"
            save_qasm(qft_circuit, directory, filename)


def extract_gate_definition():
    """Extracts the oracle definition from the original QASM file and save the algorithm circuit alone."""
    for n in range(2, 31):
        input_dir = f"full_circuit/qft_n{n}"
        output_qasm_file = f"qft_n{n}.qasm"
        oracle_file = "oracle.inc"

        qasm_files = glob.glob(f"{input_dir}/*.qasm")

        circuit_save = False
        t = 0
        for input_file in qasm_files:
            t += 1
            psi = input_file.split("_")[-1].split(".")[0][1:]
            oracle_dir = f"test_oracle/n{n}/trial{t}"
            if not os.path.exists(oracle_dir):
                os.makedirs(oracle_dir)

            txt_file_name = "oracle_info.txt"
            with open(f"{oracle_dir}/{txt_file_name}", "w") as file:
                file.write(f"Input x: {psi}")

            with open(input_file, "r") as file:
                content = file.read()

            oracle_pos = content.find("gate Psi")
            if oracle_pos == -1:
                raise ValueError("Oracle definition not found in the file")

            register_pos = content.find("qubit")
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
    """Check the QFT dataset."""
    shots = 10
    eps = 1e-3
    text = []
    aer_sim = AerSimulator()

    for n in range(2, 11):
        print_and_save(f"Verifying QFT for n={n}", text)
        filename = f"qft_n{n}.qasm"

        with open(filename, "r") as qasmfile:
            qasm_code = qasmfile.read()

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
        t_range = min(10, 2 ** (n - 2))
        for t in range(1, 1 + t_range):
            print_and_save(f"   Running Test Case {t}", text)
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_code, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                content = file.read()
            match = re.search(r"Input x: ([01]+)", content)
            if match:
                x_string = match.group(1)
            else:
                raise ValueError("Secret string not found in the file.")

            x_num = int(x_string, 2)
            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                flag = verify_result_vector(circuit, n, x_num, eps)
                # qubit_indices = run_and_analyze(circuit.copy(), aer_sim)
                # flag = verify_result_matrix(circuit, n, x_num, qubit_indices, eps)
                if flag:
                    cnt_success += 1
                else:
                    cnt_fail += 1
                # print_and_save(
                #     f"        Prediction: {prediction}; Secret String: {secret_string}",
                #     text,
                # )
            print_and_save(
                f"        Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}",
                text,
            )
            total_success += cnt_success
            total_fail += cnt_fail
        print_and_save(
            f"   Total Success: {total_success}; Total Fail: {total_fail}", text
        )
    with open("qft_verification.txt", "w") as file:
        for line in text:
            file.write(line + "\n")


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
