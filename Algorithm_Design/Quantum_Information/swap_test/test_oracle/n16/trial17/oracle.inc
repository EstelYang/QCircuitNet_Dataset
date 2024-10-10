gate rzz_5074198096(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.602100562758791) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074205344(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.196739644745335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074201744(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.300371763900983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074206544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.679107509245529) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5790802093034824) _gate_q_0;
  ry(-0.5790802093034824) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.679107509245529) _gate_q_1;
}
gate rzx_5074194688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8093186178582124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074203520(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1162357683158635) _gate_q_1;
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
gate r_5074195696(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.7930179007286275, 2.7654132415363932, -2.7654132415363932) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5074196992(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.55851274557941) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074199200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6459032206334485) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1817550046902063) _gate_q_1;
  ry(-1.1817550046902063) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6459032206334485) _gate_q_0;
}
gate xx_plus_yy_5074201552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.531587649637519) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.040444330269183724) _gate_q_1;
  ry(-0.040444330269183724) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.531587649637519) _gate_q_0;
}
gate xx_minus_yy_5074206448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3710517174495613) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7920766470485062) _gate_q_0;
  ry(-0.7920766470485062) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3710517174495613) _gate_q_1;
}
gate rzz_5074201504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.0150987509948495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074973232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.217905645104615, 2.5889273279498397, -2.5889273279498397) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5074964736(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.422467794977764) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.422467794977764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.422467794977764) _gate_q_1;
}
gate ryy_5074965216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3914985263632627) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074971168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.4091782792130045) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9644128046157165) _gate_q_1;
  ry(-2.9644128046157165) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.4091782792130045) _gate_q_0;
}
gate rzz_5074971696(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.7292168709511775) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074966032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.438816655330163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5074972368(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0151659191862286) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0151659191862286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0151659191862286) _gate_q_1;
}
gate cu3_5074972464(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9518612494261947) _gate_q_0;
  u1(1.6183227222640422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8579784797071892, 0, -1.9518612494261947) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8579784797071892, 0.3335385271621525, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  cp(0.8343255559411551) _gate_q_10, _gate_q_8;
  cp(4.343767000692721) _gate_q_14, _gate_q_6;
  t _gate_q_1;
  cz _gate_q_11, _gate_q_0;
  rzz_5074198096(3.602100562758791) _gate_q_15, _gate_q_4;
  ryy_5074205344(6.196739644745335) _gate_q_7, _gate_q_12;
  cu(2.2856737615616507, 3.841183300693919, 4.146259859275827, 3.6973205810537713) _gate_q_13, _gate_q_3;
  rzz_5074201744(3.300371763900983) _gate_q_5, _gate_q_9;
  t _gate_q_2;
  csdg _gate_q_10, _gate_q_8;
  ch _gate_q_7, _gate_q_15;
  dcx _gate_q_13, _gate_q_3;
  id _gate_q_9;
  sdg _gate_q_6;
  crx(5.480186685053434) _gate_q_4, _gate_q_2;
  u2(4.86422643767217, 1.7990358678686118) _gate_q_0;
  xx_minus_yy_5074206544(1.1581604186069647, 1.679107509245529) _gate_q_12, _gate_q_5;
  p(4.359447778304998) _gate_q_1;
  cx _gate_q_14, _gate_q_11;
  tdg _gate_q_14;
  swap _gate_q_8, _gate_q_4;
  id _gate_q_6;
  cry(2.076936738322287) _gate_q_10, _gate_q_5;
  rzx_5074194688(2.8093186178582124) _gate_q_0, _gate_q_2;
  cp(3.8682019242777965) _gate_q_11, _gate_q_15;
  ryy_5074203520(1.1162357683158635) _gate_q_7, _gate_q_9;
  swap _gate_q_13, _gate_q_12;
  csx _gate_q_3, _gate_q_1;
  dcx _gate_q_9, _gate_q_1;
  r_5074195696(5.7930179007286275, 4.33620956833129) _gate_q_15;
  rz(6.176362163447028) _gate_q_3;
  U(0.17007729383547252, 5.55391023402052, 3.221603028798886) _gate_q_13;
  cs _gate_q_10, _gate_q_6;
  csx _gate_q_5, _gate_q_2;
  cu(2.2764886435950413, 0.06023263079548638, 5.446438738177382, 1.9576932256165658) _gate_q_14, _gate_q_7;
  p(5.737106147224814) _gate_q_4;
  cy _gate_q_0, _gate_q_8;
  csdg _gate_q_12, _gate_q_11;
  cry(3.5278392902833153) _gate_q_7, _gate_q_4;
  rzz_5074196992(1.55851274557941) _gate_q_14, _gate_q_13;
  sdg _gate_q_6;
  tdg _gate_q_3;
  csdg _gate_q_0, _gate_q_12;
  xx_plus_yy_5074199200(2.3635100093804127, 2.6459032206334485) _gate_q_15, _gate_q_2;
  cry(4.692942218734552) _gate_q_11, _gate_q_10;
  crx(2.1752821315175828) _gate_q_5, _gate_q_1;
  xx_plus_yy_5074201552(0.08088866053836745, 2.531587649637519) _gate_q_8, _gate_q_9;
  u1(3.205204645343261) _gate_q_0;
  sdg _gate_q_2;
  y _gate_q_11;
  xx_minus_yy_5074206448(1.5841532940970124, 1.3710517174495613) _gate_q_3, _gate_q_6;
  csx _gate_q_9, _gate_q_13;
  rzz_5074201504(2.0150987509948495) _gate_q_5, _gate_q_7;
  cs _gate_q_10, _gate_q_1;
  p(0.21631912992083194) _gate_q_15;
  cry(3.4050190647667202) _gate_q_12, _gate_q_8;
  cy _gate_q_14, _gate_q_4;
  u1(4.1829145037034765) _gate_q_6;
  u3(4.641103336863629, 5.786992197695322, 6.141600835621754) _gate_q_2;
  cu(3.4272225507918894, 0.1259807735036044, 1.4463901129354977, 4.664850467673782) _gate_q_13, _gate_q_12;
  cs _gate_q_0, _gate_q_9;
  csdg _gate_q_10, _gate_q_7;
  r_5074973232(5.217905645104615, 4.159723654744736) _gate_q_8;
  U(6.131541052613314, 2.4859715080303877, 0.2895717367038639) _gate_q_14;
  cu(4.567544372448777, 5.893326624935061, 3.3437457515711726, 0.46664415516740393) _gate_q_5, _gate_q_1;
  u1(1.5226592361052536) _gate_q_4;
  iswap _gate_q_11, _gate_q_3;
  u2(1.2002598260402, 5.697535737525747) _gate_q_15;
  cu1_5074964736(4.844935589955528) _gate_q_12, _gate_q_10;
  cx _gate_q_1, _gate_q_5;
  ryy_5074965216(3.3914985263632627) _gate_q_4, _gate_q_8;
  p(4.93699365607202) _gate_q_0;
  iswap _gate_q_14, _gate_q_3;
  cu(5.894824928557065, 5.463220539683095, 3.027603156775499, 5.539053816823297) _gate_q_2, _gate_q_6;
  z _gate_q_7;
  cz _gate_q_9, _gate_q_15;
  cx _gate_q_11, _gate_q_13;
  cu(3.0842141469401216, 4.177397225808349, 2.284878443267266, 5.27195181950162) _gate_q_14, _gate_q_9;
  ry(4.193813603320832) _gate_q_7;
  xx_plus_yy_5074971168(5.928825609231433, 5.4091782792130045) _gate_q_15, _gate_q_6;
  rzz_5074971696(3.7292168709511775) _gate_q_4, _gate_q_2;
  ryy_5074966032(2.438816655330163) _gate_q_12, _gate_q_10;
  cy _gate_q_11, _gate_q_0;
  cu(5.62387462908797, 0.6120651734551051, 2.520357156884153, 4.292172148624522) _gate_q_5, _gate_q_1;
  cu1_5074972368(6.030331838372457) _gate_q_3, _gate_q_13;
  tdg _gate_q_8;
  cu3_5074972464(3.7159569594143784, 0.3335385271621525, 3.570183971690237) _gate_q_2, _gate_q_13;
  x _gate_q_8;
  cy _gate_q_9, _gate_q_11;
  csdg _gate_q_3, _gate_q_14;
  y _gate_q_7;
  cry(3.5271165539995892) _gate_q_0, _gate_q_10;
  U(3.959154028370645, 3.4153711665498903, 4.0591250272805075) _gate_q_12;
  h _gate_q_6;
  z _gate_q_4;
  cy _gate_q_5, _gate_q_15;
  t _gate_q_1;
}
gate ryy_5074971552(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.055934585127961) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate cu1_5074974144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0852020093631114) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0852020093631114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0852020093631114) _gate_q_1;
}
gate r_5074967664(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.4518451480019939, 3.7590161297105062, -3.7590161297105062) _gate_q_0;
}
gate rzz_5074964304(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8882007065330098) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074967760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.010773502904512148, 1.3606355218896828, -1.3606355218896828) _gate_q_0;
}
gate cu1_5074966224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1316746371652386) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1316746371652386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1316746371652386) _gate_q_1;
}
gate xx_plus_yy_5074970160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5621605314764138) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5723820026094026) _gate_q_1;
  ry(-2.5723820026094026) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5621605314764138) _gate_q_0;
}
gate rxx_5074971984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.420443427070986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074968096(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7388668702146597) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5074968576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.303666955976055) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.303666955976055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.303666955976055) _gate_q_1;
}
gate rxx_5074973136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7710333353675454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074960560(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.2727271422099324) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074976352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.6823348718169795) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074969728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.754143287774967) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5074969488(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.771093784966918) _gate_q_0;
  u1(2.7273023793559132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7439310052161296, 0, -2.771093784966918) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7439310052161296, 0.043791405611004655, 0) _gate_q_1;
}
gate rxx_5074974864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4650614201701915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5074972224(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.9467459703229295) _gate_q_0;
  u1(-0.3586755259892742) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8845341671962403, 0, -4.9467459703229295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8845341671962403, 5.305421496312204, 0) _gate_q_1;
}
gate cu1_5074972080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7521002268775407) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7521002268775407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7521002268775407) _gate_q_1;
}
gate ryy_5074966992(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9743136490958988) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074966464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.18571349679884908) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2717843788694867) _gate_q_1;
  ry(-2.2717843788694867) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.18571349679884908) _gate_q_0;
}
gate xx_plus_yy_5074963008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.150471288577072) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.691905892233457) _gate_q_1;
  ry(-2.691905892233457) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.150471288577072) _gate_q_0;
}
gate rxx_5074973328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.795459260616884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074964256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6754520932305592) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6754520932305592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6754520932305592) _gate_q_1;
}
gate ryy_5074966800(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2307634019328066) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074967280(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.996528942361629) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  u1(3.9837129712276536) _gate_q_3;
  s _gate_q_9;
  sdg _gate_q_11;
  ryy_5074971552(4.055934585127961) _gate_q_14, _gate_q_2;
  y _gate_q_0;
  sx _gate_q_1;
  ecr _gate_q_8, _gate_q_6;
  cu1_5074974144(6.170404018726223) _gate_q_4, _gate_q_15;
  ecr _gate_q_13, _gate_q_7;
  rx(4.365085799609939) _gate_q_10;
  s _gate_q_5;
  u1(2.220223334039411) _gate_q_12;
  ry(1.7669126404172348) _gate_q_10;
  ecr _gate_q_12, _gate_q_0;
  r_5074967664(0.4518451480019939, 5.329812456505403) _gate_q_3;
  sxdg _gate_q_5;
  csx _gate_q_4, _gate_q_8;
  p(1.8873786246112827) _gate_q_2;
  rzz_5074964304(2.8882007065330098) _gate_q_14, _gate_q_7;
  rx(6.260419133065042) _gate_q_15;
  r_5074967760(0.010773502904512148, 2.9314318486845794) _gate_q_11;
  u2(4.873054831989035, 3.5457410322238125) _gate_q_13;
  u1(5.299931980634031) _gate_q_9;
  cp(1.2709413970337526) _gate_q_6, _gate_q_1;
  cry(5.811989927283678) _gate_q_11, _gate_q_1;
  ch _gate_q_3, _gate_q_10;
  U(1.893013828329428, 5.019729314297079, 5.167931530157035) _gate_q_2;
  crz(3.653198371510971) _gate_q_15, _gate_q_6;
  cu1_5074966224(2.2633492743304773) _gate_q_0, _gate_q_13;
  xx_plus_yy_5074970160(5.144764005218805, 0.5621605314764138) _gate_q_9, _gate_q_12;
  rz(1.3843538480067825) _gate_q_4;
  rxx_5074971984(2.420443427070986) _gate_q_14, _gate_q_5;
  u3(4.257936703601875, 5.95330820700212, 5.883855209221768) _gate_q_8;
  z _gate_q_7;
  x _gate_q_12;
  p(4.1984897269839605) _gate_q_7;
  u1(2.468262524003543) _gate_q_13;
  ch _gate_q_2, _gate_q_8;
  csx _gate_q_10, _gate_q_11;
  ryy_5074968096(1.7388668702146597) _gate_q_6, _gate_q_0;
  crx(2.4555512884472224) _gate_q_15, _gate_q_4;
  cp(3.750528324749194) _gate_q_1, _gate_q_3;
  cu1_5074968576(4.60733391195211) _gate_q_14, _gate_q_9;
  sx _gate_q_5;
  rxx_5074973136(3.7710333353675454) _gate_q_14, _gate_q_5;
  x _gate_q_4;
  sdg _gate_q_11;
  rzz_5074960560(3.2727271422099324) _gate_q_10, _gate_q_12;
  rxx_5074976352(4.6823348718169795) _gate_q_0, _gate_q_1;
  s _gate_q_8;
  rzx_5074969728(2.754143287774967) _gate_q_6, _gate_q_9;
  cu3_5074969488(5.487862010432259, 0.043791405611004655, 5.498396164322831) _gate_q_7, _gate_q_2;
  rxx_5074974864(1.4650614201701915) _gate_q_3, _gate_q_13;
  rz(5.929183572418056) _gate_q_15;
  cu3_5074972224(5.769068334392481, 5.305421496312204, 4.588070444333655) _gate_q_5, _gate_q_0;
  cu1_5074972080(5.5042004537550815) _gate_q_11, _gate_q_12;
  ecr _gate_q_1, _gate_q_13;
  sdg _gate_q_6;
  ry(0.7507575617450127) _gate_q_9;
  rx(4.680795592264014) _gate_q_8;
  cs _gate_q_7, _gate_q_3;
  cy _gate_q_10, _gate_q_4;
  h _gate_q_15;
  dcx _gate_q_2, _gate_q_14;
  tdg _gate_q_6;
  ry(1.1096529184633954) _gate_q_7;
  cz _gate_q_3, _gate_q_5;
  u1(4.678092381736277) _gate_q_0;
  u2(5.757794412702098, 0.25095287183772236) _gate_q_2;
  sxdg _gate_q_9;
  z _gate_q_11;
  iswap _gate_q_12, _gate_q_15;
  ry(5.592326209377504) _gate_q_14;
  ryy_5074966992(1.9743136490958988) _gate_q_13, _gate_q_10;
  ecr _gate_q_8, _gate_q_1;
  x _gate_q_4;
  crz(2.5886138403636014) _gate_q_2, _gate_q_14;
  ecr _gate_q_1, _gate_q_5;
  h _gate_q_0;
  sxdg _gate_q_13;
  sxdg _gate_q_10;
  cz _gate_q_6, _gate_q_7;
  crx(5.156127025378378) _gate_q_12, _gate_q_4;
  rz(0.2823582395729968) _gate_q_8;
  xx_plus_yy_5074966464(4.543568757738973, 0.18571349679884908) _gate_q_9, _gate_q_3;
  sdg _gate_q_11;
  sx _gate_q_15;
  cu(4.6288791678273675, 1.935277315157263, 5.709565013709248, 3.8611372197501175) _gate_q_10, _gate_q_4;
  u3(4.308889691803746, 5.176935926864504, 4.068638556094329) _gate_q_6;
  iswap _gate_q_2, _gate_q_14;
  cy _gate_q_3, _gate_q_9;
  sdg _gate_q_11;
  csx _gate_q_0, _gate_q_12;
  sdg _gate_q_5;
  xx_plus_yy_5074963008(5.383811784466914, 4.150471288577072) _gate_q_8, _gate_q_15;
  u1(1.8221770397540549) _gate_q_13;
  cp(4.302989451033928) _gate_q_1, _gate_q_7;
  swap _gate_q_12, _gate_q_2;
  rxx_5074973328(1.795459260616884) _gate_q_14, _gate_q_13;
  sxdg _gate_q_8;
  cu1_5074964256(3.3509041864611184) _gate_q_4, _gate_q_0;
  ryy_5074966800(2.2307634019328066) _gate_q_6, _gate_q_1;
  s _gate_q_9;
  crx(5.933316919407581) _gate_q_5, _gate_q_3;
  rzz_5074967280(5.996528942361629) _gate_q_7, _gate_q_10;
  csdg _gate_q_15, _gate_q_11;
}