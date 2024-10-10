from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import argparse
import os
from sudoku_generation import sudoku_oracle


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)
    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_circuit_qasm():
    """Generates QASM files for the Grover's Sudoku algorithm."""
    oracle, qubit_num = sudoku_oracle()
    circuit = QuantumCircuit(qubit_num)
    circuit.append(oracle, range(qubit_num))
    directory = "full_circuit"
    filename = f"sudoku.qasm"
    save_qasm(circuit, directory, filename)


def extract_gate_definition():
    """Extracts the gate definition from the original QASM file and save the simplified oracle in QASM."""
    pass


def generate_dataset_json():
    """Generates a JSON dataset for the Diffusion Operator.
    Format: {"input": description, "output": circuit}

    """
    # Replace the placeholder in the description with the qubit number
    # Create the json file with different entries.
    pass


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
