from qiskit import QuantumCircuit


def bernstein_vazirani_oracle(n, secret_string):
    """Generates the oracle for the Bernstein-Vazirani algorithm.

    Parameters:
    - n (int): number of qubits
    - secret_string (str): the secret string of length n

    Returns:
    - Gate: the bernstein-vazirani oracle as a gate
    """
    oracle = QuantumCircuit(n + 1)

    # Reverse the secret string to fit qiskit's qubit ordering
    s = secret_string[::-1]
    for qubit in range(n):
        if s[qubit] == "1":
            oracle.cx(qubit, n)

    oracle_gate = oracle.to_gate()
    oracle_gate.name = "Oracle"

    return oracle_gate
