import os
import random
import shutil


def hierarchical_sample(root_directory):
    # Helper function to remove all but the sampled items
    def sample_and_remove(folder_path, item_list, num_samples):
        print(f"Sampling {num_samples} items from {folder_path}")
        sampled_items = random.sample(item_list, min(num_samples, len(item_list)))
        items_to_remove = set(item_list) - set(sampled_items)
        for item in items_to_remove:
            item_path = os.path.join(folder_path, item)
            if os.path.isdir(item_path):
                print(f"Removing folder: {item_path}")
                shutil.rmtree(item_path)
            else:
                print(f"Removing file: {item_path}")
                os.remove(item_path)

    # Helper function to sample qasm-txt pairs
    def sample_qasm_txt_pairs(folder_path, item_list, num_samples):
        qasm_files = [f for f in item_list if f.endswith(".qasm")]
        txt_files = [f.replace(".qasm", ".txt") for f in qasm_files]
        paired_files = [(qasm, txt) for qasm, txt in zip(qasm_files, txt_files) if txt in item_list]
        sampled_pairs = random.sample(paired_files, min(num_samples, len(paired_files)))
        items_to_remove = set(item_list) - set([item for pair in sampled_pairs for item in pair])
        for item in items_to_remove:
            item_path = os.path.join(folder_path, item)
            print(f"Removing file: {item_path}")
            os.remove(item_path)

#######################################################################################################################

    # Handling Algorithm_Design folder
    algorithm_design_path = os.path.join(root_directory, "Algorithm_Design")
    if os.path.exists(algorithm_design_path):
        print(f"Processing Algorithm_Design folder at {algorithm_design_path}")
        # Handling Quantum_Computing folder
        quantum_computing_path = os.path.join(algorithm_design_path, "Quantum_Computing")
        if os.path.exists(quantum_computing_path):
            print(f"Processing Quantum_Computing folder at {quantum_computing_path}")
            for subfolder in os.listdir(quantum_computing_path):
                subfolder_path = os.path.join(quantum_computing_path, subfolder)
                if os.path.isdir(subfolder_path):
                    # Sample 10 algorithm_n{}.qasm type files
                    print(f"Processing {subfolder} folder at {subfolder_path}")
                    qasm_files = [f for f in os.listdir(subfolder_path) if f.endswith(".qasm")]
                    sample_and_remove(subfolder_path, qasm_files, 10)

                    test_oracle_path = os.path.join(subfolder_path, "test_oracle")
                    if os.path.exists(test_oracle_path):
                        print(f"Processing test_oracle folder at {test_oracle_path}")
                        n_folders = [f for f in os.listdir(test_oracle_path) if
                                     os.path.isdir(os.path.join(test_oracle_path, f))]
                        sample_and_remove(test_oracle_path, n_folders, 10)

                        # Sampling trial folders within n{} folders
                        for n_folder in os.listdir(test_oracle_path):
                            n_folder_path = os.path.join(test_oracle_path, n_folder)
                            if os.path.isdir(n_folder_path):
                                trial_folders = [f for f in os.listdir(n_folder_path) if
                                                 os.path.isdir(os.path.join(n_folder_path, f))]
                                if len(trial_folders) > 5:
                                    sample_and_remove(n_folder_path, trial_folders, 5)

        # Handling Quantum_Information folder
        quantum_information_path = os.path.join(algorithm_design_path, "Quantum_Information")
        if os.path.exists(quantum_information_path):
            print(f"Processing Quantum_Information folder at {quantum_information_path}")
            for subfolder in os.listdir(quantum_information_path):
                subfolder_path = os.path.join(quantum_information_path, subfolder)
                if subfolder == "ghz_state":
                    print(f"Processing ghz_state folder at {subfolder_path}")
                    qasm_files = [f for f in os.listdir(subfolder_path) if f.endswith(".qasm")]
                    sample_and_remove(subfolder_path, qasm_files, 10)
                elif subfolder == "quantum_key_distribution":
                    print(f"Processing quantum_key_distribution folder at {subfolder_path}")
                    n_folders = [f for f in os.listdir(subfolder_path) if os.path.isdir(os.path.join(subfolder_path, f))]
                    sample_and_remove(subfolder_path, n_folders, 10)
                    for n_folder in os.listdir(subfolder_path):
                        n_folder_path = os.path.join(subfolder_path, n_folder)
                        if os.path.isdir(n_folder_path):
                            qkd_files = [f for f in os.listdir(n_folder_path) if f.endswith(".qasm") or f.endswith(".txt")]
                            trials = list(set(f.split("_trial")[0] for f in qkd_files))
                            if len(trials) > 5:
                                print(f"Sampling trials in folder {n_folder_path}")
                                sampled_trials = random.sample(trials, 5)
                                for trial in trials:
                                    if trial not in sampled_trials:
                                        for ext in ["_True.qasm", "_False.qasm", "_True.txt", "_False.txt"]:
                                            file_to_remove = os.path.join(n_folder_path, trial + ext)
                                            if os.path.exists(file_to_remove):
                                                print(f"Removing file: {file_to_remove}")
                                                os.remove(file_to_remove)
                elif subfolder == "quantum_teleportation":
                    test_oracle_path = os.path.join(subfolder_path, "test_oracle")
                    if os.path.exists(test_oracle_path):
                        print(f"Processing test_oracle folder at {test_oracle_path}")
                        trial_folders = [f for f in os.listdir(test_oracle_path) if
                                         os.path.isdir(os.path.join(test_oracle_path, f))]
                        sample_and_remove(test_oracle_path, trial_folders, 5)
                elif subfolder == "random_number_generator":
                    print(f"Processing random_number_generator folder at {subfolder_path}")
                    qasm_files = [f for f in os.listdir(subfolder_path) if f.endswith(".qasm")]
                    sample_and_remove(subfolder_path, qasm_files, 10)
                elif subfolder == "swap_test":
                    print(f"Processing swap_test folder at {subfolder_path}")
                    qasm_files = [f for f in os.listdir(subfolder_path) if f.endswith(".qasm")]
                    sample_and_remove(subfolder_path, qasm_files, 10)
                    test_oracle_path = os.path.join(subfolder_path, "test_oracle")
                    if os.path.exists(test_oracle_path):
                        print(f"Processing test_oracle folder at {test_oracle_path}")
                        n_folders = [f for f in os.listdir(test_oracle_path) if
                                     os.path.isdir(os.path.join(test_oracle_path, f))]
                        sample_and_remove(test_oracle_path, n_folders, 10)
                        for n_folder in os.listdir(test_oracle_path):
                            n_folder_path = os.path.join(test_oracle_path, n_folder)
                            if os.path.isdir(n_folder_path):
                                trial_folders = [f for f in os.listdir(n_folder_path) if
                                                 os.path.isdir(os.path.join(n_folder_path, f))]
                                if len(trial_folders) > 5:
                                    sample_and_remove(n_folder_path, trial_folders, 5)
                elif subfolder == "w_state":
                    print(f"Processing w_state folder at {subfolder_path}")
                    qasm_files = [f for f in os.listdir(subfolder_path) if f.endswith(".qasm")]
                    sample_and_remove(subfolder_path, qasm_files, 10)
                    gate_circuit_path = os.path.join(subfolder_path, "gate_circuit")
                    if os.path.exists(gate_circuit_path):
                        print(f"Processing gate_circuit folder at {gate_circuit_path}")
                        qasm_files = [f for f in os.listdir(gate_circuit_path) if f.endswith(".qasm")]
                        sample_and_remove(gate_circuit_path, qasm_files, 10)

