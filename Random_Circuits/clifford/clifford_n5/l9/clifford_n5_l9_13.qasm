OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[3], q[4];
s q[3];
h q[1];
s q[1];
h q[0];
h q[4];
cx q[4], q[1];
s q[2];
s q[3];
