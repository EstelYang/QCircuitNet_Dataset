from qiskit import QuantumCircuit


def bell_pair_gate():
    circuit = QuantumCircuit(2)
    circuit.h(0)
    circuit.cx(0, 1)
    bell_gate = circuit.to_gate()
    bell_gate.name = "Bell_Pair"

    return bell_gate


def alice_gates(message):
    circuit = QuantumCircuit(1)

    if message[0] == "1":
        circuit.x(0)
    if message[1] == "1":
        circuit.z(0)

    circuit_gate = circuit.to_gate()
    circuit_gate.name = "Alice"

    return circuit_gate


def bob_gates():
    circuit = QuantumCircuit(2)

    circuit.cx(0, 1)
    circuit.h(0)

    circuit_gate = circuit.to_gate()
    circuit_gate.name = "Bob"

    return circuit_gate


def superdense_coding_circuit(message):
    """Generate the superdense coding circuit for the given message."""
    if not message in ["00", "01", "10", "11"]:
        raise ValueError(
            "Invalid message! Message must be one of ['00', '01', '10', '11']"
        )

    circuit = QuantumCircuit(2, 2)

    circuit.append(bell_pair_gate(), [0, 1])
    circuit.append(alice_gates(message), [0])
    circuit.append(bob_gates(), [0, 1])

    circuit.measure(range(2), range(2))

    return circuit
