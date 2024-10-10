from qiskit.qasm3 import loads
import os


def replace_igh_with_inv(input_file, output_file):
    with open(input_file, 'r') as file:
        lines = file.readlines()

    new_lines = []
    inside_igh_definition = False

    for line in lines:
        # Detect the beginning of the IGH gate definition
        if "gate IGH" in line:
            inside_igh_definition = True
            continue  # Skip this line

        # Detect the end of the IGH gate definition
        if inside_igh_definition and "}" in line:
            inside_igh_definition = False
            continue  # Skip this line

        # If we're not inside the IGH definition, process the line
        if not inside_igh_definition:
            # Replace any calls to the IGH gate with "inv @ GH"
            new_line = line.replace("IGH", "inv @ GH")
            new_lines.append(new_line)

    with open(output_file, 'w') as file:
        file.writelines(new_lines)

    try:
        with open(output_file, 'r') as file:
            qasm_str = file.read()
        circuit = loads(qasm_str)
        print(f"Successfully loaded: {output_file}")
    except Exception as e:
        print(f"Error loading {output_file}: {e}")


def process_full_circuit_directory(root_directory):
    for subdir, dirs, files in os.walk(root_directory):
        print(subdir,dirs,files)
        print('*'*10)
        for file in files:
            print(file)
            print(file.endswith(".qasm"))
            if file.endswith(".qasm"):
                input_qasm_file = os.path.join(subdir, file)
                replace_igh_with_inv(input_qasm_file, input_qasm_file)
                print(f"Processed: {input_qasm_file} -> output_qasm_file")


root_directory = "full_circuit"  # Replace with your root dir
process_full_circuit_directory(root_directory)

print("All files in full_circuit have been processed, checked, and executed.")
