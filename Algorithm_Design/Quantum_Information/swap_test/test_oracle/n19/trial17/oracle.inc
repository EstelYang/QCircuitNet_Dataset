gate ryy_5070804688(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.157688715475041) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070801472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.784013880645181) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5070799216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9942009477075286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072321328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.058122477450951) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6575994960680207) _gate_q_1;
  ry(-0.6575994960680207) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.058122477450951) _gate_q_0;
}
gate ryy_5072317872(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.992818140752234) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5072310192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7881789713666534) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.41649785728666583) _gate_q_0;
  ry(-0.41649785728666583) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7881789713666534) _gate_q_1;
}
gate rzx_5072321952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.872202821168004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072317968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8891448138238047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072315424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.322853338983726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072312208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9565085857771627) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate r_5072307744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.59810582320452, 1.8422613300579562, -1.8422613300579562) _gate_q_0;
}
gate xx_plus_yy_5070430880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.03066199342466871) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0516546112053646) _gate_q_1;
  ry(-2.0516546112053646) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.03066199342466871) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5085471056(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5593545471323116) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5593545471323116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5593545471323116) _gate_q_1;
}
gate rzx_5085469712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8022366731533639) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5085469856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.671635147854372) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.424718387887606) _gate_q_1;
  ry(-1.424718387887606) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.671635147854372) _gate_q_0;
}
gate r_5085470240(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.873072873527845, 0.3884963519802247, -0.3884963519802247) _gate_q_0;
}
gate r_5085470528(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.899628784620601, 0.35313552132362624, -0.35313552132362624) _gate_q_0;
}
gate ryy_5085470096(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.274288175866728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5085470768(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.0824116129932095, 3.191450987949988, -3.191450987949988) _gate_q_0;
}
gate rzz_5085471344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.398691023762725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5085469664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0208249011238197) _gate_q_0;
  u1(0.38589935102031114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.2406007409199632, 0, -2.0208249011238197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.2406007409199632, 1.6349255501035087, 0) _gate_q_1;
}
gate xx_plus_yy_5085470480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.710864292203225) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8492081577857107) _gate_q_1;
  ry(-0.8492081577857107) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.710864292203225) _gate_q_0;
}
gate xx_plus_yy_5085471392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.8683196354143883) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8248354112832423) _gate_q_1;
  ry(-2.8248354112832423) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.8683196354143883) _gate_q_0;
}
gate rzx_5085470864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.615820605029429) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5085472880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4918294884227743) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5085471776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.9826767117592972) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2578837442447042) _gate_q_1;
  ry(-0.2578837442447042) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.9826767117592972) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  ryy_5070804688(2.157688715475041) _gate_q_11, _gate_q_2;
  ch _gate_q_18, _gate_q_1;
  rxx_5070801472(1.784013880645181) _gate_q_6, _gate_q_16;
  cp(3.86882722235782) _gate_q_8, _gate_q_0;
  tdg _gate_q_9;
  rzx_5070799216(2.9942009477075286) _gate_q_14, _gate_q_15;
  cx _gate_q_13, _gate_q_5;
  u2(3.089070741319698, 4.4261359418442074) _gate_q_4;
  tdg _gate_q_10;
  cx _gate_q_7, _gate_q_17;
  cz _gate_q_12, _gate_q_3;
  cry(3.277311392951483) _gate_q_6, _gate_q_10;
  x _gate_q_16;
  xx_plus_yy_5072321328(1.3151989921360414, 5.058122477450951) _gate_q_14, _gate_q_1;
  ryy_5072317872(3.992818140752234) _gate_q_15, _gate_q_4;
  xx_minus_yy_5072310192(0.8329957145733317, 1.7881789713666534) _gate_q_3, _gate_q_7;
  U(5.192584969110414, 5.479297248250091, 2.8429298407503976) _gate_q_18;
  z _gate_q_8;
  rzx_5072321952(3.872202821168004) _gate_q_2, _gate_q_9;
  rxx_5072317968(2.8891448138238047) _gate_q_0, _gate_q_12;
  rz(2.695290127999619) _gate_q_11;
  sxdg _gate_q_17;
  s _gate_q_5;
  p(0.9181290986656262) _gate_q_13;
  rxx_5072315424(3.322853338983726) _gate_q_14, _gate_q_16;
  rxx_5072312208(2.9565085857771627) _gate_q_2, _gate_q_15;
  tdg _gate_q_9;
  cy _gate_q_10, _gate_q_0;
  cy _gate_q_1, _gate_q_5;
  U(5.784117147990729, 2.6275926911199785, 0.6040849461745995) _gate_q_4;
  cs _gate_q_11, _gate_q_18;
  swap _gate_q_6, _gate_q_8;
  z _gate_q_7;
  y _gate_q_12;
  csx _gate_q_13, _gate_q_3;
  x _gate_q_17;
  y _gate_q_17;
  u3(2.5006046626943608, 1.9589841507561705, 5.88605529628883) _gate_q_13;
  x _gate_q_4;
  cp(5.586232921222702) _gate_q_5, _gate_q_8;
  r_5072307744(5.59810582320452, 3.413057656852853) _gate_q_7;
  u2(4.007122598675362, 1.0961453243090618) _gate_q_10;
  cy _gate_q_9, _gate_q_16;
  id _gate_q_3;
  cz _gate_q_1, _gate_q_15;
  cry(0.65057466077425) _gate_q_14, _gate_q_11;
  h _gate_q_0;
  cp(2.4359886962753867) _gate_q_18, _gate_q_2;
  rx(1.209110404032582) _gate_q_6;
  s _gate_q_12;
  cs _gate_q_14, _gate_q_3;
  crz(4.221363315496876) _gate_q_8, _gate_q_17;
  h _gate_q_16;
  xx_plus_yy_5070430880(4.103309222410729, 0.03066199342466871) _gate_q_6, _gate_q_2;
  U(5.632944573806565, 3.0284384596905287, 5.424329118556446) _gate_q_10;
  cx _gate_q_15, _gate_q_4;
  csdg _gate_q_0, _gate_q_11;
  cu1_5085471056(1.1187090942646232) _gate_q_18, _gate_q_9;
  sx _gate_q_1;
  z _gate_q_7;
  rzx_5085469712(1.8022366731533639) _gate_q_13, _gate_q_5;
  u1(4.380610272291714) _gate_q_12;
  cp(1.0348934933687972) _gate_q_13, _gate_q_3;
  dcx _gate_q_10, _gate_q_14;
  csdg _gate_q_0, _gate_q_9;
  xx_plus_yy_5085469856(2.849436775775212, 1.671635147854372) _gate_q_15, _gate_q_4;
  cry(0.4713795008157512) _gate_q_2, _gate_q_7;
  cry(3.820067062904285) _gate_q_18, _gate_q_12;
  rx(2.4328303095339723) _gate_q_5;
  r_5085470240(0.873072873527845, 1.9592926787751213) _gate_q_17;
  cy _gate_q_1, _gate_q_16;
  cs _gate_q_8, _gate_q_6;
  x _gate_q_11;
  rx(2.2417362696669363) _gate_q_5;
  crx(2.6570037990840714) _gate_q_1, _gate_q_7;
  u3(4.971735690199959, 5.157481014753634, 4.387163589210015) _gate_q_4;
  ch _gate_q_16, _gate_q_2;
  r_5085470528(3.899628784620601, 1.9239318481185228) _gate_q_15;
  t _gate_q_3;
  csdg _gate_q_17, _gate_q_6;
  ryy_5085470096(5.274288175866728) _gate_q_9, _gate_q_13;
  u1(3.7182467552059895) _gate_q_11;
  cu(5.723792410815361, 0.8287530957783618, 2.4490231411147763, 3.6566797792992576) _gate_q_12, _gate_q_18;
  cu(5.416259652996983, 3.3326855680470957, 5.493601607583156, 5.756128431954248) _gate_q_10, _gate_q_8;
  dcx _gate_q_14, _gate_q_0;
  sdg _gate_q_17;
  s _gate_q_6;
  ch _gate_q_3, _gate_q_11;
  cs _gate_q_16, _gate_q_14;
  cz _gate_q_10, _gate_q_8;
  r_5085470768(6.0824116129932095, 4.762247314744885) _gate_q_18;
  rzz_5085471344(4.398691023762725) _gate_q_0, _gate_q_7;
  csdg _gate_q_12, _gate_q_2;
  rz(5.8886273353461105) _gate_q_4;
  cu3_5085469664(0.4812014818399264, 1.6349255501035087, 2.406724252144131) _gate_q_9, _gate_q_13;
  xx_plus_yy_5085470480(1.6984163155714214, 4.710864292203225) _gate_q_1, _gate_q_15;
  s _gate_q_5;
  u2(5.65821340920455, 3.5173517091909745) _gate_q_11;
  rz(0.8926667960956058) _gate_q_16;
  y _gate_q_14;
  u1(2.8988977645735976) _gate_q_6;
  tdg _gate_q_17;
  tdg _gate_q_5;
  rz(4.112174739351829) _gate_q_3;
  csx _gate_q_13, _gate_q_7;
  cy _gate_q_12, _gate_q_4;
  cs _gate_q_1, _gate_q_0;
  xx_plus_yy_5085471392(5.649670822566485, 1.8683196354143883) _gate_q_18, _gate_q_8;
  h _gate_q_9;
  U(0.5927912937767991, 0.19027593259914516, 2.4724563340258716) _gate_q_2;
  cp(0.047203801653441756) _gate_q_15, _gate_q_10;
  rzx_5085470864(4.615820605029429) _gate_q_1, _gate_q_15;
  rzx_5085472880(1.4918294884227743) _gate_q_17, _gate_q_6;
  xx_plus_yy_5085471776(0.5157674884894085, 0.9826767117592972) _gate_q_11, _gate_q_7;
  ch _gate_q_10, _gate_q_12;
  dcx _gate_q_5, _gate_q_9;
  swap _gate_q_4, _gate_q_3;
  cz _gate_q_13, _gate_q_0;
  y _gate_q_14;
  sxdg _gate_q_8;
  u3(1.065796825368298, 4.35381251343127, 5.098480640308358) _gate_q_16;
  p(0.6361116356600568) _gate_q_2;
  ry(1.0707352360009992) _gate_q_18;
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
gate xx_minus_yy_5085475520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.80304498132492) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4324326062904797) _gate_q_0;
  ry(-1.4324326062904797) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.80304498132492) _gate_q_1;
}
gate rzx_5085476384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.419707599407556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5085476000(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8840041402110956) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5085476480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.065338976584745) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5085476048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.142498900168075) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.777954466186636) _gate_q_1;
  ry(-2.777954466186636) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.142498900168075) _gate_q_0;
}
gate rzx_5085474224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.2152776011730735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5085476096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.91153872451254, -0.8312299519559524, 0.8312299519559524) _gate_q_0;
}
gate xx_plus_yy_5085476576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.836210628115573) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.13648275383776776) _gate_q_1;
  ry(-0.13648275383776776) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.836210628115573) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5085476768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.856819031370171) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5085478592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.153974009154788) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9349543395373625) _gate_q_0;
  ry(-2.9349543395373625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.153974009154788) _gate_q_1;
}
gate ryy_5085478208(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.718614557729108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5085478880(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.842266785821757) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5085477056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7491297565891009, 3.9041068353904143, -3.9041068353904143) _gate_q_0;
}
gate r_5085478304(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.858134964811864, 3.2296958624313454, -3.2296958624313454) _gate_q_0;
}
gate xx_minus_yy_5085478112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.2880352065626886) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3636764073527377) _gate_q_0;
  ry(-2.3636764073527377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.2880352065626886) _gate_q_1;
}
gate r_5085477920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.868594307033128, 1.4117488681033636, -1.4117488681033636) _gate_q_0;
}
gate cu3_5085473024(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7571418483151575) _gate_q_0;
  u1(0.9785151386226916) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.481622727251771, 0, -3.7571418483151575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.481622727251771, 2.778626709692466, 0) _gate_q_1;
}
gate cu3_5072118576(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.316935253520922) _gate_q_0;
  u1(-0.575316850134981) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7313674241518082, 0, -5.316935253520922) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7313674241518082, 5.892252103655903, 0) _gate_q_1;
}
gate ryy_5072115744(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.007025682446432) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072119008(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.515224812422388) _gate_q_0;
  u1(-0.8325268651055435) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.922175230829957, 0, -3.515224812422388) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.922175230829957, 4.347751677527931, 0) _gate_q_1;
}
gate cu3_5085102256(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.5451844100606844) _gate_q_0;
  u1(-1.472689084685212) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8562883585985472, 0, -1.5451844100606844) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8562883585985472, 3.0178734947458965, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  ecr _gate_q_17, _gate_q_12;
  t _gate_q_4;
  t _gate_q_15;
  id _gate_q_14;
  rx(3.5675778762315815) _gate_q_1;
  xx_minus_yy_5085475520(2.8648652125809595, 2.80304498132492) _gate_q_8, _gate_q_18;
  ry(3.7115991535040327) _gate_q_9;
  ch _gate_q_3, _gate_q_6;
  cry(2.2924743582117246) _gate_q_10, _gate_q_2;
  u1(5.083258206860417) _gate_q_0;
  cy _gate_q_13, _gate_q_7;
  cx _gate_q_11, _gate_q_5;
  s _gate_q_16;
  u3(4.31895631497576, 3.4506234349479756, 0.35875297126803335) _gate_q_6;
  ry(0.7498325242447358) _gate_q_2;
  sx _gate_q_4;
  rz(4.965848637556606) _gate_q_12;
  dcx _gate_q_5, _gate_q_13;
  U(4.535076135542466, 4.059236179435336, 4.174461055124114) _gate_q_7;
  z _gate_q_10;
  cry(0.8035860267725571) _gate_q_17, _gate_q_16;
  cy _gate_q_18, _gate_q_3;
  rzx_5085476384(2.419707599407556) _gate_q_11, _gate_q_14;
  U(5.4949180955074315, 3.599598024964875, 2.3806848830145686) _gate_q_8;
  rzz_5085476000(3.8840041402110956) _gate_q_0, _gate_q_9;
  id _gate_q_15;
  h _gate_q_1;
  ecr _gate_q_12, _gate_q_1;
  rzz_5085476480(6.065338976584745) _gate_q_8, _gate_q_9;
  ecr _gate_q_6, _gate_q_15;
  xx_plus_yy_5085476048(5.555908932373272, 6.142498900168075) _gate_q_7, _gate_q_14;
  sxdg _gate_q_17;
  cp(5.758836667498134) _gate_q_18, _gate_q_16;
  csdg _gate_q_10, _gate_q_3;
  u3(4.8086435513130485, 4.846785593982667, 5.510991506575485) _gate_q_4;
  cp(0.38894507330693795) _gate_q_11, _gate_q_0;
  cy _gate_q_2, _gate_q_5;
  sdg _gate_q_13;
  rzx_5085474224(6.2152776011730735) _gate_q_4, _gate_q_6;
  u3(3.730071274507621, 0.49014516807041214, 2.271746495491868) _gate_q_9;
  cry(3.3729742797981817) _gate_q_14, _gate_q_2;
  r_5085476096(2.91153872451254, 0.7395663748389442) _gate_q_15;
  xx_plus_yy_5085476576(0.2729655076755355, 4.836210628115573) _gate_q_17, _gate_q_13;
  u2(3.2448347987164303, 2.9930326482009195) _gate_q_1;
  sdg _gate_q_3;
  z _gate_q_7;
  sx _gate_q_12;
  rz(2.026633769225064) _gate_q_0;
  u2(0.34508704040672117, 0.44937295601391347) _gate_q_10;
  csx _gate_q_16, _gate_q_11;
  U(5.1248057963711116, 1.3172741223485163, 0.8685505533144882) _gate_q_8;
  cy _gate_q_5, _gate_q_18;
  cx _gate_q_8, _gate_q_4;
  cry(0.6261372033649104) _gate_q_16, _gate_q_2;
  crx(5.140948919899861) _gate_q_12, _gate_q_17;
  cu(4.967855251919541, 0.569711215108552, 3.1402797427353115, 3.5362682328865502) _gate_q_14, _gate_q_0;
  crx(5.542281302195819) _gate_q_7, _gate_q_10;
  ry(1.2081867233346402) _gate_q_3;
  u2(0.6913972069326645, 5.8467579154527325) _gate_q_15;
  cp(3.4461790223959072) _gate_q_13, _gate_q_5;
  iswap _gate_q_6, _gate_q_18;
  crx(0.586288613578728) _gate_q_11, _gate_q_1;
  ry(1.289464040124678) _gate_q_9;
  rzx_5085476768(3.856819031370171) _gate_q_4, _gate_q_2;
  cu(4.748974010120912, 0.16359195762057338, 0.3134818620095609, 0.3132426069846123) _gate_q_3, _gate_q_16;
  csdg _gate_q_12, _gate_q_11;
  rz(2.037455506186611) _gate_q_18;
  u3(4.5596366372631465, 3.0549672801042167, 4.444880053395787) _gate_q_9;
  ecr _gate_q_15, _gate_q_13;
  cp(6.238954558869219) _gate_q_6, _gate_q_17;
  cs _gate_q_14, _gate_q_8;
  sxdg _gate_q_1;
  iswap _gate_q_10, _gate_q_0;
  u3(1.6041971419368721, 0.46871750169827936, 3.153094098789865) _gate_q_7;
  s _gate_q_5;
  x _gate_q_1;
  xx_minus_yy_5085478592(5.869908679074725, 5.153974009154788) _gate_q_4, _gate_q_9;
  csdg _gate_q_5, _gate_q_10;
  ryy_5085478208(4.718614557729108) _gate_q_2, _gate_q_12;
  rz(3.2903929072878118) _gate_q_3;
  crx(4.256703308685515) _gate_q_0, _gate_q_8;
  ryy_5085478880(2.842266785821757) _gate_q_6, _gate_q_15;
  cx _gate_q_17, _gate_q_14;
  r_5085477056(0.7491297565891009, 5.474903162185311) _gate_q_11;
  cz _gate_q_13, _gate_q_16;
  sx _gate_q_18;
  u1(3.391336037101695) _gate_q_7;
  U(1.423448632429861, 3.9685840118651106, 1.2419290753132122) _gate_q_9;
  cp(1.8966652157860753) _gate_q_13, _gate_q_17;
  u1(1.836465669197422) _gate_q_5;
  x _gate_q_0;
  crz(5.371106233146953) _gate_q_7, _gate_q_2;
  id _gate_q_12;
  cy _gate_q_11, _gate_q_4;
  r_5085478304(2.858134964811864, 4.800492189226242) _gate_q_16;
  xx_minus_yy_5085478112(4.727352814705475, 5.2880352065626886) _gate_q_14, _gate_q_10;
  r_5085477920(5.868594307033128, 2.98254519489826) _gate_q_15;
  h _gate_q_8;
  sx _gate_q_6;
  u1(5.679716149257009) _gate_q_1;
  cu3_5085473024(2.963245454503542, 2.778626709692466, 4.735656986937849) _gate_q_18, _gate_q_3;
  cy _gate_q_11, _gate_q_9;
  swap _gate_q_3, _gate_q_7;
  sxdg _gate_q_10;
  dcx _gate_q_15, _gate_q_17;
  ry(4.231879710056283) _gate_q_0;
  cu3_5072118576(1.4627348483036164, 5.892252103655903, 4.7416184033859405) _gate_q_5, _gate_q_12;
  ryy_5072115744(1.007025682446432) _gate_q_6, _gate_q_18;
  z _gate_q_2;
  y _gate_q_13;
  cu3_5072119008(5.844350461659914, 4.347751677527931, 2.682697947316844) _gate_q_1, _gate_q_16;
  rz(3.867854500885401) _gate_q_4;
  u1(5.079778728068002) _gate_q_8;
  sxdg _gate_q_14;
  u2(5.2278976871428, 5.774323105066523) _gate_q_14;
  cu(3.8107043057342453, 4.735884642268259, 2.46935698298998, 1.0656567575115168) _gate_q_10, _gate_q_18;
  cu3_5085102256(1.7125767171970945, 3.0178734947458965, 0.07249532537547237) _gate_q_5, _gate_q_4;
  u1(2.0392497897156123) _gate_q_17;
  s _gate_q_9;
  swap _gate_q_6, _gate_q_12;
  rz(2.296924512547284) _gate_q_1;
  cs _gate_q_3, _gate_q_16;
  sdg _gate_q_11;
  crx(4.184731197894136) _gate_q_0, _gate_q_2;
  id _gate_q_8;
  sx _gate_q_13;
  cz _gate_q_15, _gate_q_7;
}