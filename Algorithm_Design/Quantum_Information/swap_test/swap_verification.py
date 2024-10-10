from swap_utils import *


def check_model(qasm_string, code_string, n):
    """Check the model output for the Swap Test."""
    # Verify the syntax of the QASM code with the first test case oracle
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
        t_range = 10
        shots = 10
        tol = 15e-3
        for t in range(1, 1 + t_range):
            print(f"    Running Test Case {t}")
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_string, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/state_info.txt", "r") as f:
                content = f.read()
            match = re.search(r"overlap: ([0-9.]+(e[+-]?[0-9]+)?)", content)
            if match:
                overlap = float(match.group(1))
            else:
                raise ValueError("Overlap value not found in the file.")

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction = run_and_analyze(circuit.copy(), aer_sim)
                if not isinstance(prediction, float):
                    raise TypeError("Predicted overlap should be a float number.")
                err = abs(prediction - overlap)
                if err < tol:
                    judgment = "Success"
                    cnt_success += 1
                else:
                    judgment = "Fail"
                    cnt_fail += 1
                print(
                    f"        {judgment}. True Overlap: {overlap}; Prediction: {prediction}; Error: {err}"
                )
            total_success += cnt_success
            total_fail += cnt_fail
        print(f"Total Success: {total_success}; Total Fail: {total_fail}")
        return total_success / (total_fail + total_success)

    except Exception as e:
        print(f"Error: {e}")
        return -1


def main():
    qasm_string = """
OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
bit[1] c;
qubit[29] q;
Psi q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13];
Phi q[14], q[15], q[16], q[17], q[18], q[19], q[20], q[21], q[22], q[23], q[24], q[25], q[26], q[27];
h q[28];
cswap q[28], q[0], q[14];
cswap q[28], q[1], q[15];
cswap q[28], q[2], q[16];
cswap q[28], q[3], q[17];
cswap q[28], q[4], q[18];
cswap q[28], q[5], q[19];
cswap q[28], q[6], q[20];
cswap q[28], q[7], q[21];
cswap q[28], q[8], q[22];
cswap q[28], q[9], q[23];
cswap q[28], q[10], q[24];
cswap q[28], q[11], q[25];
cswap q[28], q[12], q[26];
cswap q[28], q[13], q[27];
h q[28];
c[0] = measure q[28];
"""
    code_string = '''
from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    """Run the circuit and analyze the result."""
    shots = 1e4
    n = (circuit.num_qubits - 1) // 2
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=shots).result()
    counts = result.get_counts()
    overlap = 0
    if "0" in counts.keys():
        overlap = (counts["0"] / shots) * 2 - 1
    overlap = max(overlap, 0)
    return float(overlap)
'''
    n = 14
    print(check_model(qasm_string, code_string, n))


if __name__ == "__main__":
    main()
