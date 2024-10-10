gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072965120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.9495045536088687) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7700925585583793) _gate_q_1;
  ry(-1.7700925585583793) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.9495045536088687) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5072973088(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8590098399446404) _gate_q_0;
  u1(-1.9389255808805625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4328308960356104, 0, -2.8590098399446404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4328308960356104, 4.797935420825203, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5072972800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0984519542029911) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5254827575549929) _gate_q_0;
  ry(-0.5254827575549929) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0984519542029911) _gate_q_1;
}
gate rzz_5072975536(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.060919052365364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072974864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1087149039951127) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1087149039951127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1087149039951127) _gate_q_1;
}
gate r_5072965840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.496805101444142, -1.1484751476059414, 1.1484751476059414) _gate_q_0;
}
gate rzx_5072968144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.116220468805982) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5072967232(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.075059799965988) _gate_q_0;
  u1(-2.193746081113906) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3391948385135626, 0, -3.075059799965988) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3391948385135626, 5.268805881079894, 0) _gate_q_1;
}
gate xx_plus_yy_5072974144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.053098169177902) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2936969427709673) _gate_q_1;
  ry(-2.2936969427709673) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.053098169177902) _gate_q_0;
}
gate rxx_5072969632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.546811961947166) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072973664(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.196118817848265, -0.08695778028695011, 0.08695778028695011) _gate_q_0;
}
gate xx_plus_yy_5072967952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.577284971295281) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8064259319682843) _gate_q_1;
  ry(-2.8064259319682843) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.577284971295281) _gate_q_0;
}
gate rxx_5072963632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.400134980360815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072965888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.4346041714172406) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7141349110063298) _gate_q_0;
  ry(-0.7141349110063298) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.4346041714172406) _gate_q_1;
}
gate r_5072967712(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.473873018130889, -0.2174751565843538, 0.2174751565843538) _gate_q_0;
}
gate r_5072975824(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9703775524781184, 4.1451762793807, -4.1451762793807) _gate_q_0;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5072966368(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.4245877808087526, 1.869201094047781, -1.869201094047781) _gate_q_0;
}
gate rzx_5072965024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.667585415109447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072971360(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.732470667804255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072968384(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7478234510819552) _gate_q_0;
  u1(-0.7209648780645097) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.105591478704066, 0, -2.7478234510819552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.105591478704066, 3.4687883291464647, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5072974336(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9409445645910678) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9409445645910678) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9409445645910678) _gate_q_1;
}
gate cu1_5072966608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.341385913434789) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.341385913434789) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.341385913434789) _gate_q_1;
}
gate rxx_5072976448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5952236780334784) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072976064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.814061380430136) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7431611032202401) _gate_q_0;
  ry(-0.7431611032202401) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.814061380430136) _gate_q_1;
}
gate xx_minus_yy_5072976160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.0789379297286971) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.1124731196829263) _gate_q_0;
  ry(-3.1124731196829263) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.0789379297286971) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  z _gate_q_15;
  xx_plus_yy_5072965120(3.5401851171167587, 3.9495045536088687) _gate_q_3, _gate_q_14;
  id _gate_q_11;
  sdg _gate_q_6;
  csdg _gate_q_10, _gate_q_16;
  z _gate_q_12;
  ch _gate_q_13, _gate_q_7;
  u1(3.117164962222609) _gate_q_8;
  cu(1.6782175413466047, 2.640265206057256, 4.171328618331862, 3.490081726579068) _gate_q_9, _gate_q_2;
  cu3_5072973088(0.8656617920712208, 4.797935420825203, 0.9200842590640778) _gate_q_1, _gate_q_5;
  crx(1.9227007277046375) _gate_q_4, _gate_q_0;
  csdg _gate_q_2, _gate_q_1;
  iswap _gate_q_15, _gate_q_6;
  cz _gate_q_16, _gate_q_7;
  xx_minus_yy_5072972800(1.0509655151099857, 1.0984519542029911) _gate_q_5, _gate_q_4;
  rzz_5072975536(2.060919052365364) _gate_q_8, _gate_q_0;
  csdg _gate_q_9, _gate_q_10;
  iswap _gate_q_11, _gate_q_14;
  crz(1.2079951463075473) _gate_q_13, _gate_q_3;
  s _gate_q_12;
  u1(1.12925339689179) _gate_q_15;
  swap _gate_q_12, _gate_q_8;
  p(3.0713142343361706) _gate_q_2;
  crz(5.241616042847509) _gate_q_3, _gate_q_11;
  ry(5.823028114326136) _gate_q_4;
  csdg _gate_q_5, _gate_q_6;
  cp(5.4316027509576275) _gate_q_13, _gate_q_7;
  id _gate_q_9;
  cu1_5072974864(2.2174298079902255) _gate_q_16, _gate_q_14;
  cry(5.258275065652662) _gate_q_1, _gate_q_0;
  x _gate_q_10;
  cu(0.00047419505960668055, 2.5416355895189695, 2.581677819112088, 5.957147953697146) _gate_q_16, _gate_q_9;
  r_5072965840(4.496805101444142, 0.4223211791889552) _gate_q_4;
  sx _gate_q_0;
  rzx_5072968144(5.116220468805982) _gate_q_7, _gate_q_1;
  swap _gate_q_10, _gate_q_14;
  cu(2.010910170392905, 4.126539830223735, 5.840153303404325, 3.9883949137143646) _gate_q_2, _gate_q_12;
  cu3_5072967232(4.678389677027125, 5.268805881079894, 0.8813137188520825) _gate_q_15, _gate_q_5;
  y _gate_q_8;
  u2(5.824520270490509, 2.91751127018465) _gate_q_11;
  cry(3.7397755286335483) _gate_q_13, _gate_q_6;
  t _gate_q_3;
  s _gate_q_10;
  sdg _gate_q_5;
  xx_plus_yy_5072974144(4.5873938855419345, 0.053098169177902) _gate_q_7, _gate_q_8;
  ch _gate_q_1, _gate_q_16;
  rxx_5072969632(4.546811961947166) _gate_q_2, _gate_q_3;
  r_5072973664(5.196118817848265, 1.4838385465079464) _gate_q_13;
  cp(3.880230418397989) _gate_q_12, _gate_q_0;
  xx_plus_yy_5072967952(5.6128518639365685, 5.577284971295281) _gate_q_4, _gate_q_9;
  crz(5.81870201007497) _gate_q_11, _gate_q_6;
  rxx_5072963632(5.400134980360815) _gate_q_15, _gate_q_14;
  xx_minus_yy_5072965888(1.4282698220126595, 3.4346041714172406) _gate_q_9, _gate_q_1;
  u3(1.2669238343241578, 5.8119889409387735, 0.7761165178612116) _gate_q_10;
  z _gate_q_2;
  r_5072967712(2.473873018130889, 1.3533211702105428) _gate_q_14;
  r_5072975824(2.9703775524781184, 5.715972606175597) _gate_q_11;
  swap _gate_q_13, _gate_q_12;
  cy _gate_q_6, _gate_q_5;
  rz(3.428194950975774) _gate_q_8;
  cu(5.955068828215688, 3.189346202344168, 0.1904561881080268, 3.4207101493083263) _gate_q_0, _gate_q_3;
  csx _gate_q_7, _gate_q_15;
  dcx _gate_q_4, _gate_q_16;
  r_5072966368(2.4245877808087526, 3.4399974208426776) _gate_q_16;
  rz(0.2775403337687855) _gate_q_4;
  cu(4.548988840758211, 4.976438457741111, 5.565610820011617, 3.374557423888694) _gate_q_8, _gate_q_9;
  rzx_5072965024(3.667585415109447) _gate_q_6, _gate_q_12;
  swap _gate_q_7, _gate_q_11;
  u3(0.9288996768440574, 5.3473816242654895, 4.980348528689662) _gate_q_0;
  cu(2.1899660371685195, 5.770818221434607, 0.36495284528930083, 5.612768305558067) _gate_q_14, _gate_q_5;
  ryy_5072971360(4.732470667804255) _gate_q_10, _gate_q_2;
  id _gate_q_13;
  sx _gate_q_3;
  csx _gate_q_15, _gate_q_1;
  sxdg _gate_q_12;
  cu3_5072968384(6.211182957408132, 3.4687883291464647, 2.0268585730174453) _gate_q_11, _gate_q_3;
  cs _gate_q_5, _gate_q_13;
  U(2.471214218860112, 2.572551696998721, 1.1464321117720548) _gate_q_14;
  cz _gate_q_15, _gate_q_16;
  s _gate_q_0;
  cu1_5072974336(1.8818891291821356) _gate_q_4, _gate_q_2;
  cry(0.41086356607064745) _gate_q_9, _gate_q_1;
  z _gate_q_6;
  rx(4.837695429300694) _gate_q_10;
  rz(4.381751852289496) _gate_q_7;
  s _gate_q_8;
  crz(5.117248899725159) _gate_q_2, _gate_q_15;
  h _gate_q_3;
  crx(1.1047024125276923) _gate_q_16, _gate_q_9;
  rx(6.132108965824944) _gate_q_1;
  rx(5.100419513426666) _gate_q_7;
  id _gate_q_12;
  ry(1.3129118415084282) _gate_q_6;
  sdg _gate_q_5;
  cu1_5072966608(4.682771826869578) _gate_q_14, _gate_q_8;
  id _gate_q_13;
  iswap _gate_q_0, _gate_q_11;
  x _gate_q_4;
  tdg _gate_q_10;
  x _gate_q_12;
  rx(5.338501689809657) _gate_q_4;
  rxx_5072976448(0.5952236780334784) _gate_q_2, _gate_q_8;
  x _gate_q_9;
  sxdg _gate_q_13;
  u3(5.134048006444143, 1.0822726840166084, 2.6391812123101897) _gate_q_16;
  t _gate_q_5;
  xx_minus_yy_5072976064(1.4863222064404802, 3.814061380430136) _gate_q_15, _gate_q_0;
  u2(5.233036447005243, 5.753846154719084) _gate_q_6;
  z _gate_q_7;
  csx _gate_q_1, _gate_q_14;
  xx_minus_yy_5072976160(6.224946239365853, 0.0789379297286971) _gate_q_10, _gate_q_11;
  u2(2.172427772597911, 4.155957662004923) _gate_q_3;
}
gate cu3_5073832272(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.5974418161812636) _gate_q_0;
  u1(-0.13366197327292983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5893206039265608, 0, -1.5974418161812636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5893206039265608, 1.7311037894541934, 0) _gate_q_1;
}
gate r_5073835392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.5332656822987225, 2.4970112532485365, -2.4970112532485365) _gate_q_0;
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
gate cu1_5073834096(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7741464572545007) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7741464572545007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7741464572545007) _gate_q_1;
}
gate cu3_5073837552(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8827241552555822) _gate_q_0;
  u1(-1.69412923814784) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.358933194087952, 0, -3.8827241552555822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.358933194087952, 5.576853393403423, 0) _gate_q_1;
}
gate xx_minus_yy_5073832464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.514701997680082) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.45762792308453) _gate_q_0;
  ry(-2.45762792308453) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.514701997680082) _gate_q_1;
}
gate cu1_5073831168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5960767512500662) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5960767512500662) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5960767512500662) _gate_q_1;
}
gate cu1_5073838224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.422626800583428) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.422626800583428) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.422626800583428) _gate_q_1;
}
gate cu1_5073836400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.17082791894849114) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.17082791894849114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.17082791894849114) _gate_q_1;
}
gate r_5073843648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8945227114201303, 4.47731906904698, -4.47731906904698) _gate_q_0;
}
gate cu3_5073830640(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.722199085518568) _gate_q_0;
  u1(1.0686992062249892) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2839486887945377, 0, -4.722199085518568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2839486887945377, 3.6534998792935784, 0) _gate_q_1;
}
gate rxx_5073835536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.183050007705017) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5073833424(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.631030570336448) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5073838176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.2123253386977275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5073839088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.8410379364634455, -0.20628935490061884, 0.20628935490061884) _gate_q_0;
}
gate cu3_5073843936(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.2640465096367586) _gate_q_0;
  u1(1.839816558828147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.116328713004576, 0, -2.2640465096367586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.116328713004576, 0.4242299508086115, 0) _gate_q_1;
}
gate xx_plus_yy_5073830736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.5434575086307056) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4907655859519627) _gate_q_1;
  ry(-0.4907655859519627) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.5434575086307056) _gate_q_0;
}
gate ryy_5073843072(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.929931834271503) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5073843888(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.279092551081872) _gate_q_0;
  u1(0.86891292847712) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9407710748052196, 0, -5.279092551081872) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9407710748052196, 4.410179622604752, 0) _gate_q_1;
}
gate cu3_5073844992(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.632379602011306) _gate_q_0;
  u1(-1.438686957464762) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0076347311444471, 0, -2.632379602011306) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0076347311444471, 4.071066559476068, 0) _gate_q_1;
}
gate rxx_5073831216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.193228325647189) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  crz(1.4945420715540996) _gate_q_13, _gate_q_6;
  sx _gate_q_1;
  rx(2.414981014586691) _gate_q_0;
  x _gate_q_3;
  cu3_5073832272(3.1786412078531217, 1.7311037894541934, 1.4637798429083337) _gate_q_7, _gate_q_8;
  cu(5.42736821176715, 2.5370020001778, 0.5903056210338645, 0.22298719676132456) _gate_q_11, _gate_q_9;
  rx(2.175022323489841) _gate_q_12;
  dcx _gate_q_14, _gate_q_15;
  cx _gate_q_5, _gate_q_16;
  cy _gate_q_4, _gate_q_10;
  rx(1.190168860928617) _gate_q_2;
  crx(3.8412540077788235) _gate_q_13, _gate_q_3;
  dcx _gate_q_11, _gate_q_12;
  r_5073835392(4.5332656822987225, 4.067807580043433) _gate_q_1;
  y _gate_q_9;
  dcx _gate_q_5, _gate_q_15;
  ecr _gate_q_8, _gate_q_6;
  sdg _gate_q_2;
  cu1_5073834096(3.5482929145090014) _gate_q_4, _gate_q_7;
  p(5.100007088084824) _gate_q_10;
  sdg _gate_q_0;
  cy _gate_q_14, _gate_q_16;
  cy _gate_q_10, _gate_q_7;
  cu3_5073837552(4.717866388175904, 5.576853393403423, 2.1885949171077423) _gate_q_0, _gate_q_11;
  id _gate_q_5;
  cry(1.205537788115131) _gate_q_1, _gate_q_6;
  xx_minus_yy_5073832464(4.91525584616906, 4.514701997680082) _gate_q_3, _gate_q_14;
  z _gate_q_13;
  cu1_5073831168(3.1921535025001324) _gate_q_9, _gate_q_15;
  dcx _gate_q_12, _gate_q_8;
  id _gate_q_16;
  cs _gate_q_2, _gate_q_4;
  csdg _gate_q_1, _gate_q_4;
  rz(4.966892875809303) _gate_q_3;
  rz(5.118075228395694) _gate_q_9;
  cu1_5073838224(4.845253601166856) _gate_q_10, _gate_q_5;
  s _gate_q_8;
  cu1_5073836400(0.3416558378969823) _gate_q_7, _gate_q_16;
  dcx _gate_q_15, _gate_q_2;
  csdg _gate_q_6, _gate_q_13;
  tdg _gate_q_14;
  sx _gate_q_12;
  csdg _gate_q_11, _gate_q_0;
  cs _gate_q_13, _gate_q_2;
  crz(1.6301767398748956) _gate_q_4, _gate_q_1;
  r_5073843648(0.8945227114201303, 6.048115395841877) _gate_q_10;
  cu3_5073830640(2.5678973775890754, 3.6534998792935784, 5.790898291743557) _gate_q_7, _gate_q_6;
  crx(0.9360366108331339) _gate_q_11, _gate_q_8;
  t _gate_q_3;
  cs _gate_q_14, _gate_q_15;
  tdg _gate_q_12;
  dcx _gate_q_9, _gate_q_5;
  t _gate_q_16;
  t _gate_q_0;
  cz _gate_q_0, _gate_q_13;
  cz _gate_q_2, _gate_q_9;
  csx _gate_q_16, _gate_q_3;
  rx(3.0079808175461284) _gate_q_5;
  rxx_5073835536(5.183050007705017) _gate_q_12, _gate_q_14;
  cx _gate_q_11, _gate_q_7;
  u2(2.0696198426078674, 4.304619923709186) _gate_q_8;
  ry(3.5527557531223226) _gate_q_1;
  csdg _gate_q_15, _gate_q_10;
  x _gate_q_6;
  z _gate_q_4;
  h _gate_q_5;
  crx(4.348622040428526) _gate_q_13, _gate_q_0;
  rz(1.62526492280359) _gate_q_7;
  u2(0.7640272828792289, 2.5225027348284486) _gate_q_15;
  rzz_5073833424(2.631030570336448) _gate_q_12, _gate_q_11;
  rzz_5073838176(6.2123253386977275) _gate_q_3, _gate_q_1;
  y _gate_q_16;
  sxdg _gate_q_2;
  h _gate_q_9;
  y _gate_q_8;
  r_5073839088(5.8410379364634455, 1.3645069718942777) _gate_q_6;
  sx _gate_q_10;
  crz(0.888830331700721) _gate_q_4, _gate_q_14;
  cu(6.027328424803139, 4.977649507683297, 5.089758368263946, 2.9055348490720663) _gate_q_3, _gate_q_12;
  cu3_5073843936(6.232657426009152, 0.4242299508086115, 4.103863068464905) _gate_q_0, _gate_q_2;
  xx_plus_yy_5073830736(0.9815311719039254, 2.5434575086307056) _gate_q_7, _gate_q_5;
  ryy_5073843072(5.929931834271503) _gate_q_8, _gate_q_4;
  cu3_5073843888(3.881542149610439, 4.410179622604752, 6.148005479558992) _gate_q_15, _gate_q_14;
  dcx _gate_q_1, _gate_q_13;
  cry(2.0375267713351155) _gate_q_11, _gate_q_10;
  cry(2.2424266894562774) _gate_q_16, _gate_q_6;
  rx(1.224823438651717) _gate_q_9;
  u2(5.922984367925949, 3.2360285431392524) _gate_q_5;
  id _gate_q_2;
  p(5.422904764419905) _gate_q_8;
  cu3_5073844992(2.0152694622888943, 4.071066559476068, 1.1936926445465441) _gate_q_6, _gate_q_12;
  csx _gate_q_14, _gate_q_11;
  id _gate_q_3;
  cs _gate_q_7, _gate_q_16;
  tdg _gate_q_1;
  crz(4.355775092431533) _gate_q_15, _gate_q_10;
  cry(0.08067759784628341) _gate_q_13, _gate_q_4;
  h _gate_q_0;
  x _gate_q_9;
  cs _gate_q_0, _gate_q_5;
  u1(6.04769264033716) _gate_q_16;
  rxx_5073831216(5.193228325647189) _gate_q_12, _gate_q_14;
  h _gate_q_7;
  sx _gate_q_3;
  rx(0.12504327359675582) _gate_q_13;
  cu(6.274597267477503, 5.366413663498106, 4.7585404378765235, 6.178672343665506) _gate_q_15, _gate_q_4;
  u2(3.817620204222855, 3.8478291630532446) _gate_q_9;
  tdg _gate_q_6;
  cu(5.299104688925462, 6.2539728097816925, 4.799742083167972, 3.12650311466441) _gate_q_10, _gate_q_2;
  s _gate_q_11;
  tdg _gate_q_8;
  u2(3.6006015762226493, 0.5975205915303227) _gate_q_1;
}