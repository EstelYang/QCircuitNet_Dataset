gate mcphase_5305628384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cp(pi/2) _gate_q_0, _gate_q_1;
}
gate ccz _gate_q_0, _gate_q_1, _gate_q_2 {
  cx _gate_q_0, _gate_q_2;
  U(0, -pi/8, -pi/8) _gate_q_2;
  cx _gate_q_1, _gate_q_2;
  U(0, -7*pi/8, -7*pi/8) _gate_q_2;
  cx _gate_q_0, _gate_q_2;
  U(0, -pi/8, -pi/8) _gate_q_2;
  cx _gate_q_1, _gate_q_2;
  U(0, -7*pi/8, -7*pi/8) _gate_q_2;
  mcphase_5305628384(pi/2) _gate_q_0, _gate_q_1;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2 {
  x _gate_q_2;
  ccz _gate_q_0, _gate_q_1, _gate_q_2;
  x _gate_q_2;
}