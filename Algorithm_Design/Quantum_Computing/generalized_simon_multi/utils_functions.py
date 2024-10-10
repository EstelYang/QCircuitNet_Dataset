import math
import re
import numpy as np


def cal_qubits_multi(qubits_num) -> (int, int, int):
    n = qubits_num
    n_i = n
    n_o = n
    n_t = n_i + n_o + 1
    return n_i, n_o, n_t


def strip_head_and_tail(code_str) -> str:
    code_string = code_str

    # Remove the header
    code_string = re.sub(r'(?m)^(from\s+qiskit(\.\w+)*\s+import\s+.*|import\s+qiskit(\.\w+)*)\n*', '', code_string)

    # Remove the tail
    code_string = re.sub(r'(?s)# Example usage.*', '', code_string)
    return code_string


