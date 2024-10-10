from qiskit import QuantumCircuit


def bernstein_vazirani_algorithm(n, oracle):
    """Creates a Bernstein-Vazirani algorithm circuit.

    Parameters:
    - n (int): number of qubits
    - oracle (Gate): the oracle circuit

    Returns:
    - QuantumCircuit: the Bernstein-Vazirani circuit
    """

    bv_circuit = QuantumCircuit(n + 1, n)

    # Apply H-gates to all qubits
    bv_circuit.h(range(n))
    # Apply X and H to the last qubit to prepare the |-⟩ state
    bv_circuit.x(n)
    bv_circuit.h(n)

    # Insert the oracle
    bv_circuit.append(oracle, range(n + 1))

    # Apply H-gates after the oracle
    bv_circuit.h(range(n))

    # Measurement on the first n qubits
    bv_circuit.measure(range(n), range(n))

    return bv_circuit
