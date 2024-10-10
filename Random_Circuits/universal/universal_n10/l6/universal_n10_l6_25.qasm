OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
t q[5];
cx q[7], q[2];
s q[4];
cx q[3], q[4];
h q[8];
h q[5];
