from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    """Run the circuit and analyze the result."""
    shots = 1e4
    n = (circuit.num_qubits - 1) // 2
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=shots).result()
    counts = result.get_counts()
    overlap = 0
    if "0" in counts.keys():
        overlap = (counts["0"] / shots) * 2 - 1
    overlap = max(overlap, 0)
    return float(overlap)
