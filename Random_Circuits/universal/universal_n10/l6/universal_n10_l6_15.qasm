OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[2];
h q[3];
cx q[5], q[2];
h q[1];
s q[6];
s q[2];
