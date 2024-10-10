from qiskit import QuantumCircuit, QuantumRegister


def multi_simon_oracle(n, s1, s2, key_string):
    """Creates a Simon oracle for the given secret string s.

    Parameters:
    - n (int): number of qubits
    - s (str): the secret string of length n

    Returns:
    - Gate: the Simon oracle circuit as a gate
    """

    # Reverse the secret string to fit qiskit's qubit ordering
    key_string = key_string[::-1]
    s1 = s1[::-1]

    qr = QuantumRegister(2 * n)
    ac = 2 * n
    multi_simon_oracle = QuantumCircuit(2 * n + 1)
    oracle1 = QuantumCircuit(qr)

    # Copy the first register to the second register
    for qubit in range(n):
        oracle1.cx(qubit, qubit + n)

    # If s is not all-zero, find the first non-zero bit j in the secret string
    if s1 != "0" * n:
        i = s1.find("1")
        # Do |x> -> |s.x> on condition that q_i is 1
        # Refer to qiskit_textbook.simon_oracle for more details.
        for qubit in range(n):
            if s1[qubit] == "1":
                oracle1.cx(i, qubit + n)

    oracle1 = oracle1.to_gate()
    multi_simon_oracle.append(oracle1.control(1), [ac] + list(range(2 * n)))
    multi_simon_oracle.x(2 * n)

    s2 = s2[::-1]

    oracle2 = QuantumCircuit(qr)

    # Copy the first register to the second register
    for qubit in range(n):
        oracle2.cx(qubit, qubit + n)

    # If s is not all-zero, find the first non-zero bit j in the secret string
    if s1 != "0" * n:
        i = s2.find("1")
        # Do |x> -> |s.x> on condition that q_i is 1
        # Refer to qiskit_textbook.simon_oracle for more details.
        for qubit in range(n):
            if s2[qubit] == "1":
                oracle2.cx(i, qubit + n)

    oracle2 = oracle2.to_gate()
    multi_simon_oracle.append(oracle2.control(1), [ac] + list(range(2 * n)))

    # Apply a random permutation to the second register to alter the function
    for qubit in range(n, 2 * n):
        if key_string[qubit - n] == "1":
            multi_simon_oracle.x(qubit)

    oracle_gate = multi_simon_oracle.to_gate()
    oracle_gate.name = "Oracle"

    return oracle_gate