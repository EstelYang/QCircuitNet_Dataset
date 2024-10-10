OPENQASM 3.0;
include "stdgates.inc";
qubit[10] q;
cx q[5], q[7];
cx q[8], q[2];
s q[0];
t q[1];
h q[0];
s q[9];
