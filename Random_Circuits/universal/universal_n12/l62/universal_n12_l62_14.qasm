OPENQASM 3.0;
include "stdgates.inc";
qubit[12] q;
h q[1];
t q[11];
t q[1];
cx q[7], q[8];
t q[10];
s q[3];
s q[9];
cx q[8], q[4];
cx q[9], q[7];
s q[9];
t q[11];
h q[3];
h q[10];
cx q[6], q[8];
cx q[10], q[6];
h q[4];
t q[2];
cx q[9], q[4];
t q[8];
cx q[10], q[2];
t q[7];
cx q[5], q[1];
cx q[6], q[0];
h q[10];
cx q[5], q[8];
cx q[10], q[1];
s q[0];
cx q[2], q[11];
cx q[1], q[0];
t q[6];
t q[0];
h q[7];
h q[10];
t q[7];
cx q[9], q[3];
cx q[8], q[2];
t q[3];
cx q[1], q[6];
t q[2];
h q[4];
s q[10];
cx q[1], q[0];
s q[6];
h q[8];
h q[8];
h q[1];
s q[9];
t q[8];
s q[8];
cx q[6], q[1];
t q[0];
cx q[3], q[2];
cx q[5], q[6];
t q[9];
t q[8];
cx q[5], q[9];
cx q[0], q[5];
t q[6];
cx q[1], q[2];
h q[11];
h q[8];
cx q[0], q[4];
