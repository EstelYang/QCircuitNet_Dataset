gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzz_5107069776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7021393744257145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5107062672(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2444249743723184, -0.24183404695239452, 0.24183404695239452) _gate_q_0;
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
gate cu3_5107060032(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.216315769792069) _gate_q_0;
  u1(0.6579780093529072) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1323218830014725, 0, -2.216315769792069) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1323218830014725, 1.558337760439162, 0) _gate_q_1;
}
gate cu3_5107062528(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.1391992435111025) _gate_q_0;
  u1(-1.914614490007009) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7670276313060502, 0, -4.1391992435111025) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7670276313060502, 6.053813733518111, 0) _gate_q_1;
}
gate xx_minus_yy_5107071744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.8089192890270316) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5903649963204454) _gate_q_0;
  ry(-2.5903649963204454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.8089192890270316) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5107071840(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.655445595964634) _gate_q_0;
  u1(0.4839290379681458) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9778286448279021, 0, -4.655445595964634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9778286448279021, 4.171516557996489, 0) _gate_q_1;
}
gate rzz_5107065600(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.894444982207147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5107063104(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9323317276675513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  u2(1.5818840255192694, 5.320324233412536) _gate_q_7;
  id _gate_q_4;
  iswap _gate_q_3, _gate_q_1;
  ecr _gate_q_8, _gate_q_9;
  cz _gate_q_2, _gate_q_5;
  rz(4.654318321938766) _gate_q_6;
  t _gate_q_0;
  t _gate_q_3;
  dcx _gate_q_4, _gate_q_2;
  cx _gate_q_1, _gate_q_8;
  sxdg _gate_q_0;
  U(4.778747638256077, 2.3376744013399455, 3.6193341473058473) _gate_q_6;
  U(3.3915877517006856, 1.0813964058329226, 1.7223049697466601) _gate_q_9;
  rx(4.408153427656922) _gate_q_7;
  u3(5.172309348488574, 2.7279877662024212, 4.866741665180907) _gate_q_5;
  crz(5.323038630631693) _gate_q_2, _gate_q_0;
  ecr _gate_q_6, _gate_q_4;
  U(3.516524237321218, 5.541229694383566, 0.9081978769024568) _gate_q_9;
  ecr _gate_q_5, _gate_q_1;
  sx _gate_q_8;
  cx _gate_q_3, _gate_q_7;
  cx _gate_q_9, _gate_q_8;
  cry(2.5247637420243727) _gate_q_1, _gate_q_4;
  h _gate_q_5;
  tdg _gate_q_2;
  t _gate_q_0;
  rzz_5107069776(0.7021393744257145) _gate_q_6, _gate_q_3;
  u3(5.7025339102370385, 2.1209305398440947, 0.7432229146256893) _gate_q_7;
  t _gate_q_4;
  cp(4.266483602888194) _gate_q_2, _gate_q_3;
  ry(2.0378482385237913) _gate_q_1;
  sdg _gate_q_9;
  crz(1.6263890463113158) _gate_q_6, _gate_q_5;
  r_5107062672(3.2444249743723184, 1.328962279842502) _gate_q_7;
  ecr _gate_q_0, _gate_q_8;
  s _gate_q_7;
  x _gate_q_9;
  cy _gate_q_4, _gate_q_2;
  csx _gate_q_8, _gate_q_3;
  cu3_5107060032(4.264643766002945, 1.558337760439162, 2.8742937791449763) _gate_q_0, _gate_q_1;
  h _gate_q_6;
  u2(4.318769486530564, 6.027269275201845) _gate_q_5;
  sx _gate_q_7;
  sxdg _gate_q_9;
  cx _gate_q_3, _gate_q_4;
  cu3_5107062528(3.5340552626121005, 6.053813733518111, 2.224584753504093) _gate_q_5, _gate_q_0;
  z _gate_q_1;
  p(5.40503384896502) _gate_q_6;
  xx_minus_yy_5107071744(5.180729992640891, 3.8089192890270316) _gate_q_8, _gate_q_2;
  u2(2.39493506766911, 5.758424167965736) _gate_q_8;
  ch _gate_q_6, _gate_q_2;
  t _gate_q_3;
  csdg _gate_q_1, _gate_q_0;
  sx _gate_q_4;
  sdg _gate_q_9;
  cu3_5107071840(1.9556572896558042, 4.171516557996489, 5.13937463393278) _gate_q_5, _gate_q_7;
  id _gate_q_4;
  p(2.44789191567903) _gate_q_8;
  sx _gate_q_2;
  ch _gate_q_9, _gate_q_1;
  rzz_5107065600(5.894444982207147) _gate_q_0, _gate_q_7;
  cx _gate_q_5, _gate_q_3;
  sdg _gate_q_6;
  u2(0.139489667669531, 1.2003778336023383) _gate_q_3;
  rzz_5107063104(0.9323317276675513) _gate_q_1, _gate_q_7;
  U(5.9605821441705045, 2.014190842352691, 1.5493868618799929) _gate_q_5;
  dcx _gate_q_9, _gate_q_2;
  rz(4.828781000322052) _gate_q_0;
  cry(2.037253569814349) _gate_q_8, _gate_q_4;
  ry(3.3179242106944375) _gate_q_6;
}
gate cu3_5107064880(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0631834634948327) _gate_q_0;
  u1(-2.0083243198308316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4996208788010146, 0, -2.0631834634948327) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4996208788010146, 4.071507783325664, 0) _gate_q_1;
}
gate ryy_5107058736(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.73737887074799) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107058256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.31129435578985243) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6063890172581963) _gate_q_1;
  ry(-2.6063890172581963) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.31129435578985243) _gate_q_0;
}
gate rzx_5107057872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1577102242562356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107058160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.119211271440152) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107058784(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5129343594560947) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5129343594560947) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5129343594560947) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5107057296(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.367210001718494) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107057248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.138354119103207) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.8610931310471908) _gate_q_0;
  ry(-2.8610931310471908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.138354119103207) _gate_q_1;
}
gate xx_plus_yy_5107057536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3310847004186057) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.280963337643693) _gate_q_1;
  ry(-2.280963337643693) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3310847004186057) _gate_q_0;
}
gate r_5107057680(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.152710436765415, 3.343489302332456, -3.343489302332456) _gate_q_0;
}
gate rzz_5107057392(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2896522544170483) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107057920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.260967955039422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107057728(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.88006686196304) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9854549397905337) _gate_q_1;
  ry(-2.9854549397905337) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.88006686196304) _gate_q_0;
}
gate cu3_5107066512(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8791768292344804) _gate_q_0;
  u1(-0.8228573601586906) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.348770137751667, 0, -2.8791768292344804) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.348770137751667, 3.702034189393171, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  y _gate_q_8;
  swap _gate_q_7, _gate_q_4;
  cu3_5107064880(2.999241757602029, 4.071507783325664, 0.05485914366400109) _gate_q_5, _gate_q_3;
  csx _gate_q_0, _gate_q_9;
  sx _gate_q_1;
  iswap _gate_q_2, _gate_q_6;
  p(1.1397512593886832) _gate_q_1;
  ryy_5107058736(5.73737887074799) _gate_q_8, _gate_q_3;
  cu(5.0747309749434395, 1.1066912057317553, 1.4710159780677592, 1.5133917474196614) _gate_q_7, _gate_q_5;
  csdg _gate_q_9, _gate_q_2;
  cy _gate_q_0, _gate_q_6;
  tdg _gate_q_4;
  crx(5.647845769070735) _gate_q_9, _gate_q_6;
  u3(0.21547692427604975, 6.240654264067869, 0.6555407532163707) _gate_q_2;
  U(1.0965868328531203, 0.3099828113452037, 3.639832342510747) _gate_q_4;
  dcx _gate_q_5, _gate_q_7;
  U(4.547488254774321, 1.2054900328031048, 0.7879788461861831) _gate_q_0;
  swap _gate_q_8, _gate_q_1;
  z _gate_q_3;
  rx(5.074954152817739) _gate_q_0;
  xx_plus_yy_5107058256(5.2127780345163925, 0.31129435578985243) _gate_q_9, _gate_q_7;
  cu(2.857719898564689, 5.941799357490308, 1.927230689183158, 1.5932304897817267) _gate_q_4, _gate_q_8;
  u3(1.9913067987185225, 3.8697706636799034, 4.7648208533133865) _gate_q_6;
  rzx_5107057872(1.1577102242562356) _gate_q_5, _gate_q_3;
  rz(2.6863142746875215) _gate_q_1;
  t _gate_q_2;
  sx _gate_q_8;
  z _gate_q_0;
  z _gate_q_7;
  cu(4.014908007835772, 5.4830388030798405, 3.5281188455942347, 1.2109652280477874) _gate_q_4, _gate_q_5;
  rzx_5107058160(3.119211271440152) _gate_q_3, _gate_q_2;
  cu1_5107058784(5.025868718912189) _gate_q_6, _gate_q_9;
  u1(5.369611586593639) _gate_q_1;
  z _gate_q_5;
  ry(0.07019975653605458) _gate_q_7;
  u3(1.8153419525370178, 6.138497681824933, 0.7471780938676474) _gate_q_3;
  h _gate_q_1;
  s _gate_q_4;
  cs _gate_q_8, _gate_q_9;
  y _gate_q_2;
  ryy_5107057296(5.367210001718494) _gate_q_6, _gate_q_0;
  y _gate_q_5;
  xx_minus_yy_5107057248(5.7221862620943815, 1.138354119103207) _gate_q_1, _gate_q_2;
  crx(0.2582384487991754) _gate_q_7, _gate_q_0;
  xx_plus_yy_5107057536(4.561926675287386, 1.3310847004186057) _gate_q_4, _gate_q_8;
  rz(0.3111011764299752) _gate_q_3;
  crz(3.976379842076778) _gate_q_6, _gate_q_9;
  cx _gate_q_1, _gate_q_3;
  r_5107057680(6.152710436765415, 4.9142856291273525) _gate_q_4;
  iswap _gate_q_2, _gate_q_6;
  rzz_5107057392(1.2896522544170483) _gate_q_5, _gate_q_0;
  ryy_5107057920(4.260967955039422) _gate_q_7, _gate_q_8;
  p(1.2962861377208819) _gate_q_9;
  csdg _gate_q_6, _gate_q_4;
  xx_plus_yy_5107057728(5.970909879581067, 3.88006686196304) _gate_q_8, _gate_q_2;
  swap _gate_q_7, _gate_q_5;
  cu3_5107066512(4.697540275503334, 3.702034189393171, 2.05631946907579) _gate_q_9, _gate_q_1;
  s _gate_q_3;
  h _gate_q_0;
  t _gate_q_7;
  ecr _gate_q_8, _gate_q_6;
  z _gate_q_1;
  tdg _gate_q_3;
  csdg _gate_q_4, _gate_q_0;
  sx _gate_q_2;
  h _gate_q_9;
  t _gate_q_5;
}