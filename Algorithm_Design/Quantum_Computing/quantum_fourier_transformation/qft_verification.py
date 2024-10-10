from qft_utils import *


def check_model(qasm_string, code_string, n):
    """Check the Bernstein-Vazirani model."""
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
        eps = 1e-3
        for t in range(1, 1 + t_range):
            print(f"    Running Test Case {t}")
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_string, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                content = file.read()
            match = re.search(r"Input x: ([01]+)", content)
            if match:
                x_string = match.group(1)
            else:
                raise ValueError("Secret string not found in the file.")

            x_num = int(x_string, 2)
            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                qubit_indices = run_and_analyze(circuit.copy(), aer_sim)
                flag = verify_result_matrix(circuit, n, x_num, qubit_indices, eps)
                # flag = verify_result_vector(circuit, n, x_num, eps)
                if flag:
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
OPENQASM 3.0;\ninclude "stdgates.inc";\ninclude "oracle.inc";\nqubit[8] q;\nPsi q[0], q[1], q[2], q[3];\nPhi q[4], q[5], q[6], q[7];\nh q[0];\nh q[1];\nh q[2];\nh q[3];\nh q[4];\nh q[5];\nh q[6];\nh q[7];\ncx q[0], q[4];\ncx q[1], q[5];\ncx q[2], q[6];\ncx q[3], q[7];\nh q[0];\nh q[1];\nh q[2];\nh q[3];\nh q[4];\nh q[5];\nh q[6];\nh q[7];\ncx q[0], q[4];\ncx q[1], q[5];\ncx q[2], q[6];\ncx q[3], q[7];\nh q[0];\nh q[1];\nh q[2];\nh q[3];\nh q[4];\nh q[5];\nh q[6];\nh q[7];\n
"""

    code_string = """
from qiskit import transpile\n\n\ndef run_and_analyze(circuit, aer_sim):\n    n = circuit.num_qubits // 2\n    circ = transpile(circuit, aer_sim)\n    results = aer_sim.run(circ, shots=1).result()\n    psi_phi = results.get_counts().popitem()[0]\n    psi = psi_phi[:n]\n    phi = psi_phi[n:]\n    similarity = abs(sum([int(psi[i]) * int(phi[i]) for i in range(n)]) / 2 ** n) ** 2\n    return similarity\n
"""
    n = 4
    print(check_model(qasm_string, code_string, n))


if __name__ == "__main__":
    main()
