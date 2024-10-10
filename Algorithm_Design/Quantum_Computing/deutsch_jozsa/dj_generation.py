from qiskit import QuantumCircuit


def deutsch_jozsa_algorithm(n, oracle):
    """Creates a Deutsch-Jozsa algorithm circuit.

    Parameters:
    - n (int): number of qubits
    - oracle (Gate): the oracle circuit

    Returns:
    - QuantumCircuit: the Deutsch-Jozsa circuit
    """
    dj_circuit = QuantumCircuit(n + 1, n)

    # Apply H-gates to all qubits
    dj_circuit.h(range(n))
    # Apply X and H to the last qubit to prepare the |-⟩ state
    dj_circuit.x(n)
    dj_circuit.h(n)

    # Insert the oracle
    dj_circuit.append(oracle, range(n + 1))

    # Apply H-gates after the oracle
    dj_circuit.h(range(n))

    # Measurement on the first n qubits
    dj_circuit.measure(range(n), range(n))

    return dj_circuit
