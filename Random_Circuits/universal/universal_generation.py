from qiskit import QuantumCircuit
import random


def random_universal_circuit(n, l):
    """Generates a random circuit with l gates on n qubits using quantum gates from the universal gate set.

    Parameters:
    - n (int): number of qubits
    - l (int): number of gates

    Returns:
    - QuantumCircuit: the random Clifford circuit
    """
    circuit = QuantumCircuit(n)
    for _ in range(l):
        gate_type = random.choice(["h", "s", "t", "cx"])
        qubits = random.sample(range(n), 2)
        if gate_type == "h":
            circuit.h(qubits[0])
        elif gate_type == "s":
            circuit.s(qubits[0])
        elif gate_type == "t":
            circuit.t(qubits[0])
        elif gate_type == "cx":
            circuit.cx(qubits[0], qubits[1])

    return circuit
