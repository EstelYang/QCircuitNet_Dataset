OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
cx q[3], q[5];
cx q[5], q[3];
h q[5];
s q[5];
s q[5];
cx q[6], q[5];
s q[4];
cx q[7], q[8];
cx q[2], q[3];
cx q[2], q[8];
h q[7];
s q[6];
h q[0];
s q[0];
cx q[2], q[3];
h q[7];
s q[0];
s q[6];
s q[0];
cx q[4], q[3];
h q[5];
cx q[7], q[0];
s q[5];
s q[6];
s q[5];
cx q[7], q[6];
h q[3];
s q[2];
cx q[6], q[7];
cx q[7], q[0];
h q[6];
cx q[8], q[2];
s q[2];
s q[7];
h q[2];
