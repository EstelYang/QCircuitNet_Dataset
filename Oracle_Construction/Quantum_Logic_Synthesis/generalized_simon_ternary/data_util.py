import os
def generate_dataset_json():
    """Generates a JSON dataset for the simon oracle.
    Format: {"prompt": description, "completion": circuit}

    """
    with open("simon/simon_description.txt", "r") as f:
        template = f.read()
    DATA = []
    for n in range(2, 15):
        directory = f"simon/simon_n{n}"
        for secret in os.listdir(directory):
            current_dir = os.path.join(directory, secret)
            secret_string = secret[1:]
            for key in os.listdir(current_dir):
                key_string = key.split('_')[3].split('.')[0][1:]
                with open(os.path.join(current_dir, key), "r") as f:
                    completion = f.read()
            prompt = template.replace("$\{qubit number\}", f"{n}$").replace("$\{key string\}", f"{key_string}$").replace("$\{secret string\}", f"{secret_string}$").replace("\{QASM / Qiskit\}", "QASM")
            dic = {"prompt": prompt, "completion": f"```qasm\n{completion}```"}
            DATA.append(dic)
    return DATA