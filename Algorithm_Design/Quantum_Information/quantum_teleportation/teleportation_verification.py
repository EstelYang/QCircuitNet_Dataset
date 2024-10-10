from teleportation_utils import *


def check_model(qasm_string, code_string):
    """Check the model output for the Quantum Teleportation."""
    # Verify the syntax of the QASM code with the first test case oracle
    t = 1
    with open(f"test_oracle/trial{t}/oracle.inc", "r") as file:
        oracle_def = file.read()
    full_qasm = plug_in_oracle(qasm_string, oracle_def)
    circuit = verify_qasm_syntax(full_qasm)
    if circuit is None:
        return -1
    try:
        exec(code_string, globals())
        aer_sim = AerSimulator(method="statevector")
        total_success = 0
        total_fail = 0
        t_range = 10
        shots = 10
        tol = 15e-3
        for t in range(1, 1 + t_range):
            print(f"    Running Test Case {t}")
            with open(f"test_oracle/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_string, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/trial{t}/state_info.txt", "r") as f:
                content = f.read()
            vector_name = "psi"
            match = re.search(
                rf"{vector_name}: Statevector\(\[([^\]]+)\],\s*dims=\(([^\)]+)\)\)",
                content,
            )
            if match:
                vector_str = match.group(1)
                dims_str = match.group(2)
                vector = eval(f"[{vector_str}]")
                dims = eval(f"({dims_str})")
                target_state = Statevector(vector, dims=dims)
            else:
                raise ValueError("Statevector information not found in the file.")

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                qubit_indices = run_and_analyze(circuit.copy(), aer_sim)
                flag = verify_result_matrix(circuit, target_state, qubit_indices, tol)
                if flag:
                    cnt_success += 1
                else:
                    cnt_fail += 1
            print(f"    Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}")
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
gate Bell_Pair _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
}
gate Alice _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  h _gate_q_0;
}
bit[2] c;
qubit[3] q;
Psi q[0];
Bell_Pair q[1], q[2];
Alice q[0], q[1];
c[0] = measure q[0];
c[1] = measure q[1];
if (c[1]) {
  x q[2];
}
if (c[0]) {
  z q[2];
}
"""
    code_string = '''
def run_and_analyze(circuit, aer_sim):
    """Return the qubit indices of the teleported state."""
    return [2]
'''
    print(check_model(qasm_string, code_string))


if __name__ == "__main__":
    main()
