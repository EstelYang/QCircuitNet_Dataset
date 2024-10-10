from qiskit.qasm3 import dump
import argparse
from ghz_generation import generate_ghz_state_circuit
from ghz_utils import *
from ghz_post_processing import run_and_analyze


def save_qasm(circuit, filename):
    """Saves a circuit to a QASM 3.0 file."""

    with open(f"{filename}", "w") as file:
        dump(circuit, file)


def generate_circuit_qasm():
    """Generates QASM files for the GHZ state algorithm."""
    for n in range(2, 134):
        circuit = generate_ghz_state_circuit(n)
        filename = f"ghz_state_n{n}.qasm"
        save_qasm(circuit, filename)


def generate_dataset_json():
    """Generates a JSON dataset for the Algorithm.
    Format: {"input": description, "output": circuit}

    """
    # Replace the placeholder in the description with the qubit number
    # Create the json file with different entries.
    pass


def check_dataset():
    """Check the dataset for the GHZ state."""
    shots = 100
    eps = 1e-3
    text = []

    for n in range(2, 11):
        filename = f"ghz_state_n{n}.qasm"
        print_and_save(f"Verifying GHZ State for n={n}", text)

        # Read the QASM file and create a QuantumCircuit
        with open(filename, "r") as file:
            qasm_code = file.read()
        circuit = verify_qasm_syntax(qasm_code)
        if circuit is None:
            continue

        # Verify the ghz state
        cnt_success = 0
        cnt_fail = 0
        for shot in range(shots):
            flag = verify_result_vector(circuit, n, eps)
            if flag:
                cnt_success += 1
            else:
                cnt_fail += 1
        print_and_save(
            f"    Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}",
            text,
        )

    with open("ghz_state_verification.txt", "w") as file:
        text = [line + "\n" for line in text]
        file.write("".join(text))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-f",
        "--func",
        choices=["qasm", "json", "verify"],
        help="The function to call: generate qasm circuit, json dataset or verify dataset. These commands work in given sequences.",
    )
    args = parser.parse_args()
    if args.func == "qasm":
        generate_circuit_qasm()
    elif args.func == "json":
        generate_dataset_json()
    elif args.func == "verify":
        check_dataset()


if __name__ == "__main__":
    main()
