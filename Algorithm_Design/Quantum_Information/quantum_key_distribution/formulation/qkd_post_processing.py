import numpy as np
from qiskit import transpile


def find_key(a_bases, b_bases, bits):
    key = []
    idx = []
    for i in range(len(a_bases)):
        if a_bases[i] == b_bases[i]:
            key.append(bits[i])
            idx.append(i)
    return key, idx


def sample_bits(bits, selection):
    sample = []
    for i in selection:
        i = np.mod(i, len(bits))
        sample.append(bits.pop(i))
    return sample


def run_and_analyze(circuit, text, aer_sim):

    alice_bits = text[0, :].tolist()
    alice_bases = text[1, :].tolist()
    bob_bases = text[2, :].tolist()

    n = len(alice_bits)

    # Use a quantum simulator to run the circuit
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=1).result()
    counts = result.get_counts()

    # Obtain the results for Bob
    bob_bit = list(counts.keys())[0]
    # Turn string bob_bit into a list of integers
    bob_bit = [int(i) for i in bob_bit]
    bob_bit.reverse()

    # Find the keys by comparing the bases
    alice_key, alice_idx = find_key(alice_bases, bob_bases, alice_bits)
    bob_key, bob_idx = find_key(alice_bases, bob_bases, bob_bit)

    # Sample bits to verify the keys
    sample_size = len(alice_key) // 2
    bit_selection = np.random.randint(n, size=sample_size)
    bob_sample = sample_bits(bob_key, bit_selection)
    alice_sample = sample_bits(alice_key, bit_selection)

    if alice_sample == bob_sample:
        return "Success", alice_key
    else:
        return "Fail", alice_key
