OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
cx q[4], q[2];
cx q[0], q[3];
h q[3];
s q[2];
cx q[0], q[1];
s q[1];
h q[1];
cx q[0], q[2];
h q[0];
