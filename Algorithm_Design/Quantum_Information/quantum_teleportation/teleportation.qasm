OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
gate Bell_Pair _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
}
gate Alice _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  h _gate_q_0;
}
bit[2] c;
qubit[3] q;
Psi q[0];
Bell_Pair q[1], q[2];
Alice q[0], q[1];
c[0] = measure q[0];
c[1] = measure q[1];
if (c[1]) {
  x q[2];
}
if (c[0]) {
  z q[2];
}
