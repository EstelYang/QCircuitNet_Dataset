from qiskit import QuantumCircuit


def deutsch_jozsa_oracle(n, is_constant, key_string):
    """Generates an oracle for the Deutsch-Jozsa algorithm.

    Parameters:
    - n (int): number of qubits
    - is_constant (bool): if True, oracle is constant, else it's balanced
    - key_string (str): the key string of length n according to which the oracle is balanced

    Returns:
    - Gate: the deutsch-jozsa oracle as a gate
    """
    key_string = key_string[::-1]
    oracle = QuantumCircuit(n + 1)

    if is_constant:
        if key_string[-1] == "1":
            oracle.x(n)
        else:
            oracle.id(n)
    else:
        for qubit in range(n):
            if key_string[qubit] == "1":
                oracle.x(qubit)

        for qubit in range(n):
            oracle.cx(qubit, n)

        for qubit in range(n):
            if key_string[qubit] == "1":
                oracle.x(qubit)

    oracle_gate = oracle.to_gate()
    oracle_gate.name = "Oracle"

    return oracle_gate
