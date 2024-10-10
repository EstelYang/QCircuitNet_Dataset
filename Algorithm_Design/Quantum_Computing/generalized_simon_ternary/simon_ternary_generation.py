import numpy as np
from qiskit import QuantumCircuit, transpile
from qiskit.quantum_info import Operator
import math


def gh():
    """
    Generate a generalized Hadamard unitary matrix suitable for quantum computation for a given base.

    Parameters:
    - base (int): The base for the generalized Hadamard matrix. For example, base 3 corresponds to the ternary system.

    Returns:
    - Operator: A Qiskit Operator representing the generalized Hadamard matrix.

    Examples:
    For base 3, the generalized Hadamard matrix is constructed using the 3rd root of unity.

    >>> gh(3)
    Operator([
        [ 0.57735027+0.j,  0.57735027+0.j,  0.57735027+0.j,  0.+0.j],
        [ 0.57735027+0.j,  0.28867513-0.5j, -0.28867513+0.5j,  0.+0.j],
        [ 0.57735027+0.j, -0.28867513+0.5j,  0.28867513-0.5j,  0.+0.j],
        [ 0.+0.j,         0.+0.j,          0.+0.j,          1.+0.j]
    ])

    This matrix can be used to transform a set of qubits prepared in the computational basis
    into a superposition state corresponding to the generalized Hadamard transform.
    """
    # Compute the primitive root of unity for the specified base
    omega = np.exp(2 * np.pi * 1j / 3)

    # The matrix dimension is the smallest power of 2 greater than or equal to the base
    m = int(np.ceil(np.log2(3)))
    matrix_size = 2 ** m

    # Initialize the unitary matrix
    U = np.zeros((matrix_size, matrix_size), dtype=complex)

    # Fill the top-left (base x base) block with powers of the root of unity
    for i in range(3):
        for j in range(3):
            U[i, j] = omega ** (i * j) / np.sqrt(3)

    # Ensure the matrix is unitary by filling in identity in the bottom-right
    for i in range(3, matrix_size):
        U[i, i] = 1

    return Operator(U)


def My_gh_gate(n):
    gh_circuit = QuantumCircuit(2 * n)

    for i in range(n):
        gh_circuit.unitary(gh(), [2 * i + j for j in range(2)])

    gh_circuit = transpile(gh_circuit, basis_gates=['u1', 'u2', 'u3', 'cx'])

    gh_gate = gh_circuit.to_gate()
    gh_gate.name = "GH"

    return gh_gate


def My_inverse_gh_gate(n):
    gh_circuit = QuantumCircuit(2 * n)

    for i in range(n):
        gh_circuit.unitary(gh().adjoint(), [2 * i + j for j in range(2)])

    gh_circuit = transpile(gh_circuit, basis_gates=['u1', 'u2', 'u3', 'cx'])

    gh_gate = gh_circuit.to_gate()
    gh_gate.name = "IGH"

    return gh_gate


def simon_ternary_algorithm(n, oracle):
    """
    Prepare the Simon's algorithm quantum circuit for a given base p and secret string s.

    Parameters:
    - p (int): The base of the number system (e.g., 3 for ternary).
    - s (str): The secret string in the given base system.

    Returns:
    - QuantumCircuit: The prepared quantum circuit for Simon's algorithm.

    This function initializes the quantum and classical registers based on the length of the
    secret string and the base, applies the generalized Hadamard gates, the Simon oracle for the problem,
    and measures the quantum register into the classical register.
    """

    cycles = 3 ** n / 3

    # Create a quantum circuit on 2n+ceil(log2(cycles))) qubit
    simon_ternary_circuit = QuantumCircuit(2 * n + math.ceil(math.log2(cycles)), 2 * n)

    # Initialize the first register to the uniform superposition state
    simon_ternary_circuit.append(My_gh_gate(n), range(2 * n))

    # Append the Generalized Simon's oracle
    simon_ternary_circuit.append(oracle, range(2 * n + math.ceil(math.log2(cycles))))

    # Apply the inverse of the Generalized H-gate to the first register
    simon_ternary_circuit.append(My_inverse_gh_gate(n), range(2 * n))

    # Measure the first register
    simon_ternary_circuit.measure(range(2 * n), range(2 * n))

    return simon_ternary_circuit
