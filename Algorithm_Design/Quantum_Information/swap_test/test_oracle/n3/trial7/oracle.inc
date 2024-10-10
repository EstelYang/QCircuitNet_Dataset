gate rzx_4371195392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_4948473424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ecr _gate_q_0, _gate_q_1 {
  rzx_4371195392(pi/4) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  rzx_4948473424(-pi/4) _gate_q_0, _gate_q_1;
}
gate ryy_5105148096(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.126267264072424) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105142336(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.666450754863665, 0.09228709911707544, -0.09228709911707544) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  u1(6.253953990286228) _gate_q_1;
  ecr _gate_q_2, _gate_q_0;
  ryy_5105148096(4.126267264072424) _gate_q_0, _gate_q_2;
  r_5105142336(5.666450754863665, 1.663083425911972) _gate_q_1;
  iswap _gate_q_0, _gate_q_1;
  rz(3.465324731529753) _gate_q_2;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate ryy_5105148912(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.13555660365368347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  y _gate_q_1;
  U(5.8800092630340135, 3.2720818294332243, 3.460742947787655) _gate_q_0;
  y _gate_q_2;
  dcx _gate_q_2, _gate_q_0;
  sxdg _gate_q_1;
  ryy_5105148912(0.13555660365368347) _gate_q_1, _gate_q_0;
  t _gate_q_2;
}