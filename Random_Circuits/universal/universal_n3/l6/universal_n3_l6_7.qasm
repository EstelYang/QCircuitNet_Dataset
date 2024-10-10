OPENQASM 3.0;
include "stdgates.inc";
qubit[3] q;
h q[2];
h q[2];
t q[2];
h q[0];
h q[0];
cx q[0], q[2];
