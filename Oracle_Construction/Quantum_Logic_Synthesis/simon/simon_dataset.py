from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import os
import random
import argparse
from simon_generation import simon_oracle


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_random_strings(n, num_strings):
    """Generates 2^(n-2) secret strings of length n."""
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def generate_circuit_qasm():
    """Generate QASM files for the Simon oracle with different settings."""
    for n in range(2, 15):
        directory = f"simon_n{n}"
        secret_strings = generate_random_strings(n, 2 ** (n - 2))
        key_strings = generate_random_strings(n, min(2 ** (n - 2), 20))
        for secret_string in secret_strings:
            subdirectory = f"{directory}/s{secret_string}"
            for key_string in key_strings:
                oracle = simon_oracle(n, secret_string, key_string)
                circuit = QuantumCircuit(2 * n)
                circuit.append(oracle, range(2 * n))
                filename = f"simon_n{n}_s{secret_string}_k{key_string}.qasm"
                save_qasm(circuit, subdirectory, filename)


import os
def generate_dataset_json():
    """Generates a JSON dataset for the simon oracle.
    Format: {"prompt": description, "completion": circuit}

    """
    with open("simon/simon_description.txt", "r") as f:
        template = f.read()
    DATA = []
    for n in range(2, 15):
        directory = f"simon/simon_n{n}"
        data = []
        for secret in os.listdir(directory):
            current_dir = os.path.join(directory, secret)
            secret_string = secret[1:]
            for key in os.listdir(current_dir):
                key_string = key.split('_')[3].split('.')[0][1:]
                with open(os.path.join(current_dir, key), "r") as f:
                    completion = f.read()
            prompt = template.replace("$\{qubit number\}", f"{n}$").replace("$\{key string\}", f"{key_string}$").replace("$\{secret string\}", f"{secret_string}$").replace("\{QASM / Qiskit\}", "QASM")
            dic = {"prompt": prompt, "completion": completion}
            data.append(dic)
        DATA.append(data)
    return DATA

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
