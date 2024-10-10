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
gate IQFT _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  swap _gate_q_0, _gate_q_4;
  swap _gate_q_1, _gate_q_3;
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
}
bit[5] c;
qubit[6] q;
Psi q[5];
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
CU_0 q[0], q[5];
CU_1 q[1], q[5];
CU_2 q[2], q[5];
CU_3 q[3], q[5];
CU_4 q[4], q[5];
IQFT q[0], q[1], q[2], q[3], q[4];
c[0] = measure q[0];
c[1] = measure q[1];
c[2] = measure q[2];
c[3] = measure q[3];
c[4] = measure q[4];
