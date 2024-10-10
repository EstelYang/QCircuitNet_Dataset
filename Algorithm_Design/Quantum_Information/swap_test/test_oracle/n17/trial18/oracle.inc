gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5074354400(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.7912747994171556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074355984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.061207714899059, 4.688560763249388, -4.688560763249388) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5074369424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.910835031499035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074357856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2452701000825916) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074360592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0234984918966947) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.472078960174004) _gate_q_0;
  ry(-2.472078960174004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0234984918966947) _gate_q_1;
}
gate r_5074362128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.314901228887475, 4.1153111217906275, -4.1153111217906275) _gate_q_0;
}
gate xx_plus_yy_5074367840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.076551256455648) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.171158691120776) _gate_q_1;
  ry(-2.171158691120776) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.076551256455648) _gate_q_0;
}
gate xx_plus_yy_5074364576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.23847577002329742) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2624220430736063) _gate_q_1;
  ry(-0.2624220430736063) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.23847577002329742) _gate_q_0;
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
gate rzx_5074359584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.045842700280524) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074358624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.136395713558179) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7903583417598086) _gate_q_1;
  ry(-1.7903583417598086) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.136395713558179) _gate_q_0;
}
gate rzz_5074358336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9838967623749428) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074357328(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3724208038645875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5074364960(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.536985668983315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5074361888(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0008900799664713, -1.054854206024613, 1.054854206024613) _gate_q_0;
}
gate rzx_5074364768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6076778442090363) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5074357136(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.342794334327153) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5074363088(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.344654097514553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate r_5074367504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.999563956101013, 2.3545311747024527, -2.3545311747024527) _gate_q_0;
}
gate xx_minus_yy_5074369184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.1925897850877987) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.012475788888237) _gate_q_0;
  ry(-2.012475788888237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.1925897850877987) _gate_q_1;
}
gate r_5074367168(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.198410916412011, 3.1239045090094786, -3.1239045090094786) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5074370096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.273859520767764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074368608(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0488412567022847, 1.803285746726531, -1.803285746726531) _gate_q_0;
}
gate rzx_5074367072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1035919410223214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074356992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.984029141171631) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.36072682370593473) _gate_q_1;
  ry(-0.36072682370593473) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.984029141171631) _gate_q_0;
}
gate rxx_5074366400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.027965731838586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  cs _gate_q_9, _gate_q_1;
  rzz_5074354400(2.7912747994171556) _gate_q_13, _gate_q_14;
  r_5074355984(4.061207714899059, 6.2593570900442845) _gate_q_15;
  sxdg _gate_q_12;
  cu(3.7806196438289588, 1.5889450756627401, 0.26127574049159286, 3.9468793902684087) _gate_q_16, _gate_q_0;
  t _gate_q_11;
  rxx_5074369424(5.910835031499035) _gate_q_7, _gate_q_3;
  rzz_5074357856(1.2452701000825916) _gate_q_4, _gate_q_10;
  cx _gate_q_2, _gate_q_5;
  crz(4.712587710894229) _gate_q_6, _gate_q_8;
  xx_minus_yy_5074360592(4.944157920348008, 1.0234984918966947) _gate_q_4, _gate_q_14;
  y _gate_q_12;
  x _gate_q_5;
  r_5074362128(5.314901228887475, 5.686107448585524) _gate_q_0;
  cz _gate_q_10, _gate_q_11;
  xx_plus_yy_5074367840(4.342317382241552, 4.076551256455648) _gate_q_8, _gate_q_6;
  id _gate_q_15;
  crx(1.028216401932496) _gate_q_9, _gate_q_2;
  sxdg _gate_q_1;
  t _gate_q_7;
  tdg _gate_q_13;
  tdg _gate_q_3;
  ry(4.256882879139152) _gate_q_16;
  xx_plus_yy_5074364576(0.5248440861472126, 0.23847577002329742) _gate_q_2, _gate_q_14;
  ecr _gate_q_13, _gate_q_0;
  cs _gate_q_7, _gate_q_9;
  u1(1.3722174729735959) _gate_q_11;
  rzx_5074359584(2.045842700280524) _gate_q_12, _gate_q_3;
  swap _gate_q_8, _gate_q_1;
  cu(1.0194544095204852, 3.361983534069619, 2.65821589439094, 1.8945284472303991) _gate_q_15, _gate_q_5;
  U(5.8801414492713056, 2.042425645361176, 5.772011677277327) _gate_q_6;
  u2(6.28268404757852, 5.8281529827941325) _gate_q_10;
  xx_plus_yy_5074358624(3.580716683519617, 6.136395713558179) _gate_q_16, _gate_q_4;
  rzz_5074358336(0.9838967623749428) _gate_q_3, _gate_q_14;
  y _gate_q_7;
  U(6.131627043149882, 1.2725479949560992, 3.520120566343682) _gate_q_11;
  ryy_5074357328(1.3724208038645875) _gate_q_6, _gate_q_9;
  sxdg _gate_q_2;
  u1(1.9166375169654575) _gate_q_16;
  y _gate_q_5;
  cx _gate_q_1, _gate_q_13;
  sx _gate_q_10;
  U(6.118283590697242, 5.747605978396889, 5.28678294746719) _gate_q_0;
  ryy_5074364960(5.536985668983315) _gate_q_15, _gate_q_12;
  sx _gate_q_8;
  t _gate_q_4;
  rz(3.5946099756739085) _gate_q_8;
  id _gate_q_15;
  s _gate_q_0;
  cry(3.9007406397663438) _gate_q_3, _gate_q_7;
  crz(4.545982584718335) _gate_q_12, _gate_q_11;
  cry(5.7453866146669075) _gate_q_4, _gate_q_10;
  u2(2.5217347198378173, 3.8208236933997224) _gate_q_14;
  cy _gate_q_2, _gate_q_5;
  iswap _gate_q_16, _gate_q_13;
  r_5074361888(3.0008900799664713, 0.5159421207702836) _gate_q_9;
  rzx_5074364768(1.6076778442090363) _gate_q_1, _gate_q_6;
  u1(2.3837663447718707) _gate_q_14;
  cp(5.276865083544944) _gate_q_2, _gate_q_11;
  dcx _gate_q_12, _gate_q_9;
  s _gate_q_16;
  sxdg _gate_q_1;
  ryy_5074357136(4.342794334327153) _gate_q_5, _gate_q_4;
  u2(2.241674625337225, 1.8545633345481771) _gate_q_13;
  u1(3.44992314525171) _gate_q_0;
  dcx _gate_q_6, _gate_q_3;
  ryy_5074363088(4.344654097514553) _gate_q_8, _gate_q_15;
  iswap _gate_q_7, _gate_q_10;
  z _gate_q_14;
  id _gate_q_7;
  u3(1.5271194657031646, 1.9908919241010234, 1.3918681251910323) _gate_q_0;
  crz(4.88067549398326) _gate_q_16, _gate_q_11;
  sx _gate_q_10;
  csx _gate_q_1, _gate_q_8;
  dcx _gate_q_5, _gate_q_2;
  sx _gate_q_4;
  ecr _gate_q_6, _gate_q_15;
  r_5074367504(2.999563956101013, 3.925327501497349) _gate_q_12;
  sdg _gate_q_3;
  csx _gate_q_13, _gate_q_9;
  cry(5.183948995826822) _gate_q_1, _gate_q_12;
  tdg _gate_q_6;
  xx_minus_yy_5074369184(4.024951577776474, 3.1925897850877987) _gate_q_11, _gate_q_4;
  h _gate_q_8;
  r_5074367168(6.198410916412011, 4.694700835804375) _gate_q_2;
  ry(0.970864563470839) _gate_q_14;
  csdg _gate_q_15, _gate_q_0;
  cry(0.39142744144096386) _gate_q_16, _gate_q_7;
  id _gate_q_3;
  rxx_5074370096(6.273859520767764) _gate_q_9, _gate_q_13;
  ch _gate_q_10, _gate_q_5;
  cs _gate_q_3, _gate_q_4;
  r_5074368608(3.0488412567022847, 3.3740820735214276) _gate_q_9;
  rzx_5074367072(1.1035919410223214) _gate_q_15, _gate_q_11;
  x _gate_q_12;
  u3(5.927454035636896, 3.939969972293205, 4.82072685900228) _gate_q_0;
  sdg _gate_q_16;
  z _gate_q_10;
  u1(1.2509394936574822) _gate_q_5;
  cy _gate_q_14, _gate_q_2;
  sx _gate_q_8;
  iswap _gate_q_13, _gate_q_6;
  t _gate_q_1;
  rz(0.05280656102946711) _gate_q_7;
  crx(2.6888035395142853) _gate_q_2, _gate_q_7;
  sx _gate_q_15;
  rz(6.253284109137483) _gate_q_1;
  cp(0.8604994701614307) _gate_q_0, _gate_q_9;
  xx_plus_yy_5074356992(0.7214536474118695, 5.984029141171631) _gate_q_13, _gate_q_12;
  U(5.982179721039569, 1.3414441529257457, 2.9317695181522048) _gate_q_4;
  u3(2.4152633753220885, 4.957912219162091, 0.4542053681497888) _gate_q_16;
  rz(3.0594048226111714) _gate_q_6;
  u3(0.7929722034343705, 1.0001561280309195, 5.481956762302672) _gate_q_14;
  rxx_5074366400(4.027965731838586) _gate_q_3, _gate_q_5;
  z _gate_q_11;
  ry(2.476230064140002) _gate_q_10;
  sx _gate_q_8;
}
gate xx_plus_yy_5070728000(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.765874368455607) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2528537802509285) _gate_q_1;
  ry(-0.2528537802509285) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.765874368455607) _gate_q_0;
}
gate rxx_5070727952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0935644338097146) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072774704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7124021593894818) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072770336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.4066439201062444) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.652523310031373) _gate_q_1;
  ry(-2.652523310031373) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.4066439201062444) _gate_q_0;
}
gate rxx_5072780512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.06801994397601019) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072781280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.540087101384283) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072780608(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8470583591162373) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072775712(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.3065656785197205, -0.9586529338765496, 0.9586529338765496) _gate_q_0;
}
gate rzz_5072769472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.2167586442593725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072769952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.799806526018224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072768704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7681350061310894) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6437230794794884) _gate_q_1;
  ry(-2.6437230794794884) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7681350061310894) _gate_q_0;
}
gate xx_plus_yy_5072772640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.204887734952263) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.423387999939428) _gate_q_1;
  ry(-2.423387999939428) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.204887734952263) _gate_q_0;
}
gate cu1_5072767408(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6808237127795116) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6808237127795116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6808237127795116) _gate_q_1;
}
gate rxx_5072779216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.436757692127217) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072774992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6053149882925386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072776528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5654704048922329) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.376788011204739) _gate_q_0;
  ry(-2.376788011204739) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5654704048922329) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  crz(5.356971066006921) _gate_q_7, _gate_q_11;
  sdg _gate_q_16;
  xx_plus_yy_5070728000(0.505707560501857, 5.765874368455607) _gate_q_0, _gate_q_8;
  dcx _gate_q_2, _gate_q_4;
  s _gate_q_5;
  rxx_5070727952(3.0935644338097146) _gate_q_6, _gate_q_1;
  rx(2.1812156303262293) _gate_q_12;
  ecr _gate_q_15, _gate_q_13;
  sxdg _gate_q_3;
  t _gate_q_14;
  z _gate_q_10;
  sdg _gate_q_9;
  p(5.74208753373107) _gate_q_0;
  cy _gate_q_2, _gate_q_6;
  sx _gate_q_11;
  cy _gate_q_10, _gate_q_16;
  x _gate_q_5;
  cy _gate_q_12, _gate_q_8;
  cp(3.382248948522846) _gate_q_13, _gate_q_1;
  rzx_5072774704(1.7124021593894818) _gate_q_3, _gate_q_14;
  xx_plus_yy_5072770336(5.305046620062746, 2.4066439201062444) _gate_q_7, _gate_q_9;
  sx _gate_q_4;
  u1(2.6101489452038993) _gate_q_15;
  u1(1.6734848708962582) _gate_q_6;
  csx _gate_q_15, _gate_q_7;
  cp(3.559573045079619) _gate_q_8, _gate_q_9;
  U(4.710713361019125, 2.716944777760169, 1.3171204282818811) _gate_q_3;
  cu(6.173632580541773, 1.9083229950132699, 0.8344892935877234, 1.6568226099148446) _gate_q_0, _gate_q_16;
  cy _gate_q_5, _gate_q_4;
  rxx_5072780512(0.06801994397601019) _gate_q_10, _gate_q_13;
  rz(6.04302043223057) _gate_q_2;
  ecr _gate_q_1, _gate_q_11;
  sdg _gate_q_12;
  rx(0.405717810485234) _gate_q_14;
  rzx_5072781280(4.540087101384283) _gate_q_10, _gate_q_14;
  tdg _gate_q_2;
  t _gate_q_16;
  cp(2.58845175157016) _gate_q_5, _gate_q_1;
  u3(5.98131710360075, 2.3472307701956736, 4.879278803952173) _gate_q_12;
  h _gate_q_8;
  cz _gate_q_6, _gate_q_9;
  sdg _gate_q_0;
  u1(4.02760948499917) _gate_q_7;
  rzz_5072780608(3.8470583591162373) _gate_q_15, _gate_q_4;
  cz _gate_q_3, _gate_q_11;
  U(2.9069920574085795, 2.4241310964781286, 0.38039685850197263) _gate_q_13;
  x _gate_q_8;
  crz(5.16648426529527) _gate_q_11, _gate_q_4;
  swap _gate_q_12, _gate_q_2;
  u3(0.29213975487363725, 0.7628696488576869, 3.477949940735919) _gate_q_16;
  ch _gate_q_3, _gate_q_9;
  y _gate_q_15;
  ecr _gate_q_7, _gate_q_1;
  iswap _gate_q_6, _gate_q_10;
  tdg _gate_q_0;
  dcx _gate_q_14, _gate_q_5;
  sdg _gate_q_13;
  crz(2.3339078359522634) _gate_q_13, _gate_q_7;
  t _gate_q_8;
  rx(2.5200963030013304) _gate_q_10;
  tdg _gate_q_4;
  csx _gate_q_16, _gate_q_3;
  u1(3.6201350729341373) _gate_q_0;
  r_5072775712(0.3065656785197205, 0.612143392918347) _gate_q_12;
  rzz_5072769472(6.2167586442593725) _gate_q_14, _gate_q_11;
  rx(5.137911549559768) _gate_q_5;
  s _gate_q_15;
  cy _gate_q_6, _gate_q_1;
  x _gate_q_9;
  z _gate_q_2;
  ecr _gate_q_9, _gate_q_16;
  rxx_5072769952(5.799806526018224) _gate_q_7, _gate_q_5;
  iswap _gate_q_8, _gate_q_11;
  t _gate_q_0;
  xx_plus_yy_5072768704(5.287446158958977, 0.7681350061310894) _gate_q_1, _gate_q_15;
  id _gate_q_13;
  xx_plus_yy_5072772640(4.846775999878856, 2.204887734952263) _gate_q_10, _gate_q_6;
  cu1_5072767408(5.361647425559023) _gate_q_12, _gate_q_4;
  crx(5.375461634544743) _gate_q_3, _gate_q_2;
  ry(4.7714385766833916) _gate_q_14;
  cy _gate_q_9, _gate_q_16;
  s _gate_q_13;
  ch _gate_q_2, _gate_q_6;
  ch _gate_q_1, _gate_q_14;
  ecr _gate_q_11, _gate_q_7;
  u1(4.518533049779058) _gate_q_4;
  cx _gate_q_12, _gate_q_5;
  U(2.1172619546447744, 4.964777437055621, 2.49354947860322) _gate_q_0;
  ry(0.2057662549941285) _gate_q_15;
  ecr _gate_q_8, _gate_q_10;
  sdg _gate_q_3;
  u2(3.0049640332822887, 1.6799039275290772) _gate_q_14;
  crx(1.607166922078356) _gate_q_2, _gate_q_16;
  U(2.6644697220972047, 5.481111960292233, 0.8420665510418741) _gate_q_11;
  cry(1.385341037349885) _gate_q_15, _gate_q_8;
  sxdg _gate_q_13;
  sdg _gate_q_10;
  sx _gate_q_4;
  csx _gate_q_1, _gate_q_7;
  csdg _gate_q_9, _gate_q_3;
  rxx_5072779216(4.436757692127217) _gate_q_12, _gate_q_5;
  ecr _gate_q_0, _gate_q_6;
  swap _gate_q_7, _gate_q_13;
  rxx_5072774992(1.6053149882925386) _gate_q_9, _gate_q_12;
  ry(0.2837322370693797) _gate_q_3;
  sxdg _gate_q_4;
  cz _gate_q_14, _gate_q_10;
  u3(2.7462346215398727, 1.2035358178596847, 5.3591245569622945) _gate_q_2;
  cy _gate_q_8, _gate_q_11;
  crx(2.1681862397709457) _gate_q_5, _gate_q_0;
  U(0.593780797755075, 0.6802648909930211, 1.38131796332744) _gate_q_6;
  xx_minus_yy_5072776528(4.753576022409478, 0.5654704048922329) _gate_q_15, _gate_q_16;
  tdg _gate_q_1;
}