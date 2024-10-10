gate rxx_5103926976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5709522238923794) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5103924576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.951542777259858) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7338196882303023) _gate_q_1;
  ry(-1.7338196882303023) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.951542777259858) _gate_q_0;
}
gate rzz_5103925728(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.546508151800261) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5103923088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.230314403692038, 2.918761672788248, -2.918761672788248) _gate_q_0;
}
gate ryy_5103920832(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7674207555778156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5103919152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.9338022879397117) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.616736580700745) _gate_q_0;
  ry(-2.616736580700745) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.9338022879397117) _gate_q_1;
}
gate rzz_5103924192(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.886343516253074) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105643696(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.253295072640112) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105647392(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8123418486277162) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8123418486277162) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8123418486277162) _gate_q_1;
}
gate r_5105640144(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.503349635686455, 2.2018766707589164, -2.2018766707589164) _gate_q_0;
}
gate xx_minus_yy_5105645472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.528361641804801) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.49840750724848) _gate_q_0;
  ry(-1.49840750724848) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.528361641804801) _gate_q_1;
}
gate cu3_5105638080(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2742663993204748) _gate_q_0;
  u1(-1.0412593813699131) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8554500194528862, 0, -1.2742663993204748) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8554500194528862, 2.315525780690388, 0) _gate_q_1;
}
gate xx_plus_yy_5105633472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.0560540894502353) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.078581855238178) _gate_q_1;
  ry(-3.078581855238178) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.0560540894502353) _gate_q_0;
}
gate rzx_5105632992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2973278100243395) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105645904(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3884371582658843) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3884371582658843) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3884371582658843) _gate_q_1;
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
gate cu1_5105635536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3061100082283301) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3061100082283301) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3061100082283301) _gate_q_1;
}
gate xx_plus_yy_5105631744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.558025396567405) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.610169733026309) _gate_q_1;
  ry(-2.610169733026309) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.558025396567405) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5105637504(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5678335583298766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5105640480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.0447690143576973) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7873030482120865) _gate_q_1;
  ry(-0.7873030482120865) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.0447690143576973) _gate_q_0;
}
gate rzz_5105642496(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.303862748753847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105646960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5795767099785523) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105642592(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.205711982306646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105639760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2701265268157407, 4.471780380241839, -4.471780380241839) _gate_q_0;
}
gate cu1_5105636256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7909666046894595) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7909666046894595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7909666046894595) _gate_q_1;
}
gate xx_plus_yy_5105635680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1650751074019188) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.47267492563327507) _gate_q_1;
  ry(-0.47267492563327507) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1650751074019188) _gate_q_0;
}
gate r_5105637264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.954263025607668, -0.2519067775933408, 0.2519067775933408) _gate_q_0;
}
gate rzz_5105633808(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9306964873362412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105640960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.856534450576013) _gate_q_0;
  u1(0.0978561468459116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9702516777715293, 0, -5.856534450576013) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9702516777715293, 5.758678303730101, 0) _gate_q_1;
}
gate xx_plus_yy_5105637168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.2313140201919275) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6964911241038099) _gate_q_1;
  ry(-1.6964911241038099) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.2313140201919275) _gate_q_0;
}
gate rxx_5105640576(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.770080070681899) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5105639328(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.262778714930099) _gate_q_0;
  u1(2.6197725850179756) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7792452069991646, 0, -3.262778714930099) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7792452069991646, 0.6430061299121237, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  rxx_5103926976(1.5709522238923794) _gate_q_1, _gate_q_0;
  z _gate_q_11;
  xx_plus_yy_5103924576(3.4676393764606046, 5.951542777259858) _gate_q_6, _gate_q_3;
  rzz_5103925728(5.546508151800261) _gate_q_10, _gate_q_8;
  cry(3.9332588540618656) _gate_q_16, _gate_q_7;
  u3(1.2202775292602865, 5.365592914540448, 2.075974602349219) _gate_q_5;
  ecr _gate_q_13, _gate_q_18;
  x _gate_q_9;
  iswap _gate_q_14, _gate_q_4;
  u2(1.5511795520976523, 6.2113678106547) _gate_q_19;
  crz(3.512661316869405) _gate_q_17, _gate_q_2;
  rx(3.1250633197610487) _gate_q_15;
  r_5103923088(5.230314403692038, 4.489557999583145) _gate_q_12;
  ryy_5103920832(1.7674207555778156) _gate_q_10, _gate_q_17;
  z _gate_q_8;
  cs _gate_q_4, _gate_q_1;
  crx(1.4961888408008397) _gate_q_12, _gate_q_9;
  s _gate_q_2;
  h _gate_q_7;
  rx(4.68077917534049) _gate_q_11;
  h _gate_q_13;
  tdg _gate_q_3;
  ry(4.343874824150876) _gate_q_6;
  tdg _gate_q_5;
  crz(4.91637642876684) _gate_q_15, _gate_q_19;
  rx(5.888118889535988) _gate_q_16;
  iswap _gate_q_14, _gate_q_18;
  y _gate_q_0;
  xx_minus_yy_5103919152(5.23347316140149, 2.9338022879397117) _gate_q_15, _gate_q_9;
  rz(1.9306660630619414) _gate_q_18;
  p(5.849012819801023) _gate_q_14;
  x _gate_q_11;
  h _gate_q_17;
  rzz_5103924192(5.886343516253074) _gate_q_2, _gate_q_3;
  sx _gate_q_13;
  cs _gate_q_16, _gate_q_8;
  cx _gate_q_19, _gate_q_10;
  rzz_5105643696(6.253295072640112) _gate_q_4, _gate_q_6;
  id _gate_q_7;
  cu1_5105647392(1.6246836972554324) _gate_q_1, _gate_q_5;
  u3(4.620440941249169, 2.980141515237964, 0.14078764545794192) _gate_q_0;
  z _gate_q_12;
  r_5105640144(4.503349635686455, 3.772672997553813) _gate_q_12;
  cry(5.32230260366737) _gate_q_19, _gate_q_7;
  cz _gate_q_0, _gate_q_11;
  cy _gate_q_2, _gate_q_18;
  xx_minus_yy_5105645472(2.99681501449696, 4.528361641804801) _gate_q_16, _gate_q_17;
  cu3_5105638080(5.7109000389057725, 2.315525780690388, 0.2330070179505618) _gate_q_4, _gate_q_6;
  h _gate_q_3;
  rz(1.8694074445095339) _gate_q_14;
  u3(5.11784407824827, 2.058884573947737, 0.4292600851882627) _gate_q_10;
  h _gate_q_1;
  xx_plus_yy_5105633472(6.157163710476356, 2.0560540894502353) _gate_q_9, _gate_q_13;
  sxdg _gate_q_15;
  cy _gate_q_5, _gate_q_8;
  x _gate_q_6;
  ch _gate_q_17, _gate_q_9;
  id _gate_q_3;
  sdg _gate_q_18;
  rzx_5105632992(1.2973278100243395) _gate_q_19, _gate_q_4;
  t _gate_q_14;
  tdg _gate_q_11;
  cu1_5105645904(2.7768743165317686) _gate_q_8, _gate_q_16;
  u3(2.466213415240287, 2.0305263960593902, 5.788845899521701) _gate_q_2;
  rx(3.620583106067703) _gate_q_0;
  u2(2.0734441725695327, 0.5841156175871062) _gate_q_1;
  csx _gate_q_12, _gate_q_15;
  cu1_5105635536(2.6122200164566602) _gate_q_5, _gate_q_13;
  xx_plus_yy_5105631744(5.220339466052618, 4.558025396567405) _gate_q_10, _gate_q_7;
  csx _gate_q_10, _gate_q_2;
  dcx _gate_q_15, _gate_q_0;
  ryy_5105637504(1.5678335583298766) _gate_q_4, _gate_q_3;
  u3(2.2196146739944873, 1.9932770768350476, 0.8983809547629819) _gate_q_14;
  cu(5.200097822864523, 2.1044640156845587, 4.061534890604395, 0.0765512246147785) _gate_q_19, _gate_q_9;
  iswap _gate_q_17, _gate_q_11;
  crz(5.055857667259911) _gate_q_16, _gate_q_12;
  p(1.3210469417808122) _gate_q_8;
  cx _gate_q_5, _gate_q_6;
  swap _gate_q_1, _gate_q_13;
  z _gate_q_18;
  s _gate_q_7;
  cp(3.7638027588548777) _gate_q_9, _gate_q_18;
  ry(3.0037015399859093) _gate_q_5;
  xx_plus_yy_5105640480(1.574606096424173, 2.0447690143576973) _gate_q_1, _gate_q_14;
  rzz_5105642496(4.303862748753847) _gate_q_19, _gate_q_15;
  rz(6.231550531306584) _gate_q_2;
  rxx_5105646960(3.5795767099785523) _gate_q_10, _gate_q_0;
  ryy_5105642592(3.205711982306646) _gate_q_3, _gate_q_11;
  cy _gate_q_13, _gate_q_8;
  crx(0.699008323428899) _gate_q_4, _gate_q_17;
  y _gate_q_16;
  y _gate_q_7;
  tdg _gate_q_12;
  r_5105639760(3.2701265268157407, 6.042576707036735) _gate_q_6;
  t _gate_q_3;
  rz(1.4143334391094393) _gate_q_4;
  iswap _gate_q_2, _gate_q_17;
  s _gate_q_18;
  swap _gate_q_12, _gate_q_9;
  ecr _gate_q_7, _gate_q_10;
  crx(5.835051358769881) _gate_q_16, _gate_q_8;
  cy _gate_q_14, _gate_q_5;
  U(5.421470411993159, 5.515890671248921, 3.117885352175343) _gate_q_1;
  cu1_5105636256(5.581933209378919) _gate_q_6, _gate_q_19;
  xx_plus_yy_5105635680(0.9453498512665501, 2.1650751074019188) _gate_q_13, _gate_q_0;
  sx _gate_q_11;
  r_5105637264(3.954263025607668, 1.3188895492015558) _gate_q_15;
  ch _gate_q_11, _gate_q_1;
  rzz_5105633808(0.9306964873362412) _gate_q_10, _gate_q_17;
  id _gate_q_2;
  id _gate_q_0;
  cu3_5105640960(3.9405033555430586, 5.758678303730101, 5.9543905974219244) _gate_q_19, _gate_q_14;
  u1(1.5032256653826452) _gate_q_13;
  h _gate_q_7;
  crx(1.0124861222005497) _gate_q_5, _gate_q_12;
  s _gate_q_4;
  z _gate_q_9;
  dcx _gate_q_15, _gate_q_16;
  rx(2.458469891419401) _gate_q_6;
  tdg _gate_q_8;
  sx _gate_q_18;
  sdg _gate_q_3;
  csx _gate_q_9, _gate_q_0;
  xx_plus_yy_5105637168(3.3929822482076197, 5.2313140201919275) _gate_q_1, _gate_q_19;
  ry(0.843615064004952) _gate_q_6;
  rx(3.033616546064287) _gate_q_2;
  cs _gate_q_13, _gate_q_14;
  cz _gate_q_12, _gate_q_8;
  ecr _gate_q_11, _gate_q_3;
  tdg _gate_q_17;
  rxx_5105640576(4.770080070681899) _gate_q_4, _gate_q_16;
  u1(0.2389682018591999) _gate_q_5;
  ecr _gate_q_18, _gate_q_10;
  cu3_5105639328(1.558490413998329, 0.6430061299121237, 5.882551299948075) _gate_q_15, _gate_q_7;
}
gate cu1_5105640096(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.18545300071286108) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.18545300071286108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.18545300071286108) _gate_q_1;
}
gate r_5105632464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.331890269514976, 2.4617405346878476, -2.4617405346878476) _gate_q_0;
}
gate xx_minus_yy_5105643168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.852477269002765) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0505170577456595) _gate_q_0;
  ry(-3.0505170577456595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.852477269002765) _gate_q_1;
}
gate rxx_5105634288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.360943151944764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5105647248(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7420292553530886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5105635344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.711768133086277) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5952473703619436) _gate_q_0;
  ry(-1.5952473703619436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.711768133086277) _gate_q_1;
}
gate xx_minus_yy_5105646432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9538818813734684) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1227525414490898) _gate_q_0;
  ry(-2.1227525414490898) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9538818813734684) _gate_q_1;
}
gate xx_plus_yy_5105631504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.484949703723356) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5783111207757787) _gate_q_1;
  ry(-0.5783111207757787) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.484949703723356) _gate_q_0;
}
gate xx_plus_yy_5105640624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.860503665271591) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.560071602410188) _gate_q_1;
  ry(-2.560071602410188) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.860503665271591) _gate_q_0;
}
gate rxx_5105642688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1333404811468895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5106012608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3027713944904404) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.685954415728093) _gate_q_0;
  ry(-2.685954415728093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3027713944904404) _gate_q_1;
}
gate r_5106009920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.853525101089585, 4.57979540087216, -4.57979540087216) _gate_q_0;
}
gate xx_minus_yy_5106016112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1324318805367968) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.600598012776014) _gate_q_0;
  ry(-1.600598012776014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1324318805367968) _gate_q_1;
}
gate r_5106018272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.632185697144187, 4.5582493910544715, -4.5582493910544715) _gate_q_0;
}
gate r_5106013952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.468307749420342, 0.659821149685166, -0.659821149685166) _gate_q_0;
}
gate xx_minus_yy_5106015872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.20626527588407) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.09187404898590476) _gate_q_0;
  ry(-0.09187404898590476) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.20626527588407) _gate_q_1;
}
gate rzx_5106015152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6329136854370563) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106021152(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.667485056752053, 2.6003657043247443, -2.6003657043247443) _gate_q_0;
}
gate xx_minus_yy_5106011120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3710315474823094) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.725463449752863) _gate_q_0;
  ry(-1.725463449752863) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3710315474823094) _gate_q_1;
}
gate xx_minus_yy_5106017360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.8741268454429925) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.33453945453769707) _gate_q_0;
  ry(-0.33453945453769707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.8741268454429925) _gate_q_1;
}
gate xx_minus_yy_5106012368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.3100943130540994) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0942012373093215) _gate_q_0;
  ry(-2.0942012373093215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.3100943130540994) _gate_q_1;
}
gate rzx_5106010064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8136217296091017) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5106011696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.0911954632856595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5106024416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.260684847042336) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5106015248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.875952693154339) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7176668360129153) _gate_q_1;
  ry(-1.7176668360129153) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.875952693154339) _gate_q_0;
}
gate ryy_5106023888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2801539894812164) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106009440(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.058994904335934) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5106012848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5406394720775958) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9683631119098994) _gate_q_1;
  ry(-0.9683631119098994) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5406394720775958) _gate_q_0;
}
gate rxx_5106012464(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.7078629274913935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5106019568(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1773035915936743) _gate_q_0;
  u1(1.8427816474221868) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8279869647278479, 0, -2.1773035915936743) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8279869647278479, 0.3345219441714876, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  dcx _gate_q_8, _gate_q_15;
  sx _gate_q_18;
  crx(4.693615867190032) _gate_q_13, _gate_q_7;
  u1(3.0984323903595126) _gate_q_17;
  h _gate_q_11;
  crx(4.761099211791667) _gate_q_5, _gate_q_10;
  ry(2.9421151336299967) _gate_q_12;
  cu1_5105640096(0.37090600142572216) _gate_q_6, _gate_q_0;
  sxdg _gate_q_9;
  r_5105632464(1.331890269514976, 4.032536861482744) _gate_q_3;
  dcx _gate_q_4, _gate_q_16;
  z _gate_q_19;
  cy _gate_q_2, _gate_q_14;
  z _gate_q_1;
  h _gate_q_8;
  xx_minus_yy_5105643168(6.101034115491319, 5.852477269002765) _gate_q_11, _gate_q_12;
  u1(0.9518064617943168) _gate_q_7;
  ry(2.17049107318566) _gate_q_13;
  rxx_5105634288(5.360943151944764) _gate_q_14, _gate_q_5;
  csdg _gate_q_10, _gate_q_15;
  x _gate_q_9;
  U(0.3611435554309553, 4.280080354336892, 4.662427686693589) _gate_q_6;
  cx _gate_q_18, _gate_q_0;
  ryy_5105647248(0.7420292553530886) _gate_q_1, _gate_q_16;
  xx_minus_yy_5105635344(3.1904947407238873, 3.711768133086277) _gate_q_2, _gate_q_3;
  p(4.448995359828432) _gate_q_4;
  xx_minus_yy_5105646432(4.2455050828981795, 1.9538818813734684) _gate_q_17, _gate_q_19;
  cry(3.22015788873194) _gate_q_8, _gate_q_3;
  x _gate_q_4;
  cu(4.73127313680542, 1.9616882797444595, 1.0450719616611104, 4.59448550165832) _gate_q_6, _gate_q_15;
  xx_plus_yy_5105631504(1.1566222415515575, 4.484949703723356) _gate_q_18, _gate_q_1;
  t _gate_q_13;
  xx_plus_yy_5105640624(5.120143204820376, 5.860503665271591) _gate_q_7, _gate_q_10;
  y _gate_q_14;
  cry(4.020469811837839) _gate_q_5, _gate_q_19;
  cry(5.476822339625456) _gate_q_12, _gate_q_16;
  crz(1.6737911652011466) _gate_q_2, _gate_q_0;
  rxx_5105642688(2.1333404811468895) _gate_q_17, _gate_q_9;
  sxdg _gate_q_11;
  xx_minus_yy_5106012608(5.371908831456186, 1.3027713944904404) _gate_q_17, _gate_q_14;
  r_5106009920(4.853525101089585, 6.150591727667057) _gate_q_0;
  cz _gate_q_11, _gate_q_1;
  cx _gate_q_2, _gate_q_3;
  xx_minus_yy_5106016112(3.201196025552028, 1.1324318805367968) _gate_q_6, _gate_q_18;
  p(0.6113038832281487) _gate_q_12;
  u2(0.3426196230960193, 1.3823378064770617) _gate_q_4;
  tdg _gate_q_10;
  rz(2.92961849903194) _gate_q_7;
  r_5106018272(4.632185697144187, 6.129045717849368) _gate_q_9;
  sxdg _gate_q_16;
  r_5106013952(3.468307749420342, 2.2306174764800626) _gate_q_8;
  crx(4.9470332066317075) _gate_q_13, _gate_q_5;
  xx_minus_yy_5106015872(0.18374809797180952, 4.20626527588407) _gate_q_19, _gate_q_15;
  h _gate_q_18;
  z _gate_q_6;
  s _gate_q_2;
  swap _gate_q_4, _gate_q_0;
  ry(1.6253870958762655) _gate_q_11;
  rzx_5106015152(3.6329136854370563) _gate_q_5, _gate_q_12;
  ry(4.867101914006388) _gate_q_7;
  ry(0.655818699063084) _gate_q_15;
  r_5106021152(1.667485056752053, 4.171162031119641) _gate_q_9;
  sx _gate_q_16;
  dcx _gate_q_17, _gate_q_1;
  cz _gate_q_8, _gate_q_14;
  rx(6.280043053661278) _gate_q_3;
  y _gate_q_19;
  cry(2.2114119478605976) _gate_q_10, _gate_q_13;
  ry(0.024049848678225832) _gate_q_14;
  sdg _gate_q_6;
  cy _gate_q_13, _gate_q_8;
  crz(3.998464778849298) _gate_q_0, _gate_q_18;
  x _gate_q_1;
  dcx _gate_q_19, _gate_q_10;
  x _gate_q_2;
  u3(3.7606811952336665, 4.311036390031657, 2.962988148268613) _gate_q_12;
  id _gate_q_5;
  h _gate_q_16;
  xx_minus_yy_5106011120(3.450926899505726, 1.3710315474823094) _gate_q_17, _gate_q_11;
  tdg _gate_q_15;
  xx_minus_yy_5106017360(0.6690789090753941, 4.8741268454429925) _gate_q_9, _gate_q_3;
  x _gate_q_4;
  h _gate_q_7;
  h _gate_q_0;
  p(3.483984739157827) _gate_q_16;
  xx_minus_yy_5106012368(4.188402474618643, 3.3100943130540994) _gate_q_2, _gate_q_7;
  sdg _gate_q_6;
  U(2.281029098669637, 0.42820056813053736, 6.176259527663705) _gate_q_4;
  iswap _gate_q_19, _gate_q_14;
  rz(2.1084954826387965) _gate_q_3;
  crz(4.546996894561889) _gate_q_10, _gate_q_17;
  cz _gate_q_18, _gate_q_5;
  y _gate_q_11;
  u2(2.322372992057705, 6.120986954182318) _gate_q_15;
  cs _gate_q_1, _gate_q_12;
  u3(2.6947003933630853, 6.251917691787344, 3.782798037793568) _gate_q_13;
  U(5.942681631596788, 1.5854852318243116, 5.0728211595510295) _gate_q_8;
  U(0.8544948416594609, 0.38040942152993346, 0.002399266088182002) _gate_q_9;
  cz _gate_q_8, _gate_q_3;
  cs _gate_q_10, _gate_q_15;
  s _gate_q_5;
  rzx_5106010064(1.8136217296091017) _gate_q_11, _gate_q_7;
  u2(4.933784074098679, 5.178741177993552) _gate_q_1;
  cx _gate_q_4, _gate_q_2;
  cry(2.322450817592263) _gate_q_14, _gate_q_16;
  rxx_5106011696(5.0911954632856595) _gate_q_6, _gate_q_0;
  cy _gate_q_17, _gate_q_19;
  rz(0.4572546780622274) _gate_q_9;
  x _gate_q_18;
  swap _gate_q_13, _gate_q_12;
  crz(1.4548868693996249) _gate_q_10, _gate_q_5;
  iswap _gate_q_16, _gate_q_7;
  cry(1.2605705971396794) _gate_q_3, _gate_q_11;
  sx _gate_q_18;
  ecr _gate_q_17, _gate_q_12;
  t _gate_q_1;
  y _gate_q_0;
  u1(3.943130063916861) _gate_q_8;
  rxx_5106024416(4.260684847042336) _gate_q_6, _gate_q_15;
  sx _gate_q_13;
  z _gate_q_19;
  ch _gate_q_14, _gate_q_2;
  xx_plus_yy_5106015248(3.4353336720258305, 4.875952693154339) _gate_q_9, _gate_q_4;
  ryy_5106023888(1.2801539894812164) _gate_q_3, _gate_q_11;
  rzz_5106009440(4.058994904335934) _gate_q_7, _gate_q_9;
  swap _gate_q_6, _gate_q_5;
  U(1.4139048875131832, 4.229593927188037, 0.7750589881361013) _gate_q_13;
  xx_plus_yy_5106012848(1.9367262238197989, 3.5406394720775958) _gate_q_14, _gate_q_2;
  rxx_5106012464(5.7078629274913935) _gate_q_19, _gate_q_1;
  cu3_5106019568(1.6559739294556959, 0.3345219441714876, 4.020085239015861) _gate_q_4, _gate_q_12;
  sdg _gate_q_17;
  u1(5.573927905616193) _gate_q_15;
  cx _gate_q_0, _gate_q_10;
  y _gate_q_16;
  x _gate_q_8;
  u3(0.2588917487416789, 3.7747127486119814, 6.195397645302658) _gate_q_18;
}