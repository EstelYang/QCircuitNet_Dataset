gate rzx_5116462240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0476283958027346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5116461904(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6278841221054623) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6278841221054623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6278841221054623) _gate_q_1;
}
gate cu1_5116462288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7391014353258805) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7391014353258805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7391014353258805) _gate_q_1;
}
gate rzx_5116461232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6087435555134753) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5116461376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.423298641306429) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu1_5116461328(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.20966039127256295) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.20966039127256295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.20966039127256295) _gate_q_1;
}
gate cu3_5116674752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.079476963871933) _gate_q_0;
  u1(-0.8443776296220963) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.189737708817254, 0, -2.079476963871933) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.189737708817254, 2.9238545934940294, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5116676624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9688868758176348, 3.430150184351966, -3.430150184351966) _gate_q_0;
}
gate xx_minus_yy_5116685888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.027534924798754) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.17941912084974) _gate_q_0;
  ry(-2.17941912084974) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.027534924798754) _gate_q_1;
}
gate r_5116676096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.773362547045914, 2.1590384197611456, -2.1590384197611456) _gate_q_0;
}
gate xx_plus_yy_5116684544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.1039569306350328) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8797794545200547) _gate_q_1;
  ry(-0.8797794545200547) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.1039569306350328) _gate_q_0;
}
gate rxx_5116676480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.086651360138891) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5116676720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.6843444258507985) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rzz_5116677584(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.0525346523323953) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5116686224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4682987196333595) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4682987196333595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4682987196333595) _gate_q_1;
}
gate rxx_5116686944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.352202647966349) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5116686272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8129130401473316) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8129130401473316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8129130401473316) _gate_q_1;
}
gate rzx_5116686032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4944813964811825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5116685936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7738550692352816) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.230908910125483) _gate_q_0;
  ry(-2.230908910125483) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7738550692352816) _gate_q_1;
}
gate rzx_5116686656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.016547992624586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate xx_plus_yy_5116687040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7846053732637667) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.538482343269985) _gate_q_1;
  ry(-2.538482343269985) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7846053732637667) _gate_q_0;
}
gate cu3_5116687136(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.6639193338388275) _gate_q_0;
  u1(-0.3495164961337075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.04175298114931599, 0, -0.6639193338388275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.04175298114931599, 1.013435829972535, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  rzx_5116462240(3.0476283958027346) _gate_q_11, _gate_q_14;
  y _gate_q_6;
  cu1_5116461904(3.2557682442109246) _gate_q_12, _gate_q_5;
  cu1_5116462288(5.478202870651761) _gate_q_7, _gate_q_3;
  z _gate_q_10;
  u1(5.942973842555555) _gate_q_4;
  cy _gate_q_1, _gate_q_8;
  crz(2.391246452142021) _gate_q_0, _gate_q_13;
  rzx_5116461232(2.6087435555134753) _gate_q_9, _gate_q_2;
  ry(2.2148831861486813) _gate_q_9;
  U(5.690333074938823, 2.8997835008521413, 2.3072223360064936) _gate_q_8;
  cry(0.8643428075394152) _gate_q_2, _gate_q_13;
  x _gate_q_12;
  rxx_5116461376(4.423298641306429) _gate_q_6, _gate_q_1;
  tdg _gate_q_7;
  sxdg _gate_q_3;
  cu1_5116461328(0.4193207825451259) _gate_q_5, _gate_q_11;
  sxdg _gate_q_4;
  y _gate_q_14;
  sdg _gate_q_10;
  u3(2.0167546879580076, 0.8787790633849699, 2.310944247669462) _gate_q_0;
  u3(5.585847427468157, 3.8481228988887395, 4.7545616119922745) _gate_q_4;
  cry(3.576008263839218) _gate_q_1, _gate_q_3;
  cu3_5116674752(2.379475417634508, 2.9238545934940294, 1.2350993342498369) _gate_q_2, _gate_q_9;
  dcx _gate_q_8, _gate_q_6;
  x _gate_q_10;
  s _gate_q_5;
  cs _gate_q_7, _gate_q_14;
  cy _gate_q_12, _gate_q_11;
  crz(0.1780419420923039) _gate_q_13, _gate_q_0;
  crz(6.242776615286443) _gate_q_13, _gate_q_10;
  csdg _gate_q_0, _gate_q_6;
  h _gate_q_14;
  crz(4.676746968707406) _gate_q_2, _gate_q_4;
  cp(5.719209484187504) _gate_q_11, _gate_q_9;
  dcx _gate_q_8, _gate_q_7;
  cs _gate_q_3, _gate_q_1;
  ch _gate_q_12, _gate_q_5;
  r_5116676624(2.9688868758176348, 5.0009465111468625) _gate_q_13;
  sx _gate_q_5;
  csdg _gate_q_12, _gate_q_4;
  tdg _gate_q_9;
  xx_minus_yy_5116685888(4.35883824169948, 5.027534924798754) _gate_q_2, _gate_q_0;
  cy _gate_q_11, _gate_q_3;
  ry(3.7918130594958783) _gate_q_10;
  crz(3.8887821812728802) _gate_q_14, _gate_q_8;
  swap _gate_q_7, _gate_q_1;
  r_5116676096(4.773362547045914, 3.729834746556042) _gate_q_6;
  xx_plus_yy_5116684544(1.7595589090401094, 3.1039569306350328) _gate_q_9, _gate_q_11;
  rxx_5116676480(3.086651360138891) _gate_q_12, _gate_q_10;
  rzz_5116676720(4.6843444258507985) _gate_q_4, _gate_q_2;
  cs _gate_q_3, _gate_q_8;
  csx _gate_q_13, _gate_q_7;
  rzz_5116677584(2.0525346523323953) _gate_q_5, _gate_q_1;
  csdg _gate_q_14, _gate_q_6;
  u2(6.113332504423366, 0.3599618076188081) _gate_q_0;
  rz(3.0515878821319333) _gate_q_7;
  swap _gate_q_4, _gate_q_3;
  u3(3.8613099775226236, 2.9878942531416737, 0.6523994452925592) _gate_q_9;
  csx _gate_q_13, _gate_q_14;
  iswap _gate_q_2, _gate_q_10;
  s _gate_q_0;
  sx _gate_q_5;
  swap _gate_q_8, _gate_q_1;
  cu1_5116686224(2.936597439266719) _gate_q_6, _gate_q_11;
  y _gate_q_12;
  sdg _gate_q_14;
  tdg _gate_q_8;
  rxx_5116686944(4.352202647966349) _gate_q_6, _gate_q_2;
  cry(5.965854765707108) _gate_q_10, _gate_q_0;
  cu1_5116686272(1.6258260802946631) _gate_q_11, _gate_q_4;
  rzx_5116686032(1.4944813964811825) _gate_q_7, _gate_q_13;
  x _gate_q_3;
  csdg _gate_q_1, _gate_q_5;
  t _gate_q_9;
  sx _gate_q_12;
  xx_minus_yy_5116685936(4.461817820250966, 0.7738550692352816) _gate_q_0, _gate_q_14;
  cx _gate_q_10, _gate_q_13;
  rzx_5116686656(5.016547992624586) _gate_q_6, _gate_q_4;
  ry(5.417696128760379) _gate_q_9;
  h _gate_q_12;
  cz _gate_q_7, _gate_q_1;
  y _gate_q_3;
  x _gate_q_5;
  ecr _gate_q_2, _gate_q_11;
  rx(3.8136969087560844) _gate_q_8;
  crx(2.5200463068681556) _gate_q_2, _gate_q_12;
  csdg _gate_q_1, _gate_q_0;
  x _gate_q_3;
  u3(1.7155692893788455, 5.056369856683553, 3.430430007431422) _gate_q_4;
  ry(3.5908908879513595) _gate_q_14;
  u3(1.591963599628986, 1.6220674769481807, 0.23583244952042806) _gate_q_6;
  xx_plus_yy_5116687040(5.07696468653997, 0.7846053732637667) _gate_q_8, _gate_q_13;
  y _gate_q_5;
  ry(2.7875560519180063) _gate_q_11;
  cu3_5116687136(0.08350596229863198, 1.013435829972535, 0.31440283770512006) _gate_q_10, _gate_q_7;
  id _gate_q_9;
}
gate r_5116674176(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.915942202820336, 2.402117750065657, -2.402117750065657) _gate_q_0;
}
gate cu1_5116684112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.1979277732459415) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.1979277732459415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.1979277732459415) _gate_q_1;
}
gate rxx_5116684256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.572920284633177) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5116684880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.06534838695695984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5116680512(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.631934992398496) _gate_q_0;
  u1(-1.597399488535838) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.076428586235609, 0, -3.631934992398496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.076428586235609, 5.229334480934334, 0) _gate_q_1;
}
gate rzz_5116680848(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.354433259131722) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5116685840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0411824212051455) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0411824212051455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0411824212051455) _gate_q_1;
}
gate xx_plus_yy_5116685648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.524443924874309) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5475429659301729) _gate_q_1;
  ry(-0.5475429659301729) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.524443924874309) _gate_q_0;
}
gate r_5116684496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2542773981389532, 1.3477392010026565, -1.3477392010026565) _gate_q_0;
}
gate rxx_5116678784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9897047915183137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5116678640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.0164440592899204) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9189406819694315) _gate_q_0;
  ry(-0.9189406819694315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.0164440592899204) _gate_q_1;
}
gate cu3_5116678880(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.21821509281231494) _gate_q_0;
  u1(0.021766696102476488) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1124960552720573, 0, -0.21821509281231494) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1124960552720573, 0.19644839670983844, 0) _gate_q_1;
}
gate rxx_5116685408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.146491485467385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5116685168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.060871492432438) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5116688960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.4621871924855956) _gate_q_0;
  u1(-0.15211511655055054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.14025071804589131, 0, -1.4621871924855956) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.14025071804589131, 1.6143023090361461, 0) _gate_q_1;
}
gate cu1_5116689920(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.186111350505451) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.186111350505451) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.186111350505451) _gate_q_1;
}
gate ryy_5116689872(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.676602814571992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5116689680(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.771491616866271) _gate_q_0;
  u1(1.0375937432395492) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.41436314493550863, 0, -3.771491616866271) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.41436314493550863, 2.733897873626722, 0) _gate_q_1;
}
gate xx_minus_yy_5116689824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.628272819180893) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.452179156766268) _gate_q_0;
  ry(-2.452179156766268) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.628272819180893) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  cu(0.185086943556094, 4.326455459539815, 3.089412922359929, 0.44544197064505175) _gate_q_4, _gate_q_13;
  cx _gate_q_6, _gate_q_11;
  s _gate_q_14;
  r_5116674176(5.915942202820336, 3.9729140768605538) _gate_q_9;
  y _gate_q_2;
  y _gate_q_0;
  csdg _gate_q_8, _gate_q_10;
  crz(1.4107317874208927) _gate_q_5, _gate_q_1;
  u3(4.019276803454201, 1.2095558309622645, 3.117758696434552) _gate_q_3;
  z _gate_q_12;
  s _gate_q_7;
  cu1_5116684112(0.395855546491883) _gate_q_1, _gate_q_7;
  cu(0.6139022503169689, 1.6358664117701691, 3.9217630938894743, 3.8827962421581805) _gate_q_14, _gate_q_0;
  s _gate_q_3;
  sx _gate_q_11;
  ecr _gate_q_5, _gate_q_9;
  rxx_5116684256(0.572920284633177) _gate_q_6, _gate_q_8;
  rz(5.685582572296692) _gate_q_4;
  rxx_5116684880(0.06534838695695984) _gate_q_12, _gate_q_2;
  u1(6.0605280181244074) _gate_q_10;
  u1(1.4084748127951712) _gate_q_13;
  crz(2.6673010613842405) _gate_q_8, _gate_q_9;
  tdg _gate_q_5;
  cu3_5116680512(2.152857172471218, 5.229334480934334, 2.034535503862658) _gate_q_12, _gate_q_7;
  dcx _gate_q_11, _gate_q_2;
  csdg _gate_q_6, _gate_q_4;
  csdg _gate_q_10, _gate_q_3;
  rzz_5116680848(4.354433259131722) _gate_q_13, _gate_q_1;
  s _gate_q_14;
  tdg _gate_q_0;
  u1(5.596457227101338) _gate_q_9;
  z _gate_q_7;
  swap _gate_q_8, _gate_q_3;
  z _gate_q_11;
  cp(2.1685991390407815) _gate_q_1, _gate_q_14;
  crx(3.0508998267720293) _gate_q_2, _gate_q_0;
  cs _gate_q_13, _gate_q_6;
  crz(5.096363930756886) _gate_q_5, _gate_q_10;
  cry(5.112240981974428) _gate_q_12, _gate_q_4;
  ry(3.190925659536191) _gate_q_1;
  cu1_5116685840(4.082364842410291) _gate_q_5, _gate_q_9;
  csdg _gate_q_3, _gate_q_14;
  xx_plus_yy_5116685648(1.0950859318603459, 4.524443924874309) _gate_q_0, _gate_q_8;
  t _gate_q_2;
  dcx _gate_q_13, _gate_q_6;
  tdg _gate_q_11;
  ch _gate_q_10, _gate_q_7;
  r_5116684496(1.2542773981389532, 2.918535527797553) _gate_q_12;
  sx _gate_q_4;
  cy _gate_q_13, _gate_q_4;
  U(1.6672569368728691, 1.6055442516445786, 1.1528176950697497) _gate_q_7;
  cu(0.924827689731162, 4.399430126046028, 4.077732409965814, 5.432241144194559) _gate_q_3, _gate_q_10;
  ecr _gate_q_1, _gate_q_12;
  rx(4.20003313357762) _gate_q_8;
  z _gate_q_14;
  x _gate_q_0;
  rxx_5116678784(2.9897047915183137) _gate_q_9, _gate_q_2;
  csdg _gate_q_6, _gate_q_11;
  u1(4.996025256239154) _gate_q_5;
  xx_minus_yy_5116678640(1.837881363938863, 3.0164440592899204) _gate_q_0, _gate_q_11;
  x _gate_q_4;
  cu3_5116678880(4.224992110544115, 0.19644839670983844, 0.2399817889147914) _gate_q_8, _gate_q_3;
  rxx_5116685408(0.146491485467385) _gate_q_1, _gate_q_13;
  y _gate_q_6;
  cx _gate_q_5, _gate_q_12;
  z _gate_q_10;
  rzx_5116685168(5.060871492432438) _gate_q_9, _gate_q_2;
  cu3_5116688960(0.28050143609178263, 1.6143023090361461, 1.310072075935045) _gate_q_7, _gate_q_14;
  cu1_5116689920(4.372222701010902) _gate_q_10, _gate_q_12;
  cy _gate_q_2, _gate_q_1;
  ch _gate_q_8, _gate_q_9;
  cy _gate_q_11, _gate_q_0;
  ryy_5116689872(2.676602814571992) _gate_q_7, _gate_q_3;
  cx _gate_q_13, _gate_q_5;
  csdg _gate_q_6, _gate_q_4;
  rx(1.2276752077335005) _gate_q_14;
  U(3.7409931385651842, 6.118894327155629, 0.78565272963256) _gate_q_11;
  sxdg _gate_q_7;
  h _gate_q_4;
  sx _gate_q_10;
  csx _gate_q_14, _gate_q_5;
  p(0.28413345049542793) _gate_q_0;
  cu3_5116689680(0.8287262898710173, 2.733897873626722, 4.80908536010582) _gate_q_8, _gate_q_6;
  sxdg _gate_q_2;
  h _gate_q_3;
  sxdg _gate_q_9;
  t _gate_q_12;
  cy _gate_q_1, _gate_q_13;
  xx_minus_yy_5116689824(4.904358313532536, 3.628272819180893) _gate_q_6, _gate_q_9;
  U(0.5619174484489541, 3.228156727581436, 6.160112399199278) _gate_q_10;
  cz _gate_q_2, _gate_q_14;
  cry(3.8864990158946373) _gate_q_12, _gate_q_8;
  crx(1.5574951010491136) _gate_q_3, _gate_q_7;
  csdg _gate_q_0, _gate_q_5;
  cp(5.782966033947869) _gate_q_13, _gate_q_4;
  dcx _gate_q_11, _gate_q_1;
}