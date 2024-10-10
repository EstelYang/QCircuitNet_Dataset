import os
def generate_dataset_json():
    """Generates a JSON dataset for the grover oracle.
    Format: {"prompt": description, "completion": circuit}

    """
    with open("grover/grover_description.txt", "r") as f:
        template = f.read()
    DATA = []
    for n in range(2, 15):
        directory = f"grover/grover_n{n}"
        for filename in os.listdir(directory):
            if filename[-4:] == ".inc":
                continue
            with open(os.path.join(directory, filename), "r") as f:
                completion = f.read()
            marked_item = filename.split("_")[2].split(".")[0][1:]
            prompt = template.replace("$\{qubit number\}", f"{n}$").replace("$\{marked item\}", f"{marked_item}$").replace("\{QASM / Qiskit\}", "QASM")
            dic = {"prompt": prompt, "completion": f"```qasm\n{completion}```"}
            DATA.append(dic)
    return DATA