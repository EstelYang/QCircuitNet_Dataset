from qiskit.qasm3 import loads
from qiskit import QuantumCircuit, transpile
from qiskit_aer import AerSimulator
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


def generate_random_strings(n, test_num=20):
    """Generates secret strings of length n as test cases."""
    num_strings = min(2 ** (n - 2), test_num)
    selected_strings = set()
    while len(selected_strings) < num_strings:
        selected_strings.add("".join(random.choice("01") for _ in range(n)))

    return list(selected_strings)


def check_model(qasm_string, n, s1, s2, key_str):
    oracle_circuit = verify_qasm_syntax(qasm_string)
    if oracle_circuit is None:
        return -1
    input_states = generate_random_strings(n)
    aer_sim = AerSimulator()
    try:
        total_shot = 10
        for x_str in input_states:
            x_int = int(x_str, 2)
            s1_int = int(s1, 2)
            s2_int = int(s2, 2)
            key_int = int(key_str, 2)

            correct_output_1 = bin(x_int ^ s1_int ^ key_int)[2:].zfill(len(x_str))
            correct_output_2 = bin(x_int ^ s2_int ^ key_int)[2:].zfill(len(x_str))


            print(
                f"    Input: {x_str}, Expected output: {correct_output_1} or {correct_output_2}"
            )

            circuit = QuantumCircuit(oracle_circuit.num_qubits, n)

            reversed_x_str = x_str[::-1]
            for qubit in range(n):
                if reversed_x_str[qubit] == "1":
                    circuit.x(qubit)

            circuit.append(oracle_circuit, range(oracle_circuit.num_qubits))
            circuit.measure(range(n, 2 * n), range(n))
            circ = transpile(circuit, aer_sim)
            result = aer_sim.run(circ, shots=total_shot).result()
            count = result.get_counts()
            output = list(count.keys())[0]
            if len(count) != 1 or output not in [str(correct_output_1), str(correct_output_2)]:
                print(f"        Error: counts: {count}")
                return 0
            else:
                print(f"        Success")
        return 1
    except Exception as e:
        print(f"Error: {e}")
        return -1



def main():
    #     qasm_string = """
    # OPENQASM 3.0;
    # include "stdgates.inc";
    # gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
    #   x _gate_q_0;
    #   x _gate_q_1;
    #   x _gate_q_3;
    #   cx _gate_q_0, _gate_q_7;
    #   cx _gate_q_1, _gate_q_7;
    #   cx _gate_q_2, _gate_q_7;
    #   cx _gate_q_3, _gate_q_7;
    #   cx _gate_q_4, _gate_q_7;
    #   cx _gate_q_5, _gate_q_7;
    #   cx _gate_q_6, _gate_q_7;
    #   x _gate_q_0;
    #   x _gate_q_1;
    #   x _gate_q_3;
    # }
    # qubit[8] q;
    # Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
    # """
    #     n = 7
    #     balance_type = "balanced"
    #     key_str = "0001011"
    qasm_string = """
OPENQASM 3;
include "stdgates.inc";
gate ccircuit_585 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  ccx _gate_q_0, _gate_q_1, _gate_q_6;
  ccx _gate_q_0, _gate_q_1, _gate_q_6;
  ccx _gate_q_0, _gate_q_2, _gate_q_7;
  ccx _gate_q_0, _gate_q_1, _gate_q_7;
  ccx _gate_q_0, _gate_q_3, _gate_q_8;
  ccx _gate_q_0, _gate_q_4, _gate_q_9;
  ccx _gate_q_0, _gate_q_5, _gate_q_10;
}
gate ccircuit_592 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  ccx _gate_q_0, _gate_q_1, _gate_q_6;
  ccx _gate_q_0, _gate_q_1, _gate_q_6;
  ccx _gate_q_0, _gate_q_2, _gate_q_7;
  ccx _gate_q_0, _gate_q_1, _gate_q_7;
  ccx _gate_q_0, _gate_q_3, _gate_q_8;
  ccx _gate_q_0, _gate_q_4, _gate_q_9;
  ccx _gate_q_0, _gate_q_5, _gate_q_10;
  ccx _gate_q_0, _gate_q_1, _gate_q_10;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  ccircuit_585 _gate_q_10, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9;
  x _gate_q_10;
  ccircuit_592 _gate_q_10, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9;
  x _gate_q_5;
  x _gate_q_6;
  x _gate_q_7;
}
qubit[11] q;
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10];
"""
    n = 5
    s1 = "00011"
    s2 = "10011"
    key_str = "00111"
    print(check_model(qasm_string, n, s1, s2, key_str))


if __name__ == "__main__":
    main()
