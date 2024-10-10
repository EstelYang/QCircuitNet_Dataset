from qiskit import QuantumCircuit, QuantumRegister


def XOR():
    circuit = QuantumCircuit(3)
    circuit.cx(0, 2)
    circuit.cx(1, 2)

    XOR_gate = circuit.to_gate()
    XOR_gate.name = "XOR"
    return XOR_gate


def sudoku_oracle():
    clause_list = [[0, 1], [0, 2], [1, 3], [2, 3]]
    # Notice that qiskit.qasm3.dump won't save the names of different registers.
    var_qubits = QuantumRegister(4, name="v")
    clause_qubits = QuantumRegister(4, name="c")
    output_qubit = QuantumRegister(1, name="out")
    qubit_num = var_qubits.size + clause_qubits.size + output_qubit.size
    circuit = QuantumCircuit(var_qubits, clause_qubits, output_qubit)

    # Compute clauses
    i = 0
    for clause in clause_list:
        circuit.append(XOR(), [clause[0], clause[1], clause_qubits[i]])
        i += 1

    # Flip 'output' bit if all clauses are satisfied
    circuit.mcx(clause_qubits, output_qubit)

    # Uncompute clauses to reset clause-checking bits to 0
    i = 0
    for clause in clause_list:
        circuit.append(XOR(), [clause[0], clause[1], clause_qubits[i]])
        i += 1

    oracle_gate = circuit.to_gate()
    oracle_gate.name = "Oracle"
    return oracle_gate, qubit_num
