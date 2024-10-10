from qiskit import QuantumCircuit


def diffusion_operator(n):
    """Create the diffusion operator for n qubits."""
    diffuser = QuantumCircuit(n)
    diffuser.h(range(n))
    diffuser.x(range(n))

    diffuser.h(n - 1)
    diffuser.mcx(list(range(n - 1)), n - 1)
    diffuser.h(n - 1)

    diffuser.x(range(n))
    diffuser.h(range(n))

    diffuser_gate = diffuser.to_gate()
    diffuser_gate.name = "Diffuser"
    return diffuser_gate
