from qiskit import QuantumCircuit


def simon_oracle(n, secret_string, key_string):
    """Creates a Simon oracle for the given secret string s.
    This is modified from qiskit_textbook.simon_oracle.

    Parameters:
    - n (int): number of qubits
    - secret_string (str): the secret string s of length n
    - key_string (str): the key string of length n to alter the function value

    Returns:
    - Gate: the Simon oracle as a gate
    """

    oracle = QuantumCircuit(2 * n)

    # Reverse the secret string to fit qiskit's qubit ordering
    secret_string = secret_string[::-1]
    key_string = key_string[::-1]

    for qubit in range(n):
        oracle.cx(qubit, qubit + n)

    if secret_string != "0" * n:
        i = secret_string.find("1")
        for qubit in range(n):
            if secret_string[qubit] == "1":
                oracle.cx(i, qubit + n)

    for qubit in range(n, 2 * n):
        if key_string[qubit - n] == "1":
            oracle.x(qubit)

    oracle_gate = oracle.to_gate()
    oracle_gate.name = "Oracle"

    return oracle_gate
