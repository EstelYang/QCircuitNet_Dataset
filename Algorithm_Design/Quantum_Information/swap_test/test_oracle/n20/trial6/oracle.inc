gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5106122048(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.645451298183468) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5106112208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.897631116815639) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5106122672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.355672563996178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107421584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8286421967549572) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8286421967549572) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8286421967549572) _gate_q_1;
}
gate rzx_5107428544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.67181726016318) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5107423504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.70148951714024) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5107445264(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.15936481872189048) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5107447952(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.5784065161049408) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5107434224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2700292086272267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107449776(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2223539411723245) _gate_q_0;
  u1(-2.5136405044804877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.778891579442956, 0, -3.2223539411723245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.778891579442956, 5.735994445652812, 0) _gate_q_1;
}
gate rxx_5107440896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2252458838985296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5107442096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.581962155146522, 4.252243611967654, -4.252243611967654) _gate_q_0;
}
gate rxx_5107440032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.971677013462511) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5107437344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5778092232883304) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5107447712(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.126834641871928) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5107437008(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6949449340470908) _gate_q_0;
  u1(1.6739660857917715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.888961641303515, 0, -1.6949449340470908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.888961641303515, 0.020978848255319125, 0) _gate_q_1;
}
gate cu1_5107442000(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.985852775951302) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.985852775951302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.985852775951302) _gate_q_1;
}
gate ryy_5107437056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.13774862622100043) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5107448288(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2758724765167573, 3.3380461321844157, -3.3380461321844157) _gate_q_0;
}
gate ryy_5107443584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0834352311410758) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5107445888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.161317137750301) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5107437152(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7953988868089608, -0.5819404347282509, 0.5819404347282509) _gate_q_0;
}
gate r_5107440848(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3491798476562016, -1.1504480629687772, 1.1504480629687772) _gate_q_0;
}
gate rzx_5107437920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0214812628344225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5107436240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.03327265198629214) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5743155027754487) _gate_q_0;
  ry(-1.5743155027754487) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.03327265198629214) _gate_q_1;
}
gate xx_minus_yy_5107440416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.029312287660566448) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.138830704360515) _gate_q_0;
  ry(-2.138830704360515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.029312287660566448) _gate_q_1;
}
gate xx_minus_yy_5107441136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.2686848659112241) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4238200013194717) _gate_q_0;
  ry(-2.4238200013194717) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.2686848659112241) _gate_q_1;
}
gate cu1_5107440176(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4239541052176141) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4239541052176141) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4239541052176141) _gate_q_1;
}
gate cu1_5107441856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5739247740192741) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5739247740192741) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5739247740192741) _gate_q_1;
}
gate ryy_5107446608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.0657395944033805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107440128(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2680467363040901) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate rxx_5107441328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3145617040399457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5107445744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3896645619608927, 2.1168087930338775, -2.1168087930338775) _gate_q_0;
}
gate cu1_5107436096(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.510406577528596) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.510406577528596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.510406577528596) _gate_q_1;
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
gate ryy_5107448576(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.456095804568929) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5107446032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9571145444232259) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.692630084271501) _gate_q_0;
  ry(-0.692630084271501) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9571145444232259) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  z _gate_q_0;
  u2(6.1375890636266215, 4.409062696527366) _gate_q_15;
  iswap _gate_q_11, _gate_q_3;
  cs _gate_q_12, _gate_q_4;
  y _gate_q_7;
  ryy_5106122048(5.645451298183468) _gate_q_18, _gate_q_10;
  y _gate_q_8;
  cp(2.542091218944745) _gate_q_6, _gate_q_17;
  cs _gate_q_14, _gate_q_5;
  cy _gate_q_9, _gate_q_13;
  rzx_5106112208(4.897631116815639) _gate_q_2, _gate_q_16;
  cu(0.38433908002626005, 4.288480082977029, 3.042083961719111, 3.4293135858154384) _gate_q_1, _gate_q_19;
  crz(2.6877926461814163) _gate_q_15, _gate_q_5;
  sx _gate_q_10;
  rzx_5106122672(5.355672563996178) _gate_q_6, _gate_q_11;
  cs _gate_q_12, _gate_q_2;
  cu1_5107421584(1.6572843935099144) _gate_q_18, _gate_q_1;
  U(1.588638183811838, 2.3723120597562706, 2.974152751446437) _gate_q_7;
  crz(2.2977428808506692) _gate_q_3, _gate_q_0;
  rzx_5107428544(1.67181726016318) _gate_q_9, _gate_q_8;
  cu(1.9868176827454491, 4.617258977092533, 0.9907911972932897, 4.215108063306823) _gate_q_17, _gate_q_19;
  rxx_5107423504(2.70148951714024) _gate_q_14, _gate_q_4;
  rz(1.742957977775194) _gate_q_16;
  rz(3.065794921338745) _gate_q_13;
  tdg _gate_q_16;
  id _gate_q_0;
  ryy_5107445264(0.15936481872189048) _gate_q_8, _gate_q_2;
  cs _gate_q_9, _gate_q_19;
  cs _gate_q_11, _gate_q_14;
  rzz_5107447952(3.5784065161049408) _gate_q_17, _gate_q_13;
  y _gate_q_4;
  tdg _gate_q_5;
  y _gate_q_3;
  iswap _gate_q_12, _gate_q_15;
  y _gate_q_1;
  dcx _gate_q_6, _gate_q_18;
  ry(3.1218587103927344) _gate_q_10;
  u3(5.378029724754433, 1.0910427669767426, 5.084940386392067) _gate_q_7;
  cry(0.8519768665803606) _gate_q_11, _gate_q_16;
  u2(6.230827954081703, 4.119092728816181) _gate_q_19;
  rzx_5107434224(2.2700292086272267) _gate_q_3, _gate_q_12;
  cu3_5107449776(5.557783158885912, 5.735994445652812, 0.7087134366918367) _gate_q_7, _gate_q_13;
  rxx_5107440896(3.2252458838985296) _gate_q_2, _gate_q_10;
  x _gate_q_0;
  rx(4.273999343427467) _gate_q_8;
  r_5107442096(2.581962155146522, 5.823039938762551) _gate_q_5;
  tdg _gate_q_1;
  rz(5.489868199739681) _gate_q_15;
  cry(4.306197491461879) _gate_q_9, _gate_q_18;
  cry(5.556777338138933) _gate_q_14, _gate_q_17;
  h _gate_q_4;
  sx _gate_q_6;
  x _gate_q_4;
  cu(3.690026237558574, 5.548792491479207, 1.052361572737207, 2.049995177728033) _gate_q_1, _gate_q_7;
  rxx_5107440032(5.971677013462511) _gate_q_11, _gate_q_10;
  rzx_5107437344(0.5778092232883304) _gate_q_17, _gate_q_13;
  ryy_5107447712(5.126834641871928) _gate_q_8, _gate_q_9;
  t _gate_q_15;
  cy _gate_q_0, _gate_q_5;
  cu3_5107437008(1.77792328260703, 0.020978848255319125, 3.3689110198388623) _gate_q_18, _gate_q_16;
  cz _gate_q_2, _gate_q_6;
  ry(4.127310558047983) _gate_q_3;
  crz(3.1992265956254022) _gate_q_14, _gate_q_19;
  z _gate_q_12;
  crz(4.511998792967273) _gate_q_2, _gate_q_11;
  cu1_5107442000(3.971705551902604) _gate_q_16, _gate_q_7;
  p(2.44445166198217) _gate_q_1;
  u1(0.5609241702851296) _gate_q_4;
  U(0.3946161988522554, 4.623422306061738, 4.717494707816874) _gate_q_13;
  swap _gate_q_14, _gate_q_18;
  ryy_5107437056(0.13774862622100043) _gate_q_6, _gate_q_0;
  ch _gate_q_17, _gate_q_8;
  cry(4.432015598679108) _gate_q_15, _gate_q_12;
  ry(4.218674204451343) _gate_q_19;
  sx _gate_q_3;
  r_5107448288(1.2758724765167573, 4.908842458979312) _gate_q_9;
  ryy_5107443584(1.0834352311410758) _gate_q_10, _gate_q_5;
  rzz_5107445888(4.161317137750301) _gate_q_12, _gate_q_6;
  crx(4.3511324623358645) _gate_q_11, _gate_q_16;
  iswap _gate_q_19, _gate_q_2;
  cp(4.076238787706047) _gate_q_8, _gate_q_18;
  r_5107437152(1.7953988868089608, 0.9888558920666457) _gate_q_4;
  cu(1.52273650934687, 4.634666780967871, 0.06826045371748476, 4.094422424441815) _gate_q_7, _gate_q_9;
  rx(0.19006806870391432) _gate_q_10;
  r_5107440848(2.3491798476562016, 0.42034826382611945) _gate_q_3;
  ry(4.410324832950324) _gate_q_14;
  rzx_5107437920(1.0214812628344225) _gate_q_1, _gate_q_13;
  rz(6.073560066210274) _gate_q_17;
  xx_minus_yy_5107436240(3.1486310055508975, 0.03327265198629214) _gate_q_0, _gate_q_15;
  u2(4.220214296809271, 2.179993274866357) _gate_q_5;
  cs _gate_q_2, _gate_q_12;
  p(5.034503894630426) _gate_q_14;
  xx_minus_yy_5107440416(4.27766140872103, 0.029312287660566448) _gate_q_10, _gate_q_11;
  rz(0.7979529788040574) _gate_q_17;
  xx_minus_yy_5107441136(4.8476400026389435, 0.2686848659112241) _gate_q_18, _gate_q_9;
  y _gate_q_0;
  cu1_5107440176(2.8479082104352282) _gate_q_3, _gate_q_5;
  iswap _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_13;
  cry(6.214048684377975) _gate_q_16, _gate_q_19;
  cu1_5107441856(1.1478495480385482) _gate_q_7, _gate_q_8;
  id _gate_q_15;
  cy _gate_q_3, _gate_q_9;
  sdg _gate_q_5;
  ryy_5107446608(5.0657395944033805) _gate_q_12, _gate_q_8;
  ryy_5107440128(1.2680467363040901) _gate_q_13, _gate_q_10;
  u3(5.996090535563098, 5.146780342261071, 2.4839819365503653) _gate_q_4;
  cy _gate_q_17, _gate_q_18;
  y _gate_q_0;
  ry(2.190970362206637) _gate_q_11;
  iswap _gate_q_6, _gate_q_2;
  sdg _gate_q_1;
  csx _gate_q_19, _gate_q_15;
  rxx_5107441328(0.3145617040399457) _gate_q_7, _gate_q_14;
  r_5107445744(2.3896645619608927, 3.687605119828774) _gate_q_16;
  u1(1.1798851989492374) _gate_q_11;
  cu1_5107436096(1.020813155057192) _gate_q_1, _gate_q_17;
  dcx _gate_q_5, _gate_q_2;
  ecr _gate_q_14, _gate_q_13;
  ryy_5107448576(1.456095804568929) _gate_q_15, _gate_q_12;
  cp(5.620995109297713) _gate_q_0, _gate_q_3;
  csdg _gate_q_8, _gate_q_4;
  ecr _gate_q_9, _gate_q_6;
  xx_minus_yy_5107446032(1.385260168543002, 1.9571145444232259) _gate_q_19, _gate_q_7;
  cz _gate_q_16, _gate_q_18;
  t _gate_q_10;
}
gate r_5118138352(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5945552932164737, -1.2180625597005392, 1.2180625597005392) _gate_q_0;
}
gate rxx_5118140128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.20521276450564768) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5118137584(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.1901937652052905) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5118142192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1508012811426485) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5118137776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.459908668213459) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.4540347403958037) _gate_q_0;
  ry(-0.4540347403958037) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.459908668213459) _gate_q_1;
}
gate ryy_5118137152(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9418196106832646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5118135664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.23960959210561467) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7290300578280793) _gate_q_1;
  ry(-0.7290300578280793) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.23960959210561467) _gate_q_0;
}
gate rxx_5118136384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.77655432830272) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5118140224(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5564970515677796) _gate_q_0;
  u1(0.32619551443466155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3715978750910898, 0, -3.5564970515677796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3715978750910898, 3.2303015371331183, 0) _gate_q_1;
}
gate rxx_5118147040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.637404661854768) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5118139648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.060968733510755, 2.9939154440463787, -2.9939154440463787) _gate_q_0;
}
gate xx_plus_yy_5118146656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.651146313898475) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7362540739071607) _gate_q_1;
  ry(-0.7362540739071607) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.651146313898475) _gate_q_0;
}
gate rzz_5118135856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.117704049266387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5118139840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.16443216313835363) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5118137008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2168804748293132) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.645164661476076) _gate_q_0;
  ry(-1.645164661476076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2168804748293132) _gate_q_1;
}
gate rxx_5118141232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.782650890662832) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5118136912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.29656973453246865) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.29656973453246865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.29656973453246865) _gate_q_1;
}
gate cu1_5118142000(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7187588805075508) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7187588805075508) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7187588805075508) _gate_q_1;
}
gate r_5118141712(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1812065404120924, 1.7910592535204883, -1.7910592535204883) _gate_q_0;
}
gate xx_minus_yy_5118140464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3697663102647952) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6365534207797707) _gate_q_0;
  ry(-1.6365534207797707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3697663102647952) _gate_q_1;
}
gate rzx_5118137296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.514863125812582) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5118146848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3982700101290568) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3982700101290568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3982700101290568) _gate_q_1;
}
gate rzz_5118137056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.1090524251303506) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5118148336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.255771893131864) _gate_q_0;
  u1(-2.077763655808783) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1052078552201157, 0, -2.255771893131864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1052078552201157, 4.333535548940647, 0) _gate_q_1;
}
gate rxx_5118143680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3814111354151377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5118144016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.774424918499087) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7063154843191866) _gate_q_1;
  ry(-1.7063154843191866) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.774424918499087) _gate_q_0;
}
gate rxx_5118144400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.486884636109907) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5118148048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6467827621060696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5118144352(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.6409461536857135) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.04638413379068177) _gate_q_0;
  ry(-0.04638413379068177) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.6409461536857135) _gate_q_1;
}
gate cu3_5118148528(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.916039366582249) _gate_q_0;
  u1(-1.941069325459162) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.953032032568281, 0, -2.916039366582249) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.953032032568281, 4.857108692041411, 0) _gate_q_1;
}
gate r_5118143344(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.606416995560762, 0.9022723771091283, -0.9022723771091283) _gate_q_0;
}
gate cu3_5118148240(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5411488008045655) _gate_q_0;
  u1(-1.3292707020751984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.957810165282877, 0, -3.5411488008045655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.957810165282877, 4.870419502879764, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  r_5118138352(1.5945552932164737, 0.35273376709435733) _gate_q_12;
  crz(3.3320939830417466) _gate_q_14, _gate_q_4;
  rxx_5118140128(0.20521276450564768) _gate_q_3, _gate_q_11;
  rzz_5118137584(3.1901937652052905) _gate_q_5, _gate_q_15;
  csdg _gate_q_13, _gate_q_17;
  s _gate_q_18;
  ryy_5118142192(1.1508012811426485) _gate_q_8, _gate_q_2;
  crx(1.0550629943365246) _gate_q_10, _gate_q_1;
  cs _gate_q_19, _gate_q_0;
  p(4.871315172276733) _gate_q_9;
  xx_minus_yy_5118137776(0.9080694807916074, 5.459908668213459) _gate_q_7, _gate_q_16;
  x _gate_q_6;
  sdg _gate_q_18;
  cu(5.669612508435262, 3.024581758288455, 5.0821361410131045, 0.8783251017270524) _gate_q_9, _gate_q_6;
  sx _gate_q_1;
  cy _gate_q_13, _gate_q_12;
  cu(3.850427390520398, 5.408513182783553, 1.7325979536433271, 0.4032571015361414) _gate_q_2, _gate_q_3;
  ryy_5118137152(1.9418196106832646) _gate_q_15, _gate_q_7;
  U(0.8221866944221082, 2.799362966866239, 2.2321301533352904) _gate_q_8;
  xx_plus_yy_5118135664(1.4580601156561586, 0.23960959210561467) _gate_q_5, _gate_q_17;
  h _gate_q_4;
  rxx_5118136384(4.77655432830272) _gate_q_0, _gate_q_19;
  cu3_5118140224(2.7431957501821795, 3.2303015371331183, 3.8826925660024414) _gate_q_16, _gate_q_11;
  p(3.7458474491813485) _gate_q_10;
  y _gate_q_14;
  sx _gate_q_13;
  y _gate_q_4;
  rxx_5118147040(4.637404661854768) _gate_q_15, _gate_q_10;
  r_5118139648(2.060968733510755, 4.564711770841275) _gate_q_0;
  csdg _gate_q_9, _gate_q_18;
  id _gate_q_3;
  xx_plus_yy_5118146656(1.4725081478143214, 3.651146313898475) _gate_q_8, _gate_q_2;
  rzz_5118135856(4.117704049266387) _gate_q_14, _gate_q_16;
  iswap _gate_q_19, _gate_q_6;
  sx _gate_q_5;
  s _gate_q_11;
  rzx_5118139840(0.16443216313835363) _gate_q_1, _gate_q_12;
  U(0.8471949437972459, 0.46583723271801086, 0.7709453029904938) _gate_q_17;
  x _gate_q_7;
  ch _gate_q_17, _gate_q_14;
  crz(2.2191322643687776) _gate_q_3, _gate_q_1;
  xx_minus_yy_5118137008(3.290329322952152, 1.2168804748293132) _gate_q_8, _gate_q_12;
  tdg _gate_q_5;
  rxx_5118141232(5.782650890662832) _gate_q_15, _gate_q_18;
  cz _gate_q_7, _gate_q_10;
  cu1_5118136912(0.5931394690649373) _gate_q_0, _gate_q_11;
  sdg _gate_q_9;
  csdg _gate_q_13, _gate_q_4;
  crz(3.575267597985496) _gate_q_2, _gate_q_16;
  s _gate_q_6;
  u1(2.7195474668179243) _gate_q_19;
  tdg _gate_q_2;
  cp(1.8811701239949226) _gate_q_1, _gate_q_12;
  sdg _gate_q_10;
  ch _gate_q_19, _gate_q_15;
  cy _gate_q_18, _gate_q_7;
  cu1_5118142000(1.4375177610151015) _gate_q_4, _gate_q_0;
  r_5118141712(3.1812065404120924, 3.361855580315385) _gate_q_9;
  cu(0.8714544957931791, 4.23548523274361, 4.543282563533237, 2.501560364899644) _gate_q_11, _gate_q_5;
  U(5.973757807901437, 4.838076623618449, 4.722610832051625) _gate_q_13;
  u3(2.2506330673068162, 5.388967380157023, 2.744907442985703) _gate_q_14;
  sdg _gate_q_3;
  s _gate_q_16;
  xx_minus_yy_5118140464(3.2731068415595415, 1.3697663102647952) _gate_q_8, _gate_q_6;
  x _gate_q_17;
  cs _gate_q_10, _gate_q_15;
  x _gate_q_17;
  U(1.7922550319850004, 0.9079649480227817, 3.959654457491521) _gate_q_12;
  p(0.027413779252257613) _gate_q_16;
  dcx _gate_q_0, _gate_q_3;
  rzx_5118137296(5.514863125812582) _gate_q_14, _gate_q_1;
  u1(1.481990088124899) _gate_q_4;
  cu1_5118146848(0.7965400202581135) _gate_q_18, _gate_q_11;
  u1(3.365748044356393) _gate_q_5;
  rzz_5118137056(2.1090524251303506) _gate_q_13, _gate_q_6;
  swap _gate_q_19, _gate_q_9;
  cry(4.494868471141543) _gate_q_7, _gate_q_2;
  ry(3.85059719496459) _gate_q_8;
  id _gate_q_11;
  dcx _gate_q_1, _gate_q_13;
  cry(0.31324346850630796) _gate_q_9, _gate_q_8;
  ecr _gate_q_6, _gate_q_18;
  cu3_5118148336(2.2104157104402313, 4.333535548940647, 0.17800823732308108) _gate_q_16, _gate_q_15;
  rxx_5118143680(2.3814111354151377) _gate_q_19, _gate_q_10;
  csdg _gate_q_0, _gate_q_4;
  ry(5.669429709015626) _gate_q_5;
  cu(1.0557930480734274, 5.037610408489507, 1.8803532595928834, 0.9001446168772633) _gate_q_7, _gate_q_17;
  p(0.6896743198316962) _gate_q_12;
  rx(6.254682774800177) _gate_q_14;
  xx_plus_yy_5118144016(3.412630968638373, 5.774424918499087) _gate_q_2, _gate_q_3;
  s _gate_q_10;
  cp(4.931996039980232) _gate_q_16, _gate_q_0;
  rx(5.958612277073312) _gate_q_9;
  cp(0.021211890011914956) _gate_q_6, _gate_q_11;
  ecr _gate_q_19, _gate_q_14;
  cs _gate_q_17, _gate_q_2;
  cu(2.3409039270955656, 5.56379141095007, 6.048335583601984, 5.568688682746675) _gate_q_3, _gate_q_1;
  p(2.665837608364394) _gate_q_18;
  rxx_5118144400(4.486884636109907) _gate_q_4, _gate_q_15;
  crx(5.519985776488131) _gate_q_5, _gate_q_7;
  x _gate_q_12;
  swap _gate_q_13, _gate_q_8;
  tdg _gate_q_10;
  h _gate_q_17;
  dcx _gate_q_8, _gate_q_6;
  y _gate_q_15;
  cy _gate_q_9, _gate_q_11;
  crz(5.993787703383241) _gate_q_2, _gate_q_4;
  u1(4.229762473065966) _gate_q_18;
  rxx_5118148048(1.6467827621060696) _gate_q_19, _gate_q_14;
  cz _gate_q_7, _gate_q_0;
  t _gate_q_12;
  csx _gate_q_3, _gate_q_1;
  ry(5.802065598461199) _gate_q_5;
  swap _gate_q_13, _gate_q_16;
  cy _gate_q_17, _gate_q_4;
  csdg _gate_q_9, _gate_q_1;
  ry(5.124636253638767) _gate_q_11;
  xx_minus_yy_5118144352(0.09276826758136354, 4.6409461536857135) _gate_q_12, _gate_q_13;
  cy _gate_q_6, _gate_q_15;
  sxdg _gate_q_7;
  cu3_5118148528(5.906064065136562, 4.857108692041411, 0.9749700411230872) _gate_q_10, _gate_q_8;
  r_5118143344(1.606416995560762, 2.473068703904025) _gate_q_18;
  cx _gate_q_14, _gate_q_19;
  cu3_5118148240(3.915620330565754, 4.870419502879764, 2.211878098729367) _gate_q_2, _gate_q_3;
  z _gate_q_5;
  rx(3.184102776614523) _gate_q_0;
  h _gate_q_16;
}