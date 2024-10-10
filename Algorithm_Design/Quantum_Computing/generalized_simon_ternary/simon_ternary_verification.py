from simon_ternary_utils import *


def remove_space_between_cu_and_parenthesis(qasm_code):
    """
    Remove spaces between 'cu_{n}' and '('.
    """
    pattern = re.compile(r'(cu_\d+)\s+\(')
    modified_qasm = pattern.sub(r'\1(', qasm_code)
    return modified_qasm


def remove_header(qasm_code):
    """Remove the first two lines (OPENQASM 3; and include "stdgates.inc";) from the QASM code."""
    lines = qasm_code.splitlines()
    # Remove the first two lines if they exist
    if lines[0].startswith("OPENQASM") and lines[1].startswith("include"):
        return "\n".join(lines[2:])
    return qasm_code


def check_model(qasm_string, code_string, n):
    """Check the Simon model."""
    # Verify the syntax of the QASM code with the first test case oracle
    t = 1
    with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
        oracle_def = file.read()
    oracle_def = remove_header(oracle_def)
    oracle_def = remove_space_between_cu_and_parenthesis(oracle_def)
    full_qasm = plug_in_oracle(qasm_string, oracle_def)
    circuit = verify_qasm_syntax(full_qasm)
    import pdb
    pdb.set_trace()
    if circuit is None:
        return -1
    try:
        exec(code_string, globals())
        aer_sim = AerSimulator()
        total_success = 0
        total_fail = 0
        t_range = min(10, 4 ** (n - 2))
        shots = 10
        for t in range(1, 1 + t_range):
            print(f"    Running Test Case {t}")
            with open(f"test_oracle/n{n}/trial{t}/oracle.inc", "r") as file:
                oracle_def = file.read()
            oracle_def = remove_header(oracle_def)
            oracle_def = remove_space_between_cu_and_parenthesis(oracle_def)
            full_qasm = plug_in_oracle(qasm_string, oracle_def)
            circuit = loads(full_qasm)
            with open(f"test_oracle/n{n}/trial{t}/oracle_info.txt", "r") as file:
                content = file.read()
            match = re.search(r"Secret string: ([012]+)", content)
            if match:
                secret_string = match.group(1)
            else:
                raise ValueError("Secret string not found in the file.")

            cnt_success = 0
            cnt_fail = 0
            for shot in range(shots):
                # import pdb
                # pdb.set_trace()
                prediction = run_and_analyze(circuit.copy(), aer_sim)

                n = len(secret_string)
                equivalents = set()
                equivalents.add(secret_string)
                rotated_string = ''.join(
                    str((int(secret_string[i]) + int(secret_string[i])) % 3) for i in range(len(secret_string)))
                equivalents.add(rotated_string)

                if not isinstance(prediction, str):
                    raise TypeError("Predicted secret string should be a string.")
                if prediction in equivalents:
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
    qasm_string = '''
   OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";

// Define classical and quantum registers
bit[8] c;         // 8 classical bits to store the measurement results
qubit[8] q_input; // 8 qubits for the input representing 4 trits
qubit[5] q_output; // 5 qubits for the output

// Apply Hadamard gates on the input qubits to create a superposition
h q_input[0];
h q_input[1];
h q_input[2];
h q_input[3];
h q_input[4];
h q_input[5];
h q_input[6];
h q_input[7];

// Apply the oracle, which acts on both input and output qubits
Oracle q_input[0], q_input[1], q_input[2], q_input[3], q_input[4], q_input[5], q_input[6], q_input[7], q_output[0], q_output[1], q_output[2], q_output[3], q_output[4];

// Apply Hadamard gates on the input qubits again
h q_input[0];
h q_input[1];
h q_input[2];
h q_input[3];
h q_input[4];
h q_input[5];
h q_input[6];
h q_input[7];

// Measure input qubits to extract information about the secret string s
c[0] = measure q_input[0];
c[1] = measure q_input[1];
c[2] = measure q_input[2];
c[3] = measure q_input[3];
c[4] = measure q_input[4];
c[5] = measure q_input[5];
c[6] = measure q_input[6];
c[7] = measure q_input[7];
    '''
    code_string = '''
from qiskit import Aer, QuantumCircuit, transpile, assemble
from qiskit.visualization import plot_histogram

def run_and_analyze(circuit, aer_sim):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    # Transpile the circuit for the simulator backend
    circ = transpile(circuit, aer_sim)
    
    # Run the circuit on the simulator with multiple shots for reliability
    qobj = assemble(circ, shots=1024)
    result = aer_sim.run(qobj).result()
    
    # Get measurement counts
    counts = result.get_counts()
    
    # Analyze results to find the secret string s
    # Here we use the most frequent outcome as a rough heuristic
    prediction = max(counts, key=counts.get)
    
    # Convert the bitstring to ternary representation
    s_trits = [int(prediction[i:i+2], 2) for i in range(0, len(prediction), 2)]
    
    # Convert the ternary trits to a string format
    s_string = ''.join(map(str, s_trits))
    
    return s_string

# Create the Aer simulator
aer_sim = Aer.get_backend('aer_simulator')

# Assuming you have constructed a Qiskit QuantumCircuit named 'qc'
# You need to build 'qc' similarly to how it's described in QASM above
# For example:
qc = QuantumCircuit(13)  # 8 input qubits + 5 output qubits

# Run the simulation and analyze the results
secret_string = run_and_analyze(qc, aer_sim)
print(f"The secret string s is: {secret_string}")

'''

    n = 4
    print(check_model(qasm_string, code_string, n))


if __name__ == "__main__":
    main()
