gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5104283248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.573387355857183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5104274944(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1095532325708404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5104285888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8581271236494511) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.321389055281674) _gate_q_0;
  ry(-0.321389055281674) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8581271236494511) _gate_q_1;
}
gate cu3_5104282048(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.441891758476472) _gate_q_0;
  u1(2.415940302447752) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5637984701626824, 0, -3.441891758476472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5637984701626824, 1.0259514560287195, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5104277872(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5401768431495194) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5104282096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.123577527551728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5104287520(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.283157307794821) _gate_q_0;
  u1(-0.8691866160074438) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.27985381305810425, 0, -2.283157307794821) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.27985381305810425, 3.1523439238022646, 0) _gate_q_1;
}
gate rzz_5104283392(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.775853036175023) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5104283344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4702896724730987) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5104284160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.089808271952633) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.118320596706545) _gate_q_1;
  ry(-2.118320596706545) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.089808271952633) _gate_q_0;
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
gate xx_minus_yy_5104284784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.23913050280511) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8117671163107965) _gate_q_0;
  ry(-1.8117671163107965) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.23913050280511) _gate_q_1;
}
gate r_5104276192(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.115153151841726, 2.102059261511827, -2.102059261511827) _gate_q_0;
}
gate rzx_5104273168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.248910048485757) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5104279840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.068028766753394) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.068028766753394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.068028766753394) _gate_q_1;
}
gate r_5104277200(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.524303467601182, -0.6922350010535593, 0.6922350010535593) _gate_q_0;
}
gate xx_plus_yy_5104278112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.270330601178661) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8411371140333738) _gate_q_1;
  ry(-0.8411371140333738) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.270330601178661) _gate_q_0;
}
gate cu1_5104272064(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.746217480657817) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.746217480657817) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.746217480657817) _gate_q_1;
}
gate rzx_5104282720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7759808327896556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5104286032(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.437247337630552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5104274416(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.84803384780277) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.84803384780277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.84803384780277) _gate_q_1;
}
gate xx_plus_yy_5104279984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.3978201990693624) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7047437900941405) _gate_q_1;
  ry(-1.7047437900941405) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.3978201990693624) _gate_q_0;
}
gate rzx_5104275712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.931893347645194) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5104286464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.984642702020379, -1.2618142192904052, 1.2618142192904052) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  iswap _gate_q_12, _gate_q_9;
  rzz_5104283248(4.573387355857183) _gate_q_0, _gate_q_4;
  dcx _gate_q_2, _gate_q_6;
  u1(0.8328122091813798) _gate_q_11;
  U(1.7188574176727343, 0.2901764763378146, 3.0169963451230655) _gate_q_7;
  ryy_5104274944(3.1095532325708404) _gate_q_1, _gate_q_8;
  cx _gate_q_3, _gate_q_5;
  cry(0.14841419734069916) _gate_q_15, _gate_q_14;
  h _gate_q_13;
  tdg _gate_q_10;
  xx_minus_yy_5104285888(0.642778110563348, 0.8581271236494511) _gate_q_9, _gate_q_13;
  dcx _gate_q_5, _gate_q_15;
  u3(3.4121508859497154, 0.8125235782454603, 2.961243492496983) _gate_q_12;
  cu3_5104282048(3.1275969403253647, 1.0259514560287195, 5.857832060924224) _gate_q_8, _gate_q_2;
  csdg _gate_q_6, _gate_q_10;
  rx(3.9637102778916447) _gate_q_1;
  rzz_5104277872(0.5401768431495194) _gate_q_7, _gate_q_14;
  cy _gate_q_3, _gate_q_0;
  rxx_5104282096(5.123577527551728) _gate_q_4, _gate_q_11;
  cx _gate_q_15, _gate_q_0;
  u1(4.784194863871901) _gate_q_3;
  cu3_5104287520(0.5597076261162085, 3.1523439238022646, 1.4139706917873769) _gate_q_13, _gate_q_8;
  sx _gate_q_14;
  rx(1.1920653903395693) _gate_q_1;
  rzz_5104283392(4.775853036175023) _gate_q_5, _gate_q_6;
  z _gate_q_9;
  dcx _gate_q_12, _gate_q_7;
  rx(0.18302446696226754) _gate_q_4;
  cs _gate_q_11, _gate_q_10;
  U(2.906299670156958, 2.805222462201105, 3.631747099774932) _gate_q_2;
  rxx_5104283344(2.4702896724730987) _gate_q_2, _gate_q_0;
  tdg _gate_q_14;
  id _gate_q_4;
  t _gate_q_11;
  xx_plus_yy_5104284160(4.23664119341309, 3.089808271952633) _gate_q_6, _gate_q_9;
  x _gate_q_3;
  s _gate_q_15;
  h _gate_q_10;
  id _gate_q_8;
  U(2.1862099047313155, 4.953699701344504, 2.228254313324831) _gate_q_1;
  u1(0.5373876050435425) _gate_q_5;
  ecr _gate_q_12, _gate_q_13;
  rx(1.3632225516299217) _gate_q_7;
  s _gate_q_0;
  x _gate_q_3;
  csdg _gate_q_2, _gate_q_5;
  U(2.8663356128861897, 4.111708051860794, 4.502632718290628) _gate_q_14;
  p(1.1010651664861346) _gate_q_7;
  rz(2.8222145776627663) _gate_q_12;
  xx_minus_yy_5104284784(3.623534232621593, 5.23913050280511) _gate_q_15, _gate_q_6;
  ch _gate_q_9, _gate_q_4;
  r_5104276192(6.115153151841726, 3.6728555883067235) _gate_q_1;
  rzx_5104273168(5.248910048485757) _gate_q_13, _gate_q_10;
  cx _gate_q_11, _gate_q_8;
  y _gate_q_6;
  rx(0.407869471714151) _gate_q_2;
  dcx _gate_q_7, _gate_q_5;
  swap _gate_q_14, _gate_q_1;
  crz(1.7164966761504488) _gate_q_8, _gate_q_13;
  csdg _gate_q_10, _gate_q_4;
  t _gate_q_12;
  swap _gate_q_11, _gate_q_9;
  iswap _gate_q_3, _gate_q_0;
  s _gate_q_15;
  cx _gate_q_8, _gate_q_4;
  cu1_5104279840(6.136057533506788) _gate_q_14, _gate_q_0;
  U(0.4045038368444235, 6.2769801833065655, 2.655428068709975) _gate_q_3;
  r_5104277200(0.524303467601182, 0.8785613257413373) _gate_q_2;
  ecr _gate_q_11, _gate_q_1;
  xx_plus_yy_5104278112(1.6822742280667475, 5.270330601178661) _gate_q_10, _gate_q_5;
  p(4.83931979882397) _gate_q_7;
  s _gate_q_9;
  crz(0.5800871173095037) _gate_q_15, _gate_q_12;
  crx(2.7792960965997953) _gate_q_6, _gate_q_13;
  u2(0.7228429542784073, 3.817904380336718) _gate_q_8;
  cry(0.6844224408476637) _gate_q_14, _gate_q_6;
  cy _gate_q_12, _gate_q_2;
  ecr _gate_q_4, _gate_q_9;
  u3(0.1851770869753224, 1.7227315285539593, 2.339353540990195) _gate_q_15;
  dcx _gate_q_11, _gate_q_5;
  cz _gate_q_3, _gate_q_7;
  cy _gate_q_0, _gate_q_10;
  cu1_5104272064(5.492434961315634) _gate_q_1, _gate_q_13;
  rz(1.637520138381133) _gate_q_8;
  ry(1.1884092932186485) _gate_q_6;
  rzx_5104282720(2.7759808327896556) _gate_q_14, _gate_q_9;
  u1(5.374093534633453) _gate_q_0;
  rzz_5104286032(5.437247337630552) _gate_q_7, _gate_q_15;
  crz(0.08743109993279327) _gate_q_10, _gate_q_5;
  cu1_5104274416(5.69606769560554) _gate_q_2, _gate_q_11;
  u1(0.3582433533845499) _gate_q_4;
  ch _gate_q_13, _gate_q_12;
  ry(4.460431670015901) _gate_q_1;
  s _gate_q_3;
  s _gate_q_6;
  xx_plus_yy_5104279984(3.409487580188281, 0.3978201990693624) _gate_q_15, _gate_q_12;
  z _gate_q_5;
  tdg _gate_q_1;
  iswap _gate_q_8, _gate_q_11;
  rzx_5104275712(5.931893347645194) _gate_q_4, _gate_q_13;
  r_5104286464(2.984642702020379, 0.30898210750449134) _gate_q_3;
  u2(1.9111740583699346, 6.196746370587921) _gate_q_9;
  u1(5.6314292911500745) _gate_q_14;
  cu(5.786655909336264, 5.513728496050611, 2.629924851670742, 1.6588148102730795) _gate_q_10, _gate_q_2;
  sdg _gate_q_0;
  sx _gate_q_7;
}
gate cu3_5104281952(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.702434564420365) _gate_q_0;
  u1(-0.282944470934527) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.620030961188954, 0, -4.702434564420365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.620030961188954, 4.9853790353548915, 0) _gate_q_1;
}
gate cu1_5104274752(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8624003002417135) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8624003002417135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8624003002417135) _gate_q_1;
}
gate rzz_5104280128(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8041943831836256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5104278640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9584013588941387) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9584013588941387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9584013588941387) _gate_q_1;
}
gate r_5104276000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.681103510612826, -0.8375723951561598, 0.8375723951561598) _gate_q_0;
}
gate ryy_5104274080(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6901019747648127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5104274464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3506494308787056) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3506494308787056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3506494308787056) _gate_q_1;
}
gate rxx_5104285168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.245471770829764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5104281328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.891456355611556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5104274032(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6092845084644352) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6092845084644352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6092845084644352) _gate_q_1;
}
gate ryy_5104277920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2358396592037564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5104278544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.079204251070939) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.816590174272091) _gate_q_0;
  ry(-2.816590174272091) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.079204251070939) _gate_q_1;
}
gate r_5104284496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.767384211319898, -0.12882547413607237, 0.12882547413607237) _gate_q_0;
}
gate ryy_5104272160(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.1343941874975405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5104279072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.957797476152205, -1.4038179390285794, 1.4038179390285794) _gate_q_0;
}
gate ryy_5104284208(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.599432112791721) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5104285840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.193473494648847, 1.2590576740213306, -1.2590576740213306) _gate_q_0;
}
gate rzx_5104287424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.148669190830961) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5104276768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6610235100071096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5104281568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2999783044148694) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7460654070838468) _gate_q_0;
  ry(-0.7460654070838468) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2999783044148694) _gate_q_1;
}
gate rzz_5104275616(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.396836206275701) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5104277008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.820988505453485) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6064447858612586) _gate_q_0;
  ry(-0.6064447858612586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.820988505453485) _gate_q_1;
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
gate r_5104272736(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.9734773569187273, -0.6129022107983122, 0.6129022107983122) _gate_q_0;
}
gate cu1_5104281280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.896469808218135) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.896469808218135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.896469808218135) _gate_q_1;
}
gate rzz_5104274896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3128754645881027) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  rx(3.470423839099656) _gate_q_4;
  cu3_5104281952(5.240061922377908, 4.9853790353548915, 4.419490093485837) _gate_q_3, _gate_q_8;
  t _gate_q_2;
  cu1_5104274752(3.724800600483427) _gate_q_10, _gate_q_15;
  dcx _gate_q_6, _gate_q_5;
  cu(0.11406574205546027, 2.6009206964259777, 2.668868952269582, 5.310069003684088) _gate_q_9, _gate_q_11;
  rzz_5104280128(2.8041943831836256) _gate_q_1, _gate_q_7;
  t _gate_q_14;
  cu1_5104278640(3.9168027177882774) _gate_q_13, _gate_q_0;
  r_5104276000(4.681103510612826, 0.7332239316387368) _gate_q_12;
  t _gate_q_1;
  U(2.1811414037907753, 1.1598676318127956, 4.191815470368224) _gate_q_7;
  rz(2.664053119868307) _gate_q_6;
  cry(1.5267314768580575) _gate_q_15, _gate_q_13;
  x _gate_q_10;
  cx _gate_q_11, _gate_q_4;
  rz(4.823706632899101) _gate_q_9;
  cu(0.33515052554879654, 2.22717698370775, 0.5102157151094159, 0.8470468612705259) _gate_q_12, _gate_q_14;
  ryy_5104274080(2.6901019747648127) _gate_q_5, _gate_q_3;
  dcx _gate_q_8, _gate_q_2;
  rz(2.0617703922926633) _gate_q_0;
  cu(5.435665987439831, 0.12482615543171438, 1.1723351281093173, 4.441748792483468) _gate_q_11, _gate_q_2;
  rz(5.344336116442882) _gate_q_7;
  cu1_5104274464(2.701298861757411) _gate_q_8, _gate_q_9;
  u1(2.4511551736092168) _gate_q_14;
  s _gate_q_5;
  rxx_5104285168(6.245471770829764) _gate_q_15, _gate_q_4;
  x _gate_q_0;
  cry(1.5880605687090825) _gate_q_1, _gate_q_12;
  x _gate_q_3;
  ry(2.0213528450080314) _gate_q_6;
  u2(0.7451168575945716, 0.16227179738940378) _gate_q_13;
  h _gate_q_10;
  u1(5.807857548088117) _gate_q_11;
  id _gate_q_0;
  cy _gate_q_3, _gate_q_2;
  u3(1.6611337211578954, 1.6128470032562434, 5.208587358483378) _gate_q_12;
  rxx_5104281328(4.891456355611556) _gate_q_1, _gate_q_6;
  cs _gate_q_15, _gate_q_5;
  csdg _gate_q_8, _gate_q_14;
  cu1_5104274032(3.2185690169288703) _gate_q_7, _gate_q_13;
  ryy_5104277920(2.2358396592037564) _gate_q_4, _gate_q_10;
  z _gate_q_9;
  xx_minus_yy_5104278544(5.633180348544182, 6.079204251070939) _gate_q_8, _gate_q_13;
  sdg _gate_q_11;
  p(4.365740231373951) _gate_q_4;
  swap _gate_q_0, _gate_q_14;
  cy _gate_q_10, _gate_q_9;
  r_5104284496(5.767384211319898, 1.4419708526588242) _gate_q_15;
  swap _gate_q_2, _gate_q_1;
  csdg _gate_q_5, _gate_q_7;
  ryy_5104272160(5.1343941874975405) _gate_q_6, _gate_q_3;
  r_5104279072(5.957797476152205, 0.16697838776631715) _gate_q_12;
  tdg _gate_q_5;
  y _gate_q_14;
  iswap _gate_q_11, _gate_q_12;
  cu(0.8014807424053283, 1.580197362975618, 1.7704554913415942, 4.169081329463584) _gate_q_9, _gate_q_10;
  U(4.354245011681897, 0.8993145120225761, 2.940612891147439) _gate_q_0;
  cp(4.392031241424401) _gate_q_3, _gate_q_8;
  sx _gate_q_6;
  u3(3.4812874449159725, 0.37559965324243905, 2.0421177385147873) _gate_q_4;
  ryy_5104284208(5.599432112791721) _gate_q_1, _gate_q_7;
  r_5104285840(4.193473494648847, 2.829854000816227) _gate_q_2;
  rzx_5104287424(2.148669190830961) _gate_q_13, _gate_q_15;
  id _gate_q_5;
  ecr _gate_q_4, _gate_q_9;
  ch _gate_q_7, _gate_q_13;
  cs _gate_q_3, _gate_q_15;
  rzx_5104276768(0.6610235100071096) _gate_q_0, _gate_q_8;
  u2(1.7700530503832208, 4.593662758907138) _gate_q_10;
  sx _gate_q_1;
  sx _gate_q_11;
  ch _gate_q_14, _gate_q_12;
  xx_minus_yy_5104281568(1.4921308141676937, 1.2999783044148694) _gate_q_2, _gate_q_6;
  cp(0.5486014771907688) _gate_q_7, _gate_q_8;
  tdg _gate_q_1;
  rzz_5104275616(4.396836206275701) _gate_q_2, _gate_q_10;
  crz(0.5082736605304388) _gate_q_15, _gate_q_3;
  ch _gate_q_5, _gate_q_0;
  ecr _gate_q_13, _gate_q_4;
  ecr _gate_q_14, _gate_q_11;
  xx_minus_yy_5104277008(1.2128895717225172, 5.820988505453485) _gate_q_9, _gate_q_12;
  y _gate_q_6;
  cy _gate_q_3, _gate_q_11;
  csx _gate_q_5, _gate_q_12;
  ch _gate_q_13, _gate_q_14;
  sx _gate_q_4;
  crx(5.029450241940918) _gate_q_0, _gate_q_9;
  cp(0.0783421543469723) _gate_q_2, _gate_q_1;
  cx _gate_q_7, _gate_q_15;
  s _gate_q_6;
  u1(2.0276595619920146) _gate_q_10;
  r_5104272736(0.9734773569187273, 0.9578941159965844) _gate_q_8;
  sdg _gate_q_15;
  iswap _gate_q_10, _gate_q_6;
  ry(4.847910119507251) _gate_q_2;
  crz(2.4815151000980102) _gate_q_8, _gate_q_1;
  x _gate_q_4;
  cu1_5104281280(3.79293961643627) _gate_q_11, _gate_q_12;
  z _gate_q_7;
  rzz_5104274896(1.3128754645881027) _gate_q_13, _gate_q_0;
  cs _gate_q_14, _gate_q_3;
  sx _gate_q_9;
  p(3.3538050293949553) _gate_q_5;
}