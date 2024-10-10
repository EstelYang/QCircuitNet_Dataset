gate ccircuit_879 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  ccx _gate_q_0, _gate_q_1, _gate_q_6;
  ccx _gate_q_0, _gate_q_2, _gate_q_7;
  ccx _gate_q_0, _gate_q_3, _gate_q_8;
  ccx _gate_q_0, _gate_q_3, _gate_q_8;
  ccx _gate_q_0, _gate_q_4, _gate_q_9;
  ccx _gate_q_0, _gate_q_5, _gate_q_10;
  ccx _gate_q_0, _gate_q_3, _gate_q_10;
}
gate ccircuit_886 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  ccx _gate_q_0, _gate_q_1, _gate_q_6;
  ccx _gate_q_0, _gate_q_1, _gate_q_6;
  ccx _gate_q_0, _gate_q_2, _gate_q_7;
  ccx _gate_q_0, _gate_q_3, _gate_q_8;
  ccx _gate_q_0, _gate_q_4, _gate_q_9;
  ccx _gate_q_0, _gate_q_1, _gate_q_9;
  ccx _gate_q_0, _gate_q_5, _gate_q_10;
  ccx _gate_q_0, _gate_q_1, _gate_q_10;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  ccircuit_879 _gate_q_10, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9;
  x _gate_q_10;
  ccircuit_886 _gate_q_10, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9;
  x _gate_q_6;
  x _gate_q_7;
  x _gate_q_8;
}
