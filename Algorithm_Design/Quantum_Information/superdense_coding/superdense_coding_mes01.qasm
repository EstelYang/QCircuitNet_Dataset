OPENQASM 3.0;
include "stdgates.inc";
gate Bell_Pair _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
}
gate Alice _gate_q_0 {
  z _gate_q_0;
}
gate Bob _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  h _gate_q_0;
}
bit[2] c;
qubit[2] q;
Bell_Pair q[0], q[1];
Alice q[0];
Bob q[0], q[1];
c[0] = measure q[0];
c[1] = measure q[1];
