gate r_5072962720(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.126886998965341, -0.8934175390296587, 0.8934175390296587) _gate_q_0;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5072965984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5003489897885083, -1.1870290710483413, 1.1870290710483413) _gate_q_0;
}
gate cu3_5072967136(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.418278024728175) _gate_q_0;
  u1(0.31592095167890033) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.231823321797229, 0, -2.418278024728175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.231823321797229, 2.1023570730492747, 0) _gate_q_1;
}
gate r_5072975584(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5509498320971686, -0.05435922420325423, 0.05435922420325423) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072967808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.455413128013501) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5954887073378727) _gate_q_0;
  ry(-2.5954887073378727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.455413128013501) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5072974528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0377374788670215) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0377374788670215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0377374788670215) _gate_q_1;
}
gate rzz_5072970496(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.360974402912282) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate xx_minus_yy_5072967040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.453877034679064) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.540525238333419) _gate_q_0;
  ry(-1.540525238333419) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.453877034679064) _gate_q_1;
}
gate cu1_5072968768(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6901888039060936) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6901888039060936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6901888039060936) _gate_q_1;
}
gate r_5072198384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.22643088371087, 1.0936174496125113, -1.0936174496125113) _gate_q_0;
}
gate cu1_5072203616(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0737701311856032) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0737701311856032) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0737701311856032) _gate_q_1;
}
gate r_5072202368(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.4400347052670956, 4.193917080147149, -4.193917080147149) _gate_q_0;
}
gate ryy_5072191952(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9788236052726322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072202848(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.083833353273047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5072207120(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8228848905916815) _gate_q_0;
  u1(-0.37821197547033203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9193911012732169, 0, -1.8228848905916815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9193911012732169, 2.2010968660620134, 0) _gate_q_1;
}
gate r_5072199008(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.494610244805146, 1.5888223870753242, -1.5888223870753242) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5072203280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.841736950418305) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3052054121640917) _gate_q_1;
  ry(-1.3052054121640917) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.841736950418305) _gate_q_0;
}
gate rzz_5072192336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.270254609893492) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5072196800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.6013741728034745) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072191712(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.4223307052226696, -0.05818866148973845, 0.05818866148973845) _gate_q_0;
}
gate xx_minus_yy_5072192912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.241195472385832) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.1152134839583927) _gate_q_0;
  ry(-3.1152134839583927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.241195472385832) _gate_q_1;
}
gate ryy_5072204960(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.07742464435402688) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  x _gate_q_1;
  u1(4.332697974053732) _gate_q_3;
  p(4.600181159326895) _gate_q_12;
  ch _gate_q_15, _gate_q_7;
  z _gate_q_4;
  r_5072962720(4.126886998965341, 0.6773787877652379) _gate_q_5;
  ecr _gate_q_8, _gate_q_16;
  u2(5.665466576089515, 3.785963903221795) _gate_q_18;
  cu(2.6184351709255256, 3.760272083241868, 3.4501361932463097, 5.0027725653709) _gate_q_14, _gate_q_13;
  cp(5.183604357956241) _gate_q_9, _gate_q_0;
  cs _gate_q_10, _gate_q_2;
  cy _gate_q_6, _gate_q_11;
  s _gate_q_17;
  sdg _gate_q_17;
  u3(5.301629468363606, 3.912111489232585, 1.1200008756160862) _gate_q_3;
  ry(5.103763548593397) _gate_q_8;
  r_5072965984(3.5003489897885083, 0.3837672557465551) _gate_q_2;
  rz(5.259678149263809) _gate_q_13;
  cu3_5072967136(2.463646643594458, 2.1023570730492747, 2.7341989764070753) _gate_q_10, _gate_q_11;
  y _gate_q_4;
  r_5072975584(1.5509498320971686, 1.5164371025916423) _gate_q_1;
  sx _gate_q_18;
  u2(4.347034035606195, 3.330207590370119) _gate_q_0;
  U(0.438785316355954, 0.6458359021158242, 4.6854164213073535) _gate_q_15;
  sdg _gate_q_9;
  cp(4.130458820814491) _gate_q_5, _gate_q_7;
  cx _gate_q_16, _gate_q_6;
  xx_minus_yy_5072967808(5.1909774146757455, 3.455413128013501) _gate_q_14, _gate_q_12;
  csdg _gate_q_7, _gate_q_5;
  cu1_5072974528(4.075474957734043) _gate_q_4, _gate_q_1;
  U(4.63976090186791, 4.24353139209142, 2.3586410237872073) _gate_q_16;
  sdg _gate_q_10;
  rz(0.8124845094694492) _gate_q_12;
  ch _gate_q_18, _gate_q_6;
  rzz_5072970496(4.360974402912282) _gate_q_15, _gate_q_8;
  x _gate_q_11;
  csx _gate_q_0, _gate_q_14;
  sxdg _gate_q_17;
  csdg _gate_q_9, _gate_q_2;
  xx_minus_yy_5072967040(3.081050476666838, 5.453877034679064) _gate_q_3, _gate_q_13;
  cry(0.8408627401651145) _gate_q_17, _gate_q_8;
  cu1_5072968768(1.3803776078121872) _gate_q_10, _gate_q_0;
  cz _gate_q_11, _gate_q_16;
  sxdg _gate_q_15;
  r_5072198384(3.22643088371087, 2.664413776407408) _gate_q_4;
  s _gate_q_18;
  swap _gate_q_5, _gate_q_2;
  u1(1.4880308725984133) _gate_q_13;
  u3(3.082633764765412, 3.2923580516023248, 3.991815377717168) _gate_q_7;
  sdg _gate_q_14;
  cs _gate_q_3, _gate_q_1;
  cu1_5072203616(2.1475402623712063) _gate_q_9, _gate_q_12;
  sxdg _gate_q_6;
  cz _gate_q_6, _gate_q_8;
  s _gate_q_4;
  ch _gate_q_18, _gate_q_9;
  r_5072202368(3.4400347052670956, 5.764713406942046) _gate_q_1;
  cy _gate_q_2, _gate_q_12;
  ry(1.5210969928451281) _gate_q_15;
  u3(3.457635954076336, 2.8817519673307452, 3.641848237261698) _gate_q_17;
  ryy_5072191952(3.9788236052726322) _gate_q_0, _gate_q_16;
  u3(1.235018164976555, 0.2074007487933297, 4.912152276379968) _gate_q_13;
  crx(1.4324612740256413) _gate_q_14, _gate_q_5;
  ryy_5072202848(3.083833353273047) _gate_q_3, _gate_q_7;
  crx(0.6875703107366803) _gate_q_11, _gate_q_10;
  u1(3.7262360779227834) _gate_q_13;
  sxdg _gate_q_16;
  z _gate_q_7;
  dcx _gate_q_17, _gate_q_12;
  dcx _gate_q_11, _gate_q_3;
  swap _gate_q_8, _gate_q_14;
  U(0.5312702037457591, 6.159680352075192, 6.077887557066067) _gate_q_1;
  z _gate_q_6;
  ry(2.0586371669890404) _gate_q_2;
  cu3_5072207120(1.8387822025464338, 2.2010968660620134, 1.4446729151213493) _gate_q_0, _gate_q_10;
  rx(5.281849023280291) _gate_q_15;
  csx _gate_q_5, _gate_q_18;
  r_5072199008(5.494610244805146, 3.1596187138702208) _gate_q_4;
  sx _gate_q_9;
  tdg _gate_q_5;
  u3(3.674126620633145, 1.5128916232098348, 3.7377053459987537) _gate_q_12;
  u3(1.2268612750391905, 2.618128425262298, 5.780139938182366) _gate_q_17;
  ry(4.8184389563570145) _gate_q_6;
  csdg _gate_q_8, _gate_q_2;
  id _gate_q_18;
  s _gate_q_16;
  cx _gate_q_1, _gate_q_11;
  iswap _gate_q_7, _gate_q_15;
  cu(3.7142715944703486, 2.0772615060577535, 5.264045661795428, 3.61139170033856) _gate_q_3, _gate_q_4;
  cx _gate_q_9, _gate_q_10;
  csdg _gate_q_13, _gate_q_14;
  rx(4.909093497525842) _gate_q_0;
  s _gate_q_11;
  U(3.9900400795786917, 2.0472290411884866, 2.9890458951076626) _gate_q_3;
  xx_plus_yy_5072203280(2.6104108243281834, 5.841736950418305) _gate_q_18, _gate_q_15;
  cp(2.40269655137561) _gate_q_13, _gate_q_2;
  p(0.024362793177408023) _gate_q_5;
  U(5.45270861765693, 2.0183080624111507, 6.138908645034316) _gate_q_16;
  h _gate_q_14;
  cry(3.0250415367325645) _gate_q_6, _gate_q_8;
  dcx _gate_q_1, _gate_q_9;
  cs _gate_q_0, _gate_q_4;
  sx _gate_q_10;
  x _gate_q_12;
  rzz_5072192336(3.270254609893492) _gate_q_7, _gate_q_17;
  rzz_5072196800(5.6013741728034745) _gate_q_5, _gate_q_9;
  id _gate_q_16;
  cp(1.3992773874083295) _gate_q_8, _gate_q_18;
  p(3.505535925406815) _gate_q_14;
  cz _gate_q_7, _gate_q_10;
  r_5072191712(0.4223307052226696, 1.5126076653051581) _gate_q_1;
  xx_minus_yy_5072192912(6.230426967916785, 6.241195472385832) _gate_q_2, _gate_q_6;
  cs _gate_q_17, _gate_q_4;
  cp(1.701803580678081) _gate_q_12, _gate_q_0;
  sxdg _gate_q_15;
  u1(2.226815920767703) _gate_q_13;
  sdg _gate_q_11;
  sx _gate_q_3;
  csdg _gate_q_10, _gate_q_16;
  csdg _gate_q_11, _gate_q_6;
  cs _gate_q_4, _gate_q_5;
  cz _gate_q_2, _gate_q_0;
  y _gate_q_15;
  u1(1.1784478873343982) _gate_q_8;
  ryy_5072204960(0.07742464435402688) _gate_q_14, _gate_q_3;
  cx _gate_q_18, _gate_q_1;
  cry(4.20013785218423) _gate_q_17, _gate_q_13;
  sx _gate_q_7;
  crx(4.540919231444431) _gate_q_9, _gate_q_12;
}
gate cu1_5072196656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6288697467248319) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6288697467248319) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6288697467248319) _gate_q_1;
}
gate cu3_5072207696(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.878497140214713) _gate_q_0;
  u1(-1.7999556423412377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1649538562256487, 0, -3.878497140214713) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1649538562256487, 5.678452782555951, 0) _gate_q_1;
}
gate ryy_5072195216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9266127160175919) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072191616(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.216197061537542) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072195600(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.16969642290016496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5072202656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.033619473507197) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7975893610002358) _gate_q_1;
  ry(-1.7975893610002358) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.033619473507197) _gate_q_0;
}
gate rzz_5072192432(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.961803166318901) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072195840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.764368205833655, -0.8961818159025282, 0.8961818159025282) _gate_q_0;
}
gate rzx_5072199440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.979584073015658) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072199872(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.213517673731026, 1.243303628705676, -1.243303628705676) _gate_q_0;
}
gate cu1_5072201840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.137594870412244) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.137594870412244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.137594870412244) _gate_q_1;
}
gate xx_minus_yy_5072207600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.286718440594988) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.492347101686824) _gate_q_0;
  ry(-2.492347101686824) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.286718440594988) _gate_q_1;
}
gate ryy_5072192384(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.858301119909706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072193680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0700387683008352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072194496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.858403830676759, 2.989821474576668, -2.989821474576668) _gate_q_0;
}
gate xx_plus_yy_5072207024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.28721560744069435) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0224253791943039) _gate_q_1;
  ry(-1.0224253791943039) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.28721560744069435) _gate_q_0;
}
gate xx_plus_yy_5072207504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.47470924276221493) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.901060931158404) _gate_q_1;
  ry(-2.901060931158404) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.47470924276221493) _gate_q_0;
}
gate rxx_5072201312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.553276494325906) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072199824(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.17695691135453578) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072194352(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5056365079612584) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5056365079612584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5056365079612584) _gate_q_1;
}
gate rzz_5072192288(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.7851512812358656) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072198768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7786353852473028) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072204432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.37899278549815) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.038542326800386) _gate_q_0;
  ry(-3.038542326800386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.37899278549815) _gate_q_1;
}
gate rzx_5072192528(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2576545492973175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072203328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.4818277168307326) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072204912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.1424807075055345) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.40498983733352933) _gate_q_0;
  ry(-0.40498983733352933) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.1424807075055345) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  sx _gate_q_3;
  cu1_5072196656(3.2577394934496637) _gate_q_13, _gate_q_17;
  cry(5.751301426834194) _gate_q_2, _gate_q_0;
  z _gate_q_16;
  cu3_5072207696(2.3299077124512975, 5.678452782555951, 2.0785414978734753) _gate_q_7, _gate_q_12;
  ryy_5072195216(1.9266127160175919) _gate_q_1, _gate_q_9;
  rzz_5072191616(6.216197061537542) _gate_q_11, _gate_q_5;
  tdg _gate_q_8;
  crx(4.589093765573165) _gate_q_14, _gate_q_18;
  cz _gate_q_15, _gate_q_6;
  iswap _gate_q_4, _gate_q_10;
  ryy_5072195600(0.16969642290016496) _gate_q_15, _gate_q_5;
  cs _gate_q_2, _gate_q_16;
  h _gate_q_7;
  p(3.438770079433669) _gate_q_0;
  ecr _gate_q_8, _gate_q_14;
  dcx _gate_q_6, _gate_q_11;
  t _gate_q_18;
  dcx _gate_q_1, _gate_q_12;
  cry(0.7194275572004684) _gate_q_3, _gate_q_9;
  ecr _gate_q_13, _gate_q_4;
  xx_plus_yy_5072202656(3.5951787220004716, 4.033619473507197) _gate_q_10, _gate_q_17;
  u3(2.485653608705089, 4.488978240770608, 5.749636467213053) _gate_q_0;
  rzz_5072192432(5.961803166318901) _gate_q_6, _gate_q_2;
  ecr _gate_q_1, _gate_q_16;
  cy _gate_q_15, _gate_q_7;
  r_5072195840(5.764368205833655, 0.6746145108923683) _gate_q_4;
  cp(1.0541025549852612) _gate_q_9, _gate_q_17;
  ry(2.8458579605319696) _gate_q_3;
  x _gate_q_18;
  rzx_5072199440(5.979584073015658) _gate_q_13, _gate_q_10;
  r_5072199872(5.213517673731026, 2.8140999555005726) _gate_q_5;
  t _gate_q_11;
  cu(4.6100830330273235, 2.342916880344615, 1.87052043508316, 0.4237290590135404) _gate_q_14, _gate_q_12;
  y _gate_q_8;
  sdg _gate_q_2;
  p(3.1840575792666614) _gate_q_14;
  cu1_5072201840(4.275189740824488) _gate_q_17, _gate_q_16;
  csdg _gate_q_4, _gate_q_18;
  xx_minus_yy_5072207600(4.984694203373648, 2.286718440594988) _gate_q_15, _gate_q_12;
  ryy_5072192384(0.858301119909706) _gate_q_1, _gate_q_3;
  U(1.1962766821392563, 3.9061729184720777, 1.8982311165503154) _gate_q_8;
  sxdg _gate_q_5;
  p(0.9409944066217577) _gate_q_0;
  tdg _gate_q_11;
  ecr _gate_q_9, _gate_q_6;
  rzx_5072193680(1.0700387683008352) _gate_q_7, _gate_q_13;
  u2(2.0674194170507114, 5.279910974628234) _gate_q_10;
  cz _gate_q_0, _gate_q_6;
  cy _gate_q_2, _gate_q_12;
  p(4.351804240656578) _gate_q_10;
  rz(5.6219840850297755) _gate_q_11;
  r_5072194496(4.858403830676759, 4.560617801371564) _gate_q_14;
  p(0.8841102401520957) _gate_q_4;
  csx _gate_q_16, _gate_q_7;
  h _gate_q_8;
  cu(5.2341830575232695, 2.960484808189828, 0.3129523270905461, 4.0342809565936255) _gate_q_17, _gate_q_5;
  iswap _gate_q_3, _gate_q_18;
  rz(1.0746477521176059) _gate_q_15;
  tdg _gate_q_13;
  xx_plus_yy_5072207024(2.0448507583886077, 0.28721560744069435) _gate_q_9, _gate_q_1;
  id _gate_q_0;
  h _gate_q_1;
  id _gate_q_12;
  iswap _gate_q_13, _gate_q_14;
  xx_plus_yy_5072207504(5.802121862316808, 0.47470924276221493) _gate_q_3, _gate_q_8;
  cry(1.9512522563768384) _gate_q_4, _gate_q_2;
  sdg _gate_q_10;
  x _gate_q_5;
  iswap _gate_q_18, _gate_q_6;
  sx _gate_q_9;
  crz(0.3558365764842267) _gate_q_15, _gate_q_17;
  dcx _gate_q_16, _gate_q_7;
  sxdg _gate_q_11;
  h _gate_q_8;
  ecr _gate_q_2, _gate_q_4;
  rxx_5072201312(5.553276494325906) _gate_q_1, _gate_q_17;
  sdg _gate_q_14;
  rzz_5072199824(0.17695691135453578) _gate_q_9, _gate_q_11;
  cs _gate_q_0, _gate_q_13;
  rz(6.002825303633755) _gate_q_3;
  ry(4.641722602049427) _gate_q_16;
  cs _gate_q_7, _gate_q_12;
  cu1_5072194352(5.011273015922517) _gate_q_6, _gate_q_15;
  cp(5.14516505001631) _gate_q_5, _gate_q_10;
  y _gate_q_18;
  cs _gate_q_13, _gate_q_2;
  ry(1.6188410681531575) _gate_q_1;
  sx _gate_q_14;
  dcx _gate_q_0, _gate_q_11;
  rzz_5072192288(2.7851512812358656) _gate_q_3, _gate_q_12;
  crx(3.7461221905504654) _gate_q_4, _gate_q_5;
  rzx_5072198768(0.7786353852473028) _gate_q_18, _gate_q_7;
  cs _gate_q_6, _gate_q_10;
  csdg _gate_q_9, _gate_q_16;
  xx_minus_yy_5072204432(6.077084653600772, 5.37899278549815) _gate_q_8, _gate_q_15;
  ry(5.473370312987783) _gate_q_17;
  rzx_5072192528(3.2576545492973175) _gate_q_16, _gate_q_6;
  s _gate_q_1;
  u1(2.172928297157588) _gate_q_3;
  h _gate_q_17;
  sxdg _gate_q_2;
  crz(5.565744435341229) _gate_q_10, _gate_q_13;
  t _gate_q_11;
  csdg _gate_q_5, _gate_q_9;
  rz(1.7621384742476482) _gate_q_4;
  tdg _gate_q_8;
  rzx_5072203328(5.4818277168307326) _gate_q_7, _gate_q_18;
  t _gate_q_12;
  t _gate_q_14;
  xx_minus_yy_5072204912(0.8099796746670587, 2.1424807075055345) _gate_q_15, _gate_q_0;
  iswap _gate_q_10, _gate_q_2;
  s _gate_q_14;
  cz _gate_q_18, _gate_q_9;
  dcx _gate_q_0, _gate_q_13;
  sxdg _gate_q_5;
  x _gate_q_17;
  y _gate_q_11;
  ch _gate_q_6, _gate_q_15;
  crz(3.5673511442995056) _gate_q_7, _gate_q_8;
  iswap _gate_q_3, _gate_q_16;
  p(1.338672815477428) _gate_q_4;
  cx _gate_q_1, _gate_q_12;
}