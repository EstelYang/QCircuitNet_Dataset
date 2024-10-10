import numpy as np
from qiskit import QuantumCircuit
from qiskit.qasm3 import dump
from qiskit_aer import AerSimulator
import os


def eve_oracle(circuit, n, intercept):
    oracle = QuantumCircuit(n)

    if intercept == True:
        eve_bases = np.random.randint(2, size=n)
        for i in range(n):
            if eve_bases[i] == 0:  # measuring in Z-basis
                circuit.measure(i, i)
            if eve_bases[i] == 1:  # measuring in X-basis
                circuit.h(i)
                circuit.measure(i, i)

    oracle_gate = oracle.to_gate()
    oracle_gate.name = "Eve_Oracle"

    return oracle_gate


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


def bb84_circuit(alice_bits, alice_bases, bob_bases, n, intercept):
    circuit = QuantumCircuit(n, n)
    alice_message(circuit, alice_bases, alice_bits, n)
    eve_gate = eve_oracle(circuit, n, intercept)
    # eve_gate.draw()
    circuit.append(eve_gate, range(n))
    bob_measure(circuit, bob_bases, n)
    return circuit


def save_qasm(circuit, directory, filename):
    if not os.path.exists(directory):
        os.makedirs(directory)

    with open(f"{directory}/{filename}", "w") as file:
        dump(circuit, file)


def save_text(alice_bits, alice_bases, bob_bases, directory, filename):
    if not os.path.exists(directory):
        os.makedirs(directory)

    combined_array = np.vstack((alice_bits, alice_bases, bob_bases))
    # Save the combined array to a text file
    np.savetxt(f"{directory}/{filename}", combined_array, fmt="%d")


def main():
    # for n in range(100, 433):
    for n in range(21, 433):
        directory = f"qkd_n{n}"
        for trial in range(10):
            alice_bits = np.random.randint(2, size=n)
            alice_bases = np.random.randint(2, size=n)
            bob_bases = np.random.randint(2, size=n)
            for intercept in [False, True]:
                circuit = bb84_circuit(alice_bits, alice_bases, bob_bases, n, intercept)
                qasm_file_name = f"qkd_n{n}_trial{trial + 1}_{intercept}.qasm"
                save_qasm(circuit, directory, qasm_file_name)
                text_file_name = f"qkd_n{n}_trial{trial + 1}_{intercept}.txt"
                save_text(
                    alice_bits,
                    alice_bases,
                    bob_bases,
                    directory,
                    text_file_name,
                )


if __name__ == "__main__":
    main()
