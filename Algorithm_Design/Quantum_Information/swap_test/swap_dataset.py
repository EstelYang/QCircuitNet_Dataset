import os
import numpy as np
import glob
import argparse
from qiskit.qasm3 import dump
from qiskit.circuit.random import random_circuit
from qiskit.quantum_info import Statevector
from swap_generation import swap_test_circuit
from swap_post_processing import run_and_analyze
from swap_utils import *


def create_random_state(n):
    """Create a random gate of n qubits."""
    psi_circuit = random_circuit(n, min(n, 10), max_operands=2)
    phi_circuit = random_circuit(n, min(n, 10), max_operands=2)
    psi_init_gate = psi_circuit.to_gate()
    phi_init_gate = phi_circuit.to_gate()
    psi_init_gate.name = "Psi"
    phi_init_gate.name = "Phi"
    psi = Statevector(psi_circuit)
    phi = Statevector(phi_circuit)
    return psi_init_gate, phi_init_gate, psi, phi


def compute_overlap(psi, phi):
    """Compute the overlap between two states."""
    return np.linalg.norm(psi.inner(phi)) ** 2


def generate_circuit_qasm():
    """Generates QASM files for the swap test algorithm with different settings."""
    for n in range(1, 21):
        directory = f"full_circuit/swap_test_n{n}"
        if not os.path.exists(directory):
            os.makedirs(directory)
        for t in range(1, 21):
            psi_init_gate, phi_init_gate, psi, phi = create_random_state(n)
            txt_file_path = f"swap_test_n{n}_trial{t}.txt"
            overlap = compute_overlap(psi, phi)
            with open(f"{directory}/{txt_file_path}", "w") as file:
                file.write(f"psi: {psi}\n")
                file.write(f"phi: {phi}\n")
                file.write(f"overlap: {overlap}\n")
            circuit = swap_test_circuit(n, psi_init_gate, phi_init_gate)
            qasm_file_path = f"swap_test_n{n}_trial{t}.qasm"
            with open(f"{directory}/{qasm_file_path}", "w") as file:
                dump(circuit, file)


def extract_gate_definition():
    """Extracts the oracle definition from the original QASM file and save the algorithm circuit alone."""
    # raise NotImplementedError("This function is not implemented yet.")
    for n in range(1, 21):
        input_dir = f"full_circuit/swap_test_n{n}"
        output_qasm_file = f"swap_test_n{n}.qasm"
        oracle_file = "oracle.inc"

        qasm_files = glob.glob(f"{input_dir}/*.qasm")
        circuit_save = False
        for input_file in qasm_files:
            trial = input_file.split("_")[-1].split(".")[0]
            oracle_dir = f"test_oracle/n{n}/{trial}"
            if not os.path.exists(oracle_dir):
                os.makedirs(oracle_dir)

            # Copy the state information to the oracle directory
            txt_file_name = input_file.replace(".qasm", ".txt")
            output_txt_file_name = f"{oracle_dir}/state_info.txt"
            with open(txt_file_name, "r") as file:
                text = file.read()
            with open(output_txt_file_name, "w") as file:
                file.write(text)

            # Extract the oracle definition
            with open(input_file, "r") as file:
                content = file.read()

            include_pos = content.find('include "stdgates.inc";')
            if include_pos == -1:
                raise ValueError("Include statement not found in the file")

            register_pos = content.find("bit")
            if register_pos == -1:
                raise ValueError("Register not found in the file")

            oracle_def = content[
                include_pos + len('include "stdgates.inc";') : register_pos
            ].strip()
            with open(f"{oracle_dir}/{oracle_file}", "w") as file:
                file.write(oracle_def)

            if not circuit_save:
                rest_qasm = (
                    content[: include_pos + len('include "stdgates.inc";')]
                    + f'\ninclude "{oracle_file}";\n'
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
    """Check the Swap Test dataset."""
    shots = 10
    tol = 15e-3
    text = []
    aer_sim = AerSimulator()

    for n in range(1, 11):
        print_and_save(f"Verifying Swap Test for n={n}", text)
        filename = f"swap_test_n{n}.qasm"
        with open(filename, "r") as qasmfile:
            qasm_code = qasmfile.read()

        # Verify the syntax of the QASM code with the first test case oracle
        t = 1
        with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
            oracle_def = file.read()
        full_qasm = plug_in_oracle(qasm_code, oracle_def)
        circuit = verify_qasm_syntax(full_qasm)
        if circuit is None:
            continue

        # Verify the Swap Test
        total_success = 0
        total_fail = 0
        t_range = 10
        for t in range(1, 1 + t_range):
            print_and_save(f"    Running Test Case {t}", text)
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_code, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/state_info.txt", "r") as f:
                content = f.read()
            match = re.search(r"overlap: ([0-9.]+(e[+-]?[0-9]+)?)", content)
            if match:
                overlap = float(match.group(1))
            else:
                raise ValueError("Overlap value not found in the file.")

            cnt_success = 0
            cnt_fail = 0

            for shot in range(shots):
                prediction = run_and_analyze(circuit.copy(), aer_sim)
                if not isinstance(prediction, float):
                    raise TypeError("Predicted overlap should be a float number.")
                err = abs(prediction - overlap)
                if err < tol:
                    judgment = "Success"
                    cnt_success += 1
                else:
                    judgment = "Fail"
                    cnt_fail += 1
                print_and_save(
                    f"        {judgment}. True Overlap: {overlap}; Prediction: {prediction}; Error: {err}",
                    text,
                )

            print_and_save(
                f"    Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}",
                text,
            )
            total_success += cnt_success
            total_fail += cnt_fail

        print_and_save(
            f"    Total Success: {total_success}/{shots * t_range}, Total Fail: {total_fail}/{shots * t_range}\n",
            text,
        )
    with open("swap_test_verification.txt", "w") as file:
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
