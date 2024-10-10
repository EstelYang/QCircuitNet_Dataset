from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=1).result()
    count = result.get_counts()

    message = list(count.keys())[0]
    return message
