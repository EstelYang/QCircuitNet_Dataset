OPENQASM 3.0;
include "stdgates.inc";
qubit[9] q;
s q[3];
s q[0];
h q[1];
t q[4];
cx q[8], q[3];
cx q[8], q[7];
s q[2];
t q[3];
t q[2];
t q[7];
cx q[2], q[5];
h q[0];
h q[4];
s q[3];
t q[5];
t q[6];
t q[1];
h q[0];
t q[6];
cx q[6], q[5];
cx q[2], q[1];
t q[6];
h q[0];
h q[1];
s q[4];
h q[2];
t q[6];
s q[2];
t q[3];
h q[2];
t q[6];
t q[7];
s q[1];
s q[5];
t q[1];
cx q[3], q[8];
