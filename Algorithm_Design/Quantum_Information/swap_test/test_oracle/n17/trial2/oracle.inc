gate rzx_5107446704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.637725859164204) _gate_q_1;
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
gate ryy_5107447040(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.265464120471345) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5107437056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.10895321241387956, 1.781204417515652, -1.781204417515652) _gate_q_0;
}
gate r_5107433984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.824536992834811, 2.6471156344470277, -2.6471156344470277) _gate_q_0;
}
gate cu1_5107442000(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0752903743352533) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0752903743352533) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0752903743352533) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5107434944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.19821019608067186) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7184068526162828) _gate_q_1;
  ry(-1.7184068526162828) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.19821019608067186) _gate_q_0;
}
gate ryy_5107437920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.8672744008122635) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107438112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.202764094524867) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.213596080706456) _gate_q_1;
  ry(-2.213596080706456) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.202764094524867) _gate_q_0;
}
gate r_5107442048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.16201197779797144, -0.6932177887760745, 0.6932177887760745) _gate_q_0;
}
gate rzx_5107444976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.417334096673745) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107443344(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.423184435121203) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.423184435121203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.423184435121203) _gate_q_1;
}
gate cu1_5107447280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1543512120188644) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1543512120188644) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1543512120188644) _gate_q_1;
}
gate rxx_5107442720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9004342116906952) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5107435424(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.3779292336940148) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5904433107640288) _gate_q_1;
  ry(-0.5904433107640288) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.3779292336940148) _gate_q_0;
}
gate r_5107439888(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.050920749714621, 3.681472622605374, -3.681472622605374) _gate_q_0;
}
gate ryy_5107443248(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1211145986860136) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107437440(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7277746979498322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107443776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.215257563629629) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9165499543974078) _gate_q_0;
  ry(-0.9165499543974078) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.215257563629629) _gate_q_1;
}
gate rxx_5107444496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.642098700711592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5107445216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.2256284925037457) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4214604405595246) _gate_q_1;
  ry(-2.4214604405595246) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.2256284925037457) _gate_q_0;
}
gate r_5107447136(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9203468821896723, -1.2471634769018387, 1.2471634769018387) _gate_q_0;
}
gate xx_minus_yy_5107445888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.887005186442735) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.108367022001682) _gate_q_0;
  ry(-2.108367022001682) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.887005186442735) _gate_q_1;
}
gate rzz_5107442192(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.7158609283036774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107440704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.427739885845466) _gate_q_0;
  u1(-0.21116836789629945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9914052845304857, 0, -3.427739885845466) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9914052845304857, 3.6389082537417656, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  ry(0.3668213264903018) _gate_q_9;
  rzx_5107446704(5.637725859164204) _gate_q_7, _gate_q_1;
  cp(0.6247834917155799) _gate_q_12, _gate_q_16;
  h _gate_q_11;
  ry(0.5797929002327488) _gate_q_13;
  cx _gate_q_6, _gate_q_15;
  y _gate_q_0;
  id _gate_q_8;
  cu(0.7514270198261298, 1.474630808877338, 0.343696533757128, 1.386935607128705) _gate_q_14, _gate_q_10;
  csdg _gate_q_5, _gate_q_4;
  ry(5.631638689925083) _gate_q_3;
  u2(1.8766082180667096, 2.4490093562789355) _gate_q_2;
  ecr _gate_q_9, _gate_q_15;
  sdg _gate_q_0;
  sdg _gate_q_3;
  u1(0.45797891558739173) _gate_q_8;
  iswap _gate_q_13, _gate_q_10;
  ryy_5107447040(4.265464120471345) _gate_q_11, _gate_q_1;
  z _gate_q_12;
  cz _gate_q_2, _gate_q_4;
  cs _gate_q_14, _gate_q_7;
  cs _gate_q_16, _gate_q_5;
  x _gate_q_6;
  iswap _gate_q_1, _gate_q_15;
  ry(4.314942711214682) _gate_q_12;
  sdg _gate_q_0;
  cx _gate_q_10, _gate_q_6;
  dcx _gate_q_2, _gate_q_11;
  swap _gate_q_5, _gate_q_4;
  r_5107437056(0.10895321241387956, 3.3520007443105486) _gate_q_7;
  sdg _gate_q_16;
  r_5107433984(5.824536992834811, 4.217911961241924) _gate_q_14;
  cu1_5107442000(2.1505807486705066) _gate_q_9, _gate_q_3;
  t _gate_q_8;
  y _gate_q_13;
  csx _gate_q_10, _gate_q_15;
  swap _gate_q_0, _gate_q_9;
  cx _gate_q_1, _gate_q_7;
  s _gate_q_2;
  crz(3.7750139221496197) _gate_q_3, _gate_q_13;
  xx_plus_yy_5107434944(3.4368137052325656, 0.19821019608067186) _gate_q_6, _gate_q_8;
  cs _gate_q_11, _gate_q_12;
  ryy_5107437920(4.8672744008122635) _gate_q_16, _gate_q_5;
  csx _gate_q_14, _gate_q_4;
  u3(4.310953864777602, 4.814584593435022, 3.1287930252704417) _gate_q_16;
  cp(0.5581335292335883) _gate_q_7, _gate_q_3;
  cx _gate_q_11, _gate_q_10;
  ry(2.9148169581444527) _gate_q_0;
  u2(3.176022114956517, 1.152162604776633) _gate_q_1;
  s _gate_q_6;
  ch _gate_q_2, _gate_q_12;
  x _gate_q_14;
  xx_plus_yy_5107438112(4.427192161412912, 4.202764094524867) _gate_q_5, _gate_q_9;
  u1(0.42665010378441454) _gate_q_13;
  r_5107442048(0.16201197779797144, 0.877578538018822) _gate_q_8;
  rzx_5107444976(5.417334096673745) _gate_q_15, _gate_q_4;
  dcx _gate_q_1, _gate_q_4;
  cry(2.5769346285334294) _gate_q_15, _gate_q_8;
  cry(4.788397300984798) _gate_q_10, _gate_q_3;
  p(2.7875234832659) _gate_q_5;
  ry(4.304653825976709) _gate_q_7;
  sx _gate_q_2;
  p(2.649800164572791) _gate_q_14;
  cu1_5107443344(4.846368870242406) _gate_q_0, _gate_q_9;
  cu1_5107447280(2.3087024240377287) _gate_q_13, _gate_q_16;
  sdg _gate_q_11;
  u3(0.24833131534066274, 2.623875603291518, 0.7532988577589925) _gate_q_6;
  z _gate_q_12;
  ch _gate_q_2, _gate_q_9;
  rxx_5107442720(1.9004342116906952) _gate_q_3, _gate_q_16;
  xx_plus_yy_5107435424(1.1808866215280576, 3.3779292336940148) _gate_q_6, _gate_q_5;
  cy _gate_q_15, _gate_q_13;
  cs _gate_q_4, _gate_q_10;
  cx _gate_q_11, _gate_q_12;
  swap _gate_q_1, _gate_q_0;
  iswap _gate_q_7, _gate_q_8;
  tdg _gate_q_14;
  cp(0.7638138877195593) _gate_q_8, _gate_q_14;
  crx(6.274187907141706) _gate_q_16, _gate_q_9;
  swap _gate_q_5, _gate_q_13;
  crx(4.915081515274954) _gate_q_2, _gate_q_15;
  rz(6.2200268349444) _gate_q_11;
  r_5107439888(5.050920749714621, 5.25226894940027) _gate_q_4;
  ryy_5107443248(2.1211145986860136) _gate_q_0, _gate_q_12;
  sx _gate_q_3;
  ryy_5107437440(0.7277746979498322) _gate_q_7, _gate_q_1;
  U(3.3170329434763492, 0.5528832803403734, 5.470990605417299) _gate_q_6;
  u2(3.5286477235390303, 3.4613388233206983) _gate_q_10;
  xx_minus_yy_5107443776(1.8330999087948157, 2.215257563629629) _gate_q_11, _gate_q_5;
  swap _gate_q_16, _gate_q_14;
  rxx_5107444496(5.642098700711592) _gate_q_0, _gate_q_13;
  cy _gate_q_10, _gate_q_15;
  xx_plus_yy_5107445216(4.842920881119049, 2.2256284925037457) _gate_q_2, _gate_q_8;
  t _gate_q_6;
  x _gate_q_7;
  rx(1.1329840217986344) _gate_q_3;
  h _gate_q_12;
  csdg _gate_q_1, _gate_q_9;
  sx _gate_q_4;
  t _gate_q_0;
  u3(1.0663853496302864, 5.309279332242855, 1.7866969264483747) _gate_q_15;
  r_5107447136(2.9203468821896723, 0.3236328498930578) _gate_q_13;
  id _gate_q_9;
  cx _gate_q_2, _gate_q_5;
  u1(5.189705728633301) _gate_q_7;
  u3(5.4506798247241095, 5.021416357781823, 1.5058501926779602) _gate_q_6;
  u1(2.442336760008224) _gate_q_1;
  xx_minus_yy_5107445888(4.216734044003364, 5.887005186442735) _gate_q_11, _gate_q_3;
  p(2.401092669066167) _gate_q_10;
  rzz_5107442192(1.7158609283036774) _gate_q_4, _gate_q_12;
  cu3_5107440704(1.9828105690609714, 3.6389082537417656, 3.2165715179491667) _gate_q_14, _gate_q_8;
  t _gate_q_16;
}
gate cu1_5107334848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.025924925223266) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.025924925223266) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.025924925223266) _gate_q_1;
}
gate r_5107324288(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6157938667826719, -0.37455845210720384, 0.37455845210720384) _gate_q_0;
}
gate r_5107333552(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.498273434057478, 1.1163637863776446, -1.1163637863776446) _gate_q_0;
}
gate ryy_5107325344(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8333521866597766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107322176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.735984358455636) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7743157760757928) _gate_q_1;
  ry(-1.7743157760757928) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.735984358455636) _gate_q_0;
}
gate rzz_5107323664(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.021996719507408) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5107322752(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.4548935224983284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107322224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.231812951270481) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107322896(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8410155521173045) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8410155521173045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8410155521173045) _gate_q_1;
}
gate xx_minus_yy_5107324000(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.47969859207842) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5033812403005427) _gate_q_0;
  ry(-2.5033812403005427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.47969859207842) _gate_q_1;
}
gate xx_minus_yy_5107328272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.259042924513069) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.261140306831538) _gate_q_0;
  ry(-2.261140306831538) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.259042924513069) _gate_q_1;
}
gate r_5107333792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9251067291962556, 3.7905631343611033, -3.7905631343611033) _gate_q_0;
}
gate xx_plus_yy_5107328896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.0505238285056535) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7048860114503299) _gate_q_1;
  ry(-0.7048860114503299) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.0505238285056535) _gate_q_0;
}
gate ryy_5107325152(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3076043764309788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5107325200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6868863025080154) _gate_q_0;
  u1(-0.035524146778402876) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1373272162576553, 0, -2.6868863025080154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1373272162576553, 2.7224104492864183, 0) _gate_q_1;
}
gate rzx_5107319248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.444658294350845) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5107323376(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.796211180653318) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107321744(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.056184024190327) _gate_q_0;
  u1(-0.23351177087679087) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.998162544165369, 0, -4.056184024190327) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.998162544165369, 4.289695795067118, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  cu1_5107334848(6.051849850446532) _gate_q_10, _gate_q_7;
  cp(3.2401555892091065) _gate_q_11, _gate_q_2;
  cu(2.12373838838773, 6.178319767993597, 1.4257498055703755, 5.803691513795368) _gate_q_8, _gate_q_12;
  ecr _gate_q_13, _gate_q_15;
  h _gate_q_16;
  crz(3.8564994963298584) _gate_q_14, _gate_q_5;
  r_5107324288(0.6157938667826719, 1.1962378746876927) _gate_q_0;
  ry(3.230906216575409) _gate_q_9;
  crx(2.748177165005277) _gate_q_4, _gate_q_6;
  ry(0.6165727295127014) _gate_q_1;
  u2(4.594909401037464, 2.7979068285270756) _gate_q_3;
  cs _gate_q_4, _gate_q_7;
  ch _gate_q_2, _gate_q_10;
  p(0.7912412958774082) _gate_q_15;
  y _gate_q_6;
  cx _gate_q_8, _gate_q_11;
  rx(2.3526538862587727) _gate_q_1;
  cry(2.9595803225209556) _gate_q_9, _gate_q_14;
  cu(4.211338092352192, 0.8720944715682697, 2.4516919144432983, 3.1736542323644614) _gate_q_13, _gate_q_12;
  ry(5.2895943505516305) _gate_q_3;
  iswap _gate_q_5, _gate_q_16;
  r_5107333552(2.498273434057478, 2.687160113172541) _gate_q_0;
  ch _gate_q_5, _gate_q_16;
  s _gate_q_4;
  id _gate_q_6;
  y _gate_q_0;
  ryy_5107325344(3.8333521866597766) _gate_q_11, _gate_q_15;
  cy _gate_q_2, _gate_q_10;
  u3(5.371629032444848, 2.127660633583, 0.7868351235890869) _gate_q_12;
  sx _gate_q_9;
  z _gate_q_1;
  cs _gate_q_8, _gate_q_3;
  sx _gate_q_7;
  cz _gate_q_14, _gate_q_13;
  ch _gate_q_13, _gate_q_8;
  xx_plus_yy_5107322176(3.5486315521515857, 5.735984358455636) _gate_q_6, _gate_q_12;
  z _gate_q_11;
  csx _gate_q_0, _gate_q_5;
  z _gate_q_7;
  rzz_5107323664(3.021996719507408) _gate_q_3, _gate_q_15;
  cs _gate_q_2, _gate_q_9;
  y _gate_q_4;
  rzz_5107322752(2.4548935224983284) _gate_q_14, _gate_q_1;
  ecr _gate_q_16, _gate_q_10;
  y _gate_q_12;
  rzx_5107322224(2.231812951270481) _gate_q_4, _gate_q_2;
  rx(2.486488039735085) _gate_q_15;
  cu1_5107322896(1.682031104234609) _gate_q_9, _gate_q_14;
  t _gate_q_11;
  xx_minus_yy_5107324000(5.006762480601085, 5.47969859207842) _gate_q_0, _gate_q_5;
  xx_minus_yy_5107328272(4.522280613663076, 4.259042924513069) _gate_q_10, _gate_q_6;
  h _gate_q_8;
  rz(0.3682035621296174) _gate_q_3;
  sxdg _gate_q_7;
  u1(1.178918829551541) _gate_q_1;
  p(2.8737298530658615) _gate_q_13;
  sdg _gate_q_16;
  r_5107333792(1.9251067291962556, 5.361359461156) _gate_q_15;
  xx_plus_yy_5107328896(1.4097720229006598, 5.0505238285056535) _gate_q_10, _gate_q_2;
  cz _gate_q_14, _gate_q_13;
  cry(4.878433335072754) _gate_q_5, _gate_q_6;
  rx(6.0530210772120725) _gate_q_16;
  ryy_5107325152(1.3076043764309788) _gate_q_11, _gate_q_1;
  z _gate_q_8;
  cry(2.7233278667972143) _gate_q_9, _gate_q_3;
  crx(3.703970139034871) _gate_q_4, _gate_q_12;
  tdg _gate_q_7;
  z _gate_q_0;
  t _gate_q_11;
  dcx _gate_q_2, _gate_q_0;
  cs _gate_q_7, _gate_q_13;
  u2(3.9162709444002592, 2.923840143438378) _gate_q_6;
  u2(2.456695873709551, 2.1766264569732) _gate_q_14;
  cu3_5107325200(2.2746544325153106, 2.7224104492864183, 2.6513621557296125) _gate_q_10, _gate_q_5;
  dcx _gate_q_15, _gate_q_3;
  h _gate_q_12;
  ry(4.124958260133208) _gate_q_9;
  tdg _gate_q_4;
  tdg _gate_q_1;
  s _gate_q_16;
  ry(5.49239683167973) _gate_q_8;
  s _gate_q_9;
  cs _gate_q_2, _gate_q_10;
  cry(5.146475205144041) _gate_q_5, _gate_q_12;
  csdg _gate_q_7, _gate_q_13;
  crx(3.973272236286142) _gate_q_8, _gate_q_15;
  ecr _gate_q_11, _gate_q_3;
  crz(4.781317811773774) _gate_q_1, _gate_q_16;
  rx(5.5536422813812045) _gate_q_0;
  u3(0.9266547373959461, 3.8822087521858517, 4.962344424037522) _gate_q_14;
  rz(4.245876285807353) _gate_q_6;
  x _gate_q_4;
  rz(5.435133268987536) _gate_q_10;
  z _gate_q_16;
  cu(2.2327684250598936, 2.269774283166288, 2.231883148461851, 3.057403380228364) _gate_q_6, _gate_q_0;
  y _gate_q_1;
  h _gate_q_14;
  rzx_5107319248(5.444658294350845) _gate_q_13, _gate_q_5;
  cu(6.22606257398699, 4.715703135816354, 3.29547672960839, 3.6931147630856564) _gate_q_12, _gate_q_15;
  cy _gate_q_3, _gate_q_9;
  ch _gate_q_8, _gate_q_4;
  cz _gate_q_7, _gate_q_11;
  x _gate_q_2;
  sxdg _gate_q_11;
  rzz_5107323376(1.796211180653318) _gate_q_12, _gate_q_4;
  dcx _gate_q_2, _gate_q_8;
  ry(3.997064571891873) _gate_q_15;
  ecr _gate_q_13, _gate_q_0;
  cp(0.2273350778116851) _gate_q_1, _gate_q_10;
  cu(1.4602113790225955, 3.919646483420782, 2.052395643883013, 4.184142520116134) _gate_q_3, _gate_q_6;
  cu3_5107321744(5.996325088330738, 4.289695795067118, 3.822672253313536) _gate_q_5, _gate_q_14;
  rz(4.854366122051476) _gate_q_9;
  id _gate_q_7;
  p(3.414889351780894) _gate_q_16;
}