gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105436432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.008268479008402) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.60742844717815) _gate_q_0;
  ry(-1.60742844717815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.008268479008402) _gate_q_1;
}
gate xx_minus_yy_5105450256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0455497776387668) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.801317766470848) _gate_q_0;
  ry(-0.801317766470848) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0455497776387668) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  sdg _gate_q_3;
  xx_minus_yy_5105436432(3.2148568943563, 4.008268479008402) _gate_q_1, _gate_q_4;
  U(3.985961793890874, 4.625533427342047, 2.0877406534438805) _gate_q_2;
  id _gate_q_0;
  cz _gate_q_4, _gate_q_3;
  xx_minus_yy_5105450256(1.602635532941696, 1.0455497776387668) _gate_q_2, _gate_q_1;
  x _gate_q_0;
  h _gate_q_3;
  u2(3.8760347982577446, 3.4521834683364387) _gate_q_4;
  rx(2.2898828319833413) _gate_q_2;
  tdg _gate_q_1;
  t _gate_q_0;
  cz _gate_q_4, _gate_q_3;
  cz _gate_q_1, _gate_q_0;
  z _gate_q_2;
  sdg _gate_q_2;
  iswap _gate_q_3, _gate_q_4;
  cy _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5105442960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8522187049195513, 0.42007968810635776, -0.42007968810635776) _gate_q_0;
}
gate xx_plus_yy_5105440128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.21660770728282638) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2176732038482814) _gate_q_1;
  ry(-1.2176732038482814) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.21660770728282638) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  rx(1.479612212111723) _gate_q_2;
  cs _gate_q_4, _gate_q_0;
  crz(2.007978291197929) _gate_q_3, _gate_q_1;
  sdg _gate_q_1;
  dcx _gate_q_4, _gate_q_3;
  u2(6.135125572901667, 5.047149365365897) _gate_q_0;
  sxdg _gate_q_2;
  cs _gate_q_4, _gate_q_0;
  cry(4.6928606571226) _gate_q_1, _gate_q_3;
  r_5105442960(2.8522187049195513, 1.9908760149012543) _gate_q_2;
  xx_plus_yy_5105440128(2.4353464076965627, 0.21660770728282638) _gate_q_1, _gate_q_2;
  crz(5.181737043030729) _gate_q_0, _gate_q_3;
  u2(4.798634556150965, 3.519781302750919) _gate_q_4;
  ch _gate_q_0, _gate_q_4;
  crx(1.101975473184361) _gate_q_2, _gate_q_1;
  x _gate_q_3;
}