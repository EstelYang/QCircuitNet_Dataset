OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[0], q[5];
t q[8];
t q[2];
s q[0];
t q[6];
s q[7];
