OPENQASM 3.0;
include "stdgates.inc";
qubit[7] q;
cx q[3], q[4];
cx q[5], q[2];
t q[5];
h q[3];
t q[0];
h q[1];
s q[1];
