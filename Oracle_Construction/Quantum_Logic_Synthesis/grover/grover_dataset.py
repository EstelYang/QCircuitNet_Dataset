import os
import glob
import random
import argparse
from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
from grover_generation import create_oracle


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_secret_strings(n):
    """Generates 2^(n-2) marked items of length n."""

    num_strings = 2 ** (n - 2)
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def generate_circuit_qasm():
    """Generates QASM files for the Grover oracle with random marked item."""
    for n in range(2, 15):
        directory = f"full_circuit/grover_n{n}"
        marked_items = generate_secret_strings(n)
        for marked_item in marked_items:
            oracle = create_oracle(n, marked_item)
            circuit = QuantumCircuit(n)
            circuit.append(oracle, range(n))
            filename = f"grover_n{n}_m{marked_item}.qasm"
            save_qasm(circuit, directory, filename)


def extract_gate_definition():
    """Extracts the gate definition from the original QASM file and save the simplified QASM oracle."""
    for n in range(2, 15):
        input_dir = f"full_circuit/grover_n{n}"
        output_dir = f"grover_n{n}"
        if not os.path.exists(output_dir):
            os.makedirs(output_dir)
        customgate_file = "customgates.inc"

        qasm_files = glob.glob(os.path.join(input_dir, "*.qasm"))

        gate_def = False
        for input_file in qasm_files:

            output_qasm_file = os.path.basename(input_file)

            with open(input_file, "r") as file:
                content = file.read()

            include_pos = content.find('include "stdgates.inc";')
            if include_pos == -1:
                raise ValueError("Include statement not found in the file")

            oracle_pos = content.find("gate Oracle")
            if oracle_pos == -1:
                raise ValueError("Oracle gate not found in the file")

            if not gate_def:
                custom_gates = content[
                    include_pos + len('include "stdgates.inc";') : oracle_pos
                ].strip()
                with open(f"{output_dir}/{customgate_file}", "w") as file:
                    file.write(custom_gates)
                gate_def = True

            rest_qasm = (
                content[: include_pos + len('include "stdgates.inc";')]
                + f'\ninclude "{customgate_file}";\n'
                + content[oracle_pos:]
            )

            with open(f"{output_dir}/{output_qasm_file}", "w") as file:
                file.write(rest_qasm)


import os
def generate_dataset_json():
    """Generates a JSON dataset for the grover oracle.
    Format: {"prompt": description, "completion": circuit}

    """
    with open("grover/grover_description.txt", "r") as f:
        template = f.read()
    DATA = []
    for n in range(2, 15):
        directory = f"grover/grover_n{n}"
        data = []
        for filename in os.listdir(directory):
            if filename[-4:] == ".inc":
                continue
            with open(os.path.join(directory, filename), "r") as f:
                completion = f.read()
            marked_item = filename.split("_")[2].split(".")[0][1:]
            prompt = template.replace("$\{qubit number\}", f"{n}$").replace("$\{marked item\}", f"{marked_item}$").replace("\{QASM / Qiskit\}", "QASM")
            dic = {"prompt": prompt, "completion": completion}
            data.append(dic)
        DATA.append(data)
    return DATA


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
