import os
from qiskit.qasm3 import load
from qiskit_aer import AerSimulator
from qkd_post_processing import *


def print_and_save(message, file):
    print(message)
    file.write(message + "\n")


def main():

    shots = 100
    test_num = 0
    aer_sim = AerSimulator()

    total_success = 0
    total_fail = 0

    with open("qkd_verification.txt", "w") as file:
        # Simulator cannot support large n
        # for n in range(100, 201, 50):
        for n in range(20, 21):
            directory = f"qkd_n{n}"
            print_and_save(
                f"Verifying Quantum Key Distribution algorithm for n={n}", file
            )

            for filename in os.listdir(directory):
                if filename.endswith(".qasm"):
                    test_num += 1
                    print_and_save(f"Test {test_num}: running {filename}", file)
                    cnt_success = 0
                    cnt_fail = 0
                    txt_filename = filename.replace(".qasm", ".txt")
                    text = np.loadtxt(os.path.join(directory, txt_filename), dtype=int)
                    intercept = filename.split(".")[0].split("_")[-1] == "True"
                    for shot in range(shots):
                        circuit = load(os.path.join(directory, filename))
                        result, key = run_and_analyze(circuit, text, aer_sim)
                        if result == "Success":
                            judge = False
                        else:
                            judge = True
                        if judge == intercept:
                            cnt_success += 1
                        else:
                            cnt_fail += 1
                    total_success += cnt_success
                    total_fail += cnt_fail
                    print_and_save(
                        f"    Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}",
                        file,
                    )
            print_and_save("", file)
        print_and_save(
            f"Total Success: {total_success}/{total_success+total_fail}", file
        )


if __name__ == "__main__":
    main()
