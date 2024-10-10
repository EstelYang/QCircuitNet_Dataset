gate rzx_5104439072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.770525869651652) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5107791872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.698422413782025) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5107788416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8881179758631657) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2924549961911774) _gate_q_1;
  ry(-0.2924549961911774) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8881179758631657) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5107782416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.221503562416352) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5080325953968718) _gate_q_1;
  ry(-1.5080325953968718) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.221503562416352) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5107790624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7643214992279344, 3.1951406963358444, -3.1951406963358444) _gate_q_0;
}
gate rzz_5107781456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2454059701622737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5107790096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.521659089388665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107782560(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.192977472003186) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5107783616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.628080971008373) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107789808(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.490218996410053) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107778048(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.856606995869206) _gate_q_0;
  u1(1.7245913321104611) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.566170280670134, 0, -2.856606995869206) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.566170280670134, 1.132015663758745, 0) _gate_q_1;
}
gate xx_minus_yy_5107783088(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.2986896461059843) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.32391290493075) _gate_q_0;
  ry(-2.32391290493075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.2986896461059843) _gate_q_1;
}
gate cu1_5107792976(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.09062435156235356) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.09062435156235356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.09062435156235356) _gate_q_1;
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
gate rxx_5107784720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9787852629376506) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5107790144(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9156855887343167) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107792832(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.845969463881072) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5107785488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7404296757875337, 3.8564326579254553, -3.8564326579254553) _gate_q_0;
}
gate cu3_5107777808(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1481626936786467) _gate_q_0;
  u1(0.4351281874117938) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4758756931476878, 0, -3.1481626936786467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4758756931476878, 2.713034506266853, 0) _gate_q_1;
}
gate r_5107786448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.473930460360569, -0.952890305048771, 0.952890305048771) _gate_q_0;
}
gate rzx_5107779296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.785494840857253) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5107779440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8162094357772697) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5107778864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4521000116272065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  s _gate_q_1;
  crx(2.342120090719188) _gate_q_2, _gate_q_0;
  cry(3.2775614098447674) _gate_q_3, _gate_q_11;
  rzx_5104439072(5.770525869651652) _gate_q_8, _gate_q_13;
  csdg _gate_q_10, _gate_q_5;
  rxx_5107791872(5.698422413782025) _gate_q_4, _gate_q_12;
  swap _gate_q_7, _gate_q_6;
  rz(1.7455651076946552) _gate_q_9;
  swap _gate_q_3, _gate_q_0;
  sx _gate_q_13;
  sx _gate_q_11;
  xx_plus_yy_5107788416(0.5849099923823547, 0.8881179758631657) _gate_q_4, _gate_q_5;
  s _gate_q_10;
  dcx _gate_q_9, _gate_q_8;
  xx_plus_yy_5107782416(3.0160651907937437, 4.221503562416352) _gate_q_1, _gate_q_2;
  iswap _gate_q_7, _gate_q_6;
  r_5107790624(3.7643214992279344, 4.765937023130741) _gate_q_12;
  iswap _gate_q_4, _gate_q_11;
  rzz_5107781456(1.2454059701622737) _gate_q_13, _gate_q_8;
  sxdg _gate_q_1;
  ch _gate_q_10, _gate_q_0;
  U(2.680847724118719, 5.462679158078854, 1.7780694967605348) _gate_q_3;
  p(4.157480910089749) _gate_q_2;
  rxx_5107790096(2.521659089388665) _gate_q_6, _gate_q_12;
  s _gate_q_5;
  rzz_5107782560(6.192977472003186) _gate_q_7, _gate_q_9;
  tdg _gate_q_13;
  rxx_5107783616(2.628080971008373) _gate_q_3, _gate_q_12;
  rzz_5107789808(3.490218996410053) _gate_q_11, _gate_q_5;
  s _gate_q_10;
  iswap _gate_q_0, _gate_q_1;
  cu3_5107778048(5.132340561340268, 1.132015663758745, 4.581198327979667) _gate_q_4, _gate_q_6;
  cu(0.10490677418642343, 3.837563890643946, 3.325898458555229, 0.250296297460824) _gate_q_8, _gate_q_2;
  u2(5.510477256800512, 6.0319261961837976) _gate_q_7;
  sdg _gate_q_9;
  csdg _gate_q_1, _gate_q_3;
  cy _gate_q_4, _gate_q_11;
  xx_minus_yy_5107783088(4.6478258098615, 2.2986896461059843) _gate_q_13, _gate_q_2;
  cp(0.33346146369753) _gate_q_8, _gate_q_6;
  z _gate_q_12;
  cu1_5107792976(0.18124870312470712) _gate_q_0, _gate_q_5;
  cz _gate_q_10, _gate_q_7;
  s _gate_q_9;
  cp(5.423359359019213) _gate_q_4, _gate_q_3;
  u1(4.105773841719249) _gate_q_6;
  csx _gate_q_9, _gate_q_2;
  sx _gate_q_12;
  sdg _gate_q_10;
  dcx _gate_q_1, _gate_q_5;
  ecr _gate_q_13, _gate_q_8;
  cp(2.1747864932759904) _gate_q_0, _gate_q_7;
  h _gate_q_11;
  rxx_5107784720(3.9787852629376506) _gate_q_2, _gate_q_9;
  ryy_5107790144(1.9156855887343167) _gate_q_5, _gate_q_7;
  cy _gate_q_6, _gate_q_4;
  ryy_5107792832(1.845969463881072) _gate_q_1, _gate_q_12;
  s _gate_q_11;
  csdg _gate_q_8, _gate_q_10;
  y _gate_q_0;
  sxdg _gate_q_3;
  r_5107785488(0.7404296757875337, 5.427228984720352) _gate_q_13;
  cu3_5107777808(0.9517513862953756, 2.713034506266853, 3.5832908810904405) _gate_q_2, _gate_q_6;
  u1(2.431237206837641) _gate_q_4;
  r_5107786448(4.473930460360569, 0.6179060217461255) _gate_q_11;
  y _gate_q_12;
  csx _gate_q_10, _gate_q_7;
  csx _gate_q_1, _gate_q_0;
  cz _gate_q_8, _gate_q_13;
  rzx_5107779296(2.785494840857253) _gate_q_9, _gate_q_5;
  U(0.671584777043579, 0.05548382570524097, 1.2855360847300374) _gate_q_3;
  cz _gate_q_4, _gate_q_5;
  s _gate_q_1;
  u3(3.689815312138999, 5.721296214830931, 5.6227853187031105) _gate_q_8;
  ry(1.1389527422439334) _gate_q_13;
  csdg _gate_q_3, _gate_q_7;
  cry(1.8872393451461926) _gate_q_9, _gate_q_6;
  ry(0.2218470751633113) _gate_q_11;
  cp(0.039860404589984216) _gate_q_2, _gate_q_12;
  cx _gate_q_10, _gate_q_0;
  s _gate_q_4;
  t _gate_q_6;
  cx _gate_q_10, _gate_q_1;
  h _gate_q_3;
  ecr _gate_q_13, _gate_q_5;
  rxx_5107779440(0.8162094357772697) _gate_q_7, _gate_q_12;
  rz(5.539809623428765) _gate_q_0;
  id _gate_q_11;
  rzx_5107778864(3.4521000116272065) _gate_q_8, _gate_q_2;
  sdg _gate_q_9;
}
gate rzz_5107785392(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.44030491359024543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105637456(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.4588749563711612) _gate_q_0;
  u1(0.7506450137507553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.997437066379022, 0, -1.4588749563711612) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.997437066379022, 0.7082299426204057, 0) _gate_q_1;
}
gate cu3_5105633664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.093971483898784) _gate_q_0;
  u1(-1.6179827857415332) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.14075380343399344, 0, -4.093971483898784) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.14075380343399344, 5.711954269640318, 0) _gate_q_1;
}
gate xx_plus_yy_5105633472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.652702360065878) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.33367379569066985) _gate_q_1;
  ry(-0.33367379569066985) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.652702360065878) _gate_q_0;
}
gate xx_plus_yy_5105637360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.1447657287340511) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7728144684303034) _gate_q_1;
  ry(-0.7728144684303034) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.1447657287340511) _gate_q_0;
}
gate rzz_5105645664(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.1934380890807534) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5105631504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.12795909411389297) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.1713059874898209) _gate_q_1;
  ry(-0.1713059874898209) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.12795909411389297) _gate_q_0;
}
gate xx_minus_yy_5105640576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.4147383196906156) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.07393255807533913) _gate_q_0;
  ry(-0.07393255807533913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.4147383196906156) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5105643072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9778862494211553) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.956970592843587) _gate_q_0;
  ry(-2.956970592843587) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9778862494211553) _gate_q_1;
}
gate cu3_5105636256(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7119003926693006) _gate_q_0;
  u1(0.6488803958791443) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1667625466918248, 0, -2.7119003926693006) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1667625466918248, 2.0630199967901564, 0) _gate_q_1;
}
gate xx_minus_yy_5105635056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.340510612292215) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.08855328789976526) _gate_q_0;
  ry(-0.08855328789976526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.340510612292215) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  csdg _gate_q_0, _gate_q_9;
  rx(1.9273291772903327) _gate_q_3;
  dcx _gate_q_11, _gate_q_5;
  id _gate_q_4;
  z _gate_q_2;
  rzz_5107785392(0.44030491359024543) _gate_q_6, _gate_q_12;
  cry(2.521306844965648) _gate_q_13, _gate_q_7;
  cx _gate_q_8, _gate_q_1;
  s _gate_q_10;
  crx(0.6304155280535921) _gate_q_8, _gate_q_5;
  cu3_5105637456(5.994874132758044, 0.7082299426204057, 2.2095199701219164) _gate_q_1, _gate_q_6;
  sx _gate_q_7;
  t _gate_q_12;
  cu3_5105633664(0.28150760686798687, 5.711954269640318, 2.475988698157251) _gate_q_13, _gate_q_10;
  csx _gate_q_11, _gate_q_3;
  cy _gate_q_2, _gate_q_4;
  id _gate_q_0;
  s _gate_q_9;
  x _gate_q_13;
  h _gate_q_5;
  cy _gate_q_11, _gate_q_8;
  cry(0.6614841189509408) _gate_q_12, _gate_q_1;
  csdg _gate_q_7, _gate_q_3;
  cp(2.7226801325220977) _gate_q_2, _gate_q_10;
  s _gate_q_4;
  cx _gate_q_6, _gate_q_0;
  z _gate_q_9;
  y _gate_q_12;
  u3(2.2834049612715823, 3.085081412305671, 5.543270887920678) _gate_q_10;
  t _gate_q_7;
  u3(0.7298238786600877, 6.129130473266805, 4.848815790513758) _gate_q_11;
  cu(3.474221070326507, 5.167477623415116, 0.42162639795849677, 3.9663096186002913) _gate_q_4, _gate_q_0;
  cry(5.8164786610911605) _gate_q_8, _gate_q_6;
  rz(2.173730412288054) _gate_q_3;
  tdg _gate_q_9;
  u2(4.047928335028746, 3.959437376127486) _gate_q_13;
  iswap _gate_q_5, _gate_q_2;
  u2(2.3127404692779896, 2.3418929734402614) _gate_q_1;
  cp(1.929981029744847) _gate_q_13, _gate_q_1;
  ecr _gate_q_6, _gate_q_10;
  u2(1.0924127835222825, 4.447741628802921) _gate_q_0;
  sdg _gate_q_7;
  y _gate_q_3;
  cx _gate_q_4, _gate_q_12;
  ch _gate_q_2, _gate_q_11;
  cz _gate_q_8, _gate_q_9;
  s _gate_q_5;
  u1(5.880842682133052) _gate_q_1;
  xx_plus_yy_5105633472(0.6673475913813397, 2.652702360065878) _gate_q_0, _gate_q_8;
  cz _gate_q_3, _gate_q_10;
  cry(2.43699167360032) _gate_q_7, _gate_q_9;
  csdg _gate_q_13, _gate_q_5;
  ecr _gate_q_6, _gate_q_11;
  crz(1.6615596834437678) _gate_q_4, _gate_q_2;
  u2(4.413972333822347, 3.2194763326006113) _gate_q_12;
  xx_plus_yy_5105637360(1.5456289368606069, 1.1447657287340511) _gate_q_7, _gate_q_3;
  rx(0.7724361038746788) _gate_q_2;
  u2(0.850146214181426, 1.539345381936782) _gate_q_0;
  u1(4.794701133560058) _gate_q_8;
  rzz_5105645664(3.1934380890807534) _gate_q_5, _gate_q_12;
  p(3.7940275152968335) _gate_q_9;
  sx _gate_q_10;
  u1(1.9784666711334693) _gate_q_6;
  u1(6.123083700523259) _gate_q_4;
  xx_plus_yy_5105631504(0.3426119749796418, 0.12795909411389297) _gate_q_11, _gate_q_1;
  id _gate_q_13;
  cry(5.717925197888951) _gate_q_1, _gate_q_0;
  swap _gate_q_9, _gate_q_5;
  cp(4.891344035629657) _gate_q_4, _gate_q_11;
  z _gate_q_3;
  xx_minus_yy_5105640576(0.14786511615067827, 3.4147383196906156) _gate_q_6, _gate_q_12;
  sxdg _gate_q_8;
  csdg _gate_q_7, _gate_q_10;
  cy _gate_q_2, _gate_q_13;
  tdg _gate_q_4;
  y _gate_q_7;
  ry(5.402265838284699) _gate_q_10;
  cp(2.641837668764563) _gate_q_5, _gate_q_3;
  x _gate_q_6;
  ry(1.8249164132055533) _gate_q_1;
  cs _gate_q_0, _gate_q_2;
  U(3.4207461976783664, 2.8659487923856433, 0.6377533038534183) _gate_q_13;
  xx_minus_yy_5105643072(5.913941185687174, 1.9778862494211553) _gate_q_9, _gate_q_12;
  crz(2.891022968728376) _gate_q_11, _gate_q_8;
  cz _gate_q_11, _gate_q_5;
  swap _gate_q_9, _gate_q_7;
  ecr _gate_q_6, _gate_q_3;
  csdg _gate_q_4, _gate_q_12;
  ry(3.376565308628193) _gate_q_0;
  cu3_5105636256(0.3335250933836496, 2.0630199967901564, 3.360780788548445) _gate_q_2, _gate_q_1;
  id _gate_q_8;
  xx_minus_yy_5105635056(0.1771065757995305, 3.340510612292215) _gate_q_13, _gate_q_10;
}