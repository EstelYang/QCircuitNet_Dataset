OPENQASM 3.0;
include "stdgates.inc";
gate Eve_Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19, _gate_q_20, _gate_q_21, _gate_q_22, _gate_q_23, _gate_q_24, _gate_q_25, _gate_q_26, _gate_q_27, _gate_q_28, _gate_q_29, _gate_q_30, _gate_q_31, _gate_q_32 {
}
bit[33] c;
qubit[33] q;
x q[0];
h q[0];
h q[1];
x q[2];
x q[3];
h q[3];
x q[4];
h q[4];
x q[5];
h q[5];
h q[6];
h q[7];
x q[8];
x q[9];
h q[9];
x q[11];
h q[11];
x q[12];
h q[12];
x q[13];
h q[15];
x q[16];
h q[16];
x q[17];
h q[17];
x q[20];
h q[22];
h q[23];
h q[24];
x q[26];
x q[27];
x q[28];
x q[30];
x q[31];
h q[31];
x q[32];
Eve_Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15], q[16], q[17], q[18], q[19], q[20], q[21], q[22], q[23], q[24], q[25], q[26], q[27], q[28], q[29], q[30], q[31], q[32];
h q[0];
c[0] = measure q[0];
c[1] = measure q[1];
c[2] = measure q[2];
h q[3];
c[3] = measure q[3];
h q[4];
c[4] = measure q[4];
h q[5];
c[5] = measure q[5];
h q[6];
c[6] = measure q[6];
h q[7];
c[7] = measure q[7];
c[8] = measure q[8];
c[9] = measure q[9];
c[10] = measure q[10];
c[11] = measure q[11];
c[12] = measure q[12];
h q[13];
c[13] = measure q[13];
h q[14];
c[14] = measure q[14];
c[15] = measure q[15];
h q[16];
c[16] = measure q[16];
h q[17];
c[17] = measure q[17];
h q[18];
c[18] = measure q[18];
h q[19];
c[19] = measure q[19];
h q[20];
c[20] = measure q[20];
h q[21];
c[21] = measure q[21];
h q[22];
c[22] = measure q[22];
c[23] = measure q[23];
c[24] = measure q[24];
h q[25];
c[25] = measure q[25];
c[26] = measure q[26];
c[27] = measure q[27];
h q[28];
c[28] = measure q[28];
h q[29];
c[29] = measure q[29];
c[30] = measure q[30];
c[31] = measure q[31];
h q[32];
c[32] = measure q[32];
