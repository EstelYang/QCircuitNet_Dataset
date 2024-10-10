import os
def generate_dataset_json():
    """Generates a JSON dataset for the Bernstein-Vazirani oracle.
    Format: {"prompt": description, "completion": circuit}

    """
    with open("bernstein_vazirani/bv_description.txt", "r") as f:
        template = f.read()
    DATA = []
    for n in range(2, 15):
        directory = f"bernstein_vazirani/bernstein_vazirani_n{n}"
        for filename in os.listdir(directory):
            with open(os.path.join(directory, filename), "r") as f:
                completion = f.read()
            secret_string = filename.split("_")[2].split(".")[0]
            prompt = template.replace("$\{qubit number\}", f"{n}$").replace("$\{secret string\}", f"{secret_string}$").replace("\{QASM / Qiskit\}", "QASM")
            dic = {"prompt": prompt, "completion": f"```qasm\n{completion}```"}
            DATA.append(dic)
    return DATA