gate rzz_5105504128(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.319852198748447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105504032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4146709132137607) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.18392391753204335) _gate_q_1;
  ry(-0.18392391753204335) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4146709132137607) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate cu1_4948306656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_4948306656(pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  h _gate_q_1;
  rzz_5105504128(5.319852198748447) _gate_q_3, _gate_q_2;
  u1(0.8140388501343152) _gate_q_0;
  u3(4.117375006584905, 0.8956196828238682, 2.680598107471098) _gate_q_4;
  xx_plus_yy_5105504032(0.3678478350640867, 3.4146709132137607) _gate_q_4, _gate_q_3;
  iswap _gate_q_1, _gate_q_2;
  p(4.257835509854909) _gate_q_0;
  ecr _gate_q_4, _gate_q_2;
  t _gate_q_0;
  z _gate_q_1;
  u2(1.8983769598430411, 0.1457723968545556) _gate_q_3;
  x _gate_q_0;
  csx _gate_q_2, _gate_q_4;
  csdg _gate_q_3, _gate_q_1;
  cz _gate_q_4, _gate_q_2;
  tdg _gate_q_1;
  sxdg _gate_q_0;
  sxdg _gate_q_3;
}
gate r_5105509024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.5186604479427634, 2.746260072192407, -2.746260072192407) _gate_q_0;
}
gate xx_plus_yy_5105509216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.3032616820755347) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.393320074360069) _gate_q_1;
  ry(-1.393320074360069) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.3032616820755347) _gate_q_0;
}
gate cu3_5105509120(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.415766345288296) _gate_q_0;
  u1(0.6164901536225607) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3472140744166263, 0, -5.415766345288296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3472140744166263, 4.799276191665736, 0) _gate_q_1;
}
gate cu3_5105509408(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2302114122862604) _gate_q_0;
  u1(0.7481002080203133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9703280518204114, 0, -1.2302114122862604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9703280518204114, 0.4821112042659472, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  rx(1.8192281022135917) _gate_q_3;
  csx _gate_q_2, _gate_q_1;
  r_5105509024(4.5186604479427634, 4.317056398987304) _gate_q_4;
  rz(2.599749739611359) _gate_q_0;
  xx_plus_yy_5105509216(2.786640148720138, 0.3032616820755347) _gate_q_1, _gate_q_2;
  swap _gate_q_3, _gate_q_0;
  u3(1.2989737794420457, 2.301905685004125, 6.069414986950262) _gate_q_4;
  p(2.1655876137537913) _gate_q_2;
  csdg _gate_q_4, _gate_q_0;
  cu3_5105509120(4.694428148833253, 4.799276191665736, 6.032256498910857) _gate_q_3, _gate_q_1;
  u2(0.20947517564284523, 3.4177516971555724) _gate_q_3;
  cu3_5105509408(5.940656103640823, 0.4821112042659472, 1.9783116203065738) _gate_q_2, _gate_q_4;
  crz(3.815471618415508) _gate_q_1, _gate_q_0;
  sxdg _gate_q_1;
  u2(2.28180221233518, 0.6232275640312286) _gate_q_4;
  swap _gate_q_0, _gate_q_3;
  u3(3.4511111521658155, 2.854867512042085, 1.5143246696055646) _gate_q_2;
}