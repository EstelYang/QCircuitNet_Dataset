from qiskit import QuantumCircuit


def alice_message(circuit, bases, bits, n):
    for i in range(n):
        if bases[i] == 0:  # Prepare qubit in Z-basis
            if bits[i] == 0:
                pass
            else:
                circuit.x(i)
        else:  # Prepare qubit in X-basis
            if bits[i] == 0:
                circuit.h(i)
            else:
                circuit.x(i)
                circuit.h(i)


def bob_measure(circuit, bases, n):
    for i in range(n):
        if bases[i] == 0:  # measuring in Z-basis
            circuit.measure(i, i)
        if bases[i] == 1:  # measuring in X-basis
            circuit.h(i)
            circuit.measure(i, i)
    return circuit


def qkd_circuit(alice_bits, alice_bases, bob_bases, n, eve_gate):
    circuit = QuantumCircuit(n, n)
    alice_message(circuit, alice_bases, alice_bits, n)
    circuit.append(eve_gate, range(n))
    bob_measure(circuit, bob_bases, n)
    return circuit
