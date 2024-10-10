import math
from qiskit import QuantumCircuit

# This is modified from the original code of NWQBench


def F_gate(theta):
    circuit = QuantumCircuit(2)
    circuit.ry(-theta, 1)
    circuit.cz(0, 1)
    circuit.ry(theta, 1)

    F_gate = circuit.to_gate()
    F_gate.name = "F"

    return F_gate


def create_w_state(n):
    circuit = QuantumCircuit(n, n)
    circuit.x(n - 1)

    for i in range(n - 1):
        circuit.append(
            F_gate(math.acos(math.sqrt(1.0 / (n - i)))),
            [n - 1 - i, n - 2 - i],
        )

    for i in range(n - 1):
        circuit.cx(n - 2 - i, n - 1 - i)

    return circuit


def F_circuit(circuit, i, j, n, k):
    theta = math.acos(math.sqrt(1.0 / (n - k + 1)))
    circuit.ry(-theta, j)
    circuit.cz(i, j)
    circuit.ry(theta, j)


def create_w_state_circuit(n):
    circuit = QuantumCircuit(n, n)

    circuit.x(n - 1)

    for i in range(0, n - 1):
        F_circuit(circuit, n - 1 - i, n - 2 - i, n, i + 1)

    for i in range(0, n - 1):
        circuit.cx(n - 2 - i, n - 1 - i)

    return circuit
