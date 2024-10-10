from dj_utils import *


def check_model(qasm_string, code_string, n):
    """Check the Deutsch-Jozsa model."""
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
        t_range = 2 + min(10, 2 ** (n - 2))
        shots = 10
        for t in range(1, 1 + t_range):
            print(f"    Running Test Case {t}")
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_string, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                first_line = file.readline().strip()
                balance_type = first_line.split(": ")[1]

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction = run_and_analyze(circuit.copy(), aer_sim)
                if not isinstance(prediction, str):
                    raise TypeError("Predicted secret string should be a string.")
                if prediction == balance_type:
                    cnt_success += 1
                else:
                    cnt_fail += 1
            print(f"        Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}")
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
bit[3] c;
qubit[4] q;
h q[0];
h q[1];
h q[2];
x q[3];
h q[3];
Oracle q[0], q[1], q[2], q[3];
h q[0];
h q[1];
h q[2];
c[0] = measure q[0];
c[1] = measure q[1];
c[2] = measure q[2];
"""

    code_string = '''
from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    # Use a quantum simulator to run the circuit
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=1).result()
    count = result.get_counts()

    # Determine if the output is constant or balanced based on the measurement results
    key = list(count.keys())[0]
    if "1" in key:
        prediction = "balanced"
    else:
        prediction = "constant"

    return prediction
'''
    n = 3
    print(check_model(qasm_string, code_string, n))


if __name__ == "__main__":
    main()
