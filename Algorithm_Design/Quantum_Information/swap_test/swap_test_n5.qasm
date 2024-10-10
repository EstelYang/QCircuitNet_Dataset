OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
bit[1] c;
qubit[11] q;
Psi q[0], q[1], q[2], q[3], q[4];
Phi q[5], q[6], q[7], q[8], q[9];
h q[10];
cswap q[10], q[0], q[5];
cswap q[10], q[1], q[6];
cswap q[10], q[2], q[7];
cswap q[10], q[3], q[8];
cswap q[10], q[4], q[9];
h q[10];
c[0] = measure q[10];
