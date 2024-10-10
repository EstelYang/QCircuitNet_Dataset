gate ccircuit_2715 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  ccx _gate_q_0, _gate_q_1, _gate_q_10;
  ccx _gate_q_0, _gate_q_1, _gate_q_10;
  ccx _gate_q_0, _gate_q_2, _gate_q_11;
  ccx _gate_q_0, _gate_q_3, _gate_q_12;
  ccx _gate_q_0, _gate_q_4, _gate_q_13;
  ccx _gate_q_0, _gate_q_5, _gate_q_14;
  ccx _gate_q_0, _gate_q_6, _gate_q_15;
  ccx _gate_q_0, _gate_q_7, _gate_q_16;
  ccx _gate_q_0, _gate_q_1, _gate_q_16;
  ccx _gate_q_0, _gate_q_8, _gate_q_17;
  ccx _gate_q_0, _gate_q_9, _gate_q_18;
}
gate ccircuit_2722 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  ccx _gate_q_0, _gate_q_1, _gate_q_10;
  ccx _gate_q_0, _gate_q_2, _gate_q_11;
  ccx _gate_q_0, _gate_q_2, _gate_q_11;
  ccx _gate_q_0, _gate_q_3, _gate_q_12;
  ccx _gate_q_0, _gate_q_2, _gate_q_12;
  ccx _gate_q_0, _gate_q_4, _gate_q_13;
  ccx _gate_q_0, _gate_q_2, _gate_q_13;
  ccx _gate_q_0, _gate_q_5, _gate_q_14;
  ccx _gate_q_0, _gate_q_6, _gate_q_15;
  ccx _gate_q_0, _gate_q_7, _gate_q_16;
  ccx _gate_q_0, _gate_q_2, _gate_q_16;
  ccx _gate_q_0, _gate_q_8, _gate_q_17;
  ccx _gate_q_0, _gate_q_2, _gate_q_17;
  ccx _gate_q_0, _gate_q_9, _gate_q_18;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  ccircuit_2715 _gate_q_18, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17;
  x _gate_q_18;
  ccircuit_2722 _gate_q_18, _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17;
  x _gate_q_9;
  x _gate_q_16;
}
