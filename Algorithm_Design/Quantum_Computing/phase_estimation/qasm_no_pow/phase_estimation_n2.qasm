OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
gate IQFT _gate_q_0, _gate_q_1 {
  swap _gate_q_0, _gate_q_1;
  h _gate_q_0;
  cp(-pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
bit[2] c;
qubit[3] q;
Psi q[2];
h q[0];
h q[1];
CU_0 q[0], q[2];
CU_0 q[1], q[2];
CU_0 q[1], q[2];
IQFT q[0], q[1];
c[0] = measure q[0];
c[1] = measure q[1];
