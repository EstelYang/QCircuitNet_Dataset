OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
cx q[1], q[6];
s q[0];
h q[4];
h q[4];
cx q[7], q[3];
cx q[2], q[3];
s q[1];
s q[6];
h q[6];
h q[1];
s q[1];
h q[3];
cx q[0], q[3];
s q[2];
s q[3];
cx q[2], q[7];
h q[3];
cx q[7], q[0];
h q[7];
cx q[1], q[6];
s q[5];
s q[5];
s q[4];
cx q[4], q[0];
h q[1];
s q[1];
h q[2];
s q[1];
s q[4];
h q[2];
s q[7];
h q[7];
h q[6];
s q[6];
cx q[7], q[1];
cx q[0], q[3];
s q[2];
cx q[3], q[4];
cx q[4], q[7];
s q[3];
