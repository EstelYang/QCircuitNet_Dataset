from sympy import Matrix
import numpy as np
from sympy import S
from qiskit import transpile


def binary_to_ternary(binary_str):
    """
    Convert binary qubit results to a ternary qudit string.
    """
    return ''.join(str(int(binary_str[i:i+2], 2)) for i in range(0, len(binary_str), 2))


def ternary_to_binary(ternary_str):
    """
    Convert a ternary string to a binary string (two bits per ternary digit).
    """
    return ''.join(format(int(digit), '02b') for digit in ternary_str)


def mod3(x):
    """
    Helper function to compute x mod 3.
    """

    return S(x % 3)


def rref_mod3(M):
    """
    Compute the Reduced Row Echelon Form of matrix M mod 3.
    """

    M = M.applyfunc(mod3)  # Ensure the matrix is in mod 3 to start
    rows, cols = M.shape
    r = 0  # Row index
    pivot_cols = []  # Keep track of pivot columns

    for c in range(cols):
        # Find the pivot row
        pivot_row = None
        for ri in range(r, rows):
            if M[ri, c] != 0:
                pivot_row = ri
                break

        if pivot_row is None:
            continue  # Skip this column, it's all zeros under current row

        # Swap the current row with found pivot row
        if pivot_row != r:
            M.row_swap(pivot_row, r)

        # Normalize the pivot row (make the pivot position 1)
        pivot_val = M[r, c]
        if pivot_val != 1:  # If pivot is already 1, skip multiplying
            inv_pivot_val = mod3(pow(pivot_val, -1, 3))
            for j in range(cols):  # Normalize pivot row
                M[r, j] = mod3(inv_pivot_val * M[r, j])

        # Eliminate all other entries in this column
        for ri in range(rows):
            if ri != r and M[ri, c] != 0:
                multiplier = M[ri, c]
                for j in range(cols):  # Eliminate other rows
                    M[ri, j] = mod3(M[ri, j] - multiplier * M[r, j])

        pivot_cols.append(c)
        r += 1

        if r == rows:
            break

    return M, pivot_cols


def recover_secret_string_3d(n, results):
    """
    Recover the secret string for the 3-dimensional Simon problem by analyzing the provided measurement results.

    This function processes the results from Simon's algorithm to deduce the secret string based on the
    observed outputs. It constructs a system of linear equations over Z_3 (the integers modulo 3) and solves
    it to find the secret string that explains the observed results under the promise of the problem.

    Parameters:
    - n (int): Number of qudits, each represented by 2 qubits.
    - results (dict): A dictionary mapping measured states (as bit strings) to their frequency of occurrence.
    - s (str): The actual secret string, used for validating the recovered string in simulation.

    Returns:
    - tuple: A pair (recovered_secret, found) where:
        - recovered_secret (str): The recovered secret string, or '0' * n if no solution is found.
        - found (int): 1 if a solution consistent with the secret string is found, 0 otherwise.

    Approach:
    - Convert measurement results into a matrix representation.
    - Solve the linear system of equations modulo 3 to find the secret string.
    - Compare the recovered solution to the provided secret string.
    """
    equations = []
    for result, count in results.items():
        if result != '0' * (2 * n):  # Exclude the all-zero string in binary form
            ternary_result = binary_to_ternary(result)
            y = [int(digit) for digit in ternary_result]
            equations.append(y)

    if not equations:
        return '0' * n, 0  # No non-trivial equations to process

    # Convert the list of equations into a matrix over Z_3
    M = Matrix(equations).applyfunc(mod3).T

    # Augmented matrix M | I over Z_3
    M_I = Matrix(np.hstack([M, np.eye(M.shape[0], dtype=int)]))

    # Row Echelon Form with modulo 3 adjustments
    def is_zero_mod3(x):
        return mod3(x) == 0

    M_I_rref = rref_mod3(M_I)

    M_I_final = M_I_rref[0].applyfunc(lambda x: x % 3)

    # Attempt to find the solution vector
    null_space_found = False
    first_solution = '0' * n

    for i in range(M_I_final.rows):
        if all(is_zero_mod3(val) for val in M_I_final.row(i)[:M.cols]):
            # This row can provide a solution
            solution_vector = [int(M_I_final.row(i)[j]) for j in range(M.cols, M_I_final.cols)]
            result_s = ''.join(str(x) for x in solution_vector)

            if not null_space_found:
                null_space_found = True
                first_solution = result_s

    return first_solution


def run_and_analyze(circuit, aer_sim):
    n = circuit.num_qubits // 2
    circ = transpile(circuit, aer_sim)
    results = aer_sim.run(circ, shots=n).result()
    counts = results.get_counts()
    prediction = recover_secret_string_3d(n, counts)
    return prediction

