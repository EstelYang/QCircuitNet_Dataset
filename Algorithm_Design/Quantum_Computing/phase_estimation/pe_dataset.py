import os
import re
import glob
import math
import argparse
import numpy as np
from qiskit import QuantumCircuit
from qiskit_aer import AerSimulator
from qiskit.circuit.library import PhaseGate
from qiskit.qasm3 import dump
from pe_generation import quantum_phase_estimation_circuit
from pe_post_processing import run_and_analyze
from pe_utils import *


def My_U_gate(theta):
    """
    Create a U gate for a given phase \theta.

    Parameters:
    - theta (float): the phase to apply

    Returns:
    - Gate: the controlled-U gate
    """

    u_gate = PhaseGate(theta)
    cu_gate = u_gate.control(1)
    cu_gate.name = "CU"

    return cu_gate


def My_psi_gate():
    """
    Create a psi gate for the eigenstate |1>.
    """
    psi_circuit = QuantumCircuit(1)
    psi_circuit.x(0)

    psi_gate = psi_circuit.to_gate()
    psi_gate.name = "Psi"

    return psi_gate


def save_qasm(circuit, directory, filename):
    """Saves a circuit to a QASM 3.0 file."""
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        # dump(circuit, file, disable_constants=True)
        dump(circuit, file)


def generate_circuit_qasm():
    """Generates QASM files for the phase estimation algorithm with different settings."""
    for n in range(2, 15):
        directory = f"full_circuit/phase_estimation_n{n}"
        if not os.path.exists(directory):
            os.makedirs(directory)
        t_range = min(100, 2 ** (n - 2))
        thetas = np.random.rand(t_range)
        t = 0
        for theta in thetas:
            t += 1
            filename = f"phase_estimation_n{n}_trial{t}.qasm"
            txt_file_name = f"phase_info_n{n}_trial{t}.txt"
            with open(f"{directory}/{txt_file_name}", "w") as file:
                file.write(f"theta: {theta}")
            cu_gate = My_U_gate(theta * 2 * math.pi)
            psi_gate = My_psi_gate()
            qpe_circuit = quantum_phase_estimation_circuit(n, cu_gate, psi_gate)
            save_qasm(qpe_circuit, directory, filename)


def extract_gate_definition():
    """Extracts the gate definition from the original QASM file and save the algorithm circuit alone."""
    for n in range(2, 15):
        input_dir = f"full_circuit/phase_estimation_n{n}"
        no_pow_dir = "qasm_no_pow"
        if not os.path.exists(no_pow_dir):
            os.makedirs(no_pow_dir)
        output_qasm_file = f"phase_estimation_n{n}.qasm"
        oracle_file = "oracle.inc"

        qasm_files = glob.glob(f"{input_dir}/*.qasm")

        circuit_save = False
        for input_file in qasm_files:
            trial = input_file.split("_")[-1].split(".")[0]
            oracle_dir = f"test_oracle/n{n}/{trial}"
            if not os.path.exists(oracle_dir):
                os.makedirs(oracle_dir)

            # Copy the state information to the oracle directory
            txt_file_name = f"phase_info_n{n}_{trial}.txt"
            output_txt_file_name = f"{oracle_dir}/oracle_info.txt"
            with open(f"{input_dir}/{txt_file_name}", "r") as file:
                text = file.read()
            with open(output_txt_file_name, "w") as file:
                file.write(text)

            # Extract the gate definition
            with open(input_file, "r") as file:
                content = file.read()

            include_pos = content.find('include "stdgates.inc";')
            if include_pos == -1:
                raise ValueError("Include statement not found in the file")
            iqft_pos = content.find("gate IQFT")
            if iqft_pos == -1:
                raise ValueError("Gate IQFT not found in the file")

            oracle_def = content[
                include_pos + len('include "stdgates.inc";') : iqft_pos
            ].strip()
            with open(f"{oracle_dir}/{oracle_file}", "w") as file:
                file.write(oracle_def)

            if not circuit_save:
                rest_qasm = (
                    content[: include_pos + len('include "stdgates.inc";')]
                    + f'\ninclude "{oracle_file}";\n'
                    + content[iqft_pos:]
                )
                with open(f"{no_pow_dir}/{output_qasm_file}", "w") as file:
                    file.write(rest_qasm)
                circuit_save = True


def oracle_rename():
    oracle_file = "oracle.inc"
    for n in range(2, 15):
        t_range = min(100, 2 ** (n - 2))
        for trial in range(1, 1 + t_range):
            oracle_dir = f"test_oracle/n{n}/trial{trial}"
            with open(f"{oracle_dir}/{oracle_file}", "r") as file:
                content = file.read()
            processed_content = re.sub(
                r"gate CU_\d+\(.*?\) _gate_q_0, _gate_q_1 {",
                "gate CU_0 _gate_q_0, _gate_q_1 {",
                content,
            )
            with open(f"{oracle_dir}/{oracle_file}", "w") as file:
                file.write(processed_content)


