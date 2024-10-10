OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
cx q[2], q[1];
t q[7];
s q[6];
cx q[0], q[6];
s q[5];
