OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
h q[3];
t q[5];
s q[3];
cx q[6], q[1];
s q[6];
h q[3];
cx q[2], q[0];
h q[2];
cx q[1], q[5];
cx q[0], q[4];
cx q[2], q[6];
t q[0];
t q[2];
h q[3];
s q[6];
t q[1];
s q[3];
t q[5];
cx q[5], q[2];
cx q[3], q[2];
cx q[3], q[2];
s q[1];
s q[6];
s q[6];
t q[2];
h q[4];
h q[1];
h q[6];
cx q[4], q[3];
h q[5];
cx q[6], q[5];
t q[3];
h q[6];
s q[6];
t q[4];
t q[0];
h q[5];
h q[5];
s q[2];
s q[4];
