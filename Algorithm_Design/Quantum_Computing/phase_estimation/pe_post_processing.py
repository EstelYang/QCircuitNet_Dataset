from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    # Use a quantum simulator to run the circuit
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=1).result()
    count = result.get_counts()

    # The key is the solution to the problem
    y = list(count.keys())[0]
    n = len(y)
    y = int(y, 2)
    prediction = y / (2**n)
    return prediction
