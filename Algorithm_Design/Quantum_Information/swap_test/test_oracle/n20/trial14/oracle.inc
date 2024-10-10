gate rzz_5072319744(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0826159234761905) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5072315280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.060041507601774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5072322480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.200151590550128) _gate_q_1;
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
gate ryy_5072314800(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.993763116446441) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072322000(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8110199291397926) _gate_q_0;
  u1(-1.7500871092118286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.101161334785251, 0, -3.8110199291397926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.101161334785251, 5.561107038351621, 0) _gate_q_1;
}
gate rxx_5072308848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7936802632525883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072320080(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.248914192966498) _gate_q_0;
  u1(1.3183101306247638) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.08543007642416905, 0, -3.248914192966498) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.08543007642416905, 1.9306040623417342, 0) _gate_q_1;
}
gate r_5072307168(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2575283829493134, 2.663526473373996, -2.663526473373996) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5072320464(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.404904073744926) _gate_q_0;
  u1(-0.5359248494557389) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8194594047409802, 0, -4.404904073744926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8194594047409802, 4.940828923200665, 0) _gate_q_1;
}
gate cu1_5072321088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2022250951745526) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2022250951745526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2022250951745526) _gate_q_1;
}
gate ryy_5072321712(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9497185766534124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074130640(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.0233659932799955, 0.10126039500612594, -0.10126039500612594) _gate_q_0;
}
gate xx_minus_yy_5072322432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7094624500347764) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2358075145266847) _gate_q_0;
  ry(-2.2358075145266847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7094624500347764) _gate_q_1;
}
gate xx_plus_yy_5072309904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.720899520927021) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.38229870140438443) _gate_q_1;
  ry(-0.38229870140438443) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.720899520927021) _gate_q_0;
}
gate rzz_5072308176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8369072567322267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5072314752(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.4656138620269295) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.743922729059539) _gate_q_1;
  ry(-1.743922729059539) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.4656138620269295) _gate_q_0;
}
gate rzz_5072319456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.049181870527992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072312112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5444339568473273) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072311488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.264169460088238) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.038078298480610506) _gate_q_0;
  ry(-0.038078298480610506) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.264169460088238) _gate_q_1;
}
gate xx_minus_yy_5072308512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.447842798747493) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1811844907164066) _gate_q_0;
  ry(-1.1811844907164066) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.447842798747493) _gate_q_1;
}
gate r_5072307264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7597736725034605, 3.5292877182650333, -3.5292877182650333) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  sx _gate_q_1;
  rzz_5072319744(1.0826159234761905) _gate_q_11, _gate_q_19;
  dcx _gate_q_5, _gate_q_14;
  ch _gate_q_2, _gate_q_10;
  p(2.933639943249179) _gate_q_0;
  cx _gate_q_3, _gate_q_17;
  x _gate_q_12;
  h _gate_q_13;
  p(3.55714997785021) _gate_q_15;
  cy _gate_q_18, _gate_q_16;
  p(4.722554277668806) _gate_q_6;
  cp(4.994782153411967) _gate_q_8, _gate_q_7;
  rzx_5072315280(2.060041507601774) _gate_q_9, _gate_q_4;
  cry(2.175642715264304) _gate_q_16, _gate_q_10;
  sdg _gate_q_3;
  crz(5.46679517139865) _gate_q_12, _gate_q_7;
  ry(4.710478639446723) _gate_q_9;
  sdg _gate_q_5;
  cx _gate_q_18, _gate_q_6;
  t _gate_q_11;
  p(0.1802436577450411) _gate_q_4;
  sxdg _gate_q_14;
  dcx _gate_q_8, _gate_q_19;
  rxx_5072322480(5.200151590550128) _gate_q_0, _gate_q_1;
  cs _gate_q_2, _gate_q_15;
  cry(3.018316731462328) _gate_q_13, _gate_q_17;
  cx _gate_q_10, _gate_q_3;
  cy _gate_q_2, _gate_q_14;
  t _gate_q_11;
  y _gate_q_16;
  s _gate_q_7;
  rz(5.860325521173098) _gate_q_0;
  cry(3.7726456007189713) _gate_q_4, _gate_q_6;
  id _gate_q_1;
  csx _gate_q_15, _gate_q_9;
  t _gate_q_19;
  cz _gate_q_5, _gate_q_18;
  cy _gate_q_8, _gate_q_13;
  rz(3.5489148544589604) _gate_q_12;
  y _gate_q_17;
  ryy_5072314800(4.993763116446441) _gate_q_11, _gate_q_9;
  cp(0.7998352298176714) _gate_q_8, _gate_q_10;
  cry(1.3814171063456895) _gate_q_17, _gate_q_0;
  cz _gate_q_1, _gate_q_6;
  sx _gate_q_13;
  p(0.5246249455294765) _gate_q_2;
  s _gate_q_4;
  u1(0.5466205563786655) _gate_q_12;
  U(2.223506291279897, 0.39219985774185917, 0.9555291043751896) _gate_q_5;
  cu3_5072322000(4.202322669570502, 5.561107038351621, 2.060932819927964) _gate_q_19, _gate_q_16;
  y _gate_q_18;
  id _gate_q_15;
  cx _gate_q_14, _gate_q_3;
  s _gate_q_7;
  rxx_5072308848(2.7936802632525883) _gate_q_17, _gate_q_11;
  rx(2.3975782552115885) _gate_q_0;
  cu3_5072320080(0.1708601528483381, 1.9306040623417342, 4.567224323591262) _gate_q_12, _gate_q_4;
  p(0.5586953881148399) _gate_q_8;
  cz _gate_q_7, _gate_q_15;
  r_5072307168(3.2575283829493134, 4.234322800168893) _gate_q_2;
  cz _gate_q_16, _gate_q_18;
  y _gate_q_3;
  cz _gate_q_6, _gate_q_9;
  u2(2.684692597902815, 3.9429477959310923) _gate_q_13;
  u1(0.1731511144202497) _gate_q_5;
  iswap _gate_q_1, _gate_q_19;
  h _gate_q_14;
  sx _gate_q_10;
  dcx _gate_q_7, _gate_q_3;
  cu3_5072320464(3.6389188094819604, 4.940828923200665, 3.868979224289187) _gate_q_5, _gate_q_10;
  tdg _gate_q_4;
  h _gate_q_9;
  sx _gate_q_6;
  t _gate_q_13;
  ry(2.82484157102016) _gate_q_19;
  cy _gate_q_8, _gate_q_1;
  swap _gate_q_2, _gate_q_14;
  cu1_5072321088(4.404450190349105) _gate_q_11, _gate_q_16;
  sx _gate_q_18;
  U(5.780811181953622, 2.506328377158895, 4.064068132673685) _gate_q_17;
  crz(5.777743810563407) _gate_q_15, _gate_q_0;
  x _gate_q_12;
  rz(5.92953753582749) _gate_q_13;
  sx _gate_q_0;
  cry(3.1903044528155102) _gate_q_8, _gate_q_11;
  cp(3.339051616665433) _gate_q_16, _gate_q_12;
  cry(4.510535443698283) _gate_q_2, _gate_q_3;
  ryy_5072321712(2.9497185766534124) _gate_q_6, _gate_q_19;
  cu(1.6012104062386017, 2.3193480932605346, 5.6708524291546905, 4.561778767044004) _gate_q_5, _gate_q_10;
  iswap _gate_q_7, _gate_q_1;
  id _gate_q_14;
  cu(4.9133021808855295, 3.6181579642091872, 0.45389108851395626, 3.8177208791372244) _gate_q_15, _gate_q_4;
  r_5074130640(0.0233659932799955, 1.6720567218010225) _gate_q_18;
  xx_minus_yy_5072322432(4.471615029053369, 3.7094624500347764) _gate_q_17, _gate_q_9;
  cx _gate_q_4, _gate_q_5;
  t _gate_q_1;
  xx_plus_yy_5072309904(0.7645974028087689, 3.720899520927021) _gate_q_0, _gate_q_15;
  sxdg _gate_q_12;
  u3(3.514242581276331, 3.491704718112831, 3.440090934978449) _gate_q_9;
  rzz_5072308176(3.8369072567322267) _gate_q_18, _gate_q_13;
  sx _gate_q_7;
  y _gate_q_19;
  crz(0.4354481720228985) _gate_q_17, _gate_q_10;
  u3(0.9337858842308764, 4.521728053126257, 5.774912094044358) _gate_q_8;
  sdg _gate_q_3;
  cu(5.418884078454908, 5.6384140221477415, 2.777523049468143, 5.115714644482735) _gate_q_2, _gate_q_16;
  swap _gate_q_6, _gate_q_11;
  sxdg _gate_q_14;
  sxdg _gate_q_6;
  dcx _gate_q_7, _gate_q_18;
  ch _gate_q_0, _gate_q_3;
  y _gate_q_9;
  sxdg _gate_q_8;
  csdg _gate_q_11, _gate_q_13;
  x _gate_q_1;
  cy _gate_q_19, _gate_q_5;
  xx_plus_yy_5072314752(3.487845458119078, 0.4656138620269295) _gate_q_14, _gate_q_2;
  rzz_5072319456(2.049181870527992) _gate_q_10, _gate_q_17;
  rzx_5072312112(3.5444339568473273) _gate_q_16, _gate_q_15;
  tdg _gate_q_4;
  sxdg _gate_q_12;
  h _gate_q_5;
  u2(5.554089505957636, 2.651112000235617) _gate_q_10;
  xx_minus_yy_5072311488(0.07615659696122101, 2.264169460088238) _gate_q_19, _gate_q_17;
  x _gate_q_8;
  z _gate_q_1;
  z _gate_q_9;
  cu(2.9737256580711198, 6.175650678801674, 4.9789694669509155, 5.61262864358561) _gate_q_6, _gate_q_12;
  sx _gate_q_14;
  id _gate_q_0;
  xx_minus_yy_5072308512(2.3623689814328133, 1.447842798747493) _gate_q_4, _gate_q_2;
  r_5072307264(2.7597736725034605, 5.10008404505993) _gate_q_7;
  sxdg _gate_q_11;
  cry(4.635315601780265) _gate_q_15, _gate_q_13;
  csx _gate_q_18, _gate_q_16;
  sdg _gate_q_3;
}
gate r_5072314992(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7040662521914536, -0.47629399208392376, 0.47629399208392376) _gate_q_0;
}
gate rxx_5072321184(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.251037377315022) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072308368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.319610359288709) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.127575094592002) _gate_q_0;
  ry(-2.127575094592002) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.319610359288709) _gate_q_1;
}
gate cu3_5072309040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.019905868893051) _gate_q_0;
  u1(-1.360612433432888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0420628586643235, 0, -4.019905868893051) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0420628586643235, 5.38051830232594, 0) _gate_q_1;
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
gate rzx_5072321232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0254828383372825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072311296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.667996127142875, 4.4555640298198025, -4.4555640298198025) _gate_q_0;
}
gate cu1_5072307456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6650754817485707) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6650754817485707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6650754817485707) _gate_q_1;
}
gate r_5072307552(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.36649435636668753, 0.8973179728844065, -0.8973179728844065) _gate_q_0;
}
gate rxx_5072320656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.034129338596112) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072310432(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8697002403419273) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8697002403419273) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8697002403419273) _gate_q_1;
}
gate ryy_5072317728(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.688839108897039) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072319600(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3275060652218014) _gate_q_0;
  u1(1.2130500617731967) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8297712277170006, 0, -3.3275060652218014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8297712277170006, 2.1144560034486046, 0) _gate_q_1;
}
gate rzz_5072312544(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.357622519475423) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072317200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4460833754506166) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4460833754506166) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4460833754506166) _gate_q_1;
}
gate rxx_5072316576(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2675311989168923) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072317632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.6028517892420067) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3998775461249546) _gate_q_0;
  ry(-2.3998775461249546) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.6028517892420067) _gate_q_1;
}
gate cu1_5072311104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.47001570833908873) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.47001570833908873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.47001570833908873) _gate_q_1;
}
gate cu1_5072314944(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.529164289164289) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.529164289164289) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.529164289164289) _gate_q_1;
}
gate r_5072317488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1801308398420773, 4.387006608718966, -4.387006608718966) _gate_q_0;
}
gate rzz_5072321904(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5963442782631017) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072312016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.197758536577182) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072308416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2310158613121156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072309712(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.3818469271161655, 1.1632205451080595, -1.1632205451080595) _gate_q_0;
}
gate rzx_5072315376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5674520738630564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072320752(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.16370833032630422) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.16370833032630422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.16370833032630422) _gate_q_1;
}
gate ryy_5072307504(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.16204207615304336) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072315184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6826468855581477) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6826468855581477) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6826468855581477) _gate_q_1;
}
gate cu1_5072316480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.064248716571174) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.064248716571174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.064248716571174) _gate_q_1;
}
gate cu3_5072322384(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.5958008403485499) _gate_q_0;
  u1(0.047251730974209205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5627646656494536, 0, -0.5958008403485499) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5627646656494536, 0.5485491093743406, 0) _gate_q_1;
}
gate rzx_5072312976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0769691774106342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072312640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.588069823537391) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  r_5072314992(2.7040662521914536, 1.0945023347109728) _gate_q_13;
  y _gate_q_12;
  cu(1.5520621366063998, 3.172039246457299, 5.530090467498523, 2.0220528204333723) _gate_q_14, _gate_q_17;
  u1(2.756547566641003) _gate_q_1;
  sx _gate_q_5;
  rxx_5072321184(4.251037377315022) _gate_q_2, _gate_q_9;
  u3(4.052090485058443, 2.059413541586206, 0.4473661949349781) _gate_q_7;
  u1(6.214341869324468) _gate_q_19;
  ch _gate_q_8, _gate_q_0;
  ry(3.3009523851078373) _gate_q_16;
  xx_minus_yy_5072308368(4.255150189184004, 2.319610359288709) _gate_q_3, _gate_q_4;
  sxdg _gate_q_15;
  u1(1.7670253819159483) _gate_q_18;
  cu3_5072309040(2.084125717328647, 5.38051830232594, 2.659293435460164) _gate_q_11, _gate_q_6;
  u3(0.8876155700593311, 0.8879757140177654, 4.75868822871673) _gate_q_10;
  ecr _gate_q_2, _gate_q_8;
  swap _gate_q_7, _gate_q_1;
  u3(5.589216061504182, 2.724073813606992, 3.2254305785296986) _gate_q_0;
  rzx_5072321232(2.0254828383372825) _gate_q_9, _gate_q_3;
  sxdg _gate_q_4;
  r_5072311296(3.667996127142875, 6.026360356614699) _gate_q_18;
  csx _gate_q_12, _gate_q_15;
  sdg _gate_q_6;
  cp(2.4392042211979605) _gate_q_11, _gate_q_16;
  cu(2.4090106313535533, 2.788274765163517, 1.850935986578265, 2.5907448256566594) _gate_q_17, _gate_q_13;
  dcx _gate_q_19, _gate_q_14;
  z _gate_q_10;
  rz(1.6893700539886063) _gate_q_5;
  t _gate_q_14;
  cy _gate_q_9, _gate_q_7;
  cu1_5072307456(3.3301509634971413) _gate_q_19, _gate_q_17;
  id _gate_q_0;
  cu(0.6183137866294934, 2.644996803044308, 4.153480811414855, 0.300543852428704) _gate_q_1, _gate_q_11;
  t _gate_q_13;
  cx _gate_q_3, _gate_q_12;
  r_5072307552(0.36649435636668753, 2.468114299679303) _gate_q_6;
  crx(4.4184463937600515) _gate_q_18, _gate_q_5;
  id _gate_q_8;
  p(6.087882011199155) _gate_q_2;
  ch _gate_q_4, _gate_q_10;
  rxx_5072320656(4.034129338596112) _gate_q_15, _gate_q_16;
  cu(5.167218257387407, 6.266851426581111, 0.7413696942203569, 4.14314119881947) _gate_q_18, _gate_q_4;
  crx(4.6429333943927995) _gate_q_17, _gate_q_13;
  s _gate_q_12;
  cu1_5072310432(1.7394004806838546) _gate_q_16, _gate_q_10;
  ryy_5072317728(5.688839108897039) _gate_q_9, _gate_q_8;
  cz _gate_q_2, _gate_q_14;
  cs _gate_q_11, _gate_q_5;
  cu3_5072319600(3.6595424554340013, 2.1144560034486046, 4.540556126994998) _gate_q_15, _gate_q_3;
  ch _gate_q_6, _gate_q_19;
  rzz_5072312544(4.357622519475423) _gate_q_0, _gate_q_1;
  sxdg _gate_q_7;
  u3(5.134389421941299, 5.490641572819861, 5.196031028085529) _gate_q_3;
  iswap _gate_q_16, _gate_q_8;
  cu1_5072317200(4.892166750901233) _gate_q_4, _gate_q_5;
  csdg _gate_q_9, _gate_q_18;
  crz(1.4555438141479822) _gate_q_14, _gate_q_13;
  rxx_5072316576(3.2675311989168923) _gate_q_17, _gate_q_12;
  z _gate_q_7;
  xx_minus_yy_5072317632(4.799755092249909, 2.6028517892420067) _gate_q_11, _gate_q_1;
  cu1_5072311104(0.9400314166781775) _gate_q_0, _gate_q_10;
  cu1_5072314944(1.058328578328578) _gate_q_15, _gate_q_2;
  z _gate_q_6;
  tdg _gate_q_19;
  u2(0.3383202481407068, 4.41468069839423) _gate_q_17;
  swap _gate_q_9, _gate_q_8;
  ecr _gate_q_5, _gate_q_15;
  ch _gate_q_6, _gate_q_0;
  csdg _gate_q_11, _gate_q_1;
  r_5072317488(1.1801308398420773, 5.957802935513863) _gate_q_3;
  rzz_5072321904(2.5963442782631017) _gate_q_4, _gate_q_13;
  crz(4.727571044291152) _gate_q_12, _gate_q_19;
  csdg _gate_q_14, _gate_q_16;
  t _gate_q_2;
  tdg _gate_q_10;
  z _gate_q_7;
  sx _gate_q_18;
  ch _gate_q_14, _gate_q_15;
  dcx _gate_q_11, _gate_q_4;
  cz _gate_q_18, _gate_q_7;
  cp(2.2219250660634113) _gate_q_16, _gate_q_13;
  tdg _gate_q_9;
  p(2.202066408440434) _gate_q_1;
  cp(5.22453515577946) _gate_q_12, _gate_q_17;
  rxx_5072312016(4.197758536577182) _gate_q_3, _gate_q_19;
  sx _gate_q_2;
  u1(2.627251886990685) _gate_q_6;
  dcx _gate_q_10, _gate_q_8;
  rz(3.445133437838483) _gate_q_5;
  tdg _gate_q_0;
  s _gate_q_9;
  cu(0.46637150921741444, 0.8721339015732169, 4.0420671385514195, 1.2599231399757813) _gate_q_8, _gate_q_18;
  cp(4.227131143090503) _gate_q_0, _gate_q_5;
  x _gate_q_4;
  rzz_5072308416(1.2310158613121156) _gate_q_12, _gate_q_2;
  cx _gate_q_19, _gate_q_3;
  t _gate_q_15;
  r_5072309712(4.3818469271161655, 2.734016871902956) _gate_q_14;
  rzx_5072315376(0.5674520738630564) _gate_q_1, _gate_q_10;
  crx(1.8476168111455356) _gate_q_7, _gate_q_16;
  csx _gate_q_11, _gate_q_17;
  s _gate_q_13;
  z _gate_q_6;
  p(4.867976171570909) _gate_q_6;
  rz(2.490925649355471) _gate_q_7;
  swap _gate_q_3, _gate_q_10;
  swap _gate_q_4, _gate_q_16;
  t _gate_q_14;
  cz _gate_q_5, _gate_q_8;
  crz(6.153489085005412) _gate_q_11, _gate_q_1;
  t _gate_q_12;
  cu1_5072320752(0.32741666065260844) _gate_q_15, _gate_q_13;
  rz(4.55139775826716) _gate_q_9;
  ryy_5072307504(0.16204207615304336) _gate_q_17, _gate_q_0;
  z _gate_q_19;
  x _gate_q_2;
  ry(0.20293208231569498) _gate_q_18;
  crz(6.20702860859815) _gate_q_8, _gate_q_14;
  cu1_5072315184(1.3652937711162954) _gate_q_18, _gate_q_11;
  cu1_5072316480(4.128497433142348) _gate_q_16, _gate_q_17;
  s _gate_q_1;
  t _gate_q_15;
  cu3_5072322384(3.125529331298907, 0.5485491093743406, 0.6430525713227591) _gate_q_10, _gate_q_12;
  rzx_5072312976(2.0769691774106342) _gate_q_5, _gate_q_2;
  sdg _gate_q_6;
  u1(1.2338585058042246) _gate_q_7;
  ch _gate_q_19, _gate_q_9;
  sdg _gate_q_3;
  u3(4.636042045076123, 2.5425757439660424, 3.2200222721444134) _gate_q_13;
  rxx_5072312640(4.588069823537391) _gate_q_0, _gate_q_4;
}