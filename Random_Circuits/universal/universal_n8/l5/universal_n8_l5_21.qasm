OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
h q[4];
s q[1];
cx q[4], q[7];
h q[3];
h q[4];
