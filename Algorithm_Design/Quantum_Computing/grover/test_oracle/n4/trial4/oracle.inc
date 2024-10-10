gate mcphase_5361789616(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2 {
  cp(pi/4) _gate_q_1, _gate_q_2;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/4) _gate_q_0, _gate_q_2;
  cx _gate_q_1, _gate_q_0;
  cp(pi/4) _gate_q_0, _gate_q_2;
}
gate c3z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  U(pi/2, 0, pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(pi/4) _gate_q_1;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_0;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  U(pi/2, -pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/2, 0, -3*pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(pi/4) _gate_q_1;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_0;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  U(pi/2, -pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(0, -7*pi/8, -7*pi/8) _gate_q_3;
  mcphase_5361789616(pi/2) _gate_q_0, _gate_q_1, _gate_q_2;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  x _gate_q_0;
  x _gate_q_3;
  c3z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  x _gate_q_0;
  x _gate_q_3;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  h _gate_q_3;
  p(pi/8) _gate_q_0;
  p(pi/8) _gate_q_1;
  p(pi/8) _gate_q_2;
  p(pi/8) _gate_q_3;
  cx _gate_q_0, _gate_q_1;
  p(-pi/8) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_2;
  p(-pi/8) _gate_q_2;
  cx _gate_q_0, _gate_q_2;
  p(pi/8) _gate_q_2;
  cx _gate_q_1, _gate_q_2;
  p(-pi/8) _gate_q_2;
  cx _gate_q_0, _gate_q_2;
  cx _gate_q_2, _gate_q_3;
  p(-pi/8) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(pi/8) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(-pi/8) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/8) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(-pi/8) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(pi/8) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(-pi/8) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  h _gate_q_3;
}