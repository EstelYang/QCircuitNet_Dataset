OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
h q[5];
s q[4];
s q[4];
h q[0];
cx q[2], q[0];
s q[0];
cx q[3], q[5];
cx q[0], q[1];
h q[7];
s q[0];
s q[4];
h q[6];
s q[7];
s q[5];
s q[2];
h q[2];
h q[3];
h q[2];
