from qiskit import QuantumCircuit


def generate_ghz_state_circuit(n):
    """Generate a quantum circuit for a ghz state with n qubits."""
    circuit = QuantumCircuit(n)
    circuit.h(0)
    for i in range(1, n):
        circuit.cx(0, i)

    return circuit
