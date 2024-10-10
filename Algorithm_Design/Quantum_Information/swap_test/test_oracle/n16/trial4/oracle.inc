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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate r_5105144448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2098400505753995, -1.5169572835959928, 1.5169572835959928) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5105154624(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5693794534179383) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105145792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.188876650976682) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7079100117919402) _gate_q_1;
  ry(-0.7079100117919402) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.188876650976682) _gate_q_0;
}
gate cu3_5105147904(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.0162850313955223) _gate_q_0;
  u1(-0.2616362545227364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7981683832900444, 0, -1.0162850313955223) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7981683832900444, 1.2779212859182587, 0) _gate_q_1;
}
gate cu3_5105140464(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.149283951352226) _gate_q_0;
  u1(-0.5845234131965009) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1049611428117183, 0, -3.149283951352226) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1049611428117183, 3.733807364548727, 0) _gate_q_1;
}
gate rzz_5105142480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.0455351238027655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105152416(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9428523377754054) _gate_q_0;
  u1(0.586539618875159) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.05350888461548652, 0, -0.9428523377754054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.05350888461548652, 0.3563127189002464, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5105150352(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.994517389470955) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9506165474704928) _gate_q_0;
  ry(-0.9506165474704928) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.994517389470955) _gate_q_1;
}
gate rzz_5105144256(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.3143023072778264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5105145648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7371384471004999) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.10655493017165986) _gate_q_0;
  ry(-0.10655493017165986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7371384471004999) _gate_q_1;
}
gate ryy_5105145408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.241800547741176) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105140416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4458191444168467, 0.5928541690200841, -0.5928541690200841) _gate_q_0;
}
gate cu1_5105146992(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.2093857487343427) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.2093857487343427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.2093857487343427) _gate_q_1;
}
gate rxx_5105153712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7460156382911207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105153040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2312718666533515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5106254960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.1678369431397604) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1414391436953806) _gate_q_0;
  ry(-2.1414391436953806) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.1678369431397604) _gate_q_1;
}
gate xx_minus_yy_5106267056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.5873425943596167) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5724598665347347) _gate_q_0;
  ry(-1.5724598665347347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.5873425943596167) _gate_q_1;
}
gate xx_minus_yy_5106269072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.863593604175189) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6510470034808145) _gate_q_0;
  ry(-2.6510470034808145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.863593604175189) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  csx _gate_q_3, _gate_q_5;
  dcx _gate_q_4, _gate_q_8;
  rz(0.23559672062133766) _gate_q_6;
  u2(0.7139976980108083, 2.675840313160056) _gate_q_2;
  ry(3.9492225561226975) _gate_q_9;
  rz(4.729428798294921) _gate_q_7;
  u2(1.9057158788875563, 0.30158575256204867) _gate_q_0;
  ecr _gate_q_14, _gate_q_1;
  r_5105144448(1.2098400505753995, 0.05383904319890377) _gate_q_11;
  cp(0.5052047164355741) _gate_q_12, _gate_q_15;
  u2(1.3564017156051709, 3.235684567721329) _gate_q_13;
  s _gate_q_10;
  x _gate_q_7;
  dcx _gate_q_6, _gate_q_15;
  h _gate_q_11;
  cs _gate_q_3, _gate_q_2;
  sdg _gate_q_8;
  ryy_5105154624(0.5693794534179383) _gate_q_12, _gate_q_4;
  cp(3.6887406593259517) _gate_q_13, _gate_q_10;
  tdg _gate_q_1;
  u3(1.8439239805269647, 4.512367665253571, 0.009087412948766211) _gate_q_14;
  p(2.0631064142026627) _gate_q_9;
  cx _gate_q_0, _gate_q_5;
  sx _gate_q_7;
  u3(0.18221025426634374, 4.20413838171118, 3.940040596973654) _gate_q_1;
  x _gate_q_3;
  p(1.2858437341379645) _gate_q_5;
  s _gate_q_9;
  t _gate_q_8;
  csx _gate_q_6, _gate_q_0;
  t _gate_q_14;
  swap _gate_q_4, _gate_q_15;
  xx_plus_yy_5105145792(1.4158200235838805, 4.188876650976682) _gate_q_12, _gate_q_10;
  cy _gate_q_2, _gate_q_13;
  x _gate_q_11;
  p(1.2485916735906737) _gate_q_6;
  cu3_5105147904(3.5963367665800887, 1.2779212859182587, 0.7546487768727859) _gate_q_0, _gate_q_10;
  cz _gate_q_12, _gate_q_3;
  s _gate_q_7;
  cu(1.1431364064556844, 2.4388413515208907, 5.376588741380641, 0.42002674932912404) _gate_q_8, _gate_q_5;
  ry(4.673504997141026) _gate_q_15;
  rz(4.345157964511751) _gate_q_14;
  cu3_5105140464(4.209922285623437, 3.733807364548727, 2.564760538155725) _gate_q_2, _gate_q_11;
  rzz_5105142480(3.0455351238027655) _gate_q_9, _gate_q_13;
  cu3_5105152416(0.10701776923097304, 0.3563127189002464, 1.5293919566505645) _gate_q_1, _gate_q_4;
  ecr _gate_q_11, _gate_q_1;
  iswap _gate_q_4, _gate_q_7;
  xx_minus_yy_5105150352(1.9012330949409857, 5.994517389470955) _gate_q_9, _gate_q_2;
  rzz_5105144256(2.3143023072778264) _gate_q_10, _gate_q_3;
  cp(1.6145918210951966) _gate_q_5, _gate_q_14;
  p(1.4917704083419934) _gate_q_8;
  ry(4.846533307948403) _gate_q_0;
  tdg _gate_q_12;
  ecr _gate_q_6, _gate_q_15;
  sx _gate_q_13;
  h _gate_q_13;
  xx_minus_yy_5105145648(0.21310986034331972, 0.7371384471004999) _gate_q_10, _gate_q_14;
  t _gate_q_5;
  ryy_5105145408(6.241800547741176) _gate_q_1, _gate_q_15;
  id _gate_q_4;
  crx(2.4149158312194254) _gate_q_7, _gate_q_8;
  rx(2.992271252446966) _gate_q_9;
  U(3.2487228349669612, 1.6810969323892286, 1.980834295719241) _gate_q_6;
  u1(2.6810691936521174) _gate_q_11;
  u1(5.78698753816) _gate_q_2;
  ch _gate_q_3, _gate_q_0;
  z _gate_q_12;
  p(3.694325963426745) _gate_q_15;
  p(3.3504061496078816) _gate_q_8;
  cry(2.171315348027014) _gate_q_14, _gate_q_12;
  cp(3.248207489382255) _gate_q_6, _gate_q_11;
  z _gate_q_7;
  cx _gate_q_2, _gate_q_13;
  id _gate_q_10;
  ry(3.4308178168835033) _gate_q_3;
  r_5105140416(1.4458191444168467, 2.1636504958149807) _gate_q_9;
  cu1_5105146992(0.4187714974686854) _gate_q_5, _gate_q_1;
  rz(0.4891715464297861) _gate_q_0;
  u2(3.531612019084358, 5.022047131277215) _gate_q_4;
  tdg _gate_q_8;
  cp(3.0706853025583927) _gate_q_11, _gate_q_12;
  z _gate_q_13;
  cx _gate_q_1, _gate_q_15;
  cp(3.6330344803975487) _gate_q_7, _gate_q_2;
  U(5.717760450171954, 2.0549871094586845, 2.151704561060872) _gate_q_10;
  rxx_5105153712(0.7460156382911207) _gate_q_4, _gate_q_5;
  swap _gate_q_9, _gate_q_14;
  rzz_5105153040(1.2312718666533515) _gate_q_6, _gate_q_3;
  x _gate_q_0;
  csx _gate_q_11, _gate_q_0;
  cz _gate_q_5, _gate_q_2;
  crx(4.3308616206313575) _gate_q_13, _gate_q_14;
  cz _gate_q_8, _gate_q_1;
  cx _gate_q_10, _gate_q_12;
  u3(3.2060767065366313, 1.0441703081516422, 4.87461212075331) _gate_q_6;
  cy _gate_q_4, _gate_q_3;
  cp(2.5308511584912945) _gate_q_9, _gate_q_7;
  tdg _gate_q_15;
  crx(1.739645501874557) _gate_q_12, _gate_q_15;
  xx_minus_yy_5106254960(4.282878287390761, 2.1678369431397604) _gate_q_0, _gate_q_10;
  u2(5.191630110047622, 2.5715150495379877) _gate_q_14;
  u1(3.98320184193712) _gate_q_7;
  xx_minus_yy_5106267056(3.1449197330694694, 3.5873425943596167) _gate_q_11, _gate_q_2;
  rz(0.7364511039518924) _gate_q_3;
  xx_minus_yy_5106269072(5.302094006961629, 2.863593604175189) _gate_q_8, _gate_q_4;
  h _gate_q_5;
  crz(4.551998886559675) _gate_q_9, _gate_q_1;
  x _gate_q_6;
  t _gate_q_13;
}
gate rzz_5105643456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.280442562884513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5105631984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2878936948924604) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.08049970194660343) _gate_q_1;
  ry(-0.08049970194660343) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2878936948924604) _gate_q_0;
}
gate rxx_5105639424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.90948455974763) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105634192(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.5222291815985844, 0.42253900923602594, -0.42253900923602594) _gate_q_0;
}
gate r_5105632464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7776214057197834, 3.2350024476462362, -3.2350024476462362) _gate_q_0;
}
gate r_5105637552(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0196192998763127, 2.049261695100023, -2.049261695100023) _gate_q_0;
}
gate xx_minus_yy_5105645040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.057742596691476) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9965127288295406) _gate_q_0;
  ry(-1.9965127288295406) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.057742596691476) _gate_q_1;
}
gate ryy_5105633520(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.84524573065858) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5105645808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2214230261017789) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6172380578667391) _gate_q_0;
  ry(-0.6172380578667391) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2214230261017789) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5105635584(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7762601919419584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105631456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.463853516954754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105642352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1896584118466436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105637264(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.07870206125595598) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105642496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5972768253260425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105645952(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.08458192892051879) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.08458192892051879) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.08458192892051879) _gate_q_1;
}
gate r_5105642256(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.09984892226125, 2.9152439332168045, -2.9152439332168045) _gate_q_0;
}
gate r_5105636064(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.042619198692527, 0.8974845762312209, -0.8974845762312209) _gate_q_0;
}
gate cu1_5105632896(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.05149808307207976) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.05149808307207976) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.05149808307207976) _gate_q_1;
}
gate ryy_5105644608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0198475816501946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105632272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3864169622850384, -0.20001311719468662, 0.20001311719468662) _gate_q_0;
}
gate rzz_5105642832(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.7798151135444273) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5105645376(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5302975461848516) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105636112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.383586835292731) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105644368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6570695585977898) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5105641824(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.117991843524088) _gate_q_0;
  u1(1.7419465781337262) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1625351590735398, 0, -4.117991843524088) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1625351590735398, 2.3760452653903616, 0) _gate_q_1;
}
gate xx_minus_yy_5105643072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.597108865293288) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6916713955488107) _gate_q_0;
  ry(-1.6916713955488107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.597108865293288) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  ecr _gate_q_10, _gate_q_2;
  x _gate_q_13;
  z _gate_q_0;
  rzz_5105643456(2.280442562884513) _gate_q_9, _gate_q_15;
  x _gate_q_8;
  xx_plus_yy_5105631984(0.16099940389320685, 3.2878936948924604) _gate_q_6, _gate_q_12;
  id _gate_q_3;
  ry(5.974494726323761) _gate_q_14;
  rx(2.6112972482287757) _gate_q_5;
  y _gate_q_1;
  ry(4.837426395430702) _gate_q_4;
  u1(5.112608595174131) _gate_q_7;
  id _gate_q_11;
  cy _gate_q_2, _gate_q_11;
  dcx _gate_q_7, _gate_q_4;
  sdg _gate_q_9;
  rxx_5105639424(3.90948455974763) _gate_q_5, _gate_q_10;
  csx _gate_q_8, _gate_q_14;
  t _gate_q_0;
  r_5105634192(5.5222291815985844, 1.9933353360309225) _gate_q_6;
  ch _gate_q_3, _gate_q_1;
  u1(6.165615807160648) _gate_q_12;
  u3(2.0112603462062895, 4.139880212026704, 0.4100042580427618) _gate_q_13;
  r_5105632464(2.7776214057197834, 4.805798774441133) _gate_q_15;
  r_5105637552(3.0196192998763127, 3.6200580218949194) _gate_q_7;
  u2(4.938100440720754, 0.55505242164058) _gate_q_8;
  ch _gate_q_3, _gate_q_12;
  s _gate_q_0;
  sxdg _gate_q_15;
  sx _gate_q_14;
  xx_minus_yy_5105645040(3.993025457659081, 4.057742596691476) _gate_q_2, _gate_q_10;
  cx _gate_q_9, _gate_q_1;
  sdg _gate_q_11;
  ryy_5105633520(5.84524573065858) _gate_q_6, _gate_q_5;
  p(1.4738387630707175) _gate_q_4;
  sx _gate_q_13;
  t _gate_q_4;
  crz(5.998504204854599) _gate_q_1, _gate_q_12;
  xx_minus_yy_5105645808(1.2344761157334783, 1.2214230261017789) _gate_q_11, _gate_q_8;
  tdg _gate_q_6;
  u1(5.620800081635816) _gate_q_10;
  p(3.884999074384505) _gate_q_5;
  h _gate_q_13;
  crx(5.9371219819835135) _gate_q_0, _gate_q_15;
  cry(2.1442528840653794) _gate_q_3, _gate_q_14;
  sxdg _gate_q_9;
  cy _gate_q_2, _gate_q_7;
  csdg _gate_q_3, _gate_q_14;
  rzz_5105635584(0.7762601919419584) _gate_q_0, _gate_q_4;
  rz(4.68171286129767) _gate_q_9;
  csdg _gate_q_7, _gate_q_1;
  rzx_5105631456(4.463853516954754) _gate_q_11, _gate_q_6;
  ryy_5105642352(2.1896584118466436) _gate_q_2, _gate_q_13;
  crz(1.1384624827594352) _gate_q_12, _gate_q_10;
  crx(3.8294537817716625) _gate_q_15, _gate_q_5;
  p(1.819450337812089) _gate_q_8;
  crx(4.0923059199459075) _gate_q_3, _gate_q_7;
  cx _gate_q_14, _gate_q_4;
  crx(3.859831718602931) _gate_q_8, _gate_q_13;
  p(3.017243572320254) _gate_q_6;
  rzz_5105637264(0.07870206125595598) _gate_q_11, _gate_q_9;
  rzx_5105642496(1.5972768253260425) _gate_q_1, _gate_q_15;
  cu1_5105645952(0.16916385784103757) _gate_q_12, _gate_q_10;
  ch _gate_q_0, _gate_q_2;
  rz(5.475774673413498) _gate_q_5;
  r_5105642256(5.09984892226125, 4.486040260011701) _gate_q_10;
  h _gate_q_12;
  csx _gate_q_14, _gate_q_1;
  cs _gate_q_7, _gate_q_4;
  swap _gate_q_13, _gate_q_9;
  csdg _gate_q_15, _gate_q_11;
  rx(4.106146635803708) _gate_q_5;
  y _gate_q_8;
  u1(5.861555908247624) _gate_q_3;
  r_5105636064(5.042619198692527, 2.4682809030261175) _gate_q_6;
  cu1_5105632896(0.10299616614415952) _gate_q_2, _gate_q_0;
  ryy_5105644608(3.0198475816501946) _gate_q_3, _gate_q_14;
  t _gate_q_12;
  r_5105632272(2.3864169622850384, 1.37078320960021) _gate_q_5;
  rzz_5105642832(1.7798151135444273) _gate_q_10, _gate_q_15;
  ryy_5105645376(1.5302975461848516) _gate_q_4, _gate_q_6;
  id _gate_q_11;
  s _gate_q_13;
  u2(2.0202766984171636, 0.8992791556128419) _gate_q_2;
  cy _gate_q_0, _gate_q_9;
  rzx_5105636112(4.383586835292731) _gate_q_1, _gate_q_7;
  tdg _gate_q_8;
  cx _gate_q_3, _gate_q_10;
  sxdg _gate_q_11;
  ry(4.471037110720791) _gate_q_8;
  rz(2.7343407819188235) _gate_q_4;
  u2(4.914070390761959, 2.1776708531345244) _gate_q_2;
  csx _gate_q_5, _gate_q_7;
  ch _gate_q_0, _gate_q_14;
  cry(3.65481365402337) _gate_q_9, _gate_q_6;
  sdg _gate_q_12;
  id _gate_q_1;
  x _gate_q_15;
  rx(1.5563904109938198) _gate_q_13;
  u1(4.245729735753551) _gate_q_11;
  u3(4.571862932372345, 1.851116265867499, 2.413988920491934) _gate_q_15;
  rxx_5105644368(0.6570695585977898) _gate_q_0, _gate_q_9;
  cp(3.5045604681316074) _gate_q_4, _gate_q_1;
  t _gate_q_10;
  cu3_5105641824(4.3250703181470795, 2.3760452653903616, 5.859938421657814) _gate_q_8, _gate_q_12;
  rx(1.5989818802381472) _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  crz(1.92571961100003) _gate_q_13, _gate_q_2;
  xx_minus_yy_5105643072(3.3833427910976215, 5.597108865293288) _gate_q_7, _gate_q_14;
}