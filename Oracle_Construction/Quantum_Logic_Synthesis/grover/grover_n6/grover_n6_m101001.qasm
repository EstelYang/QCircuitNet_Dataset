OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
  c5z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
}
qubit[6] q;
Oracle q[0], q[1], q[2], q[3], q[4], q[5];
