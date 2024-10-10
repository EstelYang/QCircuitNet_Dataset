import os
import numpy as np
import glob
import argparse
from qiskit.qasm3 import dump
from qiskit.circuit.random import random_circuit
from qiskit.quantum_info import Statevector
from teleportation_generation import quantum_teleportation_circuit
from teleportation_post_processing import run_and_analyze
from teleportation_utils import *


def create_random_state():
    """Create a random state of n qubits for teleportation."""
    psi_circuit = random_circuit(1, 5)
    psi_init_gate = psi_circuit.to_gate()
    psi_init_gate.name = "Psi"
    psi = Statevector(psi_circuit)
    return psi_init_gate, psi


def generate_circuit_qasm():
    """Generates QASM files for the quantum teleportation algorithm with different settings."""
    directory = f"full_circuit"
    if not os.path.exists(directory):
        os.makedirs(directory)
    for t in range(1, 101):
        psi_init_gate, psi = create_random_state()
        txt_file_path = f"teleportation_trial{t}.txt"
        with open(f"{directory}/{txt_file_path}", "w") as file:
            file.write(f"psi: {psi}\n")
        circuit = quantum_teleportation_circuit(psi_init_gate)
        qasm_file_path = f"teleportation_trial{t}.qasm"
        with open(f"{directory}/{qasm_file_path}", "w") as file:
            dump(circuit, file)


def extract_gate_definition():
    """Extracts the oracle definition from the original QASM file and save the algorithm circuit alone."""
    # raise NotImplementedError("This function is not implemented yet.")
    circuit_save = False
    for t in range(1, 101):
        input_dir = f"full_circuit"
        output_qasm_file = f"teleportation.qasm"
        oracle_file = "oracle.inc"

        qasm_files = glob.glob(f"{input_dir}/*.qasm")

        for input_file in qasm_files:
            trial = input_file.split("_")[-1].split(".")[0]
            oracle_dir = f"test_oracle/{trial}"
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

            bell_pos = content.find("gate Bell_Pair")
            if bell_pos == -1:
                raise ValueError("gate Bell_Pair not found in the file")

            oracle_def = content[
                include_pos + len('include "stdgates.inc";') : bell_pos
            ].strip()
            with open(f"{oracle_dir}/{oracle_file}", "w") as file:
                file.write(oracle_def)

            if not circuit_save:
                rest_qasm = (
                    content[: include_pos + len('include "stdgates.inc";')]
                    + f'\ninclude "{oracle_file}";\n'
                    + content[bell_pos:]
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
    """Check the Quantum Teleportation dataset."""
    shots = 100
    tol = 15e-3
    text = []
    aer_sim = AerSimulator()

    filename = f"teleportation.qasm"
    with open(filename, "r") as qasmfile:
        qasm_code = qasmfile.read()

    # Verify the syntax of the QASM code with the first test case oracle
    t = 1
    with open(f"test_oracle/trial{t}/oracle.inc", "r") as file:
        oracle_def = file.read()
    full_qasm = plug_in_oracle(qasm_code, oracle_def)
    circuit = verify_qasm_syntax(full_qasm)
    if circuit is None:
        return

    # Verify the Teleportation circuit
    total_success = 0
    total_fail = 0
    t_range = 10
    for t in range(1, 1 + t_range):
        print_and_save(f"    Running Test Case {t}", text)
        with open(f"test_oracle/trial{t}/oracle.inc", "r") as file:
            oracle_def = file.read()
        full_qasm = plug_in_oracle(qasm_code, oracle_def)
        circuit = loads(full_qasm)
        with open(f"test_oracle/trial{t}/state_info.txt", "r") as f:
            content = f.read()
        vector_name = "psi"
        match = re.search(
            rf"{vector_name}: Statevector\(\[([^\]]+)\],\s*dims=\(([^\)]+)\)\)", content
        )
        if match:
            vector_str = match.group(1)
            dims_str = match.group(2)
            vector = eval(f"[{vector_str}]")
            dims = eval(f"({dims_str})")
            target_state = Statevector(vector, dims=dims)
        else:
            raise ValueError("Statevector information not found in the file.")

        cnt_success = 0
        cnt_fail = 0
        for shot in range(shots):
            qubit_indices = run_and_analyze(circuit.copy(), aer_sim)
            flag = verify_result_matrix(circuit, target_state, qubit_indices, tol)
            if flag:
                cnt_success += 1
            else:
                cnt_fail += 1
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
    with open("teleportation_verification.txt", "w") as file:
        text = [line + "\n" for line in text]
        file.write("".join(text))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-f",
        "--func",
        choices=["qasm", "json", "gate"],
        help="The function to call: generate qasm circuit, json dataset or extract gate definition.",
    )
    args = parser.parse_args()
    if args.func == "qasm":
        generate_circuit_qasm()
    elif args.func == "json":
        generate_dataset_json()
    elif args.func == "gate":
        extract_gate_definition()


if __name__ == "__main__":
    main()
