from bv_utils import *


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
        for t in range(1, 1 + t_range):
            print(f"    Running Test Case {t}")
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            full_qasm = plug_in_oracle(qasm_string, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                content = file.read()
            match = re.search(r"Secret string: ([01]+)", content)
            if match:
                secret_string = match.group(1)
            else:
                raise ValueError("Secret string not found in the file.")

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                prediction = run_and_analyze(circuit.copy(), aer_sim)
                if not isinstance(prediction, str):
                    raise TypeError("Predicted secret string should be a string.")
                if prediction == secret_string:
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
OPENQASM 3.0;\ninclude "stdgates.inc";\ninclude "oracle.inc";\nbit[9] sec;\nqubit[10] xa;\nqubit[11] ya;\nh xa[0];\nh xa[1];\nh xa[2];\nh xa[3];\nh xa[4];\nh xa[5];\nh xa[6];\nh xa[7];\nh xa[8];\nOracle xa[0], xa[1], xa[2], xa[3], xa[4], xa[5], xa[6], xa[7], xa[8], ya;\nh xa[0];\nh xa[1];\nh xa[2];\nh xa[3];\nh xa[4];\nh xa[5];\nh xa[6];\nh xa[7];\nh xa[8];\nmeasure xa[0] -> sec[0];\nmeasure xa[1] -> sec[1];\nmeasure xa[2] -> sec[2];\nmeasure xa[3] -> sec[3];\nmeasure xa[4] -> sec[4];\nmeasure xa[5] -> sec[5];\nmeasure xa[6] -> sec[6];\nmeasure xa[7] -> sec[7];\nmeasure xa[8] -> sec[8];\n"""
    code_string = '''
from qiskit import transpile\n\n\ndef run_and_analyze(circuit, aer_sim):\n    """Run the circuit on a quantum simulator and derive the secret string s from measurement results."""\n    # Use a quantum simulator to run the circuit\n    circ = transpile(circuit, aer_sim)\n    result = aer_sim.run(circ, shots=1).result()\n    count = result.get_counts()\n\n    # Extract the secret string s from the measurement results\n    s = ""\n    for i in range(9):\n        key = list(count.keys())[0]\n        s += key[8-i]\n\n    return s\n
'''
    n = 9

    print(check_model(qasm_string, code_string, n))


if __name__ == "__main__":
    main()
