OPENQASM 3.0;
include "stdgates.inc";
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  x _gate_q_1;
  x _gate_q_2;
  cx _gate_q_0, _gate_q_4;
  cx _gate_q_1, _gate_q_4;
  cx _gate_q_2, _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  x _gate_q_1;
  x _gate_q_2;
}
qubit[5] q;
Oracle q[0], q[1], q[2], q[3], q[4];
