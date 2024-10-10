gate r_5105500624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2909136386494358, 1.5983079805809952, -1.5983079805809952) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105500720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.3533206471567674) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.219945246820483) _gate_q_1;
  ry(-1.219945246820483) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.3533206471567674) _gate_q_0;
}
gate cu3_5105500240(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7768633176643744) _gate_q_0;
  u1(-1.7233224509172411) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.124826348757409, 0, -2.7768633176643744) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.124826348757409, 4.500185768581615, 0) _gate_q_1;
}
gate rzz_5105500864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.699161565575961) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105500960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.773899270358328, 4.046542945188156, -4.046542945188156) _gate_q_0;
}
gate r_5105501200(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.80492383858405, 4.57925504676098, -4.57925504676098) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  u3(0.6061579949564068, 1.996070712523359, 6.273457342140843) _gate_q_2;
  cu(3.9055974616659137, 3.071129413512717, 3.1581349477738967, 2.5237250504887636) _gate_q_1, _gate_q_4;
  s _gate_q_0;
  r_5105500624(1.2909136386494358, 3.1691043073758918) _gate_q_3;
  u2(5.600358925279107, 3.1090181254309313) _gate_q_3;
  U(1.2343793898527151, 1.182974411581661, 1.9491103895328048) _gate_q_4;
  xx_plus_yy_5105500720(2.439890493640966, 3.3533206471567674) _gate_q_0, _gate_q_1;
  p(2.6758789125872933) _gate_q_2;
  cu3_5105500240(2.249652697514818, 4.500185768581615, 1.053540866747133) _gate_q_4, _gate_q_3;
  rzz_5105500864(5.699161565575961) _gate_q_2, _gate_q_0;
  h _gate_q_1;
  rz(5.825226854979762) _gate_q_1;
  r_5105500960(4.773899270358328, 5.617339271983052) _gate_q_3;
  cp(2.225095731413624) _gate_q_4, _gate_q_2;
  id _gate_q_0;
  id _gate_q_1;
  h _gate_q_4;
  cu(4.8081900310886905, 5.917806344460601, 3.25042139228241, 0.4468533232301626) _gate_q_2, _gate_q_3;
  r_5105501200(0.80492383858405, 6.150051373555876) _gate_q_0;
}
gate rzx_5105502448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.981134582198881) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
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
gate rzx_5105502832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.065113162858831) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  cp(3.3243654265866938) _gate_q_3, _gate_q_2;
  rzx_5105502448(5.981134582198881) _gate_q_1, _gate_q_0;
  sx _gate_q_4;
  ecr _gate_q_4, _gate_q_1;
  ecr _gate_q_0, _gate_q_2;
  t _gate_q_3;
  crz(5.34741460218749) _gate_q_2, _gate_q_0;
  cx _gate_q_4, _gate_q_3;
  u2(0.4301298543714085, 5.930923339723848) _gate_q_1;
  cry(0.506232372549902) _gate_q_4, _gate_q_0;
  s _gate_q_1;
  cry(2.5089105273880077) _gate_q_3, _gate_q_2;
  rzx_5105502832(5.065113162858831) _gate_q_0, _gate_q_3;
  swap _gate_q_2, _gate_q_1;
  tdg _gate_q_4;
}