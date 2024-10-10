OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
gate CU_1 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_0 _gate_q_0, _gate_q_1;
}
gate CU_2 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_1 _gate_q_0, _gate_q_1;
}
gate IQFT _gate_q_0, _gate_q_1, _gate_q_2 {
  swap _gate_q_0, _gate_q_2;
  h _gate_q_0;
  cp(-pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
  cp(-pi/4) _gate_q_0, _gate_q_2;
  cp(-pi/2) _gate_q_1, _gate_q_2;
  h _gate_q_2;
}
bit[3] c;
qubit[4] q;
Psi q[3];
h q[0];
h q[1];
h q[2];
CU_0 q[0], q[3];
CU_1 q[1], q[3];
CU_2 q[2], q[3];
IQFT q[0], q[1], q[2];
c[0] = measure q[0];
c[1] = measure q[1];
c[2] = measure q[2];
