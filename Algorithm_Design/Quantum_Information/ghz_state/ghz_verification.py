from ghz_utils import *


def check_model(qasm_string, code_string, n):
    """Check the model output for the GHZ state."""
    circuit = verify_qasm_syntax(qasm_string)
    if circuit is None:
        return -1
    try:
        exec(code_string, globals())
        aer_sim = AerSimulator(method="statevector")
        qubit_indices = run_and_analyze(circuit, aer_sim)
        for i in qubit_indices:
            if i >= circuit.num_qubits:
                print("The qubit index is out of range.")
                return -1
        return float(verify_result_matrix(circuit, n, qubit_indices))
    except Exception as e:
        print(f"Error: {e}")
        return -1


def main():
    qasm_string = """
OPENQASM 3.0;\ninclude "stdgates.inc";\nqubit[7] q;\nh q[0];\ncx q[0], q[1];\ncx q[1], q[2];\ncx q[2], q[3];\ncx q[3], q[4];\ncx q[4], q[5];\ncx q[5], q[6];\n
"""
    code_string = '''
def run_and_analyze(circuit, aer_sim):\n
    """Run the circuit and analyze the result."""\n
    qubit_indices = []\n
    for i in range(circuit.num_qubits):\n
        if circuit.data[i][0].name == \'h\':\n
            qubit_indices.append(i)\n
    return qubit_indices\n
'''
    n = 7
    print(check_model(qasm_string, code_string, n))


if __name__ == "__main__":
    main()
