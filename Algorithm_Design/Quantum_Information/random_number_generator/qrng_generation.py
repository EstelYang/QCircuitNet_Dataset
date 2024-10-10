from qiskit import QuantumCircuit


def create_qrng_circuit(n):
    """Create a Quantum Random Number Generator circuit with n qubits."""
    circuit = QuantumCircuit(n, n)
    circuit.h(range(n))
    circuit.measure(range(n), range(n))
    return circuit
