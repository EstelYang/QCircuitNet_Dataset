from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    # Use a quantum simulator to run the circuit
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=1).result()
    count = result.get_counts()

    # Determine if the output is constant or balanced based on the measurement results
    key = list(count.keys())[0]
    if "1" in key:
        prediction = "balanced"
    else:
        prediction = "constant"

    return prediction
