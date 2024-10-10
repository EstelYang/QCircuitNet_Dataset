gate mcphase_5364085296(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  cp(pi/8) _gate_q_2, _gate_q_3;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/8) _gate_q_1, _gate_q_3;
  cx _gate_q_2, _gate_q_1;
  cp(pi/8) _gate_q_1, _gate_q_3;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/8) _gate_q_0, _gate_q_3;
  cx _gate_q_2, _gate_q_0;
  cp(pi/8) _gate_q_0, _gate_q_3;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/8) _gate_q_0, _gate_q_3;
  cx _gate_q_2, _gate_q_0;
  cp(pi/8) _gate_q_0, _gate_q_3;
}
gate c4z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  U(pi/2, 0, pi) _gate_q_4;
  cx _gate_q_1, _gate_q_4;
  p(-pi/4) _gate_q_4;
  cx _gate_q_0, _gate_q_4;
  p(pi/4) _gate_q_4;
  cx _gate_q_1, _gate_q_4;
  p(pi/4) _gate_q_1;
  p(-pi/4) _gate_q_4;
  cx _gate_q_0, _gate_q_4;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_0;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  U(pi/4, pi/2, -pi/4) _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  p(-pi/4) _gate_q_4;
  cx _gate_q_2, _gate_q_4;
  p(pi/4) _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  p(pi/4) _gate_q_3;
  p(-pi/4) _gate_q_4;
  cx _gate_q_2, _gate_q_4;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_2;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/4, -pi/2, 3*pi/4) _gate_q_4;
  cx _gate_q_1, _gate_q_4;
  p(-pi/4) _gate_q_4;
  cx _gate_q_0, _gate_q_4;
  p(pi/4) _gate_q_4;
  cx _gate_q_1, _gate_q_4;
  p(pi/4) _gate_q_1;
  p(-pi/4) _gate_q_4;
  cx _gate_q_0, _gate_q_4;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_0;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  U(pi/4, pi/2, -pi/4) _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  p(-pi/4) _gate_q_4;
  cx _gate_q_2, _gate_q_4;
  p(pi/4) _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  p(pi/4) _gate_q_3;
  p(-pi/4) _gate_q_4;
  cx _gate_q_2, _gate_q_4;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_2;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/2, pi/4, -3*pi/4) _gate_q_4;
  mcphase_5364085296(pi/2) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  x _gate_q_0;
  x _gate_q_1;
  c4z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4;
  x _gate_q_0;
  x _gate_q_1;
}
gate cu1_5364088368(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate rcccx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  u2(0, pi) _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  u2(0, pi) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  u2(0, pi) _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  u2(0, pi) _gate_q_3;
}
gate cu1_5364085680(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
}
gate rcccx_dg _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  u2(-2*pi, pi) _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  u2(-2*pi, pi) _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  u2(-2*pi, pi) _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  u2(-2*pi, pi) _gate_q_3;
}
gate cu1_4417382032(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
}
gate cu1_4417239088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
}
gate cu1_4417382272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
}
gate cu1_4417384096(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
}
gate cu1_4424863232(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
}
gate cu1_4424863376(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
}
gate cu1_4424863472(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
}
gate c3sx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  h _gate_q_3;
  cu1_4417382032(pi/8) _gate_q_0, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_3;
  cu1_4417239088(-pi/8) _gate_q_1, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_3;
  cu1_4417382272(pi/8) _gate_q_1, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_1, _gate_q_2;
  h _gate_q_3;
  cu1_4417384096(-pi/8) _gate_q_2, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_0, _gate_q_2;
  h _gate_q_3;
  cu1_4424863232(pi/8) _gate_q_2, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_1, _gate_q_2;
  h _gate_q_3;
  cu1_4424863376(-pi/8) _gate_q_2, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_0, _gate_q_2;
  h _gate_q_3;
  cu1_4424863472(pi/8) _gate_q_2, _gate_q_3;
  h _gate_q_3;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  h _gate_q_4;
  cu1_5364088368(pi/2) _gate_q_3, _gate_q_4;
  h _gate_q_4;
  rcccx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  h _gate_q_4;
  cu1_5364085680(-pi/2) _gate_q_3, _gate_q_4;
  h _gate_q_4;
  rcccx_dg _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  c3sx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_4;
}