gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070295392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2300639248747074) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7719581904809154) _gate_q_1;
  ry(-0.7719581904809154) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2300639248747074) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  xx_plus_yy_5070295392(1.5439163809618308, 3.2300639248747074) _gate_q_1, _gate_q_0;
  rz(2.7837312227623934) _gate_q_2;
  iswap _gate_q_1, _gate_q_0;
  sx _gate_q_2;
  cs _gate_q_1, _gate_q_0;
  u1(5.307829779113265) _gate_q_2;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  cx _gate_q_1, _gate_q_2;
  sxdg _gate_q_0;
  cry(5.330537320979074) _gate_q_0, _gate_q_2;
  t _gate_q_1;
  tdg _gate_q_0;
  z _gate_q_1;
  tdg _gate_q_2;
}