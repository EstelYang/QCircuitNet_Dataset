OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
cx q[7], q[5];
cx q[4], q[7];
h q[5];
h q[7];
cx q[3], q[2];
s q[3];
h q[0];
s q[6];
cx q[5], q[0];
cx q[2], q[0];
h q[0];
cx q[3], q[0];
h q[3];
h q[7];
cx q[5], q[2];
s q[7];
s q[7];
s q[2];
