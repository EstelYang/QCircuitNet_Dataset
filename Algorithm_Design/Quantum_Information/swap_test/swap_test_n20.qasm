OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
bit[1] c;
qubit[41] q;
Psi q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15], q[16], q[17], q[18], q[19];
Phi q[20], q[21], q[22], q[23], q[24], q[25], q[26], q[27], q[28], q[29], q[30], q[31], q[32], q[33], q[34], q[35], q[36], q[37], q[38], q[39];
h q[40];
cswap q[40], q[0], q[20];
cswap q[40], q[1], q[21];
cswap q[40], q[2], q[22];
cswap q[40], q[3], q[23];
cswap q[40], q[4], q[24];
cswap q[40], q[5], q[25];
cswap q[40], q[6], q[26];
cswap q[40], q[7], q[27];
cswap q[40], q[8], q[28];
cswap q[40], q[9], q[29];
cswap q[40], q[10], q[30];
cswap q[40], q[11], q[31];
cswap q[40], q[12], q[32];
cswap q[40], q[13], q[33];
cswap q[40], q[14], q[34];
cswap q[40], q[15], q[35];
cswap q[40], q[16], q[36];
cswap q[40], q[17], q[37];
cswap q[40], q[18], q[38];
cswap q[40], q[19], q[39];
h q[40];
c[0] = measure q[40];
