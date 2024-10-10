gate mcphase_5363783952(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  cp(pi/16) _gate_q_3, _gate_q_4;
  cx _gate_q_3, _gate_q_2;
  cp(-pi/16) _gate_q_2, _gate_q_4;
  cx _gate_q_3, _gate_q_2;
  cp(pi/16) _gate_q_2, _gate_q_4;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_3, _gate_q_1;
  cp(pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_3, _gate_q_1;
  cp(pi/16) _gate_q_1, _gate_q_4;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  cp(pi/16) _gate_q_0, _gate_q_4;
}
gate c5z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  U(pi/2, 0, pi) _gate_q_5;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/2, pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  p(pi/4) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(pi/4) _gate_q_4;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_4;
  p(pi/4) _gate_q_3;
  p(-pi/4) _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  U(pi/4, -pi/2, 3*pi/4) _gate_q_5;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/2, pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_5, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  p(pi/4) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  p(pi/4) _gate_q_4;
  p(-pi/4) _gate_q_5;
  cx _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_4;
  p(pi/4) _gate_q_3;
  p(-pi/4) _gate_q_4;
  cx _gate_q_3, _gate_q_4;
  U(pi/2, pi/4, -3*pi/4) _gate_q_5;
  mcphase_5363783952(pi/2) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  x _gate_q_3;
  x _gate_q_5;
  c5z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
  x _gate_q_3;
  x _gate_q_5;
}
gate cu1_5364414848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
}
gate cu1_5364414992(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364416336(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364411872(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364414320(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364413312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364414128(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364403328(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364409472(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364413264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364409856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364404864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364404576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364406112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364408704(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate cu1_5364403568(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/32) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/32) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/32) _gate_q_1;
}
gate mcu1_5364408176(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cu1_5364414848(pi/16) _gate_q_4, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cu1_5364414992(-pi/16) _gate_q_3, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cu1_5364414848(pi/16) _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cu1_5364416336(-pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cu1_5364414848(pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cu1_5364411872(-pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cu1_5364414848(pi/16) _gate_q_2, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cu1_5364414320(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364414848(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cu1_5364413312(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364414848(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cu1_5364414128(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364414848(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cu1_5364403328(-pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cu1_5364414848(pi/16) _gate_q_1, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cu1_5364409472(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364414848(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364413264(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364414848(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cu1_5364409856(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364414848(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364404864(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364414848(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cu1_5364404576(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364414848(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364406112(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364414848(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cu1_5364408704(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364414848(pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cu1_5364403568(-pi/16) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cu1_5364414848(pi/16) _gate_q_0, _gate_q_5;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  h _gate_q_5;
  mcu1_5364408176(pi) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
  h _gate_q_5;
}