gate r_5072844416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.9822454105007582, 1.3055894777026613, -1.3055894777026613) _gate_q_0;
}
gate rxx_5072843360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.808757417773412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072841632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.4220890197897381) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.930982541988137) _gate_q_1;
  ry(-1.930982541988137) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.4220890197897381) _gate_q_0;
}
gate xx_plus_yy_5072836400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.203328567380323) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.13924570962823) _gate_q_1;
  ry(-3.13924570962823) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.203328567380323) _gate_q_0;
}
gate xx_minus_yy_5072843648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.0838992519241675) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9670801575393344) _gate_q_0;
  ry(-0.9670801575393344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.0838992519241675) _gate_q_1;
}
gate rzx_5072838416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0218088812908204) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
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
gate rzx_5072845376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.34010971228708814) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072834048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.8613271662729693) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.015611935231794) _gate_q_1;
  ry(-3.015611935231794) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.8613271662729693) _gate_q_0;
}
gate rxx_5072838848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.113338037799319) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072836736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1530305001823486) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4974241267893251) _gate_q_1;
  ry(-1.4974241267893251) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1530305001823486) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5072844800(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7575830949407387) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7575830949407387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7575830949407387) _gate_q_1;
}
gate rxx_5072845520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.30851594140231753) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072842784(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.949929209152235) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072834720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.62011327364638) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.250050629563043) _gate_q_0;
  ry(-0.250050629563043) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.62011327364638) _gate_q_1;
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
gate rzz_5072835920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.165620433002691) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072834624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.395202002634804) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8212441467308873) _gate_q_0;
  ry(-1.8212441467308873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.395202002634804) _gate_q_1;
}
gate xx_minus_yy_5072844752(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.0319114369312308) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.508083934765362) _gate_q_0;
  ry(-2.508083934765362) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.0319114369312308) _gate_q_1;
}
gate rzz_5072836208(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6535107574034428) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072835584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.988661675850428) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5072844848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.1881173012273647) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7108315279128894) _gate_q_1;
  ry(-1.7108315279128894) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.1881173012273647) _gate_q_0;
}
gate rxx_5072841008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5169480125839597) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072839952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8487419892820818) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  cp(3.0759149438370015) _gate_q_17, _gate_q_5;
  crz(5.940869742643497) _gate_q_1, _gate_q_11;
  h _gate_q_14;
  ch _gate_q_6, _gate_q_15;
  r_5072844416(0.9822454105007582, 2.876385804497558) _gate_q_0;
  rxx_5072843360(2.808757417773412) _gate_q_4, _gate_q_3;
  h _gate_q_13;
  h _gate_q_9;
  p(1.5500321085770798) _gate_q_2;
  z _gate_q_12;
  h _gate_q_16;
  sx _gate_q_18;
  iswap _gate_q_8, _gate_q_10;
  id _gate_q_7;
  cs _gate_q_8, _gate_q_7;
  U(5.0329427972846545, 5.2156191659361175, 1.160525301317579) _gate_q_11;
  tdg _gate_q_16;
  x _gate_q_17;
  u1(3.5115266936837477) _gate_q_15;
  p(3.8412603694825753) _gate_q_13;
  cz _gate_q_18, _gate_q_6;
  u2(2.519298312405003, 5.013839158317701) _gate_q_1;
  sx _gate_q_9;
  rz(2.5286648863043406) _gate_q_14;
  xx_plus_yy_5072841632(3.861965083976274, 0.4220890197897381) _gate_q_10, _gate_q_3;
  xx_plus_yy_5072836400(6.27849141925646, 4.203328567380323) _gate_q_5, _gate_q_12;
  tdg _gate_q_0;
  cs _gate_q_2, _gate_q_4;
  u2(5.89837617640464, 5.092115412571983) _gate_q_10;
  xx_minus_yy_5072843648(1.9341603150786688, 4.0838992519241675) _gate_q_5, _gate_q_4;
  rzx_5072838416(2.0218088812908204) _gate_q_0, _gate_q_7;
  csdg _gate_q_6, _gate_q_18;
  cz _gate_q_8, _gate_q_16;
  tdg _gate_q_9;
  y _gate_q_17;
  ry(1.0698816716491395) _gate_q_12;
  cy _gate_q_1, _gate_q_2;
  u3(4.932464433437687, 1.4013726602063508, 0.5013328630487623) _gate_q_15;
  crx(2.3251760841923232) _gate_q_3, _gate_q_13;
  rz(1.3059945282396732) _gate_q_11;
  z _gate_q_14;
  ecr _gate_q_9, _gate_q_2;
  crx(5.10325856830936) _gate_q_13, _gate_q_16;
  cs _gate_q_11, _gate_q_15;
  rzx_5072845376(0.34010971228708814) _gate_q_3, _gate_q_6;
  cry(1.6511459166858675) _gate_q_18, _gate_q_1;
  xx_plus_yy_5072834048(6.031223870463588, 2.8613271662729693) _gate_q_14, _gate_q_10;
  sxdg _gate_q_17;
  rz(2.2295416336240135) _gate_q_8;
  U(0.6387026417577581, 4.38116006847747, 6.267919503879489) _gate_q_12;
  cu(6.058135797453075, 6.249810710271261, 2.7096979879551686, 4.024612862994093) _gate_q_7, _gate_q_5;
  ch _gate_q_4, _gate_q_0;
  swap _gate_q_14, _gate_q_15;
  swap _gate_q_6, _gate_q_18;
  rz(1.7430172962599804) _gate_q_0;
  cy _gate_q_11, _gate_q_13;
  x _gate_q_8;
  rxx_5072838848(5.113338037799319) _gate_q_16, _gate_q_2;
  ch _gate_q_9, _gate_q_5;
  id _gate_q_7;
  h _gate_q_4;
  x _gate_q_17;
  xx_plus_yy_5072836736(2.9948482535786503, 2.1530305001823486) _gate_q_3, _gate_q_1;
  cz _gate_q_10, _gate_q_12;
  dcx _gate_q_7, _gate_q_9;
  u2(5.096267489739018, 5.806759815315059) _gate_q_18;
  cu1_5072844800(1.5151661898814774) _gate_q_13, _gate_q_12;
  y _gate_q_5;
  U(3.212520883779821, 3.796270582661037, 1.8989010225826968) _gate_q_2;
  cry(4.366130936011379) _gate_q_6, _gate_q_17;
  id _gate_q_1;
  u1(1.3778101594377874) _gate_q_4;
  cs _gate_q_14, _gate_q_10;
  ry(2.158955767712014) _gate_q_16;
  rxx_5072845520(0.30851594140231753) _gate_q_0, _gate_q_11;
  iswap _gate_q_3, _gate_q_15;
  y _gate_q_8;
  t _gate_q_3;
  rzz_5072842784(5.949929209152235) _gate_q_14, _gate_q_12;
  u2(2.2507401667846936, 3.687515846063213) _gate_q_5;
  iswap _gate_q_11, _gate_q_13;
  xx_minus_yy_5072834720(0.500101259126086, 3.62011327364638) _gate_q_7, _gate_q_17;
  cz _gate_q_18, _gate_q_4;
  csx _gate_q_2, _gate_q_15;
  rz(3.337186690888316) _gate_q_16;
  csdg _gate_q_8, _gate_q_0;
  rz(3.883141616587126) _gate_q_1;
  h _gate_q_10;
  rzz_5072835920(4.165620433002691) _gate_q_9, _gate_q_6;
  sdg _gate_q_10;
  xx_minus_yy_5072834624(3.6424882934617746, 5.395202002634804) _gate_q_16, _gate_q_3;
  x _gate_q_9;
  dcx _gate_q_4, _gate_q_6;
  tdg _gate_q_2;
  cx _gate_q_18, _gate_q_15;
  sx _gate_q_1;
  cp(0.29803218513908114) _gate_q_0, _gate_q_8;
  iswap _gate_q_11, _gate_q_14;
  swap _gate_q_5, _gate_q_7;
  xx_minus_yy_5072844752(5.016167869530724, 3.0319114369312308) _gate_q_17, _gate_q_13;
  sx _gate_q_12;
  u2(0.9160054262032457, 4.770072778388645) _gate_q_3;
  csx _gate_q_6, _gate_q_10;
  crx(4.174014720485396) _gate_q_2, _gate_q_7;
  s _gate_q_1;
  rzz_5072836208(0.6535107574034428) _gate_q_18, _gate_q_5;
  ryy_5072835584(2.988661675850428) _gate_q_9, _gate_q_14;
  crx(3.656122729048108) _gate_q_15, _gate_q_13;
  u2(2.2835815256164724, 3.273806330213433) _gate_q_16;
  crx(3.4639748098703182) _gate_q_0, _gate_q_8;
  t _gate_q_17;
  cx _gate_q_11, _gate_q_4;
  x _gate_q_12;
  U(2.3918606013544013, 5.351900290660145, 5.915517538950081) _gate_q_16;
  swap _gate_q_3, _gate_q_18;
  sxdg _gate_q_11;
  ry(1.3006784678496068) _gate_q_0;
  dcx _gate_q_5, _gate_q_10;
  U(4.649379354157341, 4.977021663244772, 5.184458127088127) _gate_q_17;
  h _gate_q_6;
  dcx _gate_q_14, _gate_q_8;
  xx_plus_yy_5072844848(3.421663055825779, 1.1881173012273647) _gate_q_2, _gate_q_9;
  U(0.7051282419540036, 1.7890100244484581, 4.27036487169629) _gate_q_7;
  rxx_5072841008(0.5169480125839597) _gate_q_1, _gate_q_15;
  rxx_5072839952(0.8487419892820818) _gate_q_12, _gate_q_4;
  U(4.60510527347323, 2.3162915977129064, 5.344224858309632) _gate_q_13;
}
gate rxx_5073844176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8863360122100112) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5073840480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.24141754273456) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5073844608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.416483973007943) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5073842400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.6258995826771243, 1.744060333224513, -1.744060333224513) _gate_q_0;
}
gate xx_minus_yy_5073840768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7975105215965077) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.660990725233161) _gate_q_0;
  ry(-2.660990725233161) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7975105215965077) _gate_q_1;
}
gate rxx_5073836832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.862625952427306) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5073832512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.2840115855904735) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3646857265973957) _gate_q_0;
  ry(-2.3646857265973957) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.2840115855904735) _gate_q_1;
}
gate xx_minus_yy_5073840144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.890988173435202) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8548680176009933) _gate_q_0;
  ry(-1.8548680176009933) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.890988173435202) _gate_q_1;
}
gate cu3_5073840384(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.778328714239931) _gate_q_0;
  u1(-0.02658345557900832) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.069550272448624, 0, -5.778328714239931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.069550272448624, 5.804912169818939, 0) _gate_q_1;
}
gate xx_minus_yy_5073840192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.8078747227695264) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.008173406771490472) _gate_q_0;
  ry(-0.008173406771490472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.8078747227695264) _gate_q_1;
}
gate cu1_5073832224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.963124826624406) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.963124826624406) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.963124826624406) _gate_q_1;
}
gate rzz_5073831744(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.847254059509338) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5073831552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0214897369136122) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0214897369136122) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0214897369136122) _gate_q_1;
}
gate rzx_5073840624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7294334858114802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5073843360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.850547111229248) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8710653590156174) _gate_q_1;
  ry(-2.8710653590156174) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.850547111229248) _gate_q_0;
}
gate rxx_5073832992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5032871037171014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5073839712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.31609135042445613) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8742663917653846) _gate_q_0;
  ry(-1.8742663917653846) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.31609135042445613) _gate_q_1;
}
gate r_5073830688(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7368067617692052, 3.0329237144607664, -3.0329237144607664) _gate_q_0;
}
gate cu3_5073834672(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.830123324619037) _gate_q_0;
  u1(-2.7659648838170403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.18989475323520172, 0, -2.830123324619037) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.18989475323520172, 5.596088208436077, 0) _gate_q_1;
}
gate cu3_5073845520(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7951933834958016) _gate_q_0;
  u1(-1.5687613142222183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8652815216927916, 0, -2.7951933834958016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8652815216927916, 4.36395469771802, 0) _gate_q_1;
}
gate xx_plus_yy_5073836304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.754402770497826) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3429791020119763) _gate_q_1;
  ry(-2.3429791020119763) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.754402770497826) _gate_q_0;
}
gate r_5073836928(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.453433443008265, 1.0171632296873323, -1.0171632296873323) _gate_q_0;
}
gate xx_plus_yy_5073846192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.9286383065662043) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8791213043816857) _gate_q_1;
  ry(-1.8791213043816857) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.9286383065662043) _gate_q_0;
}
gate xx_minus_yy_5073833088(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.414808083086686) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4081271577605667) _gate_q_0;
  ry(-1.4081271577605667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.414808083086686) _gate_q_1;
}
gate xx_minus_yy_5073829968(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.474908989604736) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7045494036208393) _gate_q_0;
  ry(-1.7045494036208393) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.474908989604736) _gate_q_1;
}
gate cu1_5073841536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4699468678222876) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4699468678222876) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4699468678222876) _gate_q_1;
}
gate r_5073835968(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.38518237328966, 2.8588928577707664, -2.8588928577707664) _gate_q_0;
}
gate rxx_5073834624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4937070530001897) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  p(3.320126646032914) _gate_q_16;
  rxx_5073844176(2.8863360122100112) _gate_q_1, _gate_q_2;
  tdg _gate_q_0;
  cp(6.013475627296415) _gate_q_12, _gate_q_7;
  cp(3.35766152663613) _gate_q_18, _gate_q_5;
  t _gate_q_13;
  cp(2.5139787709465318) _gate_q_8, _gate_q_11;
  cp(5.966938773816548) _gate_q_17, _gate_q_14;
  z _gate_q_6;
  rzz_5073840480(5.24141754273456) _gate_q_9, _gate_q_3;
  cp(0.32213522068150546) _gate_q_15, _gate_q_4;
  u3(2.440624983024485, 4.582136228469746, 3.702646490002162) _gate_q_10;
  ryy_5073844608(5.416483973007943) _gate_q_0, _gate_q_3;
  swap _gate_q_9, _gate_q_10;
  csdg _gate_q_16, _gate_q_5;
  x _gate_q_7;
  y _gate_q_14;
  ry(4.392986398056535) _gate_q_1;
  cu(0.6027467668578417, 2.013873858176005, 4.2735958039930075, 4.560059446876135) _gate_q_18, _gate_q_13;
  cs _gate_q_8, _gate_q_6;
  r_5073842400(2.6258995826771243, 3.3148566600194096) _gate_q_15;
  crz(1.983504888075522) _gate_q_17, _gate_q_11;
  xx_minus_yy_5073840768(5.321981450466322, 3.7975105215965077) _gate_q_12, _gate_q_4;
  sdg _gate_q_2;
  cry(2.2965719933688713) _gate_q_14, _gate_q_12;
  cp(1.059607887755146) _gate_q_4, _gate_q_15;
  tdg _gate_q_18;
  iswap _gate_q_7, _gate_q_13;
  U(5.56176739082028, 0.49291736692678867, 3.395342832151993) _gate_q_17;
  rxx_5073836832(0.862625952427306) _gate_q_2, _gate_q_6;
  cry(1.5399263074389793) _gate_q_8, _gate_q_10;
  u1(3.603749526530967) _gate_q_3;
  csdg _gate_q_0, _gate_q_16;
  p(2.5595736647041045) _gate_q_5;
  xx_minus_yy_5073832512(4.7293714531947915, 4.2840115855904735) _gate_q_1, _gate_q_11;
  rz(1.5745728358674609) _gate_q_9;
  xx_minus_yy_5073840144(3.7097360352019866, 5.890988173435202) _gate_q_7, _gate_q_8;
  cu3_5073840384(2.139100544897248, 5.804912169818939, 5.751745258660923) _gate_q_18, _gate_q_16;
  x _gate_q_4;
  xx_minus_yy_5073840192(0.016346813542980943, 2.8078747227695264) _gate_q_2, _gate_q_1;
  ch _gate_q_11, _gate_q_17;
  h _gate_q_0;
  sxdg _gate_q_13;
  x _gate_q_9;
  u1(1.129413944934139) _gate_q_14;
  cu1_5073832224(5.926249653248812) _gate_q_12, _gate_q_10;
  rzz_5073831744(0.847254059509338) _gate_q_15, _gate_q_3;
  cu1_5073831552(6.0429794738272244) _gate_q_6, _gate_q_5;
  rzx_5073840624(0.7294334858114802) _gate_q_5, _gate_q_14;
  cp(3.4428265196022885) _gate_q_4, _gate_q_7;
  dcx _gate_q_10, _gate_q_12;
  ry(2.771774284966485) _gate_q_15;
  csdg _gate_q_18, _gate_q_2;
  ry(2.301713845322465) _gate_q_9;
  xx_plus_yy_5073843360(5.742130718031235, 5.850547111229248) _gate_q_1, _gate_q_17;
  rxx_5073832992(2.5032871037171014) _gate_q_16, _gate_q_6;
  xx_minus_yy_5073839712(3.748532783530769, 0.31609135042445613) _gate_q_3, _gate_q_8;
  t _gate_q_11;
  y _gate_q_0;
  U(4.412207459818227, 0.6284081985734903, 2.2353842296604864) _gate_q_13;
  r_5073830688(0.7368067617692052, 4.603720041255663) _gate_q_16;
  csdg _gate_q_12, _gate_q_6;
  tdg _gate_q_10;
  cs _gate_q_17, _gate_q_18;
  z _gate_q_15;
  sdg _gate_q_9;
  cy _gate_q_13, _gate_q_3;
  swap _gate_q_5, _gate_q_0;
  cu3_5073834672(0.37978950647040344, 5.596088208436077, 0.06415844080199619) _gate_q_2, _gate_q_7;
  p(5.126164829962801) _gate_q_8;
  sx _gate_q_1;
  id _gate_q_11;
  cy _gate_q_4, _gate_q_14;
  cu3_5073845520(1.7305630433855832, 4.36395469771802, 1.226432069273583) _gate_q_15, _gate_q_18;
  u1(4.237215953835393) _gate_q_6;
  xx_plus_yy_5073836304(4.685958204023953, 2.754402770497826) _gate_q_9, _gate_q_10;
  cu(5.6865189575457, 2.2265137844592844, 5.42141344282585, 4.444837478570867) _gate_q_4, _gate_q_2;
  u3(4.616162223371247, 3.127114402676398, 2.346604775305114) _gate_q_16;
  r_5073836928(4.453433443008265, 2.587959556482229) _gate_q_14;
  x _gate_q_13;
  t _gate_q_8;
  t _gate_q_11;
  sxdg _gate_q_1;
  cy _gate_q_17, _gate_q_7;
  u2(5.986408531522805, 2.1018957350861993) _gate_q_5;
  cs _gate_q_12, _gate_q_3;
  sx _gate_q_0;
  t _gate_q_4;
  u3(3.4998678006980146, 3.6615845559425244, 4.123527045956326) _gate_q_2;
  p(2.916669133897113) _gate_q_3;
  cry(5.590214799329841) _gate_q_7, _gate_q_0;
  s _gate_q_17;
  y _gate_q_9;
  csdg _gate_q_11, _gate_q_16;
  xx_plus_yy_5073846192(3.7582426087633714, 2.9286383065662043) _gate_q_14, _gate_q_10;
  dcx _gate_q_1, _gate_q_6;
  cry(1.7895500121784067) _gate_q_12, _gate_q_8;
  u1(5.159733071300232) _gate_q_18;
  xx_minus_yy_5073833088(2.8162543155211335, 2.414808083086686) _gate_q_5, _gate_q_15;
  tdg _gate_q_13;
  swap _gate_q_2, _gate_q_15;
  dcx _gate_q_0, _gate_q_12;
  xx_minus_yy_5073829968(3.4090988072416786, 4.474908989604736) _gate_q_8, _gate_q_4;
  tdg _gate_q_17;
  cu1_5073841536(4.939893735644575) _gate_q_14, _gate_q_13;
  sx _gate_q_9;
  ecr _gate_q_16, _gate_q_6;
  r_5073835968(0.38518237328966, 4.429689184565663) _gate_q_7;
  crx(5.366860289574876) _gate_q_5, _gate_q_11;
  cu(2.260336653178932, 2.982907231439573, 0.09153727507708925, 3.640893364531956) _gate_q_1, _gate_q_3;
  sx _gate_q_18;
  U(4.122994841868809, 1.3821161856526585, 4.890093157628661) _gate_q_10;
  rxx_5073834624(2.4937070530001897) _gate_q_2, _gate_q_0;
  crx(2.825910187528332) _gate_q_3, _gate_q_1;
  rx(1.8569623146235525) _gate_q_15;
  t _gate_q_11;
  sdg _gate_q_17;
  cy _gate_q_7, _gate_q_13;
  t _gate_q_8;
  h _gate_q_16;
  iswap _gate_q_12, _gate_q_6;
  u2(1.799686965170078, 4.940334773905144) _gate_q_5;
  dcx _gate_q_10, _gate_q_14;
  ry(1.3746234349509143) _gate_q_4;
  u2(3.4970637823953417, 1.5765563766855226) _gate_q_18;
  z _gate_q_9;
}