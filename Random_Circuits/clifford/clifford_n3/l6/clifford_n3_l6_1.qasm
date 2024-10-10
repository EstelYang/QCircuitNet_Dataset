OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
s q[0];
s q[0];
h q[0];
s q[1];
cx q[1], q[0];
h q[0];
