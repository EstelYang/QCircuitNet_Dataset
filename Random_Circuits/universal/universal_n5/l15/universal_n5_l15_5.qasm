OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
t q[3];
cx q[3], q[0];
cx q[1], q[2];
s q[3];
h q[3];
t q[0];
t q[2];
s q[1];
t q[4];
s q[4];
s q[4];
h q[1];
t q[4];
h q[3];
t q[0];
