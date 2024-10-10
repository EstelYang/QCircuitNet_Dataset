import os
def generate_dataset_json():
    directory = "Quantum_Computing/deutsch_jozsa"
    with open(f"{directory}/dj_description.txt", "r") as f:
        template = f.read()
    with open(f"{directory}/dj_post_processing.py", "r") as f:
        post = f.read()
    data = []
    for filename in os.listdir(directory):
        if filename[-5:] != ".qasm":
            continue
        with open(os.path.join(directory, filename), "r") as f:
            completion = f.read()
        qubit_number = filename.split("_")[2].split(".")[0][1:]
        if int(qubit_number) > 14:
            continue
        prompt = template.replace("$\{qubit number\}", f"{qubit_number}$").replace("\{QASM / Qiskit\}", "QASM")
        dic = {"prompt": prompt, "completion": f"```qasm\n{completion}```\n```python\n{post}```"}
        data.append(dic)
    return data