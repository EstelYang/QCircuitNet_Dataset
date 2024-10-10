from qiskit_aer import AerSimulator
from qiskit.qasm3 import loads
from scipy.stats import chisquare, entropy
import numpy as np

# import argparse


def frequency_test(data, bit_length):
    # Count occurrences of each possible outcome
    num_outcomes = 2**bit_length
    observed_counts = [0] * num_outcomes

    for number in data:
        index = int(number, 2)  # Convert binary to integer
        observed_counts[index] += 1

    # Expected count for each number if perfectly uniform
    expected_count = len(data) / num_outcomes
    expected_counts = [expected_count] * num_outcomes

    # Chi-squared test
    chi2_stat, p_value = chisquare(observed_counts, expected_counts)
    return chi2_stat, p_value


def autocorrelation_test(data):
    values = np.array([int(number, 2) for number in data])
    mean = np.mean(values)
    autocorr = np.correlate(values - mean, values - mean, mode="full")
    mid = len(autocorr) // 2
    autocorr = autocorr[mid:]
    autocorr /= autocorr[0]  # Normalize
    return autocorr[1]


def entropy_test(data):
    # Count occurrences to compute probabilities
    values, counts = np.unique(data, return_counts=True)
    probabilities = counts / counts.sum()
    return entropy(probabilities, base=2)


def print_and_save(message, text):
    print(message)
    text.append(message)


def verify_qasm_syntax(output):
    """Verify the syntax of the output and return the corresponding QuantumCircuit (if it is valid)."""
    assert isinstance(output, str)
    try:
        # Parse the OpenQASM 3.0 code
        circuit = loads(output)
        print(
            "    The OpenQASM 3.0 code is valid and has been successfully loaded as a QuantumCircuit."
        )
        return circuit
    except Exception as e:
        print(f"    Error: The OpenQASM 3.0 code is not valid. Details: {e}")
        return None
