OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
h q[1];
cx q[0], q[4];
s q[2];
cx q[3], q[5];
h q[7];
