from w_utils import *


def check_model(qasm_string, code_string, n):
    """Check the model output for the W state."""
    circuit = verify_qasm_syntax(qasm_string)
    if circuit is None:
        return -1
    if "def run_and_analyze(circuit, aer_sim):" not in code_string:
        print("The function run_and_analyze is not implemented.")
        return -1
    try:
        exec(code_string, globals())
        aer_sim = AerSimulator(method="statevector")
        qubit_indices = run_and_analyze(circuit, aer_sim)
        return float(verify_result_matrix(circuit, n, qubit_indices))
    except Exception as e:
        print(f"Error: {e}")
        return -1


def main():
    qasm_string = """
OPENQASM 3.0;
include "stdgates.inc";
bit[3] c;
qubit[3] q;
x q[2];
ry(-0.5) q[1];
cz q[2], q[1];
ry(0.9553166181245093) q[1];
ry(-pi/4) q[0];
cz q[1], q[0];
ry(pi/4) q[0];
cx q[1], q[2];
cx q[0], q[1];
"""
    code_string = '''
def run_and_analyze(circuit, aer_sim):
    """Return the qubit indices of the prepared W state."""
    return list(range(circuit.num_qubits))
'''
    n = 3
    print(check_model(qasm_string, code_string, n))


if __name__ == "__main__":
    main()