#######################################################################################################################

    # Handling Oracle_Construction folder
    oracle_construction_path = os.path.join(root_directory, "Oracle_Construction")
    if os.path.exists(oracle_construction_path):
        print(f"Processing Oracle_Construction folder at {oracle_construction_path}")
        # Handling Problem_Encoding folder
        problem_encoding_path = os.path.join(oracle_construction_path, "Problem_Encoding")
        if os.path.exists(problem_encoding_path):
            print(f"Skipping Problem_Encoding folder at {problem_encoding_path}")

        # Handling Quantum_Logic_Synthesis folder
        quantum_logic_synthesis_path = os.path.join(oracle_construction_path, "Quantum_Logic_Synthesis")
        if os.path.exists(quantum_logic_synthesis_path):
            print(f"Processing Quantum_Logic_Synthesis folder at {quantum_logic_synthesis_path}")
            for subfolder in os.listdir(quantum_logic_synthesis_path):
                subfolder_path = os.path.join(quantum_logic_synthesis_path, subfolder)
                if os.path.isdir(subfolder_path):
                    n_folders = [f for f in os.listdir(subfolder_path) if
                                 os.path.isdir(os.path.join(subfolder_path, f))]
                    # Sample 5 n_folders if more than 5 exist
                    if len(n_folders) > 5:
                        sample_and_remove(subfolder_path, n_folders, 5)
                    for n_folder in n_folders:
                        n_folder_path = os.path.join(subfolder_path, n_folder)
                        if os.path.isdir(n_folder_path):
                            n_folder_contents = os.listdir(n_folder_path)
                            if len(n_folder_contents) > 5:
                                sample_and_remove(n_folder_path, n_folder_contents, 5)
                            for sub_n_folder in n_folder_contents:
                                sub_n_folder_path = os.path.join(n_folder_path, sub_n_folder)
                                if os.path.isdir(sub_n_folder_path):
                                    sub_n_folder_contents = os.listdir(sub_n_folder_path)
                                    if len(sub_n_folder_contents) > 5:
                                        sample_and_remove(sub_n_folder_path, sub_n_folder_contents, 5)

#######################################################################################################################

    # Handling Random_Circuits folder
    random_circuit_path = os.path.join(root_directory, "Random_Circuit")
    if os.path.exists(random_circuit_path):
        print(f"Processing Random_Circuit folder at {random_circuit_path}")
        for circuit_type in ["clifford", "universal"]:
            circuit_path = os.path.join(random_circuit_path, circuit_type)
            if os.path.exists(circuit_path):
                print(f"Processing {circuit_type} folder at {circuit_path}")
                n_folders = [f for f in os.listdir(circuit_path) if os.path.isdir(os.path.join(circuit_path, f))]
                # Sample 10 n_folders if more than 10 exist
                if len(n_folders) > 10:
                    sample_and_remove(circuit_path, n_folders, 10)
                for n_folder in os.listdir(circuit_path):
                    n_folder_path = os.path.join(circuit_path, n_folder)
                    if os.path.isdir(n_folder_path):
                        i_folders = [f for f in os.listdir(n_folder_path) if
                                     os.path.isdir(os.path.join(n_folder_path, f))]
                        # Sample 5 i_folders if more than 5 exist
                        if len(i_folders) > 5:
                            sample_and_remove(n_folder_path, i_folders, 5)
                        for i_folder in os.listdir(n_folder_path):
                            i_folder_path = os.path.join(n_folder_path, i_folder)
                            if os.path.isdir(i_folder_path):
                                i_folder_contents = os.listdir(i_folder_path)
                                # Sample 5 qasm-txt pairs if more than 5 exist
                                if len(i_folder_contents) > 5:
                                    sample_qasm_txt_pairs(i_folder_path, i_folder_contents, 5)


hierarchical_sample("")



