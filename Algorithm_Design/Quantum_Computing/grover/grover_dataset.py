import os
import random
import argparse
import glob
from qiskit import QuantumCircuit
from qiskit.circuit.library import MCMT, ZGate
from qiskit.qasm3 import dump
from grover_generation import grover_algorithm
from grover_utils import *
from grover_post_processing import *


def create_oracle(n, marked_state):
    """Create an oracle for marked state m.
    This is modified from qiskit learning."""

    oracle = QuantumCircuit(n)
    # Flip target bit-string to match Qiskit bit-ordering
    rev_target = marked_state[::-1]
    # Find the indices of all the '0' elements in bit-string
    zero_inds = [ind for ind, char in enumerate(rev_target) if char == "0"]

    # Add a multi-controlled Z-gate with pre- and post-applied X-gates (open-controls)
    # where the target bit-string has a '0' entry
    if zero_inds:
        oracle.x(zero_inds)
    oracle.compose(MCMT(ZGate(), n - 1, 1), inplace=True)
    if zero_inds:
        oracle.x(zero_inds)

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
    """Generates QASM files for Grover's algorithm with different oracles."""
    for n in range(2, 15):
        directory = f"full_circuit/grover_n{n}"
        marked_items = generate_random_strings(n, test_num)
        for marked_item in marked_items:
            oracle = create_oracle(n, marked_item)
            circuit = grover_algorithm(n, oracle)
            filename = f"grover_n{n}_m{marked_item}.qasm"
            save_qasm(circuit, directory, filename)


def extract_gate_definition():
    """Extracts the oracle definition from the original QASM file and save the algorithm circuit alone."""
    for n in range(2, 15):
        input_dir = f"full_circuit/grover_n{n}"
        output_qasm_file = f"grover_n{n}.qasm"
        oracle_file = "oracle.inc"

        qasm_files = glob.glob(os.path.join(input_dir, "*.qasm"))

        circuit_save = False
        t = 0
        for input_file in qasm_files:
            t += 1
            marked_item = input_file.split("_")[-1].split(".")[0][1:]
            oracle_dir = f"test_oracle/n{n}/trial{t}"

            if not os.path.exists(oracle_dir):
                os.makedirs(oracle_dir)

            txt_file_name = "oracle_info.txt"
            with open(f"{oracle_dir}/{txt_file_name}", "w") as file:
                file.write(f"Marked item: {marked_item}")

            with open(input_file, "r") as file:
                content = file.read()

            include_pos = content.find('include "stdgates.inc";')
            if include_pos == -1:
                raise ValueError("Include statement not found in the file")

            diffuser_pos = content.find("gate Diffuser")
            if diffuser_pos == -1:
                raise ValueError("Diffuser gate not found in the file")
            oracle_def = content[
                include_pos + len('include "stdgates.inc";') : diffuser_pos
            ].strip()
            oracle_def = oracle_def.replace("mcx_gray", "mcx")
            with open(f"{oracle_dir}/{oracle_file}", "w") as file:
                file.write(oracle_def)

            if not circuit_save:
                rest_qasm = (
                    content[: include_pos + len('include "stdgates.inc";')]
                    + f'\ninclude "{oracle_file}";\n'
                    + content[diffuser_pos:]
                )
                rest_qasm = rest_qasm.replace("mcx_gray", "mcx")
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

    for n in range(2, 9):
        print_and_save(f"Verifying Grover's Algorithm for n={n}", text)
        filename = f"grover_n{n}.qasm"
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
        t_range = min(10, 2 ** (n - 2))
        for t in range(1, 1 + t_range):
            print_and_save(f"   Running Test Case {t}", text)
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_code, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                first_line = file.readline().strip()
                marked_item = first_line.split(": ")[1]

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction = run_and_analyze(circuit.copy(), aer_sim)
                if not isinstance(prediction, str):
                    raise TypeError("Predicted marked item should be a string.")
                if prediction == marked_item:
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
    with open("grover_verification.txt", "w") as file:
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
