gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5108067904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.253801622841688) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.989097413237719) _gate_q_1;
  ry(-0.989097413237719) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.253801622841688) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
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
gate cu1_5108066320(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3609255292342556) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3609255292342556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3609255292342556) _gate_q_1;
}
gate cu1_5116686176(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.791616783815895) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.791616783815895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.791616783815895) _gate_q_1;
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
gate cu3_5116689248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9343174749575818) _gate_q_0;
  u1(0.8327024517192095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.832781644487149, 0, -1.9343174749575818) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.832781644487149, 1.1016150232383721, 0) _gate_q_1;
}
gate rzx_5116687808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8691247915213016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5116686128(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8540591684084218) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5108068096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1543436540281473) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0692385169008403) _gate_q_0;
  ry(-2.0692385169008403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1543436540281473) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5116680272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.226514166806262) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.226873229239698) _gate_q_0;
  ry(-2.226873229239698) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.226514166806262) _gate_q_1;
}
gate cu3_5116686992(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7134889085104144) _gate_q_0;
  u1(-0.9562638289145442) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8678238451008393, 0, -2.7134889085104144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8678238451008393, 3.6697527374249588, 0) _gate_q_1;
}
gate cu1_5116687184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0590829973107754) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0590829973107754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0590829973107754) _gate_q_1;
}
gate r_5104445312(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.2237607115034494, 0.2648114900775336, -0.2648114900775336) _gate_q_0;
}
gate cu3_5104437776(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.046706601785121) _gate_q_0;
  u1(-0.09994263946095938) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9492764446227175, 0, -2.046706601785121) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9492764446227175, 2.1466492412460805, 0) _gate_q_1;
}
gate xx_minus_yy_5104450064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7026659225369833) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5535702299823186) _gate_q_0;
  ry(-2.5535702299823186) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7026659225369833) _gate_q_1;
}
gate cu3_5104445360(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3198545732976577) _gate_q_0;
  u1(1.0030264189717826) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5972360053820545, 0, -3.3198545732976577) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5972360053820545, 2.3168281543258753, 0) _gate_q_1;
}
gate xx_plus_yy_5104438544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6867151088872123) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.1649329664539534) _gate_q_1;
  ry(-0.1649329664539534) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6867151088872123) _gate_q_0;
}
gate xx_minus_yy_5104449344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.497414756198186) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.991591650144201) _gate_q_0;
  ry(-2.991591650144201) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.497414756198186) _gate_q_1;
}
gate cu1_5104438448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7917606387090927) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7917606387090927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7917606387090927) _gate_q_1;
}
gate r_5104440704(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.85784764267319, 1.5305601569538592, -1.5305601569538592) _gate_q_0;
}
gate ryy_5104440368(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.25572522040884077) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5104446752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.5839857034905989) _gate_q_0;
  u1(-0.02369619441737314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2551182978893738, 0, -1.5839857034905989) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2551182978893738, 1.6076818979079721, 0) _gate_q_1;
}
gate rxx_5104449296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.446760958326886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5104446656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.600606809343884) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.23971743145204152) _gate_q_0;
  ry(-0.23971743145204152) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.600606809343884) _gate_q_1;
}
gate ryy_5104448144(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9801630347005899) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5104448096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7075582000178003) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2991310986457258) _gate_q_1;
  ry(-1.2991310986457258) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7075582000178003) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  xx_plus_yy_5108067904(1.978194826475438, 5.253801622841688) _gate_q_12, _gate_q_18;
  rx(4.4600972271511194) _gate_q_5;
  u3(5.133613078794693, 0.8278614452451175, 0.42936060569860784) _gate_q_17;
  dcx _gate_q_11, _gate_q_9;
  h _gate_q_6;
  cx _gate_q_13, _gate_q_14;
  h _gate_q_10;
  dcx _gate_q_0, _gate_q_16;
  cy _gate_q_2, _gate_q_15;
  rz(1.9489781777207775) _gate_q_3;
  h _gate_q_7;
  rx(1.0204919204580047) _gate_q_1;
  dcx _gate_q_4, _gate_q_8;
  cp(4.130941310410142) _gate_q_14, _gate_q_1;
  crz(4.513903515922312) _gate_q_13, _gate_q_0;
  csdg _gate_q_18, _gate_q_4;
  z _gate_q_9;
  cx _gate_q_5, _gate_q_10;
  ry(5.036261169896004) _gate_q_7;
  tdg _gate_q_6;
  swap _gate_q_16, _gate_q_11;
  iswap _gate_q_3, _gate_q_8;
  csx _gate_q_2, _gate_q_17;
  id _gate_q_15;
  u3(2.768884103971427, 3.54968201507975, 4.466991281869792) _gate_q_12;
  sx _gate_q_5;
  cu1_5108066320(0.7218510584685112) _gate_q_16, _gate_q_9;
  sx _gate_q_3;
  crz(1.7101422964777848) _gate_q_8, _gate_q_7;
  sx _gate_q_0;
  rz(1.3504806644226723) _gate_q_13;
  sdg _gate_q_10;
  cz _gate_q_4, _gate_q_17;
  cu1_5116686176(5.58323356763179) _gate_q_2, _gate_q_1;
  ecr _gate_q_6, _gate_q_18;
  h _gate_q_15;
  cu3_5116689248(3.665563288974298, 1.1016150232383721, 2.767019926676791) _gate_q_14, _gate_q_11;
  tdg _gate_q_12;
  t _gate_q_11;
  cy _gate_q_5, _gate_q_18;
  z _gate_q_16;
  swap _gate_q_1, _gate_q_2;
  cu(0.9211060326564289, 1.5399076560366152, 1.5976254538318266, 3.8799250318774785) _gate_q_8, _gate_q_17;
  id _gate_q_0;
  rzx_5116687808(3.8691247915213016) _gate_q_4, _gate_q_10;
  u3(0.437861128127327, 2.1264959357897726, 5.903006464340399) _gate_q_13;
  rzz_5116686128(3.8540591684084218) _gate_q_15, _gate_q_6;
  ecr _gate_q_3, _gate_q_7;
  xx_minus_yy_5108068096(4.1384770338016805, 1.1543436540281473) _gate_q_14, _gate_q_12;
  rx(2.0282081928927007) _gate_q_9;
  cy _gate_q_6, _gate_q_1;
  cx _gate_q_2, _gate_q_15;
  cs _gate_q_9, _gate_q_4;
  xx_minus_yy_5116680272(4.453746458479396, 6.226514166806262) _gate_q_18, _gate_q_5;
  cs _gate_q_12, _gate_q_16;
  x _gate_q_3;
  cs _gate_q_0, _gate_q_10;
  cu3_5116686992(3.7356476902016786, 3.6697527374249588, 1.7572250795958704) _gate_q_11, _gate_q_8;
  p(3.977036178495232) _gate_q_13;
  cry(2.0693285625251456) _gate_q_7, _gate_q_14;
  t _gate_q_17;
  sdg _gate_q_16;
  cu1_5116687184(4.118165994621551) _gate_q_17, _gate_q_1;
  x _gate_q_5;
  p(4.224633073517703) _gate_q_12;
  sdg _gate_q_18;
  rx(4.627111441119174) _gate_q_9;
  iswap _gate_q_10, _gate_q_6;
  sx _gate_q_8;
  r_5104445312(6.2237607115034494, 1.8356078168724301) _gate_q_0;
  cu3_5104437776(5.898552889245435, 2.1466492412460805, 1.9467639623241617) _gate_q_13, _gate_q_2;
  s _gate_q_7;
  U(1.368591990766218, 1.0434600059749337, 3.09464356068634) _gate_q_15;
  cry(2.1546908769509674) _gate_q_3, _gate_q_4;
  x _gate_q_14;
  id _gate_q_11;
  u2(2.6764385884939865, 2.2726031735293133) _gate_q_6;
  xx_minus_yy_5104450064(5.107140459964637, 1.7026659225369833) _gate_q_9, _gate_q_4;
  swap _gate_q_17, _gate_q_13;
  csdg _gate_q_12, _gate_q_2;
  id _gate_q_7;
  cs _gate_q_0, _gate_q_8;
  cu3_5104445360(5.194472010764109, 2.3168281543258753, 4.3228809922694404) _gate_q_1, _gate_q_11;
  xx_plus_yy_5104438544(0.3298659329079068, 1.6867151088872123) _gate_q_10, _gate_q_3;
  xx_minus_yy_5104449344(5.983183300288402, 4.497414756198186) _gate_q_15, _gate_q_18;
  csx _gate_q_16, _gate_q_5;
  h _gate_q_14;
  cu1_5104438448(5.5835212774181855) _gate_q_13, _gate_q_14;
  r_5104440704(0.85784764267319, 3.1013564837487557) _gate_q_12;
  x _gate_q_1;
  rx(2.6986870703501404) _gate_q_11;
  sxdg _gate_q_15;
  tdg _gate_q_9;
  rx(5.3904279027826405) _gate_q_0;
  ryy_5104440368(0.25572522040884077) _gate_q_3, _gate_q_5;
  ry(5.9351472603154125) _gate_q_18;
  cu3_5104446752(2.5102365957787476, 1.6076818979079721, 1.5602895090732258) _gate_q_10, _gate_q_4;
  cp(0.9687069280452059) _gate_q_6, _gate_q_7;
  cp(5.694995448336204) _gate_q_2, _gate_q_16;
  dcx _gate_q_8, _gate_q_17;
  ry(1.9269899492984106) _gate_q_3;
  ch _gate_q_17, _gate_q_10;
  h _gate_q_15;
  u1(5.047398315954936) _gate_q_14;
  crz(3.647884125621866) _gate_q_18, _gate_q_5;
  y _gate_q_1;
  cy _gate_q_12, _gate_q_16;
  rxx_5104449296(4.446760958326886) _gate_q_0, _gate_q_8;
  dcx _gate_q_9, _gate_q_2;
  xx_minus_yy_5104446656(0.47943486290408305, 0.600606809343884) _gate_q_4, _gate_q_11;
  u2(5.976087464305848, 1.4630579048725134) _gate_q_6;
  ryy_5104448144(1.9801630347005899) _gate_q_13, _gate_q_7;
  p(5.686749633150329) _gate_q_17;
  iswap _gate_q_3, _gate_q_14;
  p(1.4498956727995174) _gate_q_8;
  xx_plus_yy_5104448096(2.5982621972914517, 0.7075582000178003) _gate_q_13, _gate_q_6;
  cry(2.9733572695920207) _gate_q_2, _gate_q_0;
  cs _gate_q_15, _gate_q_10;
  cp(3.222019270887018) _gate_q_11, _gate_q_9;
  cy _gate_q_4, _gate_q_16;
  cp(3.4710174392570714) _gate_q_7, _gate_q_5;
  ry(4.801281078404828) _gate_q_12;
  ry(2.4428091910852565) _gate_q_18;
  u2(4.5310490123309375, 5.7240640644374) _gate_q_1;
}
gate xx_plus_yy_5104435856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.059320340488738) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2586619020842195) _gate_q_1;
  ry(-0.2586619020842195) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.059320340488738) _gate_q_0;
}
gate ryy_5104447760(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.723699384966581) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5104450592(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.707506449992112) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5104444208(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.254445072170554) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5104436480(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2558781381299347) _gate_q_0;
  u1(-0.13052249629048318) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.299259829876815, 0, -1.2558781381299347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.299259829876815, 1.3864006344204178, 0) _gate_q_1;
}
gate rzz_5104440224(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2898414210640685) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5104435472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.019119797154886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5104445504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5845288442663723, -1.4585988238310563, 1.4585988238310563) _gate_q_0;
}
gate rxx_5104449440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.360708487741649) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5104437632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9793849079481496) _gate_q_0;
  u1(0.5371199164853717) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2935875847528886, 0, -2.9793849079481496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2935875847528886, 2.442264991462778, 0) _gate_q_1;
}
gate rzz_5104444016(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.832202270653858) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5104446416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.465351228908479) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5104448576(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.650696654526735, -1.5097833441695538, 1.5097833441695538) _gate_q_0;
}
gate r_5104449584(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7078749234899715, -1.0820608714361128, 1.0820608714361128) _gate_q_0;
}
gate cu3_5104450256(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2037275518391475) _gate_q_0;
  u1(1.7080571990799704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0389381034296932, 0, -3.2037275518391475) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0389381034296932, 1.4956703527591773, 0) _gate_q_1;
}
gate rxx_5104446944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.400001629342739) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5104446080(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.591931975302333) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5104447616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.696757928933803) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.038499661089926) _gate_q_1;
  ry(-2.038499661089926) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.696757928933803) _gate_q_0;
}
gate ryy_5104446608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.657555445487206) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5104449200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.053743489414216) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.658662894503006) _gate_q_1;
  ry(-1.658662894503006) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.053743489414216) _gate_q_0;
}
gate xx_minus_yy_5104443104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7309068715500509) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.4875952227885343) _gate_q_0;
  ry(-0.4875952227885343) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7309068715500509) _gate_q_1;
}
gate ryy_5104451024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9217660763204365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5104445552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4273777808875363) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  cy _gate_q_14, _gate_q_4;
  ecr _gate_q_8, _gate_q_11;
  sxdg _gate_q_15;
  csx _gate_q_9, _gate_q_16;
  p(5.443050253667728) _gate_q_5;
  ch _gate_q_3, _gate_q_1;
  xx_plus_yy_5104435856(0.517323804168439, 3.059320340488738) _gate_q_12, _gate_q_17;
  ryy_5104447760(4.723699384966581) _gate_q_7, _gate_q_13;
  rzz_5104450592(0.707506449992112) _gate_q_10, _gate_q_2;
  s _gate_q_18;
  z _gate_q_0;
  s _gate_q_6;
  s _gate_q_1;
  cy _gate_q_7, _gate_q_11;
  ryy_5104444208(6.254445072170554) _gate_q_3, _gate_q_0;
  swap _gate_q_14, _gate_q_8;
  u2(1.029362459497063, 5.63495433072385) _gate_q_17;
  cu3_5104436480(2.59851965975363, 1.3864006344204178, 1.1253556418394515) _gate_q_4, _gate_q_13;
  cry(4.443377104399945) _gate_q_6, _gate_q_9;
  crx(4.012631646748824) _gate_q_12, _gate_q_5;
  t _gate_q_10;
  sxdg _gate_q_2;
  z _gate_q_18;
  rzz_5104440224(1.2898414210640685) _gate_q_16, _gate_q_15;
  rzz_5104435472(6.019119797154886) _gate_q_12, _gate_q_5;
  sdg _gate_q_17;
  s _gate_q_13;
  sx _gate_q_4;
  sdg _gate_q_9;
  r_5104445504(1.5845288442663723, 0.11219750296384028) _gate_q_6;
  swap _gate_q_18, _gate_q_15;
  rxx_5104449440(5.360708487741649) _gate_q_11, _gate_q_0;
  rx(2.643014553946019) _gate_q_2;
  csx _gate_q_16, _gate_q_7;
  cz _gate_q_1, _gate_q_8;
  sx _gate_q_14;
  swap _gate_q_3, _gate_q_10;
  u3(3.626829076806834, 3.040730777963509, 3.4053991719397687) _gate_q_6;
  sxdg _gate_q_14;
  cu3_5104437632(2.587175169505777, 2.442264991462778, 3.5165048244335213) _gate_q_7, _gate_q_18;
  id _gate_q_16;
  s _gate_q_15;
  rzz_5104444016(3.832202270653858) _gate_q_10, _gate_q_13;
  rzz_5104446416(5.465351228908479) _gate_q_5, _gate_q_12;
  r_5104448576(5.650696654526735, 0.061012982625342806) _gate_q_2;
  r_5104449584(2.7078749234899715, 0.4887354553587837) _gate_q_1;
  iswap _gate_q_17, _gate_q_9;
  y _gate_q_4;
  x _gate_q_11;
  cry(0.7670789212537857) _gate_q_0, _gate_q_3;
  u1(4.079990971900883) _gate_q_8;
  cy _gate_q_12, _gate_q_3;
  cry(2.415192093034845) _gate_q_15, _gate_q_1;
  rx(0.3108984182439453) _gate_q_2;
  cu3_5104450256(2.0778762068593863, 1.4956703527591773, 4.911784750919118) _gate_q_0, _gate_q_16;
  cry(5.4389308393946765) _gate_q_9, _gate_q_4;
  rx(3.377959159895685) _gate_q_13;
  cz _gate_q_7, _gate_q_17;
  sdg _gate_q_11;
  y _gate_q_18;
  s _gate_q_8;
  cu(1.4319534516825518, 3.8929461343653946, 1.4172644530178882, 3.6178767170706876) _gate_q_6, _gate_q_14;
  z _gate_q_10;
  t _gate_q_5;
  crz(3.300313449951904) _gate_q_15, _gate_q_3;
  u1(2.2789479202032545) _gate_q_14;
  cry(2.209475192843687) _gate_q_11, _gate_q_10;
  cp(1.7726212170432454) _gate_q_4, _gate_q_2;
  sx _gate_q_12;
  cx _gate_q_18, _gate_q_5;
  s _gate_q_17;
  t _gate_q_13;
  cs _gate_q_16, _gate_q_8;
  swap _gate_q_1, _gate_q_9;
  ch _gate_q_7, _gate_q_6;
  rx(2.682720371544348) _gate_q_0;
  cry(3.4773633713559695) _gate_q_13, _gate_q_3;
  rxx_5104446944(3.400001629342739) _gate_q_11, _gate_q_5;
  u1(4.959842153013804) _gate_q_10;
  cz _gate_q_16, _gate_q_4;
  swap _gate_q_1, _gate_q_15;
  dcx _gate_q_7, _gate_q_9;
  cx _gate_q_2, _gate_q_0;
  crz(4.2531470529745246) _gate_q_17, _gate_q_6;
  u1(3.778141961944851) _gate_q_18;
  dcx _gate_q_14, _gate_q_12;
  u3(1.7913547097403477, 6.109712175572822, 1.394259932913274) _gate_q_8;
  swap _gate_q_13, _gate_q_17;
  cu(3.1849287421841277, 0.7776611257253918, 1.4251923317481854, 4.675329232900378) _gate_q_6, _gate_q_0;
  rzz_5104446080(5.591931975302333) _gate_q_18, _gate_q_4;
  rx(1.0177971943818027) _gate_q_15;
  sx _gate_q_11;
  rx(2.3685933544996534) _gate_q_8;
  xx_plus_yy_5104447616(4.076999322179852, 5.696757928933803) _gate_q_10, _gate_q_12;
  ry(3.9503995739290487) _gate_q_16;
  t _gate_q_14;
  cu(1.9882480689572102, 2.4286327110387598, 4.069402813105764, 3.3209795593004223) _gate_q_7, _gate_q_5;
  U(2.293120939910736, 2.1442003644213843, 1.1309755298354078) _gate_q_2;
  h _gate_q_1;
  ryy_5104446608(0.657555445487206) _gate_q_9, _gate_q_3;
  p(3.8562253933128607) _gate_q_4;
  crx(4.978848483129428) _gate_q_5, _gate_q_3;
  cry(1.1971232334350403) _gate_q_2, _gate_q_8;
  csx _gate_q_18, _gate_q_7;
  id _gate_q_10;
  xx_plus_yy_5104449200(3.317325789006012, 5.053743489414216) _gate_q_17, _gate_q_16;
  xx_minus_yy_5104443104(0.9751904455770686, 1.7309068715500509) _gate_q_6, _gate_q_0;
  csdg _gate_q_14, _gate_q_15;
  h _gate_q_13;
  iswap _gate_q_11, _gate_q_9;
  t _gate_q_12;
  p(2.080405654677268) _gate_q_1;
  u2(4.2791435949115115, 2.310629490018196) _gate_q_2;
  ryy_5104451024(2.9217660763204365) _gate_q_1, _gate_q_6;
  ecr _gate_q_9, _gate_q_10;
  cu(1.814264889461985, 1.4735503105730468, 3.829560944865295, 0.016478190799806017) _gate_q_12, _gate_q_8;
  z _gate_q_15;
  swap _gate_q_4, _gate_q_7;
  cx _gate_q_17, _gate_q_11;
  rxx_5104445552(2.4273777808875363) _gate_q_0, _gate_q_3;
  t _gate_q_14;
  y _gate_q_18;
  cy _gate_q_16, _gate_q_13;
  id _gate_q_5;
}