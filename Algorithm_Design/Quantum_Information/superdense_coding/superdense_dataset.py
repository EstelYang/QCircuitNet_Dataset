from qiskit.qasm3 import dump
import argparse
from superdense_generation import superdense_coding_circuit
from superdense_post_processing import run_and_analyze
from superdense_utils import *


def save_qasm(circuit, filename):
    """Saves a circuit to a QASM 3.0 file."""

    with open(f"{filename}", "w") as file:
        dump(circuit, file)


def generate_circuit_qasm():
    """Generates QASM files for the Superdense Coding algorithm."""
    # Iterate over all possible messages
    messages = ["00", "01", "10", "11"]
    for message in messages:
        circuit = superdense_coding_circuit(message)
        filename = f"superdense_coding_mes{message}.qasm"
        save_qasm(circuit, filename)


def generate_dataset_json():
    """Generates a JSON dataset for the Algorithm.
    Format: {"input": description, "output": circuit}

    """
    # Replace the placeholder in the description with the qubit number
    # Create the json file with different entries.
    pass


def check_dataset():
    """Check the Superdense Coding dataset."""
    shots = 100
    text = []
    aer_sim = AerSimulator()

    for message in ["00", "01", "10", "11"]:
        print_and_save(f"Testing message: {message}", text)
        filename = f"superdense_coding_mes{message}.qasm"
        with open(filename, "r") as qasmfile:
            qasm_code = qasmfile.read()

        # Check Syntax of QASM
        circuit = verify_qasm_syntax(qasm_code)
        if circuit is None:
            continue

        cnt_success = 0
        cnt_fail = 0
        for shot in range(shots):
            prediction = run_and_analyze(circuit.copy(), aer_sim)
            if not isinstance(prediction, str):
                raise TypeError("Predicted message should be a string")
            if prediction == message:
                cnt_success += 1
            else:
                cnt_fail += 1
        print_and_save(
            f"    Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}", text
        )
    with open("superdense_verification.txt", "w") as file:
        text = [line + "\n" for line in text]
        file.write("".join(text))


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
