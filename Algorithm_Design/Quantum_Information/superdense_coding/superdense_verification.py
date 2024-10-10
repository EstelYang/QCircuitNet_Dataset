from superdense_utils import *


def check_model(qasm_string, code_string, message):
    """Check the model output for the Superdense Coding algorithm."""
    circuit = verify_qasm_syntax(qasm_string)
    if circuit is None:
        return -1
    try:
        exec(code_string, globals())
        aer_sim = AerSimulator()
        shots = 100
        cnt_success = 0
        cnt_fail = 0
        for shot in range(shots):
            prediction = run_and_analyze(circuit.copy(), aer_sim)
            if not isinstance(prediction, str):
                raise TypeError("Predicted message should be a string")
            if prediction == message:
                cnt_success += 1
            else:
                cnt_fail += 1
        print(f"    Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}")
        return cnt_success / (cnt_fail + cnt_success)
    except Exception as e:
        print(f"Error: {e}")
        return -1


def main():
    qasm_string = """
OPENQASM 3.0;
include "stdgates.inc";
gate Bell_Pair _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
}
gate Alice _gate_q_0 {
  z _gate_q_0;
}
gate Bob _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  h _gate_q_0;
}
bit[2] c;
qubit[2] q;
Bell_Pair q[0], q[1];
Alice q[0];
Bob q[0], q[1];
c[0] = measure q[0];
c[1] = measure q[1];
"""
    code_string = """
from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=1).result()
    count = result.get_counts()

    message = list(count.keys())[0]
    return message
"""
    message = "01"
    print(check_model(qasm_string, code_string, message))


if __name__ == "__main__":
    main()
