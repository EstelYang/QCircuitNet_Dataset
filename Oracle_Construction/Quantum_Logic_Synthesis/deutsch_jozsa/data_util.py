import os
def generate_dataset_json():
    """Generates a JSON dataset for the Deutsch-Jozsa oracle.
    Format: {"prompt": description, "completion": circuit}

    """
    with open("deutsch_jozsa/dj_description.txt", "r") as f:
        template = f.read()
    DATA = []
    for n in range(2, 15):
        directory = f"deutsch_jozsa/deutsch_jozsa_n{n}"
        for filename in os.listdir(directory):
            with open(os.path.join(directory, filename), "r") as f:
                completion = f.read()
            balance = filename.split("_")[2] == "balanced"
            key_string = filename.split("_")[3].split(".")[0]
            prompt = template.replace("$\{qubit number\}", f"{n}$").replace("\{QASM / Qiskit\}", "QASM")
            if balance:
                prompt = prompt.replace("\{constant with $f(x)$ returns $0$ / constant with $f(x)$ returns $1$ / balanced with key\_str $b = $\{key string\}\}", f"balanced with key\_str $b = {key_string}$")
            else:
                prompt = prompt.replace("\{constant with $f(x)$ returns $0$ / constant with $f(x)$ returns $1$ / balanced with key\_str $b = $\{key string\}\}", f"constant with $f(x)$ returns $f{key_string}$")
            dic = {"prompt": prompt, "completion": f"```qasm\n{completion}```"}
            DATA.append(dic)
    return DATA

