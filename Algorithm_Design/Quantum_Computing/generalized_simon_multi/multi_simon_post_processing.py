from sympy import Matrix
import numpy as np
from qiskit import transpile


def mod2(x):
    return x.as_numer_denom()[0] % 2


def recover_secret_string(n, results):
    equations = []
    for result, count in results.items():
        if result != '0' * n:  # We don't use all 0 string
            y = [int(bit) for bit in result]
            equations.append(y)
    if len(equations) == 0:
        return '0' * n
    else:
        result_s = post_processing(equations)
        return result_s


def post_processing(string_list):
    """
    A^T | I
    after the row echelon reduction, we can get the basis of the nullspace of A in I
    since we just need the string in binary form, so we can just use the basis
    if row == n-1 --> only one
    if row < n-1 --> get the first one (maybe correct or wrong)
    """
    M = Matrix(string_list).T

    # Augmented  : M | I
    M_I = Matrix(np.hstack([M, np.eye(M.shape[0], dtype=int)]))

    # RREF row echelon form , indices of the pivot columns
    # If x % 2 = 0, it will not be chosen as pivot (modulo 2)
    M_I_rref = M_I.rref(iszerofunc=lambda x: x % 2 == 0)

    # Modulo 2
    M_I_final = M_I_rref[0].applyfunc(mod2)


    # Non-Trivial solution
    if all(value == 0 for value in M_I_final[-1, :M.shape[1]]):
        result_s = "".join(str(c) for c in M_I_final[-1, M.shape[1]:])

    # Trivial solution
    else:
        result_s = '0' * M.shape[0]

    return result_s


def run_and_analyze(circuit, aer_sim):
    n = circuit.num_qubits
    circ = transpile(circuit, aer_sim)
    results = aer_sim.run(circ, shots=n).result()
    counts = results.get_counts()

    dic1 = {}
    dic2 = {}
    for item in counts.keys():
        if item[0] == '1':
            dic1[item[1:]] = 1
        else:
            dic2[item[1:]] = 1

    prediction1 = recover_secret_string(n, dic2)
    prediction2 = recover_secret_string(n, dic1)

    return prediction1, prediction2
