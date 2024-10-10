OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
s q[7];
h q[1];
cx q[7], q[3];
t q[2];
s q[5];
