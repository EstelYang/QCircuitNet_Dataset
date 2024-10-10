OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
cx q[0], q[2];
h q[1];
h q[2];
h q[1];
h q[1];
cx q[1], q[2];
