from qiskit import QuantumCircuit, QuantumRegister, ClassicalRegister


def multi_simon_algorithm(n, oracle):
    """Generates a Simon algorithm circuit.

    Parameters:
    - n (int): number of qubits
    - s (str): the secret string of length n

    Returns:
    - QuantumCircuit: the Simon algorithm circuit
    """
    # Create a quantum circuit on 2n qubits
    qr = QuantumRegister(2 * n + 1)
    cr = ClassicalRegister(n + 1)

    multi_simon_circuit = QuantumCircuit(qr, cr)

    # Initialize the first register to the |+> state
    multi_simon_circuit.h(range(n))
    multi_simon_circuit.h(2 * n)

    # Append the Multi Simon's oracle
    multi_simon_circuit.append(oracle, range(2 * n + 1))

    # Apply a H-gate to the first register
    multi_simon_circuit.h(range(n))

    # Measure the first register
    multi_simon_circuit.measure(2 * n, n)
    multi_simon_circuit.measure(range(n), range(n))

    return multi_simon_circuit
