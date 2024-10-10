import os
def generate_dataset_json():
    """Generates a JSON dataset for the Diffusion Operator.
    Format: {"prompt": description, "completion": circuit}

    """
    with open("diffusion_operator/diffusion_description.txt", "r") as f:
        template = f.read()
    DATA = []
    for n in range(2, 15):
        filename = f"diffusion_operator/diffusion_operator_n{n}/diffusion_n{n}.qasm"
        with open(filename, "r") as f:
            completion = f.read()
        prompt = template.replace("$\{qubit number\}", f"{n}$").replace("\{QASM / Qiskit\}", "QASM")
        dic = {"prompt": prompt, "completion": f"```qasm\n{completion}```"}
        DATA.append(dic)
    return DATA