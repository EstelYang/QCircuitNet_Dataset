from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import random
import argparse
import os
from bv_generation import bernstein_vazirani_oracle


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_secret_strings(n):
    """Generates 2^(n-2) secret strings of length n."""

    num_strings = 2 ** (n - 2)
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def generate_circuit_qasm():
    """Generates QASM files for the Bernstein-Vazirani oracle with random secret strings."""
    for n in range(2, 15):
        directory = f"bernstein_vazirani_n{n}"
        secret_strings = generate_secret_strings(n)
        for secret_string in secret_strings:
            oracle = bernstein_vazirani_oracle(n, secret_string)
            circuit = QuantumCircuit(n + 1)
            circuit.append(oracle, range(n + 1))
            filename = f"bv_n{n}_{secret_string}.qasm"
            save_qasm(circuit, directory, filename)


import os


def generate_dataset_json():
    """Generates a JSON dataset for the Bernstein-Vazirani oracle.
    Format: {"prompt": description, "completion": circuit}

    """
    with open("bernstein_vazirani/bv_description.txt", "r") as f:
        template = f.read()
    DATA = []
    for n in range(2, 15):
        directory = f"bernstein_vazirani/bernstein_vazirani_n{n}"
        data = []
        for filename in os.listdir(directory):
            with open(os.path.join(directory, filename), "r") as f:
                completion = f.read()
            secret_string = filename.split("_")[2].split(".")[0]
            prompt = (
                template.replace("$\{qubit number\}", f"{n}$")
                .replace("$\{secret string\}", f"{secret_string}$")
                .replace("\{QASM / Qiskit\}", "QASM")
            )
            dic = {"prompt": prompt, "completion": completion}
            data.append(dic)
        DATA.append(data)
    return DATA


def check_dataset():
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
