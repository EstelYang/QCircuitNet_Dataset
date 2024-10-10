OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
t q[0];
s q[1];
t q[2];
cx q[1], q[2];
h q[0];
cx q[1], q[0];
