OPENQASM 3.0;
include "stdgates.inc";
qubit[11] q;
s q[4];
cx q[2], q[5];
s q[5];
h q[6];
h q[0];
h q[8];
s q[6];
s q[5];
h q[2];
h q[2];
s q[2];
h q[8];
cx q[6], q[3];
cx q[0], q[8];
s q[6];
h q[2];
h q[1];
h q[5];
h q[10];
cx q[5], q[2];
s q[5];
h q[4];
h q[6];
s q[5];
cx q[0], q[5];
cx q[8], q[0];
cx q[8], q[10];
cx q[4], q[7];
s q[8];
s q[8];
s q[9];
cx q[7], q[10];
s q[2];
h q[9];
cx q[2], q[5];
h q[3];
h q[6];
h q[9];
cx q[8], q[7];
s q[1];
cx q[1], q[9];
h q[5];
h q[8];
s q[10];
h q[3];
cx q[6], q[0];
h q[9];
s q[1];
cx q[4], q[7];
h q[10];
s q[0];
s q[6];
cx q[0], q[6];
s q[7];
h q[9];
cx q[5], q[4];
s q[10];
cx q[2], q[3];
s q[1];
h q[3];
cx q[2], q[8];
s q[0];
h q[2];
s q[9];
h q[8];
h q[5];
h q[0];
cx q[8], q[7];
h q[4];
h q[4];
cx q[7], q[5];
s q[4];
cx q[4], q[7];
s q[7];
cx q[10], q[8];
s q[8];
s q[10];
h q[9];
cx q[4], q[8];
s q[6];
s q[2];
h q[3];
h q[3];
cx q[5], q[1];
s q[0];
cx q[4], q[10];
h q[5];
cx q[8], q[6];
s q[7];
h q[7];
cx q[1], q[6];
cx q[7], q[2];
s q[3];
s q[1];
s q[1];
cx q[2], q[5];
h q[10];
h q[9];
cx q[1], q[0];
h q[1];
cx q[7], q[4];
h q[6];
cx q[6], q[5];
s q[7];
h q[4];
cx q[3], q[4];
s q[9];
cx q[9], q[5];
cx q[10], q[0];
h q[6];
h q[1];
s q[7];
s q[3];
s q[10];
cx q[3], q[8];
h q[7];
cx q[1], q[7];
cx q[6], q[10];
cx q[7], q[6];
s q[7];
cx q[4], q[6];
s q[6];
h q[2];
s q[8];
cx q[8], q[0];
cx q[0], q[1];
s q[0];
h q[6];
cx q[0], q[7];
h q[10];
s q[2];
s q[1];
h q[8];
cx q[1], q[0];
h q[7];
cx q[5], q[0];
h q[5];
s q[8];
h q[7];
h q[1];
s q[9];
s q[2];
s q[8];
s q[0];
s q[6];
s q[8];
h q[2];
s q[6];
cx q[7], q[4];
s q[7];
h q[7];
cx q[2], q[3];
h q[0];
s q[1];
s q[3];
h q[4];
h q[8];
s q[6];
