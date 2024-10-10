OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[7], q[5];
s q[1];
s q[6];
t q[3];
h q[5];
