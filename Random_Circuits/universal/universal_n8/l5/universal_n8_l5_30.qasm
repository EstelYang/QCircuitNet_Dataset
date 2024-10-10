OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
h q[6];
h q[3];
s q[1];
t q[4];
cx q[4], q[5];
