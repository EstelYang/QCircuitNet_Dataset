import math
import re
import numpy as np


def cal_qubits(qutrits) -> (int, int, int):
    n = qutrits
    n_i = n * 2
    n_o = int(np.ceil(math.log2(3 ** n / 3)))
    n_t = n_i + n_o
    return n_i, n_o, n_t


def strip_head_and_tail(code_str) -> str:
    code_string = code_str

    # Remove the header
    code_string = re.sub(r'(?m)^(from\s+qiskit(\.\w+)*\s+import\s+.*|import\s+qiskit(\.\w+)*)\n*', '', code_string)

    # Remove the tail
    code_string = re.sub(r'(?s)# Example usage.*', '', code_string)
    return code_string


