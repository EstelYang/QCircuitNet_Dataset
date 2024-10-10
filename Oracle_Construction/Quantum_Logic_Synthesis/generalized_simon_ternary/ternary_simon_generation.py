from qiskit import QuantumCircuit, QuantumRegister
from qiskit.circuit.library import XGate
import math


def simon_oracle_3d(n, secret_string, key_string):
    """Creates a Ternary Simon oracle for the given secret string s"""

    def find_ternary_cycles(n, secret_string):

        def generate_ternary_numbers(qudits_num):

            if qudits_num == 0:
                return [""]
            smaller = generate_ternary_numbers(qudits_num - 1)
            return [x + y for x in smaller for y in "012"]

        def add_ternary(t1, t2):

            return ''.join(str((int(t1[i]) + int(t2[i])) % 3) for i in range(len(t1)))

        def find_cycle(start, secret_string):

            current = start
            ternary_cycle = []
            seen_cycles = set()
            while current not in seen_cycles:
                seen_cycles.add(current)
                ternary_cycle.append(current)
                current = add_ternary(current, secret_string)
            return ternary_cycle

        # Generate all n-digit ternary numbers
        ternary_numbers = generate_ternary_numbers(n)

        # Initialize the list of cycles and a set to track seen numbers
        cycles = []
        seen = set()

        # Iterate over all ternary numbers and find the cycle for each unseen number
        for number in ternary_numbers:
            if number not in seen:
                cycle = find_cycle(number, secret_string)
                cycles.append(cycle)
                seen.update(cycle)

        return cycles

    cycles = find_ternary_cycles(n, secret_string)

    # Define the quantum registers: 2n for the Simon problem, fewer qubits for the compressed encoding
    qr1 = QuantumRegister(2 * n)
    qr2 = QuantumRegister(math.ceil(math.log2(len(cycles))))
    oracle = QuantumCircuit(qr1, qr2)

    base_gate = XGate()

    for cycle_idx, cycle in enumerate(cycles):
        binary_idx = format(cycle_idx, f'0{math.ceil(math.log2(len(cycles)))}b')  # Binary encoding of the cycle index
        for number in cycle:
            ctrl_states = ''.join(format(int(digit), '02b') for digit in number)
            # For each bit in the binary index, add control logic to the corresponding ancilla qubit
            for bit_pos, bit in enumerate(binary_idx):
                if bit == '1':
                    cgate = base_gate.control(num_ctrl_qubits=len(ctrl_states), ctrl_state=ctrl_states)
                    oracle.append(cgate, qr1[:len(ctrl_states)] + [qr2[bit_pos]])

    for qubit in range(2 * n, math.ceil(math.log2(len(cycles)))):
        key_string2 = ''.join(format(int(digit), '02b') for digit in key_string)
        if key_string2[qubit - n] == "1":
            oracle.x(qubit)

    oracle_gate = oracle.to_gate()
    oracle_gate.name = "Oracle"

    return oracle_gate