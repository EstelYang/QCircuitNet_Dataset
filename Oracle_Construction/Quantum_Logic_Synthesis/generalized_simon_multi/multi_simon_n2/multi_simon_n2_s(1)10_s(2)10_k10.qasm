OPENQASM 3;
include "stdgates.inc";
gate ccircuit_153 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  ccx _gate_q_0, _gate_q_1, _gate_q_3;
  ccx _gate_q_0, _gate_q_2, _gate_q_4;
  ccx _gate_q_0, _gate_q_2, _gate_q_4;
}
gate ccircuit_160 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  ccx _gate_q_0, _gate_q_1, _gate_q_3;
  ccx _gate_q_0, _gate_q_2, _gate_q_4;
  ccx _gate_q_0, _gate_q_2, _gate_q_4;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  ccircuit_153 _gate_q_4, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  x _gate_q_4;
  ccircuit_160 _gate_q_4, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  x _gate_q_3;
}
qubit[5] q;
Oracle q[0], q[1], q[2], q[3], q[4];
