OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
s q[1];
cx q[2], q[1];
t q[2];
h q[0];
h q[2];
h q[1];
s q[0];
s q[0];
h q[0];
s q[1];
cx q[1], q[2];
t q[1];
t q[0];
t q[2];
h q[2];
