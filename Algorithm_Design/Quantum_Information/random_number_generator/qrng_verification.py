from qrng_utils import *


def check_model(qasm_string, code_string, n):
    """Check the model output for the QRNG."""
    circuit = verify_qasm_syntax(qasm_string)
    if circuit is None:
        return -1
    try:
        exec(code_string, globals())
        aer_sim = AerSimulator()
        times = 5
        trials = 2**n * times
        data = []
        for _ in range(trials):
            data.append(run_and_analyze(circuit, aer_sim))
        # print_and_save(f"      Data: {data}", text)
        chi2_stat, chi2_p = frequency_test(data, n)
        auto_corr = autocorrelation_test(data)
        entropy_val = entropy_test(data)
        print(f"    Chi-Squared Test: Statistic={chi2_stat}, P-value={chi2_p}")
        print(f"    Autocorrelation Coefficient: {auto_corr}")
        print(f"    Entropy: {entropy_val} bits")

        chi2_score = chi2_p
        autocorr_score = min(1, max(0, 1 - abs(auto_corr)))
        entropy_score = min(1, max(0, entropy_val / (n - 1)))

        rng_valid = chi2_score / 3 + autocorr_score / 3 + entropy_score / 3
        return rng_valid

    except Exception as e:
        print(f"Error: {e}")
        return -1


def main():
    qasm_string = """
OPENQASM 3.0;
include "stdgates.inc";
bit[14] c;
qubit[14] q;
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
h q[6];
h q[7];
h q[8];
h q[9];
h q[10];
h q[11];
h q[12];
h q[13];
c[0] = measure q[0];
c[1] = measure q[1];
c[2] = measure q[2];
c[3] = measure q[3];
c[4] = measure q[4];
c[5] = measure q[5];
c[6] = measure q[6];
c[7] = measure q[7];
c[8] = measure q[8];
c[9] = measure q[9];
c[10] = measure q[10];
c[11] = measure q[11];
c[12] = measure q[12];
c[13] = measure q[13];
"""
    code_string = '''
from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    # Use a quantum simulator to run the circuit
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=1).result()
    count = result.get_counts()

    # The result is a random number
    random_number = list(count.keys())[0]
    return random_number
'''
    n = 14
    print(check_model(qasm_string, code_string, n))


if __name__ == "__main__":
    main()
