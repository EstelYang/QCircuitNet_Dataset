from qiskit.quantum_info import Statevector
from qiskit.qasm3 import dump
import numpy as np
import argparse
import os
from universal_generation import random_universal_circuit


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def save_txt(output_state, directory, filename):
    """Saves the output state to a text file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    filepath = os.path.join(directory, filename)
    np.savetxt(filepath, output_state, fmt="%1.4f")


def generate_circuit_qasm(depth=20):
    """Generates QASM files for random circuits."""
    for n in range(2, 13):
        for l in range(1, depth * n + 1):
            directory = f"universal_n{n}/l{l}"
            for i in range(4 * n):
                circuit = random_universal_circuit(n, l)
                filename = f"universal_n{n}_l{l}_{i}.qasm"
                save_qasm(circuit, directory, filename)
                txt_filename = f"universal_n{n}_l{l}_{i}.txt"
                output_state = Statevector(circuit).data
                save_txt(output_state, directory, txt_filename)


def generate_dataset_json():
    pass


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
