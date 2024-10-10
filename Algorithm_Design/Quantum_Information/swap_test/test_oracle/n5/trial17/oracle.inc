gate rzx_5043124656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5043124704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ecr _gate_q_0, _gate_q_1 {
  rzx_5043124656(pi/4) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  rzx_5043124704(-pi/4) _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070814816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.7498637268438872) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.715687977404197) _gate_q_1;
  ry(-1.715687977404197) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.7498637268438872) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5070814096(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2138971235728295) _gate_q_0;
  u1(1.529439360849799) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6339709929451595, 0, -3.2138971235728295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6339709929451595, 1.6844577627230306, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  swap _gate_q_3, _gate_q_1;
  cp(5.283091784214031) _gate_q_4, _gate_q_2;
  sx _gate_q_0;
  ecr _gate_q_2, _gate_q_0;
  sdg _gate_q_4;
  ry(1.924679439105234) _gate_q_3;
  tdg _gate_q_1;
  U(1.423408596305159, 2.788299526958843, 2.651456800312868) _gate_q_1;
  xx_plus_yy_5070814816(3.431375954808394, 2.7498637268438872) _gate_q_0, _gate_q_4;
  id _gate_q_3;
  u2(1.413925216847125, 5.820843412675116) _gate_q_2;
  iswap _gate_q_4, _gate_q_0;
  cp(4.953830235818019) _gate_q_3, _gate_q_2;
  sx _gate_q_1;
  cu3_5070814096(1.267941985890319, 1.6844577627230306, 4.7433364844226285) _gate_q_4, _gate_q_1;
  x _gate_q_2;
  p(2.003967580660395) _gate_q_3;
  id _gate_q_0;
}
gate cu3_5070810448(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3635369448788675) _gate_q_0;
  u1(-2.6947940989093624) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1964096017010886, 0, -3.3635369448788675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1964096017010886, 6.05833104378823, 0) _gate_q_1;
}
gate cu3_5070801664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.205570837528603) _gate_q_0;
  u1(-0.939194290101312) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0546491466733783, 0, -5.205570837528603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0546491466733783, 6.144765127629915, 0) _gate_q_1;
}
gate cu1_5042941264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_5042941264(pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  tdg _gate_q_0;
  crx(4.18199428658151) _gate_q_1, _gate_q_2;
  x _gate_q_4;
  id _gate_q_3;
  t _gate_q_4;
  cu3_5070810448(2.392819203402177, 6.05833104378823, 0.6687428459695051) _gate_q_3, _gate_q_2;
  h _gate_q_0;
  s _gate_q_1;
  cu3_5070801664(6.109298293346757, 6.144765127629915, 4.266376547427291) _gate_q_4, _gate_q_2;
  crx(1.0051178589165577) _gate_q_1, _gate_q_3;
  s _gate_q_0;
  csx _gate_q_1, _gate_q_4;
  crz(5.348425335797351) _gate_q_2, _gate_q_0;
  tdg _gate_q_3;
  iswap _gate_q_3, _gate_q_1;
  tdg _gate_q_2;
  swap _gate_q_0, _gate_q_4;
}