OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
h q[1];
t q[2];
s q[0];
h q[1];
t q[2];
s q[2];
s q[0];
t q[2];
h q[1];
cx q[0], q[2];
h q[2];
cx q[0], q[2];
t q[0];
t q[1];
t q[0];
cx q[0], q[2];
s q[0];
