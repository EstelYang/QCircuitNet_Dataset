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
gate cu1_5074234560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.115601729911957) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.115601729911957) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.115601729911957) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074230192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5475385977980836) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.744112250728041) _gate_q_0;
  ry(-0.744112250728041) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5475385977980836) _gate_q_1;
}
gate rzz_5074224672(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.266046192388301) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5074232736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.823026612610938) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.039068353508775) _gate_q_0;
  ry(-2.039068353508775) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.823026612610938) _gate_q_1;
}
gate rxx_5074228320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.55282546640573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074234992(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.40893429731741604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074230096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.978675045748715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074226112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.83728738894411) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.83728738894411) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.83728738894411) _gate_q_1;
}
gate rzx_5074231920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.291045602368118) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074229952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5482945900745104, 2.4378140790241662, -2.4378140790241662) _gate_q_0;
}
gate cu1_5074225968(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1316399568434137) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1316399568434137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1316399568434137) _gate_q_1;
}
gate xx_minus_yy_5074223472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.29217566484175) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.828084915589259) _gate_q_0;
  ry(-2.828084915589259) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.29217566484175) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5074230624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.888643105313913) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0619998169375942) _gate_q_1;
  ry(-1.0619998169375942) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.888643105313913) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5074235712(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5466871942063258, 1.1769468768815172, -1.1769468768815172) _gate_q_0;
}
gate xx_minus_yy_5074235040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.211776106787393) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2069948800031125) _gate_q_0;
  ry(-1.2069948800031125) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.211776106787393) _gate_q_1;
}
gate r_5074224048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.473964789961755, 4.097509173183209, -4.097509173183209) _gate_q_0;
}
gate rzz_5074227840(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.172985266232144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074234800(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.3010840067427663, 0.6787235783941417, -0.6787235783941417) _gate_q_0;
}
gate xx_minus_yy_5074233744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.18750938807653367) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.046764020906377) _gate_q_0;
  ry(-2.046764020906377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.18750938807653367) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  ry(2.816050189803572) _gate_q_0;
  ecr _gate_q_6, _gate_q_17;
  csx _gate_q_7, _gate_q_15;
  cy _gate_q_10, _gate_q_12;
  crx(2.6526081291436414) _gate_q_14, _gate_q_1;
  ry(4.695233135823508) _gate_q_9;
  cry(5.2392222301946525) _gate_q_16, _gate_q_18;
  cu1_5074234560(2.231203459823914) _gate_q_19, _gate_q_4;
  cp(3.593075651791195) _gate_q_5, _gate_q_8;
  ry(3.9445978629395757) _gate_q_2;
  xx_minus_yy_5074230192(1.488224501456082, 0.5475385977980836) _gate_q_3, _gate_q_11;
  p(5.543067338341606) _gate_q_13;
  crz(2.412438438568289) _gate_q_8, _gate_q_0;
  h _gate_q_7;
  ch _gate_q_15, _gate_q_16;
  csx _gate_q_1, _gate_q_5;
  cry(5.22823467174204) _gate_q_11, _gate_q_9;
  cz _gate_q_4, _gate_q_12;
  rzz_5074224672(2.266046192388301) _gate_q_2, _gate_q_13;
  ecr _gate_q_6, _gate_q_17;
  cry(5.191550470518596) _gate_q_10, _gate_q_18;
  sx _gate_q_3;
  dcx _gate_q_19, _gate_q_14;
  xx_minus_yy_5074232736(4.07813670701755, 5.823026612610938) _gate_q_16, _gate_q_15;
  u3(4.856344966780802, 2.6381921730640863, 1.967395825712338) _gate_q_9;
  csx _gate_q_6, _gate_q_18;
  x _gate_q_3;
  sdg _gate_q_11;
  sxdg _gate_q_1;
  z _gate_q_0;
  crx(5.227926182736217) _gate_q_10, _gate_q_12;
  cry(4.119311094163427) _gate_q_7, _gate_q_5;
  u1(4.410377171873683) _gate_q_14;
  cp(2.906578902639693) _gate_q_19, _gate_q_4;
  rxx_5074228320(4.55282546640573) _gate_q_17, _gate_q_2;
  csx _gate_q_13, _gate_q_8;
  U(6.213001018702053, 3.5689665789947154, 4.234401431212575) _gate_q_9;
  y _gate_q_6;
  swap _gate_q_11, _gate_q_16;
  rzz_5074234992(0.40893429731741604) _gate_q_18, _gate_q_0;
  ry(2.094750886060695) _gate_q_19;
  rxx_5074230096(5.978675045748715) _gate_q_1, _gate_q_15;
  rx(4.650388892162463) _gate_q_3;
  p(5.030582281909127) _gate_q_8;
  cp(4.853909580426356) _gate_q_7, _gate_q_2;
  u3(2.6798269139405257, 5.587158263622627, 6.2749647692511346) _gate_q_4;
  csx _gate_q_13, _gate_q_5;
  tdg _gate_q_14;
  t _gate_q_17;
  id _gate_q_12;
  rx(4.5108532290428105) _gate_q_10;
  cu(0.2796751518985696, 1.1344651042426956, 1.1452380159792546, 1.9688402716169033) _gate_q_7, _gate_q_1;
  cu1_5074226112(5.67457477788822) _gate_q_13, _gate_q_0;
  ry(4.107414066706324) _gate_q_16;
  rzx_5074231920(4.291045602368118) _gate_q_14, _gate_q_15;
  p(1.293102295255116) _gate_q_4;
  r_5074229952(2.5482945900745104, 4.008610405819063) _gate_q_19;
  id _gate_q_2;
  x _gate_q_17;
  x _gate_q_9;
  cry(3.2978260939855417) _gate_q_3, _gate_q_18;
  ry(4.21140588761418) _gate_q_10;
  ch _gate_q_8, _gate_q_5;
  y _gate_q_6;
  sxdg _gate_q_11;
  u1(1.1424318228298835) _gate_q_12;
  dcx _gate_q_11, _gate_q_9;
  cu1_5074225968(4.263279913686827) _gate_q_12, _gate_q_17;
  ry(4.2407360292028295) _gate_q_3;
  x _gate_q_2;
  dcx _gate_q_7, _gate_q_6;
  y _gate_q_10;
  cu(5.649099927082865, 2.123919934058236, 6.109126936632124, 2.5595157782298643) _gate_q_5, _gate_q_1;
  xx_minus_yy_5074223472(5.656169831178518, 2.29217566484175) _gate_q_0, _gate_q_8;
  cx _gate_q_13, _gate_q_15;
  s _gate_q_16;
  dcx _gate_q_4, _gate_q_19;
  cs _gate_q_18, _gate_q_14;
  u2(1.1525717382169782, 3.020801726173034) _gate_q_8;
  cp(1.8573766241964975) _gate_q_0, _gate_q_16;
  sxdg _gate_q_12;
  crx(3.8257424925713592) _gate_q_15, _gate_q_18;
  crz(4.7818673583305324) _gate_q_7, _gate_q_6;
  u2(4.536368338681317, 1.0488195544329608) _gate_q_14;
  csx _gate_q_11, _gate_q_13;
  s _gate_q_4;
  sx _gate_q_17;
  csx _gate_q_1, _gate_q_5;
  ry(3.0928940537618073) _gate_q_2;
  h _gate_q_9;
  crz(6.03574799968869) _gate_q_10, _gate_q_3;
  y _gate_q_19;
  csdg _gate_q_9, _gate_q_8;
  u3(4.079547923209875, 5.5887159070722765, 5.488888697956085) _gate_q_4;
  ch _gate_q_14, _gate_q_19;
  cu(1.1788225877520657, 2.57557624290749, 2.9734603949273857, 5.987852279567961) _gate_q_16, _gate_q_15;
  cp(5.853639703127326) _gate_q_7, _gate_q_12;
  sdg _gate_q_3;
  xx_plus_yy_5074230624(2.1239996338751883, 4.888643105313913) _gate_q_13, _gate_q_17;
  cs _gate_q_5, _gate_q_0;
  u3(6.201998888999452, 0.5083869512494074, 6.147055384299238) _gate_q_2;
  iswap _gate_q_6, _gate_q_11;
  iswap _gate_q_1, _gate_q_18;
  r_5074235712(0.5466871942063258, 2.747743203676414) _gate_q_10;
  xx_minus_yy_5074235040(2.413989760006225, 4.211776106787393) _gate_q_18, _gate_q_14;
  rz(1.3276752647538448) _gate_q_6;
  u3(6.1412426552084565, 4.648550024537596, 3.083002611788636) _gate_q_16;
  r_5074224048(3.473964789961755, 5.668305499978105) _gate_q_12;
  cy _gate_q_7, _gate_q_0;
  csdg _gate_q_2, _gate_q_19;
  id _gate_q_3;
  u2(3.517537492179405, 5.412116017998599) _gate_q_5;
  rzz_5074227840(4.172985266232144) _gate_q_8, _gate_q_17;
  iswap _gate_q_10, _gate_q_13;
  u3(5.265733353793692, 6.178052018429053, 5.25891456981126) _gate_q_15;
  rz(2.468960215634365) _gate_q_1;
  ch _gate_q_4, _gate_q_11;
  r_5074234800(3.3010840067427663, 2.249519905189038) _gate_q_9;
  ch _gate_q_15, _gate_q_18;
  cu(1.031581913810023, 3.7229765421929324, 4.312200388531819, 3.9358567850838604) _gate_q_1, _gate_q_6;
  iswap _gate_q_14, _gate_q_13;
  u3(4.09721792060596, 0.773894173184831, 2.4962973916432434) _gate_q_4;
  h _gate_q_7;
  csdg _gate_q_11, _gate_q_2;
  ry(3.796742776134857) _gate_q_3;
  U(3.7495031820463334, 2.125413179602365, 3.7830944356245855) _gate_q_5;
  cx _gate_q_12, _gate_q_0;
  p(2.187927702994446) _gate_q_10;
  csdg _gate_q_16, _gate_q_17;
  xx_minus_yy_5074233744(4.093528041812754, 0.18750938807653367) _gate_q_19, _gate_q_8;
  ry(2.0539643272216237) _gate_q_9;
}
gate rzx_5074228032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.149747669309857) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074238160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0628502424959243) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074234176(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5263592986982406) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5263592986982406) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5263592986982406) _gate_q_1;
}
gate rzz_5074227984(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.050140929005580856) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5074224336(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.604774116500594) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.604774116500594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.604774116500594) _gate_q_1;
}
gate xx_minus_yy_5074228752(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.4474034126745505) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5724012274395545) _gate_q_0;
  ry(-2.5724012274395545) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.4474034126745505) _gate_q_1;
}
gate cu3_5074228512(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.0301496457580335) _gate_q_0;
  u1(-0.5584637577056254) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8672451918889195, 0, -1.0301496457580335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8672451918889195, 1.588613403463659, 0) _gate_q_1;
}
gate ryy_5074233120(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5766821238962563) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074230336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.685711684004278) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9704641951699227) _gate_q_1;
  ry(-2.9704641951699227) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.685711684004278) _gate_q_0;
}
gate cu3_5074228080(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.136899771546493) _gate_q_0;
  u1(-0.4944928605272708) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8374349154947185, 0, -2.136899771546493) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8374349154947185, 2.631392632073764, 0) _gate_q_1;
}
gate xx_minus_yy_5074231008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.082870750376865) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.568674594778806) _gate_q_0;
  ry(-1.568674594778806) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.082870750376865) _gate_q_1;
}
gate cu3_5074227744(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.645057513718717) _gate_q_0;
  u1(-2.0870631680636498) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4477228603114343, 0, -2.645057513718717) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4477228603114343, 4.732120681782367, 0) _gate_q_1;
}
gate xx_minus_yy_5074231392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.5953387394854976) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8603512488182161) _gate_q_0;
  ry(-1.8603512488182161) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.5953387394854976) _gate_q_1;
}
gate rzz_5074232064(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.408746777266958) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074231248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.218835498858324) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3365356630467273) _gate_q_1;
  ry(-2.3365356630467273) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.218835498858324) _gate_q_0;
}
gate rxx_5074228944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.898668699569174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074237968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.1397139954361775) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074225488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3291070655616877) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3291070655616877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3291070655616877) _gate_q_1;
}
gate rxx_5074230000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.104724134948114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074233456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.98965734832519) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074226496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.48901650902622) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5074224432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.936494965751603) _gate_q_0;
  u1(-1.8005824160594035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8065391516497296, 0, -1.936494965751603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8065391516497296, 3.7370773818110066, 0) _gate_q_1;
}
gate ryy_5074238112(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1464771899117994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074233792(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.427096595401094) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5074237680(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.018706058992836) _gate_q_0;
  u1(1.104408870105907) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7851771845794593, 0, -5.018706058992836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7851771845794593, 3.914297188886929, 0) _gate_q_1;
}
gate rzz_5074227936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.6540202294865995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5074233216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5984462331014373) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5984462331014373) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5984462331014373) _gate_q_1;
}
gate rzx_5070801424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.387795492143446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5070814336(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9291237991043801, 4.622882008540696, -4.622882008540696) _gate_q_0;
}
gate rzz_5070812800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.102314686638426) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070800608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.3418326868109403) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.05450199164104597) _gate_q_1;
  ry(-0.05450199164104597) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.3418326868109403) _gate_q_0;
}
gate rxx_5070809728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.2365847389793885) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  u2(2.9991761823048417, 0.45508037662884315) _gate_q_2;
  cz _gate_q_3, _gate_q_15;
  crz(5.900485683640449) _gate_q_6, _gate_q_19;
  s _gate_q_18;
  ch _gate_q_17, _gate_q_9;
  rzx_5074228032(5.149747669309857) _gate_q_16, _gate_q_13;
  rz(1.8290926979608748) _gate_q_11;
  swap _gate_q_5, _gate_q_14;
  p(4.544246504716497) _gate_q_10;
  id _gate_q_0;
  cp(3.522203842249683) _gate_q_1, _gate_q_8;
  cy _gate_q_12, _gate_q_4;
  sdg _gate_q_7;
  rxx_5074238160(1.0628502424959243) _gate_q_7, _gate_q_8;
  cu1_5074234176(5.052718597396481) _gate_q_14, _gate_q_2;
  swap _gate_q_4, _gate_q_15;
  rx(3.303898404901379) _gate_q_19;
  h _gate_q_5;
  rzz_5074227984(0.050140929005580856) _gate_q_11, _gate_q_0;
  sdg _gate_q_9;
  iswap _gate_q_10, _gate_q_16;
  cp(5.705289754871309) _gate_q_12, _gate_q_1;
  u1(5.005004742293493) _gate_q_3;
  rx(4.923103309470025) _gate_q_13;
  u1(0.7993055459895794) _gate_q_17;
  cu1_5074224336(5.209548233001188) _gate_q_6, _gate_q_18;
  u2(3.1462709259769506, 1.7603756956212124) _gate_q_12;
  cu(2.0046594465763654, 5.908470973516625, 1.143867224669538, 4.627960690126903) _gate_q_4, _gate_q_3;
  x _gate_q_7;
  s _gate_q_1;
  sxdg _gate_q_5;
  xx_minus_yy_5074228752(5.144802454879109, 2.4474034126745505) _gate_q_10, _gate_q_19;
  ecr _gate_q_16, _gate_q_17;
  cu3_5074228512(5.734490383777839, 1.588613403463659, 0.47168588805240813) _gate_q_2, _gate_q_15;
  crx(3.7838649282328376) _gate_q_18, _gate_q_11;
  ryy_5074233120(3.5766821238962563) _gate_q_9, _gate_q_6;
  ry(2.214845224936791) _gate_q_14;
  u2(0.060808907476387605, 2.5191769545282585) _gate_q_13;
  s _gate_q_8;
  id _gate_q_0;
  sxdg _gate_q_13;
  ch _gate_q_15, _gate_q_10;
  iswap _gate_q_5, _gate_q_8;
  sdg _gate_q_1;
  xx_plus_yy_5074230336(5.940928390339845, 2.685711684004278) _gate_q_17, _gate_q_9;
  rx(1.5804623751830453) _gate_q_19;
  csdg _gate_q_0, _gate_q_4;
  sdg _gate_q_14;
  sxdg _gate_q_16;
  dcx _gate_q_12, _gate_q_6;
  iswap _gate_q_7, _gate_q_18;
  csx _gate_q_11, _gate_q_2;
  sxdg _gate_q_3;
  cu3_5074228080(1.674869830989437, 2.631392632073764, 1.6424069110192223) _gate_q_5, _gate_q_8;
  crx(4.926930790485697) _gate_q_19, _gate_q_6;
  xx_minus_yy_5074231008(3.137349189557612, 1.082870750376865) _gate_q_3, _gate_q_12;
  swap _gate_q_7, _gate_q_15;
  iswap _gate_q_0, _gate_q_2;
  tdg _gate_q_4;
  cu3_5074227744(4.8954457206228685, 4.732120681782367, 0.5579943456550668) _gate_q_10, _gate_q_17;
  xx_minus_yy_5074231392(3.7207024976364322, 2.5953387394854976) _gate_q_13, _gate_q_14;
  h _gate_q_18;
  sxdg _gate_q_11;
  csdg _gate_q_9, _gate_q_1;
  rz(2.2784650748962805) _gate_q_16;
  crz(3.9607791463504594) _gate_q_19, _gate_q_8;
  rzz_5074232064(2.408746777266958) _gate_q_4, _gate_q_13;
  ecr _gate_q_2, _gate_q_1;
  cry(0.7202826959796622) _gate_q_14, _gate_q_9;
  xx_plus_yy_5074231248(4.673071326093455, 2.218835498858324) _gate_q_17, _gate_q_3;
  rxx_5074228944(4.898668699569174) _gate_q_16, _gate_q_12;
  cry(4.581166515191822) _gate_q_15, _gate_q_11;
  cry(0.8445455527425962) _gate_q_0, _gate_q_5;
  h _gate_q_7;
  cp(1.8080689898420585) _gate_q_6, _gate_q_10;
  u2(4.45440316781485, 1.1547036665101105) _gate_q_18;
  rxx_5074237968(6.1397139954361775) _gate_q_9, _gate_q_7;
  cz _gate_q_1, _gate_q_13;
  swap _gate_q_12, _gate_q_16;
  cu1_5074225488(4.658214131123375) _gate_q_4, _gate_q_10;
  iswap _gate_q_3, _gate_q_5;
  rz(1.4908342163707395) _gate_q_2;
  t _gate_q_8;
  rxx_5074230000(6.104724134948114) _gate_q_6, _gate_q_18;
  ch _gate_q_19, _gate_q_15;
  sdg _gate_q_11;
  sdg _gate_q_17;
  ecr _gate_q_14, _gate_q_0;
  dcx _gate_q_18, _gate_q_7;
  rzz_5074233456(5.98965734832519) _gate_q_0, _gate_q_10;
  t _gate_q_15;
  cy _gate_q_9, _gate_q_19;
  s _gate_q_8;
  sxdg _gate_q_4;
  h _gate_q_2;
  p(1.8182554037745917) _gate_q_16;
  U(4.821082168680401, 2.779553994562507, 1.065626493890608) _gate_q_13;
  cy _gate_q_17, _gate_q_5;
  z _gate_q_14;
  tdg _gate_q_3;
  rxx_5074226496(2.48901650902622) _gate_q_6, _gate_q_11;
  cz _gate_q_12, _gate_q_1;
  u2(4.642951071207785, 0.9495243376357226) _gate_q_10;
  cu3_5074224432(1.6130783032994591, 3.7370773818110066, 0.13591254969219968) _gate_q_19, _gate_q_18;
  ryy_5074238112(1.1464771899117994) _gate_q_13, _gate_q_3;
  u1(0.883249439246527) _gate_q_12;
  rzz_5074233792(4.427096595401094) _gate_q_8, _gate_q_6;
  cu3_5074237680(5.570354369158919, 3.914297188886929, 6.123114929098743) _gate_q_9, _gate_q_14;
  cs _gate_q_7, _gate_q_16;
  p(1.7736422327909802) _gate_q_11;
  rzz_5074227936(4.6540202294865995) _gate_q_17, _gate_q_5;
  cu1_5074233216(3.1968924662028746) _gate_q_0, _gate_q_4;
  sdg _gate_q_2;
  y _gate_q_1;
  sxdg _gate_q_15;
  ry(3.30326107272822) _gate_q_0;
  h _gate_q_1;
  cs _gate_q_3, _gate_q_13;
  rzx_5070801424(5.387795492143446) _gate_q_10, _gate_q_12;
  x _gate_q_16;
  r_5070814336(1.9291237991043801, 6.193678335335592) _gate_q_9;
  U(4.835075463096497, 4.28686717704449, 4.372441655039106) _gate_q_4;
  cry(0.7724240090917133) _gate_q_7, _gate_q_19;
  rzz_5070812800(6.102314686638426) _gate_q_17, _gate_q_5;
  id _gate_q_18;
  xx_plus_yy_5070800608(0.10900398328209195, 0.3418326868109403) _gate_q_15, _gate_q_8;
  rxx_5070809728(5.2365847389793885) _gate_q_6, _gate_q_11;
  cy _gate_q_14, _gate_q_2;
}