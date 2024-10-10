'''
Dataset 1: Uniformly at random split.
Dataset 2: Train and test on different n.
Dataset 3: Train and test on different problem.
'''
from bernstein_vazirani.data_util import generate_dataset_json as bv_data
from deutsch_jozsa.data_util import generate_dataset_json as dz_data
from diffusion_operator.data_util import generate_dataset_json as df_data
from grover.data_util import generate_dataset_json as gr_data
from simon.data_util import generate_dataset_json as sm_data

import argparse
parser = argparse.ArgumentParser()
parser.add_argument('--type', type=int, default=0)
parser.add_argument('--seed', type=int, default=42)
args = parser.parse_args()
train_dataset = []
ls = [bv_data, dz_data, df_data, gr_data, sm_data]

import random

for i in range(len(ls)):
    tmp = ls[i]()
    if len(tmp) > 100:
        random.shuffle(tmp)
        tmp = tmp[:100]
    if i == args.type:
        test_dataset = tmp
    else:
        train_dataset += tmp

train_dataset = [i for i in train_dataset if len(i['completion']) < 3000]
test_dataset = [i for i in test_dataset if len(i['completion']) < 3000]

import csv
with open('train.csv', 'w', newline='') as csvfile:
    fieldnames = ['prompt', 'completion']
    writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
    writer.writeheader()
    for data in train_dataset:
        writer.writerow(data)

with open('test.csv', 'w', newline='') as csvfile:
    fieldnames = ['prompt', 'completion']
    writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
    writer.writeheader()
    for data in test_dataset:
        writer.writerow(data)
    