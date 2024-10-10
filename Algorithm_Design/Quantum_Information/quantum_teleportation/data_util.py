import os
def generate_dataset_json():
    directory = "Quantum_Information/quantum_teleportation"
    with open(f"{directory}/teleportation_description.txt", "r") as f:
        template = f.read()
    with open(f"{directory}/teleportation_post_processing.py", "r") as f:
        post = f.read()
    data = []
    for filename in os.listdir(directory):
        if filename[-5:] != ".qasm":
            continue
        with open(os.path.join(directory, filename), "r") as f:
            completion = f.read()
        prompt = template.replace("\{QASM / Qiskit\}", "QASM")
        dic = {"prompt": prompt, "completion": f"```qasm\n{completion}```\n```python\n{post}```"}
        data.append(dic)
    return data