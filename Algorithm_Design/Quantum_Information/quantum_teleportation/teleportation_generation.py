from qiskit import QuantumCircuit


def bell_pair_gate():
    """Create a Bell pair gate."""
    circuit = QuantumCircuit(2)
    circuit.h(0)
    circuit.cx(0, 1)

    bell_pair = circuit.to_gate()
    bell_pair.name = "Bell_Pair"
    return bell_pair


def alice_gates():
    """Create the Alice gates."""
    circuit = QuantumCircuit(2)
    circuit.cx(0, 1)
    circuit.h(0)

    alice = circuit.to_gate()
    alice.name = "Alice"
    return alice


def bob(circuit, q2, crz, crx):
    circuit.x(q2).c_if(crx, 1)
    circuit.z(q2).c_if(crz, 1)


def quantum_teleportation_circuit(psi_gate):
    """Create a quantum teleportation circuit."""
    circuit = QuantumCircuit(3, 2)

    # Initialize the state to teleport
    circuit.append(psi_gate, [0])

    # Create the Bell pair
    circuit.append(bell_pair_gate(), [1, 2])

    # Alice gates
    circuit.append(alice_gates(), [0, 1])

    # Measure and send the classical bits
    circuit.measure(0, 0)
    circuit.measure(1, 1)

    # Bob gates
    crz = 0
    crx = 1
    bob(circuit, 2, crz, crx)

    return circuit
