OPENQASM 3.0;
include "stdgates.inc";
qubit[12] q;
cx q[8], q[7];
cx q[5], q[1];
s q[6];
s q[8];
h q[3];
h q[0];
cx q[2], q[11];
cx q[5], q[11];
s q[9];
cx q[11], q[0];
s q[5];
cx q[4], q[10];
cx q[1], q[6];
s q[0];
cx q[8], q[9];
cx q[1], q[5];
s q[11];
h q[3];
cx q[6], q[5];
s q[9];
h q[4];
cx q[10], q[8];
cx q[10], q[4];
s q[8];
h q[5];
s q[0];
s q[3];
s q[11];
s q[8];
s q[5];
cx q[3], q[5];
s q[2];
