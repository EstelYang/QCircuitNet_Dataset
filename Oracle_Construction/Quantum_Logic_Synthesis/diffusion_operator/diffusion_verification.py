from qiskit.qasm3 import loads
from qiskit import QuantumCircuit, transpile
from qiskit_aer import AerSimulator
from qiskit.quantum_info import Statevector
import numpy as np
import random


def verify_qasm_syntax(output):
    """Verify the syntax of the output and return the corresponding QuantumCircuit (if it is valid)."""
    assert isinstance(output, str)
    try:
        # Parse the OpenQASM 3.0 code
        circuit = loads(output)
        print(
            "    The OpenQASM 3.0 code is valid and has been successfully loaded as a QuantumCircuit."
        )
        return circuit
    except Exception as e:
        print(f"    Error: The OpenQASM 3.0 code is not valid. Details: {e}")
        return None


def plug_in_oracle(qasm_code, oracle_def):
    """Plug-in the oracle definition into the QASM code."""
    oracle_pos = qasm_code.find('include "customgates.inc";')
    if oracle_pos == -1:
        raise ValueError("Customgates include statement not found in the file")
    full_qasm = (
        qasm_code[:oracle_pos]
        + oracle_def
        + qasm_code[oracle_pos + len('include "customgates.inc";') :]
    )
    return full_qasm


def generate_random_strings(n, test_num=20):
    """Generates secret strings of length n as test cases."""
    num_strings = min(2 ** (n - 2), test_num)
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def goal_state_vector(n, x_str):
    """Return the goal statevector for the transformed state."""
    goal_state = np.ones(2**n) / (2 ** (n - 1))
    x_int = int(x_str, 2)
    goal_state[x_int] -= 1
    return Statevector(goal_state)


def check_model(qasm_string, n):
    with open(f"diffusion_operator_n{n}/customgates.inc", "r") as file:
        oracle_def = file.read()
    full_qasm = plug_in_oracle(qasm_string, oracle_def)
    oracle_circuit = verify_qasm_syntax(full_qasm)
    if oracle_circuit is None:
        return -1
    input_states = generate_random_strings(n)
    aer_sim = AerSimulator(method="statevector")

    try:
        total_shot = 10
        eps = 1e-3
        for x_str in input_states:
            goal_state = goal_state_vector(n, x_str)
            print(f"    Input: {x_str}, Expected output: {goal_state.data}")

            circuit = QuantumCircuit(oracle_circuit.num_qubits, n)
            reversed_x_str = x_str[::-1]
            for qubit in range(n):
                if reversed_x_str[qubit] == "1":
                    circuit.x(qubit)
            circuit.append(oracle_circuit, range(oracle_circuit.num_qubits))
            circuit.save_statevector()
            circ = transpile(circuit, aer_sim)

            for shot in range(total_shot):
                result = aer_sim.run(circ, shots=1).result()
                statevector = result.get_statevector(circ)
                if not statevector.equiv(goal_state):
                    print(f"        Error: Output: {statevector.data}")
                    return 0
            print(f"        Success")

        return 1
    except Exception as e:
        print(f"Error: {e}")
        return -1


def main():
    qasm_string = """
OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";
gate Diffuser _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  h _gate_q_0;
  h _gate_q_1;
  h _gate_q_2;
  h _gate_q_3;
  h _gate_q_4;
  h _gate_q_5;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
  h _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
  h _gate_q_5;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
  h _gate_q_0;
  h _gate_q_1;
  h _gate_q_2;
  h _gate_q_3;
  h _gate_q_4;
  h _gate_q_5;
}
qubit[6] q;
Diffuser q[0], q[1], q[2], q[3], q[4], q[5];

"""
    n = 6
    print(check_model(qasm_string, n))


if __name__ == "__main__":
    main()
