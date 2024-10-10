from pe_utils import *


def check_model(qasm_string, code_string, n):
    """Check the model output for the Phase Estimation."""
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
        t_range = min(10, 2 ** (n - 2))
        shots = 10
        tol = 1 / (2**n)
        for t in range(1, 1 + t_range):
            print(f"    Running Test Case {t}")
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_string, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as f:
                content = f.read()
            theta = float(content.split(":")[-1].strip())

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction = run_and_analyze(circuit.copy(), aer_sim)
                if not isinstance(prediction, float) and not isinstance(
                    prediction, int
                ):
                    raise TypeError("Predicted overlap should be a number.")
                err = abs(prediction - theta)
                if err <= tol:
                    judgment = "Success"
                    cnt_success += 1
                else:
                    judgment = "Fail"
                    cnt_fail += 1
                print(
                    f"        {judgment}. Prediction: {prediction}, True Phase{theta}, Error: {err}"
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
OPENQASM 3.0;\ninclude "stdgates.inc";\ninclude "oracle.inc";\nqubit[9] q;\nh q[0];\nCU_0 q[0], q[1];\nh q[0];\nh q[1];\nh q[2];\nh q[3];\nh q[4];\nh q[5];\nh q[6];\nh q[7];\nh q[8];\nh q[9];\n
"""

    code_string = '''
from qiskit import transpile\n\n\ndef run_and_analyze(circuit, aer_sim):\n    """Run the circuit and analyze the result."""\n    shots = 1e4\n    n = circuit.num_qubits - 1\n    circ = transpile(circuit, aer_sim)\n    result = aer_sim.run(circ, shots=shots).result()\n    counts = result.get_counts()\n    theta = 0\n    if "0" in counts.keys():\n        theta = int(counts["0"]) / shots\n    return theta\n'''

    n = 8
    print(check_model(qasm_string, code_string, n))


if __name__ == "__main__":
    main()
