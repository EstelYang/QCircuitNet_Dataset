gate r_5116250832(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.8550759959958105, 4.575880501604914, -4.575880501604914) _gate_q_0;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5116263120(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4401376744722034) _gate_q_0;
  u1(-1.0448027014565615) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.712233544132491, 0, -2.4401376744722034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.712233544132491, 3.484940375928765, 0) _gate_q_1;
}
gate ryy_5116250784(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2804993733231034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5116251264(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.566383089883419) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5116253376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9219441661573178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5116262064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3730469967496552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5116261824(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.963714634805625) _gate_q_0;
  u1(-0.44120510150025183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1103819041054206, 0, -4.963714634805625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1103819041054206, 5.404919736305877, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5116261488(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.435240387828783) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5116252848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2967956575113961) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0133821172332853) _gate_q_0;
  ry(-2.0133821172332853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2967956575113961) _gate_q_1;
}
gate rzz_5116252800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.701064141573346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5116260624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3411996512777369) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5116260576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8562496571042197) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.419248550638697) _gate_q_0;
  ry(-2.419248550638697) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8562496571042197) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5116260144(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1834369025979505, -0.059053226804579806, 0.059053226804579806) _gate_q_0;
}
gate rzz_5116260336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0938567055301365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5116261008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.881596742537895) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9216421965064403) _gate_q_0;
  ry(-2.9216421965064403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.881596742537895) _gate_q_1;
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
gate cu3_5116260288(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5088964441075188) _gate_q_0;
  u1(-2.086509702210458) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6231348644194649, 0, -2.5088964441075188) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6231348644194649, 4.595406146317977, 0) _gate_q_1;
}
gate rzx_5116260048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0361592155082047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5116259712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.4075657264875) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4187255277268696) _gate_q_0;
  ry(-2.4187255277268696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.4075657264875) _gate_q_1;
}
gate ryy_5116259616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.0843630519409817) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5116259040(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.622402759530752, 2.7091261615276387, -2.7091261615276387) _gate_q_0;
}
gate ryy_5116258464(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.545899483877145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  r_5116250832(5.8550759959958105, 6.14667682839981) _gate_q_10;
  csx _gate_q_12, _gate_q_1;
  cx _gate_q_4, _gate_q_9;
  iswap _gate_q_7, _gate_q_13;
  cz _gate_q_2, _gate_q_11;
  cu3_5116263120(1.424467088264982, 3.484940375928765, 1.3953349730156421) _gate_q_8, _gate_q_6;
  sdg _gate_q_0;
  ryy_5116250784(3.2804993733231034) _gate_q_3, _gate_q_5;
  ch _gate_q_12, _gate_q_0;
  ryy_5116251264(3.566383089883419) _gate_q_10, _gate_q_7;
  rx(2.4405036275181033) _gate_q_5;
  cu(3.9688118688249925, 1.4432805907196506, 4.566631065632363, 5.2231395795780715) _gate_q_9, _gate_q_8;
  crz(3.1199626295655225) _gate_q_1, _gate_q_4;
  rzx_5116253376(1.9219441661573178) _gate_q_6, _gate_q_13;
  rzx_5116262064(2.3730469967496552) _gate_q_11, _gate_q_3;
  p(3.357226845906716) _gate_q_2;
  crz(6.235839723515994) _gate_q_2, _gate_q_1;
  cu3_5116261824(4.220763808210841, 5.404919736305877, 4.5225095333053735) _gate_q_4, _gate_q_9;
  ry(5.133802958534973) _gate_q_13;
  cs _gate_q_10, _gate_q_6;
  y _gate_q_0;
  sxdg _gate_q_8;
  swap _gate_q_11, _gate_q_7;
  cp(1.1198099742730423) _gate_q_5, _gate_q_12;
  t _gate_q_3;
  dcx _gate_q_9, _gate_q_4;
  sdg _gate_q_3;
  cu(2.6141934132654945, 2.4465781235364763, 3.7837812313536974, 0.004021572853732208) _gate_q_0, _gate_q_1;
  cs _gate_q_6, _gate_q_13;
  cy _gate_q_10, _gate_q_5;
  cy _gate_q_8, _gate_q_2;
  ryy_5116261488(2.435240387828783) _gate_q_12, _gate_q_11;
  U(1.3944990570597076, 2.575611033901712, 1.3899515598510876) _gate_q_7;
  u1(2.2848614652863635) _gate_q_6;
  ry(2.3219438324568205) _gate_q_11;
  cp(2.1814583777972416) _gate_q_0, _gate_q_5;
  crz(6.026753271965635) _gate_q_9, _gate_q_2;
  y _gate_q_4;
  xx_minus_yy_5116252848(4.026764234466571, 1.2967956575113961) _gate_q_8, _gate_q_7;
  ry(3.686863875042862) _gate_q_3;
  rzz_5116252800(5.701064141573346) _gate_q_13, _gate_q_10;
  crx(4.9484611503261355) _gate_q_12, _gate_q_1;
  rzz_5116260624(1.3411996512777369) _gate_q_9, _gate_q_12;
  sdg _gate_q_2;
  x _gate_q_13;
  xx_minus_yy_5116260576(4.838497101277394, 0.8562496571042197) _gate_q_10, _gate_q_3;
  csdg _gate_q_11, _gate_q_6;
  y _gate_q_1;
  iswap _gate_q_4, _gate_q_0;
  cu(4.5078736050350825, 6.183865239720191, 2.099934889883556, 2.3057640221207234) _gate_q_5, _gate_q_8;
  r_5116260144(3.1834369025979505, 1.5117430999903168) _gate_q_7;
  rzz_5116260336(1.0938567055301365) _gate_q_8, _gate_q_1;
  z _gate_q_10;
  cs _gate_q_9, _gate_q_12;
  xx_minus_yy_5116261008(5.843284393012881, 4.881596742537895) _gate_q_5, _gate_q_2;
  ecr _gate_q_6, _gate_q_7;
  p(3.5075462119144687) _gate_q_0;
  ch _gate_q_3, _gate_q_11;
  U(5.5044197672447135, 2.104641814622275, 4.218285635108241) _gate_q_4;
  U(3.5993352090998103, 4.6653539325568, 1.3320079551378252) _gate_q_13;
  U(0.9793335834014306, 3.5951791797680244, 2.7580643969028866) _gate_q_12;
  h _gate_q_10;
  tdg _gate_q_5;
  cu3_5116260288(1.2462697288389297, 4.595406146317977, 0.42238674189706055) _gate_q_6, _gate_q_13;
  rx(4.489332392003355) _gate_q_2;
  cz _gate_q_0, _gate_q_8;
  s _gate_q_11;
  rzx_5116260048(3.0361592155082047) _gate_q_3, _gate_q_9;
  xx_minus_yy_5116259712(4.837451055453739, 1.4075657264875) _gate_q_4, _gate_q_1;
  sdg _gate_q_7;
  ecr _gate_q_9, _gate_q_8;
  ryy_5116259616(0.0843630519409817) _gate_q_1, _gate_q_12;
  u2(1.897339827270278, 0.7726874138386752) _gate_q_2;
  rx(2.7555832135805467) _gate_q_3;
  swap _gate_q_4, _gate_q_0;
  u2(5.873659439645337, 0.3150301982930521) _gate_q_11;
  cu(5.254498901435168, 2.2013491037378032, 4.3347823328347035, 0.19166868248692012) _gate_q_7, _gate_q_13;
  tdg _gate_q_6;
  rz(3.288566643200131) _gate_q_5;
  r_5116259040(3.622402759530752, 4.279922488322535) _gate_q_10;
  z _gate_q_4;
  crz(2.771451764132258) _gate_q_8, _gate_q_2;
  ryy_5116258464(4.545899483877145) _gate_q_0, _gate_q_12;
  crz(3.295466223350234) _gate_q_1, _gate_q_11;
  u1(0.24577897199034943) _gate_q_13;
  crx(3.848846715997339) _gate_q_3, _gate_q_9;
  dcx _gate_q_5, _gate_q_7;
  ry(5.907512787582658) _gate_q_6;
  U(4.779093449988752, 1.2285837075716706, 2.726496116358203) _gate_q_10;
}
gate r_5116255152(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.18605742163564556, 3.0181468967007454, -3.0181468967007454) _gate_q_0;
}
gate ryy_5116256304(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.270896118638486) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5116254336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7345045935436363) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5116254144(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.252728436183915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5116254048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.959947613480272) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5116249824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.039483084823922) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8668552918689998) _gate_q_0;
  ry(-0.8668552918689998) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.039483084823922) _gate_q_1;
}
gate rxx_5116249968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2015137799178504) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5116249440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.29034769206565325) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8283725558985968) _gate_q_0;
  ry(-1.8283725558985968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.29034769206565325) _gate_q_1;
}
gate cu1_5116250208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5108766367585262) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5108766367585262) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5108766367585262) _gate_q_1;
}
gate rxx_5116250544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1516816952186186) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5107793792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.223829079555425) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9748920659645035) _gate_q_1;
  ry(-1.9748920659645035) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.223829079555425) _gate_q_0;
}
gate r_5107792112(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.937830637278092, 2.150135995201596, -2.150135995201596) _gate_q_0;
}
gate rzz_5107793552(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.582620700040236) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107792304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6414136414023457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107793168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3420773378524289) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3420773378524289) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3420773378524289) _gate_q_1;
}
gate xx_minus_yy_5107791248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.9582673841133085) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.8847039638317336) _gate_q_0;
  ry(-2.8847039638317336) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.9582673841133085) _gate_q_1;
}
gate rzz_5107791584(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3888283931574998) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  cy _gate_q_3, _gate_q_6;
  dcx _gate_q_12, _gate_q_4;
  ry(3.0229059714333464) _gate_q_0;
  r_5116255152(0.18605742163564556, 4.588943223495642) _gate_q_1;
  ryy_5116256304(6.270896118638486) _gate_q_11, _gate_q_10;
  cp(5.894032728700536) _gate_q_8, _gate_q_5;
  csdg _gate_q_9, _gate_q_7;
  sx _gate_q_13;
  sx _gate_q_2;
  crz(0.35056656644815076) _gate_q_4, _gate_q_1;
  cz _gate_q_13, _gate_q_5;
  u2(3.0355754401668813, 5.811802696360159) _gate_q_10;
  id _gate_q_8;
  rxx_5116254336(2.7345045935436363) _gate_q_12, _gate_q_2;
  u3(0.36287074746004544, 1.995466659920225, 2.090963773594378) _gate_q_3;
  cp(0.5086910395705173) _gate_q_9, _gate_q_6;
  z _gate_q_7;
  cs _gate_q_11, _gate_q_0;
  t _gate_q_11;
  crz(4.085831766935298) _gate_q_6, _gate_q_5;
  y _gate_q_2;
  iswap _gate_q_13, _gate_q_3;
  ch _gate_q_9, _gate_q_0;
  rzz_5116254144(4.252728436183915) _gate_q_12, _gate_q_8;
  z _gate_q_1;
  rz(5.127622265394849) _gate_q_10;
  h _gate_q_7;
  u3(4.7960868338794995, 4.104127631730049, 5.891966491489199) _gate_q_4;
  ecr _gate_q_13, _gate_q_8;
  s _gate_q_11;
  cu(6.018288246859288, 1.0442360309081045, 2.9285768350041144, 0.4570471069980509) _gate_q_6, _gate_q_4;
  tdg _gate_q_1;
  u3(3.989123501319625, 0.10326496128374309, 1.7466694381716874) _gate_q_0;
  tdg _gate_q_7;
  csdg _gate_q_12, _gate_q_9;
  sx _gate_q_2;
  rzx_5116254048(2.959947613480272) _gate_q_3, _gate_q_10;
  p(1.916508893479311) _gate_q_5;
  crx(4.381097909052887) _gate_q_1, _gate_q_6;
  cz _gate_q_4, _gate_q_0;
  xx_minus_yy_5116249824(1.7337105837379996, 6.039483084823922) _gate_q_5, _gate_q_3;
  rx(1.6800711388229395) _gate_q_8;
  s _gate_q_13;
  rxx_5116249968(1.2015137799178504) _gate_q_7, _gate_q_2;
  u2(3.262272663967714, 4.329788293101878) _gate_q_10;
  p(2.5889392239248976) _gate_q_9;
  cz _gate_q_12, _gate_q_11;
  rz(3.35920567725326) _gate_q_8;
  xx_minus_yy_5116249440(3.6567451117971936, 0.29034769206565325) _gate_q_0, _gate_q_11;
  U(1.2708996802613473, 6.21715701410273, 4.369718744096705) _gate_q_13;
  t _gate_q_3;
  tdg _gate_q_6;
  ry(1.4869170083742267) _gate_q_10;
  id _gate_q_4;
  cu1_5116250208(3.0217532735170525) _gate_q_12, _gate_q_9;
  p(1.0360565013250607) _gate_q_5;
  rz(5.486130234609756) _gate_q_7;
  rxx_5116250544(3.1516816952186186) _gate_q_2, _gate_q_1;
  u2(4.385910420784783, 4.595796193836095) _gate_q_0;
  cz _gate_q_2, _gate_q_11;
  s _gate_q_13;
  rx(2.0471682351604628) _gate_q_7;
  ecr _gate_q_9, _gate_q_8;
  cry(2.570385516513192) _gate_q_6, _gate_q_5;
  t _gate_q_10;
  xx_plus_yy_5107793792(3.949784131929007, 5.223829079555425) _gate_q_3, _gate_q_4;
  iswap _gate_q_1, _gate_q_12;
  u1(5.741504728088502) _gate_q_9;
  u1(0.3519459624271958) _gate_q_11;
  csdg _gate_q_13, _gate_q_12;
  cx _gate_q_7, _gate_q_2;
  cy _gate_q_10, _gate_q_6;
  r_5107792112(0.937830637278092, 3.7209323219964925) _gate_q_4;
  cz _gate_q_1, _gate_q_3;
  crz(5.021787994862131) _gate_q_0, _gate_q_5;
  sx _gate_q_8;
  rzz_5107793552(3.582620700040236) _gate_q_3, _gate_q_11;
  id _gate_q_4;
  sx _gate_q_6;
  rzx_5107792304(1.6414136414023457) _gate_q_5, _gate_q_12;
  s _gate_q_10;
  cu1_5107793168(0.6841546757048578) _gate_q_8, _gate_q_1;
  rx(0.20933536889759974) _gate_q_13;
  cz _gate_q_9, _gate_q_0;
  xx_minus_yy_5107791248(5.769407927663467, 4.9582673841133085) _gate_q_2, _gate_q_7;
  sdg _gate_q_3;
  rz(1.3158906103670411) _gate_q_12;
  ch _gate_q_2, _gate_q_11;
  rx(4.26347368885666) _gate_q_10;
  rzz_5107791584(1.3888283931574998) _gate_q_7, _gate_q_0;
  p(2.793371382765488) _gate_q_5;
  id _gate_q_13;
  ch _gate_q_1, _gate_q_8;
  id _gate_q_6;
  swap _gate_q_9, _gate_q_4;
}