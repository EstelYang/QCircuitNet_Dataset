gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5106398224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.224078723888921) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.8266338041693513) _gate_q_0;
  ry(-2.8266338041693513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.224078723888921) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5106388048(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5832207009571473) _gate_q_0;
  u1(1.0137116996417548) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6288480833478568, 0, -3.5832207009571473) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6288480833478568, 2.5695090013153927, 0) _gate_q_1;
}
gate rzz_5106389296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.592703469201016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5106392608(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.57780928066841) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5106395344(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0101060501197112) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0101060501197112) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0101060501197112) _gate_q_1;
}
gate r_5106395920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.994358009309508, -1.1369454346481316, 1.1369454346481316) _gate_q_0;
}
gate ryy_5106394720(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.983189775112469) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5106398512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8531616758510636) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.221553620984644) _gate_q_1;
  ry(-1.221553620984644) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8531616758510636) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5106397984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.576121323943339, 4.711980033566488, -4.711980033566488) _gate_q_0;
}
gate xx_minus_yy_5106390112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3939770679890227) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3166476335609552) _gate_q_0;
  ry(-1.3166476335609552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3939770679890227) _gate_q_1;
}
gate rzz_5106390976(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.7623038924008636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5106400960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1534768853077981) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5106394672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.898043214909127) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6200609730998538) _gate_q_1;
  ry(-0.6200609730998538) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.898043214909127) _gate_q_0;
}
gate xx_plus_yy_5106398896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.228348518767623) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0838933392321053) _gate_q_1;
  ry(-2.0838933392321053) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.228348518767623) _gate_q_0;
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
gate rxx_5106389200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.482349117969182) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5106395200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.258611610952156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate cu3_5106394144(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.165998832388382) _gate_q_0;
  u1(0.3367538084179853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2257305701330603, 0, -4.165998832388382) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2257305701330603, 3.8292450239703975, 0) _gate_q_1;
}
gate cu3_5106390928(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2692613919241715) _gate_q_0;
  u1(0.9316794991826403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5745729293358928, 0, -3.2692613919241715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5745729293358928, 2.337581892741531, 0) _gate_q_1;
}
gate xx_minus_yy_5106388528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.9096910894142765) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5658936402577655) _gate_q_0;
  ry(-0.5658936402577655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.9096910894142765) _gate_q_1;
}
gate cu3_5106388624(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.242775127982913) _gate_q_0;
  u1(0.4772920001503005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9901379890589079, 0, -5.242775127982913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9901379890589079, 4.765483127832613, 0) _gate_q_1;
}
gate cu3_5106385696(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.197876225306132) _gate_q_0;
  u1(-1.7638659915082457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.12330513070957, 0, -4.197876225306132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.12330513070957, 5.961742216814378, 0) _gate_q_1;
}
gate rzx_5106390160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9646510075385295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  xx_minus_yy_5106398224(5.653267608338703, 5.224078723888921) _gate_q_3, _gate_q_7;
  sdg _gate_q_9;
  iswap _gate_q_12, _gate_q_0;
  crz(1.478727136630613) _gate_q_11, _gate_q_6;
  sdg _gate_q_4;
  cu3_5106388048(1.2576961666957136, 2.5695090013153927, 4.596932400598902) _gate_q_8, _gate_q_5;
  rzz_5106389296(5.592703469201016) _gate_q_13, _gate_q_10;
  u3(2.280296274845877, 3.2800163572448437, 4.322495173845003) _gate_q_1;
  sdg _gate_q_2;
  y _gate_q_1;
  rzz_5106392608(3.57780928066841) _gate_q_0, _gate_q_9;
  cu1_5106395344(2.0202121002394224) _gate_q_13, _gate_q_12;
  rz(5.05687467539681) _gate_q_7;
  rx(5.706358514751691) _gate_q_6;
  r_5106395920(3.994358009309508, 0.43385089214676487) _gate_q_11;
  id _gate_q_3;
  u2(3.301026415316648, 3.0361120183890122) _gate_q_4;
  cz _gate_q_8, _gate_q_2;
  cy _gate_q_5, _gate_q_10;
  ryy_5106394720(1.983189775112469) _gate_q_1, _gate_q_9;
  y _gate_q_8;
  tdg _gate_q_11;
  xx_plus_yy_5106398512(2.443107241969288, 3.8531616758510636) _gate_q_13, _gate_q_4;
  dcx _gate_q_0, _gate_q_2;
  u2(2.5346682726330627, 5.761423310870687) _gate_q_10;
  rz(0.12051646723958692) _gate_q_6;
  s _gate_q_3;
  cry(3.635351885908355) _gate_q_12, _gate_q_7;
  r_5106397984(5.576121323943339, 6.282776360361384) _gate_q_5;
  cp(5.521746726355571) _gate_q_10, _gate_q_8;
  xx_minus_yy_5106390112(2.6332952671219103, 1.3939770679890227) _gate_q_11, _gate_q_1;
  rz(5.835510353097685) _gate_q_6;
  rzz_5106390976(3.7623038924008636) _gate_q_13, _gate_q_3;
  rx(4.318981474204393) _gate_q_5;
  rzx_5106400960(1.1534768853077981) _gate_q_4, _gate_q_12;
  U(0.311210751558456, 5.729025429664304, 2.5794230997744445) _gate_q_2;
  p(5.70982014622198) _gate_q_9;
  xx_plus_yy_5106394672(1.2401219461997075, 5.898043214909127) _gate_q_0, _gate_q_7;
  xx_plus_yy_5106398896(4.167786678464211, 6.228348518767623) _gate_q_13, _gate_q_4;
  ecr _gate_q_12, _gate_q_5;
  ch _gate_q_11, _gate_q_0;
  crx(5.918863417525958) _gate_q_8, _gate_q_9;
  dcx _gate_q_2, _gate_q_7;
  t _gate_q_3;
  s _gate_q_1;
  sx _gate_q_10;
  u3(2.412249816494871, 2.666629042684291, 5.220390465834843) _gate_q_6;
  cx _gate_q_8, _gate_q_12;
  swap _gate_q_10, _gate_q_0;
  rxx_5106389200(4.482349117969182) _gate_q_4, _gate_q_1;
  h _gate_q_13;
  U(5.102348873685044, 4.250609436212088, 2.539518287398797) _gate_q_6;
  csdg _gate_q_11, _gate_q_9;
  cz _gate_q_7, _gate_q_3;
  cs _gate_q_5, _gate_q_2;
  rxx_5106395200(1.258611610952156) _gate_q_12, _gate_q_9;
  ecr _gate_q_0, _gate_q_11;
  csx _gate_q_7, _gate_q_5;
  tdg _gate_q_1;
  u1(1.5548305109744163) _gate_q_10;
  cu3_5106394144(4.451461140266121, 3.8292450239703975, 4.502752640806368) _gate_q_13, _gate_q_2;
  cu3_5106390928(3.1491458586717855, 2.337581892741531, 4.200940891106812) _gate_q_4, _gate_q_6;
  h _gate_q_3;
  x _gate_q_8;
  id _gate_q_0;
  crx(0.3392428003435026) _gate_q_4, _gate_q_2;
  id _gate_q_9;
  crx(0.10552605497128631) _gate_q_10, _gate_q_12;
  xx_minus_yy_5106388528(1.131787280515531, 4.9096910894142765) _gate_q_5, _gate_q_13;
  p(1.5038493206320303) _gate_q_11;
  cu3_5106388624(1.9802759781178159, 4.765483127832613, 5.720067128133214) _gate_q_3, _gate_q_1;
  csdg _gate_q_8, _gate_q_6;
  U(5.900300318276465, 3.9815101773108292, 3.4200313804692715) _gate_q_7;
  crz(2.9318660342128857) _gate_q_2, _gate_q_0;
  csdg _gate_q_12, _gate_q_6;
  ch _gate_q_4, _gate_q_10;
  csdg _gate_q_5, _gate_q_3;
  crx(3.04971475321372) _gate_q_1, _gate_q_13;
  rz(0.06119281526352845) _gate_q_9;
  t _gate_q_7;
  swap _gate_q_8, _gate_q_11;
  tdg _gate_q_0;
  U(3.5235252039601566, 3.767973067816586, 1.179622043854977) _gate_q_13;
  cu3_5106385696(6.24661026141914, 5.961742216814378, 2.4340102337978866) _gate_q_9, _gate_q_12;
  rzx_5106390160(0.9646510075385295) _gate_q_3, _gate_q_5;
  ch _gate_q_2, _gate_q_6;
  sdg _gate_q_8;
  crx(0.2423382115998602) _gate_q_7, _gate_q_1;
  ch _gate_q_4, _gate_q_10;
  h _gate_q_11;
}
gate cu1_5106398800(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.1015349675479666) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.1015349675479666) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.1015349675479666) _gate_q_1;
}
gate rzx_5106396832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8414496180845896) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5106396304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.099500315761382) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.55575344405485) _gate_q_1;
  ry(-2.55575344405485) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.099500315761382) _gate_q_0;
}
gate rxx_5106393232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.535428090728255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5106400624(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2436462199892955) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2436462199892955) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2436462199892955) _gate_q_1;
}
gate xx_minus_yy_5106388672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.36052462381791917) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.562303739127715) _gate_q_0;
  ry(-2.562303739127715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.36052462381791917) _gate_q_1;
}
gate rzx_5106388000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.775840125093247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5106389632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.088174952933736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5106393424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4663340975463284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5106387952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9538900093804124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5106386416(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.2106863485094113) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.2106863485094113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.2106863485094113) _gate_q_1;
}
gate xx_minus_yy_5106391312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.3956501864972393) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.000853407898211) _gate_q_0;
  ry(-2.000853407898211) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.3956501864972393) _gate_q_1;
}
gate r_5106396016(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.0613659548613575, 3.960634180996311, -3.960634180996311) _gate_q_0;
}
gate cu1_5106388864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.263415525056219) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.263415525056219) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.263415525056219) _gate_q_1;
}
gate ryy_5106386032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.234255319082587) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5106396880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.065420313488103) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.065420313488103) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.065420313488103) _gate_q_1;
}
gate xx_minus_yy_5106396208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.8412921546744965) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8858827542232092) _gate_q_0;
  ry(-0.8858827542232092) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.8412921546744965) _gate_q_1;
}
gate r_5106400768(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5151371671067095, 4.127135672046296, -4.127135672046296) _gate_q_0;
}
gate xx_plus_yy_5106396544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.8341289486064536) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.63418130243796) _gate_q_1;
  ry(-1.63418130243796) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.8341289486064536) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  cu1_5106398800(6.203069935095933) _gate_q_4, _gate_q_11;
  cs _gate_q_7, _gate_q_13;
  dcx _gate_q_1, _gate_q_10;
  csx _gate_q_2, _gate_q_8;
  cp(4.997624635271236) _gate_q_6, _gate_q_3;
  csx _gate_q_9, _gate_q_12;
  U(2.3484655802628587, 0.9703675741083793, 2.386533927653776) _gate_q_0;
  rx(2.9920351026074212) _gate_q_5;
  h _gate_q_13;
  z _gate_q_2;
  sxdg _gate_q_4;
  ch _gate_q_6, _gate_q_5;
  U(4.282366142224605, 0.6984820732045662, 1.0185719530085402) _gate_q_8;
  rzx_5106396832(1.8414496180845896) _gate_q_0, _gate_q_9;
  U(5.226948873201598, 2.862517197734349, 4.500946529743002) _gate_q_12;
  y _gate_q_11;
  xx_plus_yy_5106396304(5.1115068881097, 1.099500315761382) _gate_q_7, _gate_q_10;
  iswap _gate_q_3, _gate_q_1;
  sdg _gate_q_8;
  p(3.992788603492157) _gate_q_0;
  u2(0.5290036327929648, 6.25651386813475) _gate_q_6;
  tdg _gate_q_5;
  u2(3.475147290253404, 2.847392552265266) _gate_q_13;
  ry(3.808656762156828) _gate_q_12;
  rxx_5106393232(0.535428090728255) _gate_q_2, _gate_q_1;
  cu1_5106400624(2.487292439978591) _gate_q_11, _gate_q_7;
  xx_minus_yy_5106388672(5.12460747825543, 0.36052462381791917) _gate_q_4, _gate_q_10;
  rzx_5106388000(3.775840125093247) _gate_q_3, _gate_q_9;
  rx(5.852263995939865) _gate_q_7;
  y _gate_q_10;
  u2(2.9513825416490245, 4.249932016115462) _gate_q_4;
  rxx_5106389632(5.088174952933736) _gate_q_9, _gate_q_6;
  rxx_5106393424(1.4663340975463284) _gate_q_13, _gate_q_8;
  cu(5.583025788666806, 4.424030054696345, 2.167699770064774, 2.362535128075806) _gate_q_1, _gate_q_11;
  rxx_5106387952(2.9538900093804124) _gate_q_2, _gate_q_12;
  crx(2.6340412695233426) _gate_q_0, _gate_q_3;
  x _gate_q_5;
  sx _gate_q_1;
  cx _gate_q_6, _gate_q_4;
  cu1_5106386416(0.4213726970188226) _gate_q_13, _gate_q_3;
  U(2.53602113615521, 1.0314097443112855, 5.405496335237929) _gate_q_11;
  xx_minus_yy_5106391312(4.001706815796422, 2.3956501864972393) _gate_q_10, _gate_q_9;
  tdg _gate_q_12;
  U(4.75572800861194, 6.272438654582853, 1.3666766502706993) _gate_q_2;
  cx _gate_q_8, _gate_q_5;
  z _gate_q_7;
  r_5106396016(0.0613659548613575, 5.531430507791208) _gate_q_0;
  iswap _gate_q_6, _gate_q_2;
  u2(5.816184907410504, 0.7393120804501803) _gate_q_10;
  sx _gate_q_1;
  cz _gate_q_3, _gate_q_13;
  U(5.2182744073148735, 1.0014724829786137, 0.5248166997096803) _gate_q_8;
  crx(1.2000611899545148) _gate_q_4, _gate_q_12;
  ry(3.7179911121378098) _gate_q_9;
  p(2.40968733931129) _gate_q_7;
  cs _gate_q_0, _gate_q_11;
  z _gate_q_5;
  cs _gate_q_7, _gate_q_2;
  dcx _gate_q_1, _gate_q_10;
  id _gate_q_5;
  dcx _gate_q_6, _gate_q_11;
  cp(4.097106677011746) _gate_q_8, _gate_q_3;
  cx _gate_q_0, _gate_q_9;
  x _gate_q_13;
  s _gate_q_4;
  y _gate_q_12;
  u2(6.184071512679611, 2.6649653265534967) _gate_q_7;
  cry(1.9765786287583575) _gate_q_6, _gate_q_13;
  cu1_5106388864(2.526831050112438) _gate_q_8, _gate_q_5;
  ryy_5106386032(5.234255319082587) _gate_q_12, _gate_q_11;
  cz _gate_q_2, _gate_q_4;
  x _gate_q_3;
  dcx _gate_q_0, _gate_q_9;
  u2(4.743033829313204, 2.6567547284509003) _gate_q_10;
  h _gate_q_1;
  z _gate_q_0;
  cry(0.14137532342132067) _gate_q_10, _gate_q_11;
  cry(0.2508584606385447) _gate_q_12, _gate_q_1;
  cu1_5106396880(4.130840626976206) _gate_q_6, _gate_q_9;
  p(1.0463914252874977) _gate_q_3;
  ry(1.2110672525345683) _gate_q_13;
  crz(5.08653539152714) _gate_q_4, _gate_q_2;
  xx_minus_yy_5106396208(1.7717655084464183, 5.8412921546744965) _gate_q_7, _gate_q_5;
  z _gate_q_8;
  x _gate_q_13;
  U(0.5380297976707039, 4.893220900710965, 3.914247832724489) _gate_q_0;
  cx _gate_q_6, _gate_q_2;
  ry(2.2561055632836426) _gate_q_9;
  u3(5.7460527868482645, 2.494155974385173, 5.297135330536783) _gate_q_10;
  u3(1.1482260402099087, 0.09538552329086362, 1.1442209596910007) _gate_q_7;
  crz(3.0731932503940245) _gate_q_5, _gate_q_8;
  swap _gate_q_3, _gate_q_11;
  r_5106400768(2.5151371671067095, 5.6979319988411925) _gate_q_12;
  xx_plus_yy_5106396544(3.26836260487592, 1.8341289486064536) _gate_q_1, _gate_q_4;
}