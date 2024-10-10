from multi_simon_utils import *


def check_model(qasm_string, code_string, n):
    """Check the generated dataset."""
    t = 1
    with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
        oracle_def = file.read()
    full_qasm = plug_in_oracle(qasm_string, oracle_def)
    circuit = verify_qasm_syntax(full_qasm)
    if circuit is None:
        return -1

    try:
        exec(code_string, globals())
        aer_sim = AerSimulator()
        total_success = 0
        total_fail = 0
        t_range = min(10, 4 ** (n - 2))
        shots = 10
        for t in range(1, 1 + t_range):
            print(f"   Running Test Case {t}")
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_string, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                content = file.read()
            match1 = re.search(r"Secret string 1: ([012]+)", content)
            match2 = re.search(r"Secret string 2: ([012]+)", content)

            if match1 and match2:
                secret_string1 = match1.group(1)
                secret_string2 = match2.group(1)

            else:
                raise ValueError("Secret string not found in the file.")

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction1, prediction2 = run_and_analyze(circuit.copy(), aer_sim)

                if not isinstance(prediction1, str):
                    raise TypeError("Predicted secret string should be a string.")
                if not isinstance(prediction2, str):
                    raise TypeError("Predicted secret string should be a string.")
                if prediction1 == secret_string1 or prediction2 == secret_string2:
                    cnt_success += 1
                else:
                    cnt_fail += 1
            print(
                f"        Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}"
            )
            total_success += cnt_success
            total_fail += cnt_fail
        print(
            f"   Total Success: {total_success}; Total Fail: {total_fail}"
        )
        return total_success / (total_fail + total_success)

    except Exception as e:
        print(f"Error: {e}")
        return -1

def main():
    qasm_string = """
OPENQASM 3;
include "stdgates.inc";
include "oracle.inc";
bit[5] c16;
qubit[9] q68;
h q68[0];
h q68[1];
h q68[2];
h q68[3];
h q68[8];
Oracle q68[0], q68[1], q68[2], q68[3], q68[4], q68[5], q68[6], q68[7], q68[8];
h q68[0];
h q68[1];
h q68[2];
h q68[3];
c16[4] = measure q68[8];
c16[0] = measure q68[0];
c16[1] = measure q68[1];
c16[2] = measure q68[2];
c16[3] = measure q68[3];


"""
    code_string = '''
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

'''

    n = 4
    print(check_model(qasm_string, code_string, n))


if __name__ == "__main__":
    main()
