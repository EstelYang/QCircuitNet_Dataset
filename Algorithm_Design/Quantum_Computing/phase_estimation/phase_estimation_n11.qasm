OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
gate CU_1 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_0 _gate_q_0, _gate_q_1;
}
gate CU_2 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_1 _gate_q_0, _gate_q_1;
}
gate CU_3 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_2 _gate_q_0, _gate_q_1;
}
gate CU_4 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_3 _gate_q_0, _gate_q_1;
}
gate CU_5 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_4 _gate_q_0, _gate_q_1;
}
gate CU_6 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_5 _gate_q_0, _gate_q_1;
}
gate CU_7 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_6 _gate_q_0, _gate_q_1;
}
gate CU_8 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_7 _gate_q_0, _gate_q_1;
}
gate CU_9 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_8 _gate_q_0, _gate_q_1;
}
gate CU_10 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_9 _gate_q_0, _gate_q_1;
}
gate IQFT _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  swap _gate_q_0, _gate_q_10;
  swap _gate_q_1, _gate_q_9;
  swap _gate_q_2, _gate_q_8;
  swap _gate_q_3, _gate_q_7;
  swap _gate_q_4, _gate_q_6;
  h _gate_q_0;
  cp(-pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
  cp(-pi/4) _gate_q_0, _gate_q_2;
  cp(-pi/2) _gate_q_1, _gate_q_2;
  h _gate_q_2;
  cp(-pi/8) _gate_q_0, _gate_q_3;
  cp(-pi/4) _gate_q_1, _gate_q_3;
  cp(-pi/2) _gate_q_2, _gate_q_3;
  h _gate_q_3;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cp(-pi/8) _gate_q_1, _gate_q_4;
  cp(-pi/4) _gate_q_2, _gate_q_4;
  cp(-pi/2) _gate_q_3, _gate_q_4;
  h _gate_q_4;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cp(-pi/16) _gate_q_1, _gate_q_5;
  cp(-pi/8) _gate_q_2, _gate_q_5;
  cp(-pi/4) _gate_q_3, _gate_q_5;
  cp(-pi/2) _gate_q_4, _gate_q_5;
  h _gate_q_5;
  cp(-pi/64) _gate_q_0, _gate_q_6;
  cp(-pi/32) _gate_q_1, _gate_q_6;
  cp(-pi/16) _gate_q_2, _gate_q_6;
  cp(-pi/8) _gate_q_3, _gate_q_6;
  cp(-pi/4) _gate_q_4, _gate_q_6;
  cp(-pi/2) _gate_q_5, _gate_q_6;
  h _gate_q_6;
  cp(-pi/128) _gate_q_0, _gate_q_7;
  cp(-pi/64) _gate_q_1, _gate_q_7;
  cp(-pi/32) _gate_q_2, _gate_q_7;
  cp(-pi/16) _gate_q_3, _gate_q_7;
  cp(-pi/8) _gate_q_4, _gate_q_7;
  cp(-pi/4) _gate_q_5, _gate_q_7;
  cp(-pi/2) _gate_q_6, _gate_q_7;
  h _gate_q_7;
  cp(-pi/256) _gate_q_0, _gate_q_8;
  cp(-pi/128) _gate_q_1, _gate_q_8;
  cp(-pi/64) _gate_q_2, _gate_q_8;
  cp(-pi/32) _gate_q_3, _gate_q_8;
  cp(-pi/16) _gate_q_4, _gate_q_8;
  cp(-pi/8) _gate_q_5, _gate_q_8;
  cp(-pi/4) _gate_q_6, _gate_q_8;
  cp(-pi/2) _gate_q_7, _gate_q_8;
  h _gate_q_8;
  cp(-pi/512) _gate_q_0, _gate_q_9;
  cp(-pi/256) _gate_q_1, _gate_q_9;
  cp(-pi/128) _gate_q_2, _gate_q_9;
  cp(-pi/64) _gate_q_3, _gate_q_9;
  cp(-pi/32) _gate_q_4, _gate_q_9;
  cp(-pi/16) _gate_q_5, _gate_q_9;
  cp(-pi/8) _gate_q_6, _gate_q_9;
  cp(-pi/4) _gate_q_7, _gate_q_9;
  cp(-pi/2) _gate_q_8, _gate_q_9;
  h _gate_q_9;
  cp(-pi/1024) _gate_q_0, _gate_q_10;
  cp(-pi/512) _gate_q_1, _gate_q_10;
  cp(-pi/256) _gate_q_2, _gate_q_10;
  cp(-pi/128) _gate_q_3, _gate_q_10;
  cp(-pi/64) _gate_q_4, _gate_q_10;
  cp(-pi/32) _gate_q_5, _gate_q_10;
  cp(-pi/16) _gate_q_6, _gate_q_10;
  cp(-pi/8) _gate_q_7, _gate_q_10;
  cp(-pi/4) _gate_q_8, _gate_q_10;
  cp(-pi/2) _gate_q_9, _gate_q_10;
  h _gate_q_10;
}
bit[11] c;
qubit[12] q;
Psi q[11];
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
h q[6];
h q[7];
h q[8];
h q[9];
h q[10];
CU_0 q[0], q[11];
CU_1 q[1], q[11];
CU_2 q[2], q[11];
CU_3 q[3], q[11];
CU_4 q[4], q[11];
CU_5 q[5], q[11];
CU_6 q[6], q[11];
CU_7 q[7], q[11];
CU_8 q[8], q[11];
CU_9 q[9], q[11];
CU_10 q[10], q[11];
IQFT q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10];
c[0] = measure q[0];
c[1] = measure q[1];
c[2] = measure q[2];
c[3] = measure q[3];
c[4] = measure q[4];
c[5] = measure q[5];
c[6] = measure q[6];
c[7] = measure q[7];
c[8] = measure q[8];
c[9] = measure q[9];
c[10] = measure q[10];
