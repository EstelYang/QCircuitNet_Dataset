gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate ryy_5072613936(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.059636934919649) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5072605296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.72912749242411) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8760397446332538) _gate_q_0;
  ry(-0.8760397446332538) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.72912749242411) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5072617392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.704774084438329) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072616576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.800198355010863) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7341268846554976) _gate_q_1;
  ry(-2.7341268846554976) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.800198355010863) _gate_q_0;
}
gate rxx_5072606784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5795400915740572) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate cu3_5072603856(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.260641588296493) _gate_q_0;
  u1(0.8370928903063275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2439564492541857, 0, -3.260641588296493) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2439564492541857, 2.4235486979901655, 0) _gate_q_1;
}
gate cu3_5072602560(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6720902660382913) _gate_q_0;
  u1(-1.722135189170871) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9995548445780038, 0, -2.6720902660382913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9995548445780038, 4.394225455209162, 0) _gate_q_1;
}
gate cu1_5072611920(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7491190709575345) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7491190709575345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7491190709575345) _gate_q_1;
}
gate cu3_5072605920(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.874450189137148) _gate_q_0;
  u1(0.4444057572253872) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6380530911861926, 0, -2.874450189137148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6380530911861926, 2.430044431911761, 0) _gate_q_1;
}
gate ryy_5072612640(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.101071162682687) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5072613360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7897746253053142) _gate_q_1;
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
gate r_5072601984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.786322091015433, 1.8451593825068762, -1.8451593825068762) _gate_q_0;
}
gate xx_plus_yy_5072609520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.274034749942502) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.061776736778876) _gate_q_1;
  ry(-1.061776736778876) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.274034749942502) _gate_q_0;
}
gate rzx_5072613312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.526885356182668) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072610000(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.76295843977917) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.1027597933243016) _gate_q_0;
  ry(-3.1027597933243016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.76295843977917) _gate_q_1;
}
gate rxx_5072609328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.824787163039926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072605056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1478225257313723, 1.5384054899025221, -1.5384054899025221) _gate_q_0;
}
gate ryy_5072602512(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.363965437799427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072611536(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.282138894985602) _gate_q_0;
  u1(-1.3948396634189701) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.16992656647594576, 0, -4.282138894985602) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.16992656647594576, 5.676978558404572, 0) _gate_q_1;
}
gate rzz_5072610144(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6799678252461219) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  sxdg _gate_q_14;
  ch _gate_q_12, _gate_q_10;
  sdg _gate_q_13;
  ryy_5072613936(3.059636934919649) _gate_q_9, _gate_q_1;
  sx _gate_q_4;
  ry(4.702554820441478) _gate_q_8;
  xx_minus_yy_5072605296(1.7520794892665077, 3.72912749242411) _gate_q_5, _gate_q_7;
  U(3.9395500768368086, 1.518862526327279, 1.060727975309637) _gate_q_15;
  cz _gate_q_6, _gate_q_3;
  cs _gate_q_2, _gate_q_0;
  h _gate_q_11;
  swap _gate_q_3, _gate_q_6;
  rxx_5072617392(5.704774084438329) _gate_q_2, _gate_q_10;
  tdg _gate_q_14;
  xx_plus_yy_5072616576(5.468253769310995, 2.800198355010863) _gate_q_13, _gate_q_9;
  cry(2.02707093518899) _gate_q_15, _gate_q_7;
  sx _gate_q_1;
  h _gate_q_4;
  z _gate_q_12;
  rxx_5072606784(0.5795400915740572) _gate_q_8, _gate_q_5;
  tdg _gate_q_0;
  x _gate_q_11;
  sxdg _gate_q_0;
  u3(3.2872540627712588, 1.3914051906588543, 3.643230224714754) _gate_q_3;
  sdg _gate_q_9;
  id _gate_q_8;
  rx(2.732337542157215) _gate_q_5;
  crz(1.2394227156943396) _gate_q_6, _gate_q_7;
  u3(3.7461479968781606, 3.323897544049291, 5.981467133001105) _gate_q_13;
  sxdg _gate_q_2;
  s _gate_q_14;
  cu(6.167051496763653, 4.546320780401422, 4.539001312017119, 2.830513100980984) _gate_q_10, _gate_q_12;
  h _gate_q_4;
  dcx _gate_q_15, _gate_q_1;
  u1(2.2620951515704917) _gate_q_11;
  sx _gate_q_12;
  ch _gate_q_5, _gate_q_0;
  z _gate_q_2;
  sxdg _gate_q_3;
  csx _gate_q_14, _gate_q_4;
  cu3_5072603856(4.487912898508371, 2.4235486979901655, 4.0977344786028205) _gate_q_15, _gate_q_13;
  cs _gate_q_7, _gate_q_11;
  t _gate_q_6;
  cy _gate_q_9, _gate_q_8;
  cz _gate_q_10, _gate_q_1;
  cu3_5072602560(1.9991096891560076, 4.394225455209162, 0.9499550768674204) _gate_q_14, _gate_q_5;
  crx(5.049954076803182) _gate_q_7, _gate_q_8;
  cry(2.9980228136351483) _gate_q_6, _gate_q_13;
  x _gate_q_4;
  cu1_5072611920(1.498238141915069) _gate_q_11, _gate_q_0;
  cu3_5072605920(5.276106182372385, 2.430044431911761, 3.3188559463625356) _gate_q_3, _gate_q_2;
  cx _gate_q_15, _gate_q_10;
  ryy_5072612640(6.101071162682687) _gate_q_12, _gate_q_9;
  u3(2.470768423991907, 2.279658117795403, 4.040614431688232) _gate_q_1;
  csdg _gate_q_2, _gate_q_14;
  rxx_5072613360(1.7897746253053142) _gate_q_8, _gate_q_3;
  sx _gate_q_5;
  s _gate_q_12;
  ch _gate_q_11, _gate_q_4;
  sdg _gate_q_13;
  ry(1.499662266172308) _gate_q_1;
  sxdg _gate_q_6;
  iswap _gate_q_9, _gate_q_7;
  cx _gate_q_10, _gate_q_0;
  r_5072601984(2.786322091015433, 3.4159557093017727) _gate_q_15;
  xx_plus_yy_5072609520(2.123553473557752, 1.274034749942502) _gate_q_9, _gate_q_5;
  cy _gate_q_1, _gate_q_12;
  u1(4.8719601622375475) _gate_q_10;
  csx _gate_q_7, _gate_q_11;
  u2(0.6803985404114782, 1.6106233252413802) _gate_q_3;
  crz(4.938619316252617) _gate_q_15, _gate_q_2;
  rzx_5072613312(5.526885356182668) _gate_q_8, _gate_q_14;
  p(1.3366389644239534) _gate_q_4;
  id _gate_q_13;
  y _gate_q_0;
  sx _gate_q_6;
  xx_minus_yy_5072610000(6.205519586648603, 4.76295843977917) _gate_q_2, _gate_q_5;
  ry(3.460898568362452) _gate_q_3;
  rxx_5072609328(5.824787163039926) _gate_q_4, _gate_q_0;
  cy _gate_q_9, _gate_q_10;
  cs _gate_q_13, _gate_q_7;
  r_5072605056(1.1478225257313723, 3.1092018166974187) _gate_q_12;
  p(3.004989976436804) _gate_q_8;
  sdg _gate_q_1;
  dcx _gate_q_6, _gate_q_11;
  id _gate_q_14;
  sdg _gate_q_15;
  ryy_5072602512(3.363965437799427) _gate_q_7, _gate_q_0;
  cs _gate_q_6, _gate_q_15;
  sdg _gate_q_14;
  cu3_5072611536(0.3398531329518915, 5.676978558404572, 2.887299231566632) _gate_q_4, _gate_q_10;
  crz(3.65308165604601) _gate_q_2, _gate_q_1;
  u3(3.9916636259483913, 1.9720359580107274, 0.8370515869817783) _gate_q_11;
  rx(0.887822318603168) _gate_q_9;
  swap _gate_q_8, _gate_q_5;
  swap _gate_q_3, _gate_q_13;
  u3(3.4692279111601083, 5.139321296488646, 6.117073510983933) _gate_q_12;
  h _gate_q_6;
  y _gate_q_15;
  cy _gate_q_8, _gate_q_1;
  dcx _gate_q_7, _gate_q_14;
  y _gate_q_13;
  t _gate_q_9;
  z _gate_q_4;
  csx _gate_q_10, _gate_q_2;
  id _gate_q_0;
  rzz_5072610144(0.6799678252461219) _gate_q_3, _gate_q_12;
  p(0.019187604416795186) _gate_q_11;
  sxdg _gate_q_5;
}
gate rzz_5072608272(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.138097237430595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072308080(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.166202371447896) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.30424098345583833) _gate_q_0;
  ry(-0.30424098345583833) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.166202371447896) _gate_q_1;
}
gate cu3_5072307840(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.178835031026704) _gate_q_0;
  u1(0.13489745466768222) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.10632652306268497, 0, -4.178835031026704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.10632652306268497, 4.043937576359022, 0) _gate_q_1;
}
gate rxx_5072316720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.0781732154282) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072316816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9561356140843427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072308704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.786143121715501) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072314752(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.098242808332425) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.601442192882352) _gate_q_0;
  ry(-2.601442192882352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.098242808332425) _gate_q_1;
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
gate rxx_5072308512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.8050552653988605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072308272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.676874648423998) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.676874648423998) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.676874648423998) _gate_q_1;
}
gate ryy_5072312736(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1036730160811739) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5072321856(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.23347963878229508) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5072316432(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1271042173427825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072312208(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8114895954989185) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072316912(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.572643144932324, 2.8358003740813196, -2.8358003740813196) _gate_q_0;
}
gate rxx_5072321424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.198008501790679) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072308224(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.963994372590107, 3.524686830743552, -3.524686830743552) _gate_q_0;
}
gate rxx_5072316864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.89629006996307) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  csdg _gate_q_10, _gate_q_12;
  u3(0.8977456545579378, 0.8325543788139429, 1.4097606267845233) _gate_q_15;
  u1(0.9138061716925722) _gate_q_1;
  csdg _gate_q_8, _gate_q_6;
  rzz_5072608272(2.138097237430595) _gate_q_11, _gate_q_4;
  cry(1.461029796275026) _gate_q_9, _gate_q_14;
  p(4.9272979973422215) _gate_q_5;
  xx_minus_yy_5072308080(0.6084819669116767, 5.166202371447896) _gate_q_2, _gate_q_0;
  y _gate_q_3;
  sdg _gate_q_13;
  id _gate_q_7;
  dcx _gate_q_0, _gate_q_9;
  cu3_5072307840(0.21265304612536995, 4.043937576359022, 4.313732485694387) _gate_q_14, _gate_q_6;
  rx(5.361549459345879) _gate_q_10;
  iswap _gate_q_12, _gate_q_7;
  rz(0.9003666547630268) _gate_q_4;
  rxx_5072316720(6.0781732154282) _gate_q_2, _gate_q_1;
  iswap _gate_q_11, _gate_q_13;
  cx _gate_q_8, _gate_q_15;
  rzx_5072316816(3.9561356140843427) _gate_q_3, _gate_q_5;
  cs _gate_q_15, _gate_q_10;
  t _gate_q_11;
  cp(3.541962115924243) _gate_q_9, _gate_q_14;
  cy _gate_q_13, _gate_q_12;
  ry(0.09643711640810927) _gate_q_6;
  csx _gate_q_0, _gate_q_1;
  u2(6.220717840871151, 6.152480373107839) _gate_q_5;
  csx _gate_q_8, _gate_q_2;
  cp(0.7281856631326201) _gate_q_7, _gate_q_4;
  rx(1.3134031721039843) _gate_q_3;
  rzx_5072308704(4.786143121715501) _gate_q_0, _gate_q_2;
  h _gate_q_10;
  sx _gate_q_8;
  id _gate_q_3;
  iswap _gate_q_9, _gate_q_7;
  u3(3.921509453949168, 2.373326207283111, 1.2360262330535778) _gate_q_5;
  p(5.900871139921553) _gate_q_12;
  csdg _gate_q_15, _gate_q_14;
  tdg _gate_q_4;
  ry(0.9788402026080141) _gate_q_1;
  sx _gate_q_6;
  crx(5.16525997982929) _gate_q_13, _gate_q_11;
  crz(0.812797265073766) _gate_q_12, _gate_q_1;
  csdg _gate_q_2, _gate_q_0;
  s _gate_q_13;
  swap _gate_q_5, _gate_q_7;
  iswap _gate_q_8, _gate_q_9;
  p(6.183760496120442) _gate_q_6;
  xx_minus_yy_5072314752(5.202884385764704, 6.098242808332425) _gate_q_14, _gate_q_4;
  u3(2.454844519671958, 3.898010873175031, 0.3033000233038968) _gate_q_11;
  p(3.5388587091080463) _gate_q_3;
  u2(0.14751944846904266, 4.335465591824596) _gate_q_10;
  h _gate_q_15;
  iswap _gate_q_15, _gate_q_3;
  cs _gate_q_7, _gate_q_8;
  crz(6.109331423539482) _gate_q_1, _gate_q_2;
  cz _gate_q_10, _gate_q_11;
  iswap _gate_q_5, _gate_q_4;
  ecr _gate_q_12, _gate_q_0;
  rxx_5072308512(4.8050552653988605) _gate_q_13, _gate_q_9;
  csx _gate_q_6, _gate_q_14;
  cu1_5072308272(5.353749296847996) _gate_q_14, _gate_q_11;
  u2(4.9945734302379545, 0.30027298554115667) _gate_q_4;
  rx(3.1792210153213865) _gate_q_10;
  y _gate_q_12;
  z _gate_q_7;
  ryy_5072312736(1.1036730160811739) _gate_q_9, _gate_q_15;
  t _gate_q_0;
  cp(3.646682098446247) _gate_q_6, _gate_q_2;
  cs _gate_q_3, _gate_q_1;
  sxdg _gate_q_5;
  dcx _gate_q_13, _gate_q_8;
  rxx_5072321856(0.23347963878229508) _gate_q_0, _gate_q_4;
  sx _gate_q_11;
  crz(0.6051505782907999) _gate_q_6, _gate_q_15;
  iswap _gate_q_12, _gate_q_10;
  ryy_5072316432(2.1271042173427825) _gate_q_9, _gate_q_13;
  cz _gate_q_5, _gate_q_8;
  iswap _gate_q_2, _gate_q_14;
  ecr _gate_q_7, _gate_q_3;
  s _gate_q_1;
  ecr _gate_q_6, _gate_q_1;
  ryy_5072312208(1.8114895954989185) _gate_q_7, _gate_q_15;
  cry(3.7490195708298564) _gate_q_4, _gate_q_12;
  sdg _gate_q_2;
  r_5072316912(4.572643144932324, 4.406596700876216) _gate_q_0;
  sxdg _gate_q_8;
  cs _gate_q_13, _gate_q_3;
  csx _gate_q_10, _gate_q_5;
  t _gate_q_9;
  rxx_5072321424(5.198008501790679) _gate_q_11, _gate_q_14;
  r_5072308224(0.963994372590107, 5.095483157538449) _gate_q_7;
  crx(3.0663761313125204) _gate_q_14, _gate_q_15;
  rxx_5072316864(2.89629006996307) _gate_q_9, _gate_q_6;
  crz(5.53505380724442) _gate_q_12, _gate_q_13;
  swap _gate_q_8, _gate_q_4;
  x _gate_q_3;
  csx _gate_q_11, _gate_q_5;
  sxdg _gate_q_2;
  ecr _gate_q_1, _gate_q_0;
  rz(2.009570911050106) _gate_q_10;
}