from qiskit import QuantumCircuit
from math import pi


def generate_qft_circuit(n, psi_gate):
    """Generate a QFT circuit for n qubits."""
    circuit = QuantumCircuit(n)
    circuit.append(psi_gate, range(n))
    for target_qubit in range(n - 1, -1, -1):
        circuit.h(target_qubit)
        for control_qubit in range(target_qubit):
            angle = pi / (2 ** (target_qubit - control_qubit))
            circuit.cp(angle, control_qubit, target_qubit)

    for qubit in range(n // 2):
        circuit.swap(qubit, n - qubit - 1)
    return circuit
