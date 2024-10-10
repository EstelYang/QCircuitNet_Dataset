from grover_utils import *


def check_model(qasm_string, code_string, n):
    """Check the Grover's Algorithm."""
    # Verify the syntax of the QASM code with the first test case oracle
    t = 1
    with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
        oracle_def = file.read()
    full_qasm = plug_in_oracle(qasm_string, oracle_def)
    # print(full_qasm)
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
        for t in range(1, 1 + t_range):
            print(f"    Running Test Case {t}")
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_string, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                first_line = file.readline().strip()
                marked_item = first_line.split(": ")[1]

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction = run_and_analyze(circuit.copy(), aer_sim)
                if not isinstance(prediction, str):
                    raise TypeError("Predicted secret string should be a string.")
                if prediction == marked_item:
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
gate Diffuser _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  h _gate_q_0;
  h _gate_q_1;
  h _gate_q_2;
  h _gate_q_3;
  h _gate_q_4;
  h _gate_q_5;
  h _gate_q_6;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
  x _gate_q_6;
  h _gate_q_6;
  mcx_gray _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  h _gate_q_6;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
  x _gate_q_6;
  h _gate_q_0;
  h _gate_q_1;
  h _gate_q_2;
  h _gate_q_3;
  h _gate_q_4;
  h _gate_q_5;
  h _gate_q_6;
}
bit[7] c;
qubit[7] q;
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
h q[6];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Diffuser q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Diffuser q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Diffuser q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Diffuser q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Diffuser q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Diffuser q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Diffuser q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6];
Diffuser q[0], q[1], q[2], q[3], q[4], q[5], q[6];
c[0] = measure q[0];
c[1] = measure q[1];
c[2] = measure q[2];
c[3] = measure q[3];
c[4] = measure q[4];
c[5] = measure q[5];
c[6] = measure q[6];
"""
    code_string = """
from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=1).result()
    count = result.get_counts()

    # The key is the solution to the problem
    prediction = list(count.keys())[0]
    return prediction
"""
    n = 7
    print(check_model(qasm_string, code_string, n))


if __name__ == "__main__":
    main()
