OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
s q[6];
h q[6];
cx q[0], q[2];
t q[1];
t q[4];
cx q[0], q[2];
t q[3];
