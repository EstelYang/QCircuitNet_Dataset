OPENQASM 3.0;
include "stdgates.inc";
qubit[2] q;
s q[0];
t q[0];
h q[0];
s q[0];
h q[0];
t q[1];
h q[0];
h q[1];
t q[1];
h q[1];
s q[0];
s q[0];
h q[1];
s q[0];
s q[0];
h q[1];
cx q[1], q[0];
s q[1];
t q[0];
s q[1];
s q[0];
h q[1];
t q[0];
t q[1];
t q[0];
h q[0];
h q[0];
s q[1];
cx q[1], q[0];
s q[0];
cx q[0], q[1];
s q[1];
cx q[0], q[1];
t q[0];
h q[0];
cx q[0], q[1];
s q[0];
s q[0];
h q[0];
