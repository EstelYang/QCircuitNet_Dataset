from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import random
import argparse
import os
from dj_generation import deutsch_jozsa_oracle


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
    """Generate QASM files for the Deutsch-Jozsa oracle with different settings."""
    for n in range(2, 15):
        directory = f"deutsch_jozsa_n{n}"
        # Construct constant circuits
        oracle_const = []
        circuit_const = []
        for i in range(2):
            key_string = "0" if i == 0 else "1"
            oracle_const.append(deutsch_jozsa_oracle(n, True, key_string))
            circuit_const.append(QuantumCircuit(n + 1))
            circuit_const[i].append(oracle_const[i], range(n + 1))
            filename = f"dj_n{n}_constant_{key_string}.qasm"
            save_qasm(circuit_const[i], directory, filename)

        # Construct balanced circuits
        key_strings = generate_secret_strings(n)
        for key_string in key_strings:
            oralce_balanced = deutsch_jozsa_oracle(n, False, key_string)
            circuit_balanced = QuantumCircuit(n + 1)
            circuit_balanced.append(oralce_balanced, range(n + 1))
            filename = f"dj_n{n}_balanced_{key_string}.qasm"
            save_qasm(circuit_balanced, directory, filename)


import os
def generate_dataset_json():
    """Generates a JSON dataset for the Deutsch-Jozsa oracle.
    Format: {"prompt": description, "completion": circuit}

    """
    with open("deutsch_jozsa/dj_description.txt", "r") as f:
        template = f.read()
    DATA = []
    for n in range(2, 15):
        directory = f"deutsch_jozsa/deutsch_jozsa_n{n}"
        data = []
        for filename in os.listdir(directory):
            with open(os.path.join(directory, filename), "r") as f:
                completion = f.read()
            balance = filename.split("_")[2] == "balanced"
            key_string = filename.split("_")[3].split(".")[0]
            prompt = template.replace("$\{qubit number\}", f"{n}$").replace("\{QASM / Qiskit\}", "QASM")
            if balance:
                prompt = prompt.replace("\{constant with $f(x)$ returns $0$ / constant with $f(x)$ returns $1$ / balanced with key\_str $b = $\{key string\}\}", f"balanced with key\_str $b = {key_string}$")
            else:
                prompt = prompt.replace("\{constant with $f(x)$ returns $0$ / constant with $f(x)$ returns $1$ / balanced with key\_str $b = $\{key string\}\}", f"constant with $f(x)$ returns $f{key_string}$")
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
