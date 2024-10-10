gate ccircuit_1833 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  ccx _gate_q_0, _gate_q_1, _gate_q_8;
  ccx _gate_q_0, _gate_q_2, _gate_q_9;
  ccx _gate_q_0, _gate_q_3, _gate_q_10;
  ccx _gate_q_0, _gate_q_3, _gate_q_10;
  ccx _gate_q_0, _gate_q_4, _gate_q_11;
  ccx _gate_q_0, _gate_q_3, _gate_q_11;
  ccx _gate_q_0, _gate_q_5, _gate_q_12;
  ccx _gate_q_0, _gate_q_6, _gate_q_13;
  ccx _gate_q_0, _gate_q_3, _gate_q_13;
  ccx _gate_q_0, _gate_q_7, _gate_q_14;
  ccx _gate_q_0, _gate_q_3, _gate_q_14;
}
gate ccircuit_1840 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  ccx _gate_q_0, _gate_q_1, _gate_q_8;
  ccx _gate_q_0, _gate_q_2, _gate_q_9;
  ccx _gate_q_0, _gate_q_2, _gate_q_9;
  ccx _gate_q_0, _gate_q_3, _gate_q_10;
  ccx _gate_q_0, _gate_q_4, _gate_q_11;
  ccx _gate_q_0, _gate_q_5, _gate_q_12;
  ccx _gate_q_0, _gate_q_2, _gate_q_12;
  ccx _gate_q_0, _gate_q_6, _gate_q_13;
  ccx _gate_q_0, _gate_q_7, _gate_q_14;
  ccx _gate_q_0, _gate_q_2, _gate_q_14;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  ccircuit_1833 _gate_q_14, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13;
  x _gate_q_14;
  ccircuit_1840 _gate_q_14, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13;
  x _gate_q_7;
  x _gate_q_9;
  x _gate_q_10;
  x _gate_q_12;
  x _gate_q_13;
}