def qasm_rename():
    for n in range(2, 15):
        filename = f"qasm_no_pow/phase_estimation_n{n}.qasm"
        with open(filename, "r") as file:
            content = file.read()
        processed_content = re.sub(r"CU_\d+\(.*?\)", "CU_0", content)
        with open(filename, "w") as file:
            file.write(processed_content)


def qasm_power_gate():
    for n in range(2, 15):
        filename = f"phase_estimation_n{n}.qasm"
        input_dir = "qasm_no_pow"
        with open(f"{input_dir}/{filename}", "r") as file:
            content = file.read()

        # Apply powered CU gates to the circuit
        circuit_apply = ""
        for power in range(n):
            circuit_apply += f"CU_{power} q[{power}], q[{n}];\n"

        # Substitute the CU_0 gate with the powered definition
        CU_pos_start = content.find("CU_0")
        if CU_pos_start == -1:
            raise ValueError("Gate CU_0 not found in the file")
        CU_pos_end = content.find("IQFT q[")
        if CU_pos_end == -1:
            raise ValueError("End of CU not found in the file")
        content = content[:CU_pos_start] + circuit_apply + content[CU_pos_end:]

        iqft_pos = content.find("gate IQFT")
        if iqft_pos == -1:
            raise ValueError("Gate IQFT not found in the file")
        gate_pow_def = ""
        for power in range(1, n):
            gate_pow_def += f"gate CU_{power} _gate_q_0, _gate_q_1 {{\n"
            gate_pow_def += f"  pow(2) @ CU_{power-1} _gate_q_0, _gate_q_1;\n"
            gate_pow_def += f"}}\n"
        processed_content = content[:iqft_pos] + gate_pow_def + content[iqft_pos:]
        with open(f"{filename}", "w") as file:
            file.write(processed_content)


def generate_dataset_json():
    """Generates a JSON dataset for the Algorithm.
    Format: {"input": description, "output": circuit}

    """
    # Replace the placeholder in the description with the qubit number
    # Create the json file with different entries.
    pass


def check_dataset():
    """Check the Phase Estimation dataset."""
    shots = 10
    text = []
    aer_sim = AerSimulator()

    for n in range(2, 11):
        print_and_save(f"Verifying Phase Estimation for n={n}", text)
        filename = f"phase_estimation_n{n}.qasm"
        with open(filename, "r") as qasmfile:
            qasm_code = qasmfile.read()

        # Verify the syntax of the QASM code with the first test case oracle
        t = 1
        with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
            oracle_def = file.read()
        full_qasm = plug_in_oracle(qasm_code, oracle_def)
        circuit = verify_qasm_syntax(full_qasm)
        if circuit is None:
            continue

        # Verify the correctness of the circuit
        total_success = 0
        total_fail = 0
        t_range = min(10, 2 ** (n - 2))
        tol = 1 / (2**n)
        for t in range(1, 1 + t_range):
            print_and_save(f"    Running Test Case {t}", text)
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_code, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as f:
                content = f.read()
            theta = float(content.split(":")[-1].strip())

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction = run_and_analyze(circuit, aer_sim)
                if not isinstance(prediction, float):
                    raise ValueError("The prediction should be a float.")
                err = abs(prediction - theta)
                # print_and_save(
                #     f"        Prediction: {prediction}, True Phase{theta}, Error: {err}",
                #     text,
                # )
                if err <= tol:
                    cnt_success += 1
                else:
                    cnt_fail += 1
            total_success += cnt_success
            total_fail += cnt_fail
            print_and_save(f"        Success: {cnt_success}, Fail: {cnt_fail}", text)

        print_and_save(
            f"    Total Success: {total_success}, Total Fail: {total_fail}", text
        )

    with open("pe_verification.txt", "w") as file:
        file.write("\n".join(text))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-f",
        "--func",
        choices=[
            "qasm",
            "json",
            "gate",
            "oracle_rename",
            "qasm_rename",
            "power",
            "check",
        ],
        help="The function to call: generate qasm circuit, json dataset or extract gate definition.",
    )
    args = parser.parse_args()
    if args.func == "qasm":
        generate_circuit_qasm()
    elif args.func == "json":
        generate_dataset_json()
    elif args.func == "gate":
        extract_gate_definition()
    elif args.func == "oracle_rename":
        oracle_rename()
    elif args.func == "qasm_rename":
        qasm_rename()
    elif args.func == "power":
        qasm_power_gate()
    elif args.func == "check":
        check_dataset()


if __name__ == "__main__":
    main()
