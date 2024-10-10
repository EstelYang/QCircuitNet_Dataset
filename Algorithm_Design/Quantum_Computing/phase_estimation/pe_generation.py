import numpy as np
from qiskit import QuantumCircuit


def inverse_qft(n):
    """
    Implement the inverse Quantum Fourier Transform for n qubits.
    """
    circuit = QuantumCircuit(n)
    # Swap the qubits
    for qubit in range(n // 2):
        circuit.swap(qubit, n - qubit - 1)

    # Apply the inverse QFT
    for target_qubit in range(n):
        for control_qubit in range(target_qubit):
            circuit.cp(
                -np.pi / 2 ** (target_qubit - control_qubit),
                control_qubit,
                target_qubit,
            )
        circuit.h(target_qubit)

    iqft_gate = circuit.to_gate()
    iqft_gate.name = "IQFT"

    return iqft_gate


def quantum_phase_estimation_circuit(n, cu_gate, psi_gate):
    """
    Create a QPE circuit for given counting qubits, U gate, and eigenstate gate.

    Parameters:
    - n (int): number of counting qubits
    - cu_gate (Gate): the CU gate
    - psi_gate (Gate): the eigenstate gate

    Returns:
    - QuantumCircuit: the QPE circuit
    """
    # Create the circuit
    qpe_circuit = QuantumCircuit(n + 1, n)

    # Prepare the ancilla qubit as the eigenstate
    qpe_circuit.append(psi_gate, [n])

    # Apply Hadamard gates to the counting qubits
    qpe_circuit.h(range(n))

    # Apply the controlled-U operations
    repetitions = 1
    for counting_qubit in range(n):
        for _ in range(repetitions):
            qpe_circuit.append(cu_gate, [counting_qubit, n])
        repetitions *= 2

    # Apply inverse QFT
    qpe_circuit.append(inverse_qft(n), range(n))

    # Measure the counting qubits
    qpe_circuit.measure(range(n), range(n))

    return qpe_circuit
