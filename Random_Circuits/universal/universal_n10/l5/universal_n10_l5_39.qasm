OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
s q[9];
cx q[4], q[7];
cx q[2], q[8];
cx q[0], q[6];
t q[4];
