gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072966416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.917350212158749) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0588674200333323) _gate_q_0;
  ry(-2.0588674200333323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.917350212158749) _gate_q_1;
}
gate r_5073918656(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8743702595046976, 3.1157262045900422, -3.1157262045900422) _gate_q_0;
}
gate ryy_5073918512(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2176281731567546) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5073918560(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.176174966116358) _gate_q_1;
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
gate rzx_5073923024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5277147480185214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5073918416(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4968785492646586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5073925040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.5300214094960851) _gate_q_0;
  u1(0.7917827382333673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.29689449555881237, 0, -1.5300214094960851) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.29689449555881237, 0.7382386712627178, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5073912608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.07665554539212) _gate_q_1;
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
gate cu1_5073915488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.725105360315684) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.725105360315684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.725105360315684) _gate_q_1;
}
gate rzz_5073917456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.207773260933911) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5073916016(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.317413183111169, -0.3139519139187301, 0.3139519139187301) _gate_q_0;
}
gate xx_plus_yy_5073919040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.259516660076743) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7426691063239015) _gate_q_1;
  ry(-2.7426691063239015) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.259516660076743) _gate_q_0;
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
gate rxx_5073921200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.002245033127107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5073916544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.753828986151503) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5073916976(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.376226869245109) _gate_q_0;
  u1(1.1957230177148073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6863295458422802, 0, -4.376226869245109) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6863295458422802, 3.1805038515303017, 0) _gate_q_1;
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
gate rxx_5073916112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.2528621311311605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5073923264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.964054861486698) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5073915200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.537650535284739) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5073916256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9615098390439234) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9615098390439234) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9615098390439234) _gate_q_1;
}
gate rzz_5073915824(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.7439140679145195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5073917072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.34164894610080765, 0.3675970163172819, -0.3675970163172819) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  rz(0.708386367216215) _gate_q_9;
  xx_minus_yy_5072966416(4.117734840066665, 5.917350212158749) _gate_q_1, _gate_q_12;
  u1(3.8053623611899288) _gate_q_2;
  u3(1.3790344792775762, 2.3610896447370275, 0.8224370638339281) _gate_q_0;
  rx(2.4121729208545615) _gate_q_3;
  h _gate_q_8;
  ch _gate_q_7, _gate_q_6;
  r_5073918656(3.8743702595046976, 4.686522531384939) _gate_q_4;
  y _gate_q_14;
  u3(5.311278018105045, 2.684458690173277, 2.256900320428595) _gate_q_10;
  z _gate_q_11;
  swap _gate_q_5, _gate_q_13;
  h _gate_q_7;
  id _gate_q_9;
  h _gate_q_13;
  swap _gate_q_5, _gate_q_1;
  x _gate_q_3;
  cy _gate_q_14, _gate_q_2;
  cx _gate_q_11, _gate_q_6;
  cry(5.244095551651018) _gate_q_8, _gate_q_12;
  cx _gate_q_4, _gate_q_10;
  p(1.060592328307582) _gate_q_0;
  rz(4.870761973858832) _gate_q_14;
  crx(3.879150715893756) _gate_q_0, _gate_q_7;
  crz(5.905995215760737) _gate_q_13, _gate_q_9;
  rz(0.9697716297791574) _gate_q_3;
  p(3.082881039895239) _gate_q_8;
  ryy_5073918512(2.2176281731567546) _gate_q_4, _gate_q_1;
  swap _gate_q_5, _gate_q_6;
  ryy_5073918560(2.176174966116358) _gate_q_12, _gate_q_2;
  rz(0.25767826507136) _gate_q_11;
  z _gate_q_10;
  u1(4.638007181694429) _gate_q_14;
  cz _gate_q_13, _gate_q_7;
  sdg _gate_q_11;
  cs _gate_q_3, _gate_q_1;
  rzx_5073923024(3.5277147480185214) _gate_q_9, _gate_q_8;
  ryy_5073918416(1.4968785492646586) _gate_q_10, _gate_q_6;
  cry(6.10913121758104) _gate_q_2, _gate_q_4;
  t _gate_q_5;
  sdg _gate_q_12;
  u3(2.926890320348682, 5.979774408013991, 5.279068763820822) _gate_q_0;
  cu3_5073925040(0.5937889911176247, 0.7382386712627178, 2.3218041477294524) _gate_q_14, _gate_q_4;
  ry(3.2686751598064654) _gate_q_12;
  sdg _gate_q_1;
  crx(5.300197064250453) _gate_q_8, _gate_q_2;
  dcx _gate_q_7, _gate_q_10;
  dcx _gate_q_11, _gate_q_13;
  rxx_5073912608(4.07665554539212) _gate_q_6, _gate_q_5;
  crx(0.02154668256631189) _gate_q_3, _gate_q_0;
  u2(0.6387142428651893, 1.4174549548049753) _gate_q_9;
  t _gate_q_6;
  cp(1.1125296563829532) _gate_q_10, _gate_q_12;
  t _gate_q_0;
  y _gate_q_5;
  csdg _gate_q_8, _gate_q_2;
  id _gate_q_9;
  U(1.7796773803508061, 2.2627289257301144, 3.8835701929479693) _gate_q_4;
  cu1_5073915488(5.450210720631368) _gate_q_11, _gate_q_14;
  rzz_5073917456(5.207773260933911) _gate_q_3, _gate_q_13;
  ch _gate_q_1, _gate_q_7;
  u2(1.260170185481025, 5.15991031761151) _gate_q_4;
  r_5073916016(5.317413183111169, 1.2568444128761664) _gate_q_2;
  xx_plus_yy_5073919040(5.485338212647803, 5.259516660076743) _gate_q_11, _gate_q_5;
  ecr _gate_q_3, _gate_q_0;
  rxx_5073921200(1.002245033127107) _gate_q_13, _gate_q_9;
  U(1.734211632565808, 3.7997361934675515, 4.764814898699545) _gate_q_1;
  cy _gate_q_6, _gate_q_12;
  rzx_5073916544(0.753828986151503) _gate_q_14, _gate_q_7;
  ch _gate_q_10, _gate_q_8;
  cu3_5073916976(3.3726590916845605, 3.1805038515303017, 5.571949886959916) _gate_q_0, _gate_q_5;
  swap _gate_q_3, _gate_q_10;
  csx _gate_q_7, _gate_q_8;
  rxx_5073916112(6.2528621311311605) _gate_q_1, _gate_q_6;
  rzx_5073923264(2.964054861486698) _gate_q_13, _gate_q_12;
  cy _gate_q_2, _gate_q_9;
  cx _gate_q_11, _gate_q_14;
  p(0.5286777794241665) _gate_q_4;
  rx(0.7108226913798797) _gate_q_14;
  sx _gate_q_3;
  U(3.8406055796019296, 1.9718840347151554, 1.962940755180388) _gate_q_13;
  csdg _gate_q_0, _gate_q_11;
  x _gate_q_12;
  u2(0.9427942461613991, 5.345111651194517) _gate_q_7;
  u1(0.2302428923310532) _gate_q_4;
  cry(0.19561713677783413) _gate_q_2, _gate_q_1;
  dcx _gate_q_6, _gate_q_9;
  ch _gate_q_8, _gate_q_10;
  sxdg _gate_q_5;
  ch _gate_q_3, _gate_q_7;
  rzx_5073915200(2.537650535284739) _gate_q_14, _gate_q_13;
  cu1_5073916256(3.923019678087847) _gate_q_6, _gate_q_12;
  dcx _gate_q_4, _gate_q_1;
  rzz_5073915824(5.7439140679145195) _gate_q_9, _gate_q_2;
  s _gate_q_11;
  cs _gate_q_5, _gate_q_10;
  r_5073917072(0.34164894610080765, 1.9383933431121785) _gate_q_8;
  rx(4.470630221153641) _gate_q_0;
}
gate xx_plus_yy_5073924224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8584243574219164) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6351593641175476) _gate_q_1;
  ry(-0.6351593641175476) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8584243574219164) _gate_q_0;
}
gate rxx_5073919808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.9566783738456435) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5073926432(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4280172889156297) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5073927536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.478582657687609) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5950575956744832) _gate_q_1;
  ry(-1.5950575956744832) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.478582657687609) _gate_q_0;
}
gate ryy_5073919280(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.198580109697928) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5073924320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5508716686226525) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.758080040852654) _gate_q_1;
  ry(-2.758080040852654) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5508716686226525) _gate_q_0;
}
gate r_5073927392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.100754864184718, 1.187701632383218, -1.187701632383218) _gate_q_0;
}
gate xx_plus_yy_5073920480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.512644229587453) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2773156025122236) _gate_q_1;
  ry(-0.2773156025122236) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.512644229587453) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5073921632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.222380532773045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5073926048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.8703580581923305) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.200648665183909) _gate_q_0;
  ry(-2.200648665183909) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.8703580581923305) _gate_q_1;
}
gate rxx_5073922736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5802738075079178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5073917024(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5255938260929175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5073913808(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0481924586087845) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5073912128(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.801648701023334) _gate_q_0;
  u1(1.109003477647409) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9472143278180405, 0, -4.801648701023334) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9472143278180405, 3.692645223375925, 0) _gate_q_1;
}
gate ryy_5073914288(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.1585681416780895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5073912896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.730767004906298) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5073926576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.49158406775305735) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8122253107903253) _gate_q_0;
  ry(-0.8122253107903253) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.49158406775305735) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  xx_plus_yy_5073924224(1.2703187282350952, 3.8584243574219164) _gate_q_13, _gate_q_8;
  rxx_5073919808(5.9566783738456435) _gate_q_2, _gate_q_11;
  U(5.36192547194122, 3.2447921559178874, 1.4380628705666443) _gate_q_1;
  cs _gate_q_9, _gate_q_14;
  s _gate_q_0;
  cx _gate_q_4, _gate_q_3;
  id _gate_q_7;
  sx _gate_q_10;
  cz _gate_q_5, _gate_q_6;
  u3(2.190042670417783, 4.617363851917458, 1.4592008140151884) _gate_q_12;
  U(2.4546469113889713, 3.86086273869042, 0.44270507013945076) _gate_q_11;
  cx _gate_q_12, _gate_q_10;
  rzz_5073926432(1.4280172889156297) _gate_q_1, _gate_q_7;
  cu(5.4635059616293065, 3.6406012675118267, 3.6892058818412456, 1.5583341535418904) _gate_q_13, _gate_q_4;
  u3(1.9841200551215397, 3.1431543595121525, 1.0379119675860542) _gate_q_9;
  cx _gate_q_3, _gate_q_6;
  t _gate_q_2;
  xx_plus_yy_5073927536(3.1901151913489665, 4.478582657687609) _gate_q_8, _gate_q_14;
  cs _gate_q_5, _gate_q_0;
  ryy_5073919280(3.198580109697928) _gate_q_0, _gate_q_10;
  cry(3.864962770168485) _gate_q_12, _gate_q_8;
  dcx _gate_q_4, _gate_q_5;
  cu(3.9485972312701993, 0.6234989449152613, 3.435188877069305, 2.3745536462483847) _gate_q_7, _gate_q_3;
  u3(3.416752200632143, 1.2704974432085663, 0.9084127081771962) _gate_q_6;
  xx_plus_yy_5073924320(5.516160081705308, 0.5508716686226525) _gate_q_13, _gate_q_14;
  rz(4.776981356489693) _gate_q_2;
  cry(5.46550332145254) _gate_q_1, _gate_q_11;
  r_5073927392(4.100754864184718, 2.7584979591781145) _gate_q_9;
  u1(4.13408100198049) _gate_q_6;
  crz(3.1467420437279836) _gate_q_0, _gate_q_7;
  csdg _gate_q_8, _gate_q_11;
  z _gate_q_13;
  dcx _gate_q_4, _gate_q_12;
  h _gate_q_14;
  csx _gate_q_10, _gate_q_9;
  xx_plus_yy_5073920480(0.5546312050244472, 3.512644229587453) _gate_q_3, _gate_q_5;
  h _gate_q_2;
  h _gate_q_1;
  sdg _gate_q_7;
  dcx _gate_q_2, _gate_q_12;
  ry(3.701443795308798) _gate_q_6;
  cp(2.4510008952694937) _gate_q_0, _gate_q_5;
  sx _gate_q_4;
  ecr _gate_q_10, _gate_q_9;
  iswap _gate_q_11, _gate_q_3;
  cry(4.058051158920852) _gate_q_13, _gate_q_8;
  cu(4.1928762845229315, 3.6106515748620045, 6.232959605124319, 0.585677877729143) _gate_q_14, _gate_q_1;
  x _gate_q_4;
  dcx _gate_q_11, _gate_q_2;
  iswap _gate_q_9, _gate_q_10;
  u1(2.9249389237447825) _gate_q_7;
  p(0.15065729184809343) _gate_q_5;
  rzx_5073921632(5.222380532773045) _gate_q_3, _gate_q_12;
  u2(0.23922452334875385, 1.3225340554685479) _gate_q_0;
  cu(5.1270381167859975, 2.9061377189324875, 1.588346613518787, 1.4081627670644943) _gate_q_1, _gate_q_13;
  cp(3.7364508311824243) _gate_q_14, _gate_q_6;
  u1(2.1235278102284063) _gate_q_8;
  xx_minus_yy_5073926048(4.401297330367818, 5.8703580581923305) _gate_q_8, _gate_q_10;
  rxx_5073922736(0.5802738075079178) _gate_q_6, _gate_q_11;
  cp(2.068812510942198) _gate_q_14, _gate_q_13;
  cp(1.5141820650256133) _gate_q_9, _gate_q_7;
  iswap _gate_q_1, _gate_q_4;
  z _gate_q_3;
  csx _gate_q_12, _gate_q_5;
  csdg _gate_q_0, _gate_q_2;
  ry(2.8013655616004205) _gate_q_7;
  u2(1.8971573359541671, 1.386904519877532) _gate_q_10;
  crx(2.626955860332004) _gate_q_6, _gate_q_12;
  rzz_5073917024(0.5255938260929175) _gate_q_2, _gate_q_8;
  ch _gate_q_0, _gate_q_11;
  cp(4.648110649112695) _gate_q_5, _gate_q_4;
  cp(4.309609013028714) _gate_q_9, _gate_q_14;
  u1(3.7373785255029164) _gate_q_3;
  cu(0.476340309004903, 4.407062803007951, 2.2610967886183735, 4.479033513416613) _gate_q_1, _gate_q_13;
  cy _gate_q_9, _gate_q_12;
  id _gate_q_6;
  rzz_5073913808(1.0481924586087845) _gate_q_8, _gate_q_0;
  t _gate_q_10;
  dcx _gate_q_13, _gate_q_1;
  swap _gate_q_3, _gate_q_5;
  ch _gate_q_11, _gate_q_4;
  sxdg _gate_q_2;
  ch _gate_q_7, _gate_q_14;
  crx(3.7685032577323043) _gate_q_0, _gate_q_7;
  cu3_5073912128(1.894428655636081, 3.692645223375925, 5.910652178670743) _gate_q_13, _gate_q_4;
  rz(1.9065429334512831) _gate_q_6;
  t _gate_q_14;
  ch _gate_q_11, _gate_q_2;
  ryy_5073914288(6.1585681416780895) _gate_q_1, _gate_q_10;
  z _gate_q_8;
  rxx_5073912896(5.730767004906298) _gate_q_9, _gate_q_12;
  xx_minus_yy_5073926576(1.6244506215806507, 0.49158406775305735) _gate_q_3, _gate_q_5;
}