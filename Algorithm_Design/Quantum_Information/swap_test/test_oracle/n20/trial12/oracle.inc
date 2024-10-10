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
gate cu3_5085106000(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.5458263075672214) _gate_q_0;
  u1(0.590984625509714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6541507237792457, 0, -1.5458263075672214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6541507237792457, 0.9548416820575073, 0) _gate_q_1;
}
gate xx_minus_yy_5085110944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.2352952033658553) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.940876208331439) _gate_q_0;
  ry(-0.940876208331439) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.2352952033658553) _gate_q_1;
}
gate r_5070799840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.656441422546333, 0.4280514352103997, -0.4280514352103997) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5070813376(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7430372159289143) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5085104416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.67241023004689) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6139689815122344) _gate_q_1;
  ry(-2.6139689815122344) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.67241023004689) _gate_q_0;
}
gate r_5070800464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6248412437772686, 2.096109396726127, -2.096109396726127) _gate_q_0;
}
gate xx_minus_yy_5070808144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4550711086661017) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9203697623953402) _gate_q_0;
  ry(-0.9203697623953402) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4550711086661017) _gate_q_1;
}
gate rzz_5070801136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.545718275199797) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rzx_5070808672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3020434834999994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5070800752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.36978977943693, 0.9960575497750814, -0.9960575497750814) _gate_q_0;
}
gate cu1_5070810928(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6526809364179103) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6526809364179103) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6526809364179103) _gate_q_1;
}
gate cu3_5070810016(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.328148012521909) _gate_q_0;
  u1(-0.33512470211810275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.11633910233126465, 0, -3.328148012521909) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.11633910233126465, 3.6632727146400117, 0) _gate_q_1;
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
gate rxx_5070804112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.024882918666292) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5070806848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1740296139840436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070803968(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.146486136287342) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.4125424928303159) _gate_q_0;
  ry(-0.4125424928303159) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.146486136287342) _gate_q_1;
}
gate cu1_5070810496(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.031017627695754) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.031017627695754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.031017627695754) _gate_q_1;
}
gate rzz_5070809056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.848551947372789) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5070810064(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4316439813795471) _gate_q_1;
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
gate ryy_5070811024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0331251958279315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070804880(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.015086201358808, 0.8214733010125128, -0.8214733010125128) _gate_q_0;
}
gate r_5070806080(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.904440762284873, 1.5011527693448787, -1.5011527693448787) _gate_q_0;
}
gate ryy_5070803200(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6129225553163176) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074224192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4858008576162307) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074224816(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2808005575672354, 2.342397113657686, -2.342397113657686) _gate_q_0;
}
gate xx_plus_yy_5074238688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.9510446795492595) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.68285492171135) _gate_q_1;
  ry(-2.68285492171135) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.9510446795492595) _gate_q_0;
}
gate rzz_5074228128(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8779653288530032) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074226976(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.795289524985967, -0.5113099002206238, 0.5113099002206238) _gate_q_0;
}
gate rzz_5074234896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.24475565501450045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  x _gate_q_8;
  cs _gate_q_14, _gate_q_15;
  rz(4.986522308319124) _gate_q_3;
  sxdg _gate_q_10;
  cu3_5085106000(1.3083014475584913, 0.9548416820575073, 2.1368109330769354) _gate_q_6, _gate_q_17;
  u3(2.498808948180346, 2.467025193973013, 2.526436078305892) _gate_q_1;
  rz(4.882398391666954) _gate_q_7;
  sx _gate_q_4;
  y _gate_q_5;
  p(4.258658177218634) _gate_q_0;
  p(4.210495792856485) _gate_q_18;
  ch _gate_q_11, _gate_q_9;
  y _gate_q_13;
  u1(2.678639178158448) _gate_q_19;
  sxdg _gate_q_16;
  ch _gate_q_2, _gate_q_12;
  u2(2.7637375498425762, 3.8943660069321817) _gate_q_9;
  id _gate_q_14;
  sxdg _gate_q_2;
  cp(1.5141907283737719) _gate_q_0, _gate_q_17;
  rx(1.664424362934345) _gate_q_12;
  crx(4.190434480350943) _gate_q_19, _gate_q_16;
  xx_minus_yy_5085110944(1.881752416662878, 0.2352952033658553) _gate_q_3, _gate_q_5;
  sxdg _gate_q_13;
  cs _gate_q_7, _gate_q_11;
  p(0.2774226648208355) _gate_q_4;
  rz(0.33658370538654386) _gate_q_8;
  t _gate_q_10;
  s _gate_q_1;
  r_5070799840(5.656441422546333, 1.9988477620052962) _gate_q_18;
  rz(0.12642688495260335) _gate_q_6;
  sxdg _gate_q_15;
  u2(5.303937080920817, 2.4768554781910295) _gate_q_7;
  dcx _gate_q_11, _gate_q_4;
  sdg _gate_q_6;
  crz(3.779489687092453) _gate_q_12, _gate_q_14;
  swap _gate_q_10, _gate_q_18;
  rz(5.070707222324714) _gate_q_13;
  rzz_5070813376(0.7430372159289143) _gate_q_3, _gate_q_1;
  z _gate_q_8;
  xx_plus_yy_5085104416(5.227937963024469, 5.67241023004689) _gate_q_0, _gate_q_19;
  s _gate_q_16;
  dcx _gate_q_2, _gate_q_9;
  cp(5.875255994497935) _gate_q_5, _gate_q_15;
  u1(5.936671271132135) _gate_q_17;
  s _gate_q_16;
  cry(5.166491729606747) _gate_q_4, _gate_q_17;
  cz _gate_q_5, _gate_q_15;
  t _gate_q_3;
  r_5070800464(1.6248412437772686, 3.6669057235210234) _gate_q_14;
  xx_minus_yy_5070808144(1.8407395247906804, 0.4550711086661017) _gate_q_7, _gate_q_1;
  sx _gate_q_6;
  swap _gate_q_12, _gate_q_8;
  rzz_5070801136(1.545718275199797) _gate_q_18, _gate_q_19;
  s _gate_q_0;
  t _gate_q_11;
  ecr _gate_q_10, _gate_q_13;
  u1(2.2020211652000503) _gate_q_9;
  ry(1.2538789065229088) _gate_q_2;
  cp(0.3862479320373097) _gate_q_7, _gate_q_12;
  dcx _gate_q_10, _gate_q_3;
  rzx_5070808672(2.3020434834999994) _gate_q_2, _gate_q_6;
  r_5070800752(5.36978977943693, 2.566853876569978) _gate_q_14;
  s _gate_q_9;
  rx(0.8497679344527816) _gate_q_8;
  u2(4.65166759629161, 6.071371291396689) _gate_q_1;
  cu1_5070810928(1.3053618728358205) _gate_q_13, _gate_q_15;
  cz _gate_q_11, _gate_q_0;
  s _gate_q_5;
  cs _gate_q_4, _gate_q_17;
  cu3_5070810016(0.2326782046625293, 3.6632727146400117, 2.993023310403806) _gate_q_19, _gate_q_16;
  U(4.3853043047429825, 5.504930368158237, 2.73812263009684) _gate_q_18;
  p(6.22492761597953) _gate_q_4;
  rx(3.48374943917067) _gate_q_14;
  U(2.565599459599471, 5.864739022548919, 0.10353697732851566) _gate_q_16;
  csx _gate_q_10, _gate_q_18;
  x _gate_q_5;
  cy _gate_q_17, _gate_q_15;
  sx _gate_q_0;
  sx _gate_q_7;
  z _gate_q_3;
  id _gate_q_6;
  z _gate_q_9;
  ch _gate_q_19, _gate_q_8;
  u2(5.771417835590452, 2.8769488118429645) _gate_q_1;
  crx(6.13543071969138) _gate_q_2, _gate_q_11;
  cx _gate_q_13, _gate_q_12;
  cry(1.0700001464830748) _gate_q_2, _gate_q_11;
  rxx_5070804112(5.024882918666292) _gate_q_14, _gate_q_17;
  rzx_5070806848(2.1740296139840436) _gate_q_6, _gate_q_13;
  xx_minus_yy_5070803968(0.8250849856606318, 5.146486136287342) _gate_q_8, _gate_q_18;
  cu1_5070810496(4.062035255391508) _gate_q_12, _gate_q_0;
  h _gate_q_10;
  rzz_5070809056(3.848551947372789) _gate_q_1, _gate_q_7;
  p(3.1383128105532347) _gate_q_19;
  ryy_5070810064(0.4316439813795471) _gate_q_5, _gate_q_3;
  csdg _gate_q_15, _gate_q_16;
  sx _gate_q_4;
  ry(5.252831259012279) _gate_q_9;
  ryy_5070811024(1.0331251958279315) _gate_q_11, _gate_q_12;
  cp(1.2151172196789044) _gate_q_3, _gate_q_1;
  u3(0.07449231686233045, 4.4535157047137375, 4.786358710735794) _gate_q_17;
  sdg _gate_q_4;
  u1(0.6921070425668587) _gate_q_0;
  rx(5.777370234865829) _gate_q_5;
  t _gate_q_18;
  ry(2.2199889283015084) _gate_q_9;
  x _gate_q_14;
  r_5070804880(6.015086201358808, 2.3922696278074094) _gate_q_19;
  r_5070806080(1.904440762284873, 3.0719490961397753) _gate_q_15;
  ch _gate_q_8, _gate_q_16;
  rx(0.8008781768570444) _gate_q_13;
  ryy_5070803200(3.6129225553163176) _gate_q_7, _gate_q_2;
  p(5.678277854257645) _gate_q_10;
  z _gate_q_6;
  sxdg _gate_q_11;
  rz(1.8210313652646124) _gate_q_16;
  sxdg _gate_q_17;
  u2(2.743445804169883, 4.332338767358498) _gate_q_9;
  tdg _gate_q_0;
  ch _gate_q_5, _gate_q_14;
  rxx_5074224192(2.4858008576162307) _gate_q_1, _gate_q_12;
  sx _gate_q_2;
  z _gate_q_6;
  r_5074224816(1.2808005575672354, 3.9131934404525825) _gate_q_3;
  xx_plus_yy_5074238688(5.3657098434227, 3.9510446795492595) _gate_q_13, _gate_q_19;
  rzz_5074228128(1.8779653288530032) _gate_q_18, _gate_q_4;
  z _gate_q_10;
  dcx _gate_q_7, _gate_q_8;
  sxdg _gate_q_15;
  y _gate_q_3;
  z _gate_q_0;
  csx _gate_q_15, _gate_q_1;
  r_5074226976(5.795289524985967, 1.0594864265742727) _gate_q_16;
  sxdg _gate_q_18;
  cp(3.1895338778197795) _gate_q_10, _gate_q_9;
  ecr _gate_q_17, _gate_q_6;
  sxdg _gate_q_7;
  t _gate_q_4;
  rzz_5074234896(0.24475565501450045) _gate_q_11, _gate_q_12;
  t _gate_q_19;
  tdg _gate_q_14;
  sdg _gate_q_13;
  h _gate_q_8;
  sdg _gate_q_2;
  x _gate_q_5;
}
gate xx_plus_yy_5085398224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.112649326346361) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0558412969793385) _gate_q_1;
  ry(-3.0558412969793385) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.112649326346361) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5085399088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5678907306179686) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5678907306179686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5678907306179686) _gate_q_1;
}
gate cu3_5085399376(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2783066825605611) _gate_q_0;
  u1(0.8407018237781753) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.34825765467856923, 0, -1.2783066825605611) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.34825765467856923, 0.43760485878238575, 0) _gate_q_1;
}
gate rzz_5085397936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5012227685235329) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5085398944(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.806503688676484) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5085401296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.168100494525875) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.394202512145556) _gate_q_0;
  ry(-2.394202512145556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.168100494525875) _gate_q_1;
}
gate cu3_5085399328(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9825926329538128) _gate_q_0;
  u1(0.21053850780338035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.751183203366493, 0, -1.9825926329538128) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.751183203366493, 1.7720541251504325, 0) _gate_q_1;
}
gate ryy_5085399616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8253254728179613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5085410032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.22927674559856792) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.306253684048008) _gate_q_1;
  ry(-1.306253684048008) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.22927674559856792) _gate_q_0;
}
gate cu1_5074125792(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.34201615486850917) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.34201615486850917) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.34201615486850917) _gate_q_1;
}
gate cu3_5074133952(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7847167164096236) _gate_q_0;
  u1(-1.1789008253230853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.11261338950922384, 0, -2.7847167164096236) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.11261338950922384, 3.9636175417327086, 0) _gate_q_1;
}
gate rxx_5074140144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.192893961577575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074135872(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1317330647191688) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074133376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.069139902340498) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7531291184150297) _gate_q_1;
  ry(-2.7531291184150297) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.069139902340498) _gate_q_0;
}
gate rzx_5074126944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.543431054354244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5074134384(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3808498346665204) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3808498346665204) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3808498346665204) _gate_q_1;
}
gate xx_minus_yy_5074131120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.07553407255326) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6197080769683407) _gate_q_0;
  ry(-0.6197080769683407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.07553407255326) _gate_q_1;
}
gate ryy_5074137216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.187219229267119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5069620816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8451655111017501) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5069622448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4029212024351803) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5069621584(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.840767511330998) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5069624944(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.444077508547953) _gate_q_0;
  u1(-1.1910292715704687) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.811552944847103, 0, -3.444077508547953) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.811552944847103, 4.635106780118422, 0) _gate_q_1;
}
gate cu3_5069621296(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.3570314859668426) _gate_q_0;
  u1(-0.0870009961851419) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.738081846189369, 0, -1.3570314859668426) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.738081846189369, 1.4440324821519845, 0) _gate_q_1;
}
gate cu3_5074276992(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4608007116835617) _gate_q_0;
  u1(0.7590411127850292) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4883368408958737, 0, -2.4608007116835617) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4883368408958737, 1.7017595988985326, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  csx _gate_q_12, _gate_q_2;
  csx _gate_q_13, _gate_q_14;
  p(4.602337259620636) _gate_q_11;
  xx_plus_yy_5085398224(6.111682593958677, 2.112649326346361) _gate_q_19, _gate_q_7;
  ecr _gate_q_16, _gate_q_0;
  h _gate_q_8;
  ch _gate_q_9, _gate_q_1;
  iswap _gate_q_3, _gate_q_4;
  u1(2.4572463816055894) _gate_q_5;
  cu1_5085399088(3.135781461235937) _gate_q_6, _gate_q_17;
  cu(5.8373105946553006, 1.8015512164356937, 3.4443727821870658, 0.6224555933641733) _gate_q_10, _gate_q_15;
  u2(1.4344458240392257, 3.432220423010676) _gate_q_18;
  swap _gate_q_9, _gate_q_19;
  u2(6.1624919972368115, 4.6370818544456665) _gate_q_3;
  cu3_5085399376(0.6965153093571385, 0.43760485878238575, 2.1190085063387363) _gate_q_17, _gate_q_5;
  rzz_5085397936(0.5012227685235329) _gate_q_6, _gate_q_18;
  u1(0.896977538541041) _gate_q_13;
  rx(4.220645543859874) _gate_q_8;
  ryy_5085398944(0.806503688676484) _gate_q_16, _gate_q_14;
  U(1.8329864145371888, 2.1933650553314616, 0.3536601225133765) _gate_q_11;
  tdg _gate_q_15;
  h _gate_q_12;
  sx _gate_q_10;
  cs _gate_q_0, _gate_q_7;
  xx_minus_yy_5085401296(4.788405024291112, 6.168100494525875) _gate_q_2, _gate_q_4;
  s _gate_q_1;
  tdg _gate_q_13;
  id _gate_q_2;
  crx(1.1258497103914156) _gate_q_3, _gate_q_15;
  t _gate_q_16;
  tdg _gate_q_1;
  cx _gate_q_9, _gate_q_18;
  z _gate_q_0;
  u3(4.553549019772528, 1.0699630062304712, 0.4513748356426761) _gate_q_6;
  swap _gate_q_12, _gate_q_10;
  u1(1.9744758874544188) _gate_q_19;
  p(3.7918841135480834) _gate_q_11;
  sdg _gate_q_5;
  cz _gate_q_17, _gate_q_7;
  cry(4.344818584207762) _gate_q_4, _gate_q_8;
  sx _gate_q_14;
  cu3_5085399328(1.502366406732986, 1.7720541251504325, 2.193131140757193) _gate_q_2, _gate_q_6;
  ryy_5085399616(1.8253254728179613) _gate_q_13, _gate_q_19;
  p(0.7755678703984055) _gate_q_16;
  u3(6.036833935723115, 2.570123010499973, 4.413243235490405) _gate_q_1;
  ecr _gate_q_12, _gate_q_18;
  xx_plus_yy_5085410032(2.612507368096016, 0.22927674559856792) _gate_q_3, _gate_q_9;
  dcx _gate_q_11, _gate_q_7;
  csx _gate_q_15, _gate_q_8;
  u1(1.4885069552497008) _gate_q_4;
  crx(1.6019861454811564) _gate_q_10, _gate_q_17;
  tdg _gate_q_14;
  cx _gate_q_0, _gate_q_5;
  cy _gate_q_2, _gate_q_7;
  u3(3.548437144384717, 6.2482710755617745, 6.272795699216588) _gate_q_9;
  u3(5.5101075630236735, 6.061265607487528, 1.0966208156384354) _gate_q_1;
  s _gate_q_13;
  ecr _gate_q_15, _gate_q_3;
  z _gate_q_19;
  cp(1.6132264508322567) _gate_q_6, _gate_q_4;
  u3(2.6471768436761978, 4.682422546940885, 5.691398392408702) _gate_q_16;
  cz _gate_q_14, _gate_q_10;
  cu1_5074125792(0.6840323097370183) _gate_q_0, _gate_q_8;
  u3(1.0276870805782357, 3.1771204432479334, 5.228846456367155) _gate_q_18;
  ecr _gate_q_17, _gate_q_11;
  t _gate_q_12;
  y _gate_q_5;
  cu3_5074133952(0.22522677901844768, 3.9636175417327086, 1.605815891086538) _gate_q_2, _gate_q_13;
  sx _gate_q_11;
  swap _gate_q_3, _gate_q_1;
  cs _gate_q_10, _gate_q_17;
  sdg _gate_q_7;
  csdg _gate_q_19, _gate_q_5;
  U(3.2271870047671336, 3.055678875719927, 3.0435926128199386) _gate_q_12;
  rxx_5074140144(6.192893961577575) _gate_q_14, _gate_q_18;
  ryy_5074135872(1.1317330647191688) _gate_q_8, _gate_q_6;
  ch _gate_q_15, _gate_q_4;
  sdg _gate_q_9;
  y _gate_q_16;
  t _gate_q_0;
  t _gate_q_12;
  cx _gate_q_18, _gate_q_8;
  cy _gate_q_15, _gate_q_10;
  dcx _gate_q_11, _gate_q_4;
  U(5.077527187006499, 2.266022046265089, 0.8285444170888085) _gate_q_14;
  csx _gate_q_5, _gate_q_2;
  crx(1.395404024711384) _gate_q_7, _gate_q_19;
  sx _gate_q_16;
  sdg _gate_q_9;
  xx_plus_yy_5074133376(5.506258236830059, 6.069139902340498) _gate_q_17, _gate_q_13;
  cy _gate_q_0, _gate_q_3;
  iswap _gate_q_6, _gate_q_1;
  u1(3.0143899728183805) _gate_q_7;
  x _gate_q_0;
  p(1.9587850785245124) _gate_q_6;
  rz(0.7324245845533228) _gate_q_2;
  x _gate_q_1;
  rzx_5074126944(5.543431054354244) _gate_q_19, _gate_q_13;
  cry(4.272206798770408) _gate_q_18, _gate_q_16;
  cu1_5074134384(0.7616996693330408) _gate_q_5, _gate_q_12;
  csx _gate_q_10, _gate_q_15;
  s _gate_q_3;
  cz _gate_q_17, _gate_q_11;
  ry(4.952935755963466) _gate_q_9;
  cz _gate_q_14, _gate_q_8;
  s _gate_q_4;
  xx_minus_yy_5074131120(1.2394161539366815, 4.07553407255326) _gate_q_16, _gate_q_12;
  crx(4.7452722148727675) _gate_q_19, _gate_q_1;
  ryy_5074137216(2.187219229267119) _gate_q_15, _gate_q_14;
  sxdg _gate_q_18;
  s _gate_q_13;
  cp(5.288376454867375) _gate_q_11, _gate_q_2;
  ry(2.614755266481358) _gate_q_9;
  iswap _gate_q_3, _gate_q_0;
  rzx_5069620816(0.8451655111017501) _gate_q_4, _gate_q_17;
  z _gate_q_6;
  rzx_5069622448(1.4029212024351803) _gate_q_8, _gate_q_7;
  rzz_5069621584(4.840767511330998) _gate_q_5, _gate_q_10;
  sxdg _gate_q_11;
  cz _gate_q_6, _gate_q_0;
  cu3_5069624944(1.623105889694206, 4.635106780118422, 2.2530482369774845) _gate_q_14, _gate_q_5;
  cu3_5069621296(5.476163692378738, 1.4440324821519845, 1.2700304897817007) _gate_q_2, _gate_q_9;
  cu(6.185752819697463, 3.1638989934580732, 4.9213470717329635, 0.07220631336762624) _gate_q_8, _gate_q_17;
  h _gate_q_1;
  cu(0.7329936500910175, 2.9145806544184847, 3.4197944769950617, 5.0762427944356086) _gate_q_19, _gate_q_18;
  sxdg _gate_q_15;
  cy _gate_q_16, _gate_q_7;
  cu3_5074276992(4.976673681791747, 1.7017595988985326, 3.219841824468591) _gate_q_12, _gate_q_4;
  u1(0.23761610211529996) _gate_q_10;
  z _gate_q_13;
  U(2.30352980041914, 0.5019744163362311, 5.447109009671734) _gate_q_3;
}