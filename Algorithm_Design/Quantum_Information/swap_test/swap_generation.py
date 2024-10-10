from qiskit import QuantumCircuit


def swap_test_circuit(n, psi_gate, phi_gate):
    """Create a Swap Test circuit where the state to compare has n qubits."""
    circuit = QuantumCircuit(n * 2 + 1, 1)
    circuit.append(psi_gate, range(n))
    circuit.append(phi_gate, range(n, 2 * n))
    ancilla = 2 * n
    circuit.h(ancilla)
    for i in range(n):
        circuit.cswap(ancilla, i, i + n)
    circuit.h(ancilla)
    circuit.measure(ancilla, 0)
    return circuit
