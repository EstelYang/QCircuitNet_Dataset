OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
h q[5];
s q[0];
s q[7];
h q[2];
cx q[0], q[3];
cx q[3], q[5];
s q[2];
h q[6];
h q[7];
cx q[5], q[7];
h q[5];
s q[2];
cx q[0], q[1];
h q[3];
s q[4];
h q[5];
cx q[4], q[3];
cx q[7], q[6];
