from qiskit import QuantumCircuit
from qiskit.circuit.library import MCMT, ZGate


def create_oracle(n, marked_state):
    """Create an oracle for marked state m.
    This is modified from qiskit learning"""

    oracle = QuantumCircuit(n)
    # Flip target bit-string to match Qiskit bit-ordering
    rev_target = marked_state[::-1]
    # Find the indices of all the '0' elements in bit-string
    zero_inds = [ind for ind, char in enumerate(rev_target) if char == "0"]

    # Add a multi-controlled Z-gate with pre- and post-applied X-gates (open-controls)
    # where the target bit-string has a '0' entry
    if zero_inds:
        oracle.x(zero_inds)
    oracle.compose(MCMT(ZGate(), n - 1, 1), inplace=True)
    if zero_inds:
        oracle.x(zero_inds)

    oracle_gate = oracle.to_gate()
    oracle_gate.name = "Oracle"
    return oracle_gate
