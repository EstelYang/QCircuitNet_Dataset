from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
import argparse
import os
from diffusion_generation import diffusion_operator


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def generate_circuit_qasm():
    """Generates QASM files for the diffusion operator"""
    for n in range(2, 15):
        directory = f"full_circuit/diffusion_operator_n{n}"
        oracle = diffusion_operator(n)
        circuit = QuantumCircuit(n)
        circuit.append(oracle, range(n))
        filename = f"diffusion_n{n}.qasm"
        save_qasm(circuit, directory, filename)


def extract_gate_definition():
    """Extracts the gate definition from the original QASM file and save the simplified QASM oracle."""
    for n in range(2, 15):
        input_dir = f"full_circuit/diffusion_operator_n{n}"
        input_file = f"diffusion_n{n}.qasm"
        output_dir = f"diffusion_operator_n{n}"
        customgate_file = "customgates.inc"
        output_qasm_file = f"diffusion_n{n}.qasm"
        if not os.path.exists(output_dir):
            os.makedirs(output_dir)
        with open(f"{input_dir}/{input_file}", "r") as file:
            content = file.read()

        include_pos = content.find('include "stdgates.inc";')
        if include_pos == -1:
            raise ValueError("Include statement not found in the file")

        diffuser_pos = content.find("gate Diffuser")
        if diffuser_pos == -1:
            raise ValueError("Diffuser gate not found in the file")

        custom_gates = content[
            include_pos + len('include "stdgates.inc";') : diffuser_pos
        ].strip()
        custom_gates = custom_gates.replace("mcx_gray", "mcx")

        rest_qasm = (
            content[: include_pos + len('include "stdgates.inc";')]
            + f'\ninclude "{customgate_file}";\n'
            + content[diffuser_pos:]
        )
        rest_qasm = rest_qasm.replace("mcx_gray", "mcx")

        with open(f"{output_dir}/{customgate_file}", "w") as file:
            file.write(custom_gates)

        with open(f"{output_dir}/{output_qasm_file}", "w") as file:
            file.write(rest_qasm)


import os


def generate_dataset_json():
    """Generates a JSON dataset for the Diffusion Operator.
    Format: {"prompt": description, "completion": circuit}

    """
    with open("diffusion_operator/diffusion_description.txt", "r") as f:
        template = f.read()
    DATA = []
    for n in range(2, 15):
        filename = f"diffusion_operator/diffusion_operator_n{n}/diffusion_n{n}.qasm"
        data = []
        with open(filename, "r") as f:
            completion = f.read()
        prompt = template.replace("$\{qubit number\}", f"{n}$").replace(
            "\{QASM / Qiskit\}", "QASM"
        )
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
