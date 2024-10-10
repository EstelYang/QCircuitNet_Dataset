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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5107000160(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0881632994604575, 4.638178277199889, -4.638178277199889) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5106999680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.6245884142262526) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2341081773964018) _gate_q_1;
  ry(-1.2341081773964018) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.6245884142262526) _gate_q_0;
}
gate xx_minus_yy_5107000064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.472250853043537) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.21450746055897366) _gate_q_0;
  ry(-0.21450746055897366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.472250853043537) _gate_q_1;
}
gate xx_minus_yy_5107000400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.6503763258382133) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.337412713155495) _gate_q_0;
  ry(-2.337412713155495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.6503763258382133) _gate_q_1;
}
gate cu3_5107000592(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8623167181348563) _gate_q_0;
  u1(-0.7479788631017421) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8347825481484001, 0, -3.8623167181348563) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8347825481484001, 4.610295581236598, 0) _gate_q_1;
}
gate r_5107000496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.497263328301039, 3.920495259537903, -3.920495259537903) _gate_q_0;
}
gate xx_minus_yy_5107000544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.969897080673814) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3250361284233097) _gate_q_0;
  ry(-0.3250361284233097) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.969897080673814) _gate_q_1;
}
gate cu1_5106999584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2802676534739208) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2802676534739208) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2802676534739208) _gate_q_1;
}
gate cu1_5107001120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7473652475034669) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7473652475034669) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7473652475034669) _gate_q_1;
}
gate xx_plus_yy_5107000928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.496239273855942) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.230698817550178) _gate_q_1;
  ry(-2.230698817550178) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.496239273855942) _gate_q_0;
}
gate rxx_5107001360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7298132404793667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5107001456(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.980947597638944, 0.32281767999611666, -0.32281767999611666) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5107001504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.660724031462717) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.37675871619739415) _gate_q_0;
  ry(-0.37675871619739415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.660724031462717) _gate_q_1;
}
gate r_5107001696(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.5559385353972655, 2.860707661278995, -2.860707661278995) _gate_q_0;
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
gate xx_plus_yy_5107001552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.457911138058482) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7289462553252967) _gate_q_1;
  ry(-0.7289462553252967) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.457911138058482) _gate_q_0;
}
gate rzz_5107001024(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9494706841535999) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5107000832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.7914757266465235) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  ecr _gate_q_2, _gate_q_3;
  csdg _gate_q_8, _gate_q_5;
  crz(2.553206962201436) _gate_q_4, _gate_q_1;
  x _gate_q_6;
  t _gate_q_0;
  x _gate_q_7;
  r_5107000160(1.0881632994604575, 6.208974603994785) _gate_q_9;
  iswap _gate_q_8, _gate_q_6;
  xx_plus_yy_5106999680(2.4682163547928035, 4.6245884142262526) _gate_q_1, _gate_q_7;
  xx_minus_yy_5107000064(0.4290149211179473, 4.472250853043537) _gate_q_5, _gate_q_0;
  u3(2.481551718275927, 2.0139183185987664, 3.1345732070262113) _gate_q_4;
  xx_minus_yy_5107000400(4.67482542631099, 0.6503763258382133) _gate_q_2, _gate_q_9;
  rz(4.712862316920303) _gate_q_3;
  cu3_5107000592(1.6695650962968003, 4.610295581236598, 3.114337855033114) _gate_q_2, _gate_q_7;
  y _gate_q_8;
  r_5107000496(1.497263328301039, 5.4912915863328) _gate_q_1;
  u2(1.3258490903618765, 2.352926947837988) _gate_q_0;
  cp(2.292801410555454) _gate_q_9, _gate_q_5;
  u2(2.3708285574947765, 0.9442164854734645) _gate_q_4;
  h _gate_q_3;
  x _gate_q_6;
  sx _gate_q_7;
  xx_minus_yy_5107000544(0.6500722568466194, 0.969897080673814) _gate_q_4, _gate_q_1;
  cu(2.2922317898941547, 1.943547875042235, 5.402505255188613, 1.4026154362919105) _gate_q_5, _gate_q_9;
  u3(1.4626184302993532, 0.26393981605708405, 1.5795718247949386) _gate_q_2;
  cu1_5106999584(2.5605353069478416) _gate_q_8, _gate_q_3;
  t _gate_q_0;
  s _gate_q_6;
  cu1_5107001120(1.4947304950069338) _gate_q_1, _gate_q_2;
  u3(2.376319786079498, 6.117696287902035, 5.823667648920749) _gate_q_5;
  s _gate_q_4;
  z _gate_q_3;
  xx_plus_yy_5107000928(4.461397635100356, 1.496239273855942) _gate_q_7, _gate_q_6;
  tdg _gate_q_9;
  rz(4.486253463182454) _gate_q_0;
  sdg _gate_q_8;
  u3(1.7308394866607597, 2.8048715913839635, 2.0718426804731394) _gate_q_8;
  rxx_5107001360(2.7298132404793667) _gate_q_7, _gate_q_4;
  s _gate_q_6;
  crz(3.326118058985139) _gate_q_5, _gate_q_3;
  r_5107001456(4.980947597638944, 1.8936140067910132) _gate_q_9;
  rz(3.184489734142271) _gate_q_1;
  tdg _gate_q_0;
  id _gate_q_2;
  cs _gate_q_4, _gate_q_1;
  xx_minus_yy_5107001504(0.7535174323947883, 5.660724031462717) _gate_q_9, _gate_q_7;
  cy _gate_q_2, _gate_q_5;
  sxdg _gate_q_6;
  cry(4.080432331891862) _gate_q_3, _gate_q_8;
  r_5107001696(5.5559385353972655, 4.431503988073891) _gate_q_0;
  sx _gate_q_7;
  csx _gate_q_6, _gate_q_8;
  u2(5.437534729241406, 5.657524547947139) _gate_q_2;
  csdg _gate_q_1, _gate_q_4;
  sxdg _gate_q_5;
  cs _gate_q_9, _gate_q_3;
  x _gate_q_0;
  xx_plus_yy_5107001552(1.4578925106505933, 5.457911138058482) _gate_q_7, _gate_q_4;
  iswap _gate_q_3, _gate_q_2;
  u3(4.871316043275875, 4.169793891670795, 2.4894327334092097) _gate_q_5;
  cx _gate_q_6, _gate_q_8;
  cy _gate_q_1, _gate_q_0;
  ry(2.5823554931530306) _gate_q_9;
  sdg _gate_q_6;
  ecr _gate_q_8, _gate_q_0;
  cry(1.9977763969433397) _gate_q_3, _gate_q_4;
  rzz_5107001024(0.9494706841535999) _gate_q_5, _gate_q_2;
  t _gate_q_7;
  rxx_5107000832(4.7914757266465235) _gate_q_1, _gate_q_9;
}
gate cu3_5107004864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7288212707409154) _gate_q_0;
  u1(-1.7852045035250579) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8929690011039333, 0, -2.7288212707409154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8929690011039333, 4.514025774265973, 0) _gate_q_1;
}
gate rzz_5107005056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.597852953536151) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5107005200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.099420989506346) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6232106547343657) _gate_q_1;
  ry(-1.6232106547343657) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.099420989506346) _gate_q_0;
}
gate ryy_5107005536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.431295920527969) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107005680(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0372458105281366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107005776(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.22780094056832437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107005920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1911550123284256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107003232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.989755372428919) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107002896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.325190655630768) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  y _gate_q_1;
  csdg _gate_q_3, _gate_q_5;
  x _gate_q_0;
  csx _gate_q_7, _gate_q_2;
  cx _gate_q_9, _gate_q_8;
  h _gate_q_6;
  p(3.6919815463440213) _gate_q_4;
  cu(5.66848597590666, 6.037930960119191, 1.1744349491052077, 5.746369740650513) _gate_q_9, _gate_q_4;
  sx _gate_q_1;
  cu3_5107004864(5.785938002207867, 4.514025774265973, 0.9436167672158575) _gate_q_5, _gate_q_3;
  cy _gate_q_6, _gate_q_7;
  cy _gate_q_0, _gate_q_8;
  rx(3.9922251941117994) _gate_q_2;
  rzz_5107005056(5.597852953536151) _gate_q_1, _gate_q_9;
  p(2.177784105817978) _gate_q_5;
  x _gate_q_0;
  x _gate_q_2;
  z _gate_q_3;
  crx(3.3364079082127307) _gate_q_6, _gate_q_7;
  id _gate_q_4;
  sdg _gate_q_8;
  t _gate_q_9;
  xx_plus_yy_5107005200(3.2464213094687313, 6.099420989506346) _gate_q_5, _gate_q_0;
  U(1.012592884724253, 4.110643063338162, 5.440808631991341) _gate_q_1;
  cx _gate_q_7, _gate_q_8;
  crz(4.848033063068068) _gate_q_4, _gate_q_2;
  rx(2.8534217404599764) _gate_q_3;
  id _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  y _gate_q_8;
  rz(3.531906494912811) _gate_q_6;
  ryy_5107005536(0.431295920527969) _gate_q_1, _gate_q_5;
  y _gate_q_9;
  ecr _gate_q_7, _gate_q_0;
  x _gate_q_4;
  ryy_5107005680(3.0372458105281366) _gate_q_0, _gate_q_8;
  y _gate_q_3;
  x _gate_q_6;
  u2(0.5599895764946792, 1.9115401412548485) _gate_q_7;
  crx(5.0693212067917575) _gate_q_1, _gate_q_2;
  z _gate_q_4;
  cy _gate_q_5, _gate_q_9;
  ryy_5107005776(0.22780094056832437) _gate_q_0, _gate_q_8;
  cx _gate_q_4, _gate_q_2;
  cy _gate_q_5, _gate_q_3;
  id _gate_q_1;
  sdg _gate_q_7;
  csdg _gate_q_9, _gate_q_6;
  ch _gate_q_1, _gate_q_9;
  ryy_5107005920(2.1911550123284256) _gate_q_8, _gate_q_2;
  sdg _gate_q_7;
  y _gate_q_3;
  sx _gate_q_5;
  swap _gate_q_0, _gate_q_6;
  rx(5.792051825374186) _gate_q_4;
  ry(1.2689302697311788) _gate_q_2;
  rx(0.7242041214706508) _gate_q_8;
  rxx_5107003232(5.989755372428919) _gate_q_5, _gate_q_6;
  tdg _gate_q_9;
  rzz_5107002896(4.325190655630768) _gate_q_7, _gate_q_3;
  rz(4.1268732118238445) _gate_q_0;
  h _gate_q_4;
  sxdg _gate_q_1;
  csx _gate_q_6, _gate_q_0;
  sx _gate_q_3;
  ry(2.858825675140232) _gate_q_1;
  y _gate_q_5;
  crx(5.8891662273102865) _gate_q_9, _gate_q_8;
  cy _gate_q_2, _gate_q_7;
  p(3.4733874228693815) _gate_q_4;
}