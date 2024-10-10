from qiskit.qasm3 import loads
from qiskit.quantum_info import state_fidelity, Statevector
from qiskit_aer import AerSimulator
import numpy as np
import random


def verify_qasm_syntax(output):
    """Verify the syntax of the output and return the corresponding QuantumCircuit (if it is valid)."""
    assert isinstance(output, str)
    try:
        # Parse the OpenQASM 3.0 code
        circuit = loads(output)
        print(
            "    The OpenQASM 3.0 code is valid and has been successfully loaded as a QuantumCircuit."
        )
        return circuit
    except Exception as e:
        print(f"    Error: The OpenQASM 3.0 code is not valid. Details: {e}")
        return None


def verify_result_vector(circuit, target_state):
    """Verify the result vector of the circuit."""
    goal_state = Statevector(target_state)
    result_state = Statevector(circuit)
    return state_fidelity(result_state, goal_state)


def check_model(qasm_string, n, target_state):
    clifford_circuit = verify_qasm_syntax(qasm_string)
    if clifford_circuit is None:
        return -1
    try:
        target_state = target_state / np.linalg.norm(target_state)
        fidelity = verify_result_vector(clifford_circuit, target_state)
        return fidelity

    except Exception as e:
        print(f"    Error: {e}")
        return -1


def main():
    qasm_string = """OPENQASM 3.0;\ninclude "stdgates.inc";\nqubit[6] q;\ns q[0];\ns q[1];\ns q[2];\ns q[3];\ns q[4];\ns q[5];\n"""
    # qasm_string = open(f"{file_path}.qasm", "r").read()
    n = 6
    l = 6
    i = 6
    file_path = f"clifford_n{n}/l{l}/clifford_n{n}_l{l}_{i}"
    # file_path = "./clifford_test"
    target_state = np.loadtxt(f"{file_path}.txt", dtype=complex)

    print(check_model(qasm_string, n, target_state))


if __name__ == "__main__":
    main()
