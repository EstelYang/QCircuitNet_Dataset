gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5085463856(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.03441631565893058) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5085464336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.400089455007802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5085464192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.684771018019762) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.365786935092266) _gate_q_1;
  ry(-2.365786935092266) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.684771018019762) _gate_q_0;
}
gate xx_minus_yy_5085463376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.45054945485999837) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.598400013452986) _gate_q_0;
  ry(-2.598400013452986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.45054945485999837) _gate_q_1;
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
gate ryy_5085463568(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0862762995369606) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5085463520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8284721950583024) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8875356227854276) _gate_q_0;
  ry(-1.8875356227854276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8284721950583024) _gate_q_1;
}
gate rxx_5085463952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.053773887326629) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5068562816(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7802081424543714) _gate_q_0;
  u1(-1.7519290455137981) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0510353258087433, 0, -3.7802081424543714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0510353258087433, 5.53213718796817, 0) _gate_q_1;
}
gate ryy_5068560608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6900466991381965) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5068563056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.4309472057957775) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5085201472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.510017079024515) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1386898299983634) _gate_q_0;
  ry(-1.1386898299983634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.510017079024515) _gate_q_1;
}
gate ryy_5085201520(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8301843734562073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5085201184(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.08895353972076886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5085201664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.869618821403764) _gate_q_0;
  u1(-0.49111076707534584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5256950639245371, 0, -3.869618821403764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5256950639245371, 4.36072958847911, 0) _gate_q_1;
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
gate xx_minus_yy_5085202768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.544321210588112) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3912723877049864) _gate_q_0;
  ry(-1.3912723877049864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.544321210588112) _gate_q_1;
}
gate rzx_5085204448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2326995082637067) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5085204160(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.242251355513016, 2.9954480784208855, -2.9954480784208855) _gate_q_0;
}
gate rzx_5085203344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.343008216294467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5085203968(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.031952705372006, 0.6993021424299313, -0.6993021424299313) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  p(0.5610608010349126) _gate_q_18;
  cp(3.4129823187626687) _gate_q_1, _gate_q_2;
  sx _gate_q_17;
  y _gate_q_11;
  iswap _gate_q_16, _gate_q_8;
  s _gate_q_9;
  dcx _gate_q_15, _gate_q_13;
  cy _gate_q_3, _gate_q_6;
  cu(2.633428030683105, 0.5663368944972483, 0.42481682089297607, 3.4524425167413786) _gate_q_0, _gate_q_12;
  h _gate_q_14;
  id _gate_q_10;
  t _gate_q_5;
  y _gate_q_4;
  sx _gate_q_7;
  ryy_5085463856(0.03441631565893058) _gate_q_3, _gate_q_13;
  cp(1.600981125960191) _gate_q_10, _gate_q_16;
  rxx_5085464336(5.400089455007802) _gate_q_11, _gate_q_5;
  rz(5.979621789949928) _gate_q_12;
  csx _gate_q_8, _gate_q_2;
  cy _gate_q_6, _gate_q_1;
  cry(4.243064932817513) _gate_q_4, _gate_q_18;
  xx_plus_yy_5085464192(4.731573870184532, 2.684771018019762) _gate_q_9, _gate_q_17;
  x _gate_q_15;
  cry(1.4789812207549036) _gate_q_14, _gate_q_7;
  tdg _gate_q_0;
  xx_minus_yy_5085463376(5.196800026905972, 0.45054945485999837) _gate_q_9, _gate_q_8;
  csdg _gate_q_10, _gate_q_7;
  cs _gate_q_15, _gate_q_17;
  U(3.0521998810559756, 2.420591679908397, 2.4786633164402323) _gate_q_11;
  cs _gate_q_18, _gate_q_12;
  sdg _gate_q_1;
  dcx _gate_q_6, _gate_q_5;
  crx(3.0331566104651113) _gate_q_16, _gate_q_4;
  cp(1.9428225183653427) _gate_q_0, _gate_q_13;
  id _gate_q_2;
  ryy_5085463568(1.0862762995369606) _gate_q_3, _gate_q_14;
  dcx _gate_q_12, _gate_q_3;
  swap _gate_q_5, _gate_q_1;
  crx(4.291876033793938) _gate_q_14, _gate_q_7;
  cx _gate_q_9, _gate_q_4;
  iswap _gate_q_11, _gate_q_15;
  u3(6.26272392564966, 6.026007994028061, 2.6341961883047866) _gate_q_0;
  rx(3.584684962173088) _gate_q_10;
  cp(5.705160228764563) _gate_q_16, _gate_q_18;
  p(0.40003401569290864) _gate_q_2;
  cry(0.6879510342868321) _gate_q_6, _gate_q_8;
  cp(2.615743369832648) _gate_q_17, _gate_q_13;
  crz(0.6683251728384767) _gate_q_2, _gate_q_14;
  u3(3.4975005972894273, 3.848876894344908, 5.096200309323437) _gate_q_0;
  u2(2.4266694920740712, 0.6039641027798005) _gate_q_12;
  xx_minus_yy_5085463520(3.7750712455708553, 0.8284721950583024) _gate_q_8, _gate_q_16;
  U(0.5285701852453981, 1.456611804789334, 4.8726157375230335) _gate_q_5;
  cy _gate_q_10, _gate_q_18;
  rxx_5085463952(1.053773887326629) _gate_q_11, _gate_q_6;
  crx(1.6846573611945983) _gate_q_4, _gate_q_13;
  cu3_5068562816(2.1020706516174865, 5.53213718796817, 2.0282790969405733) _gate_q_3, _gate_q_7;
  s _gate_q_1;
  rx(3.4061580769902964) _gate_q_9;
  ryy_5068560608(0.6900466991381965) _gate_q_17, _gate_q_15;
  sx _gate_q_3;
  ch _gate_q_11, _gate_q_15;
  rxx_5068563056(4.4309472057957775) _gate_q_10, _gate_q_18;
  u3(3.983405611961417, 4.9743962065263965, 4.7003951935284425) _gate_q_6;
  cz _gate_q_4, _gate_q_8;
  u1(0.36079199362428005) _gate_q_16;
  xx_minus_yy_5085201472(2.277379659996727, 5.510017079024515) _gate_q_12, _gate_q_17;
  cp(3.028227102057306) _gate_q_0, _gate_q_2;
  y _gate_q_9;
  u2(3.1328723595792125, 3.410026340153705) _gate_q_5;
  cy _gate_q_1, _gate_q_14;
  y _gate_q_13;
  u1(6.033092457580876) _gate_q_7;
  crz(0.8443285166368986) _gate_q_12, _gate_q_1;
  U(4.12520917082012, 0.7454108994858283, 5.543261315492311) _gate_q_8;
  ch _gate_q_4, _gate_q_17;
  ryy_5085201520(3.8301843734562073) _gate_q_11, _gate_q_6;
  cx _gate_q_15, _gate_q_13;
  h _gate_q_9;
  cx _gate_q_3, _gate_q_10;
  rx(0.842848272440505) _gate_q_5;
  rzz_5085201184(0.08895353972076886) _gate_q_16, _gate_q_14;
  cu3_5085201664(1.0513901278490743, 4.36072958847911, 3.3785080543284183) _gate_q_2, _gate_q_0;
  csx _gate_q_18, _gate_q_7;
  csx _gate_q_18, _gate_q_3;
  z _gate_q_1;
  u2(1.0398982607201102, 4.394750999328925) _gate_q_8;
  cz _gate_q_4, _gate_q_12;
  tdg _gate_q_7;
  s _gate_q_11;
  s _gate_q_0;
  ecr _gate_q_5, _gate_q_6;
  tdg _gate_q_15;
  cs _gate_q_9, _gate_q_17;
  cy _gate_q_13, _gate_q_10;
  sxdg _gate_q_2;
  rx(3.5095586230208577) _gate_q_14;
  x _gate_q_16;
  u1(5.7046435585873665) _gate_q_14;
  iswap _gate_q_13, _gate_q_15;
  id _gate_q_3;
  sxdg _gate_q_12;
  sx _gate_q_5;
  sx _gate_q_18;
  cx _gate_q_9, _gate_q_2;
  csdg _gate_q_1, _gate_q_10;
  xx_minus_yy_5085202768(2.782544775409973, 5.544321210588112) _gate_q_4, _gate_q_17;
  crz(0.3748765696355026) _gate_q_11, _gate_q_16;
  t _gate_q_7;
  ecr _gate_q_0, _gate_q_6;
  u2(0.672016860591794, 6.2248279284336885) _gate_q_8;
  rzx_5085204448(1.2326995082637067) _gate_q_14, _gate_q_6;
  r_5085204160(6.242251355513016, 4.566244405215782) _gate_q_0;
  t _gate_q_18;
  rzx_5085203344(4.343008216294467) _gate_q_2, _gate_q_15;
  csdg _gate_q_8, _gate_q_11;
  sxdg _gate_q_7;
  sdg _gate_q_4;
  r_5085203968(6.031952705372006, 2.270098469224828) _gate_q_3;
  cy _gate_q_17, _gate_q_5;
  rx(1.3312756605147165) _gate_q_13;
  ch _gate_q_10, _gate_q_1;
  ch _gate_q_9, _gate_q_16;
  u3(3.0291607051859737, 2.315130288223929, 4.7756930277931176) _gate_q_12;
}
gate r_5085214960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.038572727726394, 1.3305903549196483, -1.3305903549196483) _gate_q_0;
}
gate rzz_5085214864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.720561002773718) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5085214912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3759607067673931) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3759607067673931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3759607067673931) _gate_q_1;
}
gate r_5085215536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0652653016583367, 1.7147047806130762, -1.7147047806130762) _gate_q_0;
}
gate xx_plus_yy_5085213712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.289871513678008) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.118500462265355) _gate_q_1;
  ry(-2.118500462265355) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.289871513678008) _gate_q_0;
}
gate rzz_5085213856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.2916261803655935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5085214336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.477867337110859) _gate_q_0;
  u1(0.19994703915244827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7169748327778454, 0, -4.477867337110859) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7169748327778454, 4.277920297958411, 0) _gate_q_1;
}
gate rzx_5085213424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6714709730643199) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5085213136(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.8794483597622722) _gate_q_0;
  u1(-0.6095084153374124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8514924307757858, 0, -0.8794483597622722) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8514924307757858, 1.4889567750996846, 0) _gate_q_1;
}
gate rzx_5085214288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7120983659075446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5085214576(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.2706936167122866) _gate_q_0;
  u1(1.3734714918667943) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0579652506273927, 0, -2.2706936167122866) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0579652506273927, 0.8972221248454925, 0) _gate_q_1;
}
gate ryy_5085207760(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.032466333716434) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5085208432(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6763979113164311) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6763979113164311) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6763979113164311) _gate_q_1;
}
gate ryy_5085209392(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9042107228120473) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5085206752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.685332477486661, 1.8392460813385139, -1.8392460813385139) _gate_q_0;
}
gate rzx_5085207472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7658689906876486) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5085207568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.113244727414879) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5706568212459957) _gate_q_0;
  ry(-2.5706568212459957) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.113244727414879) _gate_q_1;
}
gate ryy_5085207904(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1286928683226447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5085208048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6585410597879193) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7070811049822656) _gate_q_1;
  ry(-1.7070811049822656) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6585410597879193) _gate_q_0;
}
gate rxx_5085206224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.38454774549339) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5085212848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.779368306150527) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5085208816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.805266182030787) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5085209008(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5527366489401273, 3.776416399477524, -3.776416399477524) _gate_q_0;
}
gate cu1_5085208720(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.508638599446835) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.508638599446835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.508638599446835) _gate_q_1;
}
gate rzx_5085208384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.229542727946539) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5085210064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.587852204191295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5085208528(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0866522202065636, 0.577063227834266, -0.577063227834266) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  t _gate_q_16;
  r_5085214960(2.038572727726394, 2.901386681714545) _gate_q_3;
  ch _gate_q_8, _gate_q_18;
  x _gate_q_13;
  cp(4.530023206760426) _gate_q_10, _gate_q_14;
  x _gate_q_9;
  rzz_5085214864(4.720561002773718) _gate_q_11, _gate_q_15;
  swap _gate_q_12, _gate_q_2;
  cp(5.012782027341487) _gate_q_4, _gate_q_1;
  crx(5.303708897142229) _gate_q_7, _gate_q_17;
  sx _gate_q_6;
  rx(1.6326694615468196) _gate_q_0;
  sx _gate_q_5;
  cu1_5085214912(2.7519214135347863) _gate_q_7, _gate_q_9;
  r_5085215536(3.0652653016583367, 3.2855011074079727) _gate_q_3;
  tdg _gate_q_13;
  cp(2.7869395173040243) _gate_q_16, _gate_q_11;
  t _gate_q_1;
  xx_plus_yy_5085213712(4.23700092453071, 4.289871513678008) _gate_q_14, _gate_q_18;
  u1(5.749692204963653) _gate_q_12;
  rzz_5085213856(4.2916261803655935) _gate_q_10, _gate_q_5;
  sx _gate_q_15;
  cu3_5085214336(3.4339496655556907, 4.277920297958411, 4.677814376263307) _gate_q_8, _gate_q_2;
  id _gate_q_17;
  s _gate_q_0;
  crz(4.1525073350637065) _gate_q_4, _gate_q_6;
  u3(1.265023952810648, 0.431514130347784, 5.571993380628147) _gate_q_18;
  U(4.292192348688505, 5.974660775383317, 5.572103521729751) _gate_q_4;
  rzx_5085213424(0.6714709730643199) _gate_q_5, _gate_q_10;
  U(4.861488671360816, 1.0645629634836415, 5.658952971717048) _gate_q_13;
  u3(5.016748891316598, 0.7417012920894328, 1.5804115070445786) _gate_q_6;
  sdg _gate_q_7;
  cu3_5085213136(3.7029848615515717, 1.4889567750996846, 0.2699399444248599) _gate_q_2, _gate_q_1;
  cz _gate_q_15, _gate_q_16;
  rzx_5085214288(0.7120983659075446) _gate_q_0, _gate_q_9;
  cu3_5085214576(2.1159305012547853, 0.8972221248454925, 3.644165108579081) _gate_q_17, _gate_q_12;
  rx(4.432247441109746) _gate_q_8;
  sx _gate_q_3;
  z _gate_q_14;
  u2(2.731110896225303, 6.10412911449868) _gate_q_11;
  p(5.970356631754485) _gate_q_18;
  cx _gate_q_11, _gate_q_14;
  cs _gate_q_3, _gate_q_0;
  ryy_5085207760(6.032466333716434) _gate_q_10, _gate_q_6;
  cu(1.2729278603253202, 2.8447731884600103, 4.155348761848597, 0.4443387035745896) _gate_q_5, _gate_q_4;
  U(3.25644227307485, 1.819339133825586, 3.7978706642278603) _gate_q_8;
  crz(6.123168331929134) _gate_q_15, _gate_q_1;
  cry(0.752715714808215) _gate_q_12, _gate_q_7;
  cx _gate_q_13, _gate_q_9;
  cu(2.119541363062341, 0.8199091871119117, 0.5605710690235292, 2.399968132978464) _gate_q_17, _gate_q_2;
  tdg _gate_q_16;
  z _gate_q_12;
  iswap _gate_q_15, _gate_q_4;
  u2(3.812908170417239, 2.659967365948372) _gate_q_9;
  ecr _gate_q_7, _gate_q_0;
  z _gate_q_1;
  y _gate_q_2;
  tdg _gate_q_17;
  id _gate_q_14;
  t _gate_q_6;
  h _gate_q_3;
  ecr _gate_q_16, _gate_q_8;
  cu1_5085208432(3.3527958226328622) _gate_q_11, _gate_q_13;
  rx(3.2156105263236223) _gate_q_5;
  ecr _gate_q_18, _gate_q_10;
  id _gate_q_17;
  swap _gate_q_10, _gate_q_5;
  tdg _gate_q_6;
  cry(4.977877793733489) _gate_q_0, _gate_q_13;
  iswap _gate_q_3, _gate_q_4;
  ecr _gate_q_16, _gate_q_14;
  u2(4.214045192316096, 2.0563215448424392) _gate_q_12;
  ryy_5085209392(1.9042107228120473) _gate_q_7, _gate_q_15;
  rz(2.127997599429518) _gate_q_8;
  r_5085206752(4.685332477486661, 3.4100424081334104) _gate_q_18;
  ry(1.5801874920493262) _gate_q_1;
  rzx_5085207472(2.7658689906876486) _gate_q_2, _gate_q_11;
  u1(3.3738224838818915) _gate_q_9;
  s _gate_q_9;
  y _gate_q_7;
  xx_minus_yy_5085207568(5.141313642491991, 2.113244727414879) _gate_q_15, _gate_q_18;
  ryy_5085207904(0.1286928683226447) _gate_q_4, _gate_q_16;
  h _gate_q_10;
  sx _gate_q_0;
  xx_plus_yy_5085208048(3.4141622099645312, 1.6585410597879193) _gate_q_6, _gate_q_12;
  cy _gate_q_3, _gate_q_5;
  x _gate_q_1;
  cu(5.575550816890511, 5.663213665250463, 3.3059356955482424, 3.1136192919783303) _gate_q_13, _gate_q_11;
  rxx_5085206224(4.38454774549339) _gate_q_14, _gate_q_2;
  s _gate_q_8;
  u2(1.1512044645118904, 3.8153197035788495) _gate_q_17;
  ry(6.055906722924702) _gate_q_11;
  rzx_5085212848(5.779368306150527) _gate_q_15, _gate_q_17;
  csx _gate_q_1, _gate_q_16;
  x _gate_q_0;
  cz _gate_q_6, _gate_q_2;
  iswap _gate_q_10, _gate_q_18;
  u3(4.511284886679174, 1.890197228399942, 4.1616372687567385) _gate_q_5;
  cz _gate_q_12, _gate_q_9;
  rxx_5085208816(2.805266182030787) _gate_q_7, _gate_q_14;
  h _gate_q_3;
  u1(2.9705838794056745) _gate_q_13;
  u2(2.6431105925463, 4.989649767804713) _gate_q_8;
  r_5085209008(2.5527366489401273, 5.347212726272421) _gate_q_4;
  tdg _gate_q_14;
  y _gate_q_18;
  cs _gate_q_0, _gate_q_15;
  ry(1.6461259683675644) _gate_q_16;
  cu1_5085208720(5.01727719889367) _gate_q_17, _gate_q_9;
  rz(3.797029169061241) _gate_q_13;
  cu(4.697801487901106, 4.200022001144714, 0.9034675809721836, 2.3487383185621002) _gate_q_10, _gate_q_11;
  csx _gate_q_8, _gate_q_4;
  rzx_5085208384(4.229542727946539) _gate_q_7, _gate_q_5;
  cz _gate_q_1, _gate_q_2;
  cs _gate_q_12, _gate_q_6;
  U(1.023656105195755, 3.508400531954113, 0.3051716354946374) _gate_q_3;
  cx _gate_q_14, _gate_q_2;
  U(1.7564242862878465, 4.8743856263517324, 1.5333103963190413) _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  crx(1.509767011059789) _gate_q_0, _gate_q_12;
  sx _gate_q_13;
  u3(5.01915494846525, 0.4123396918416033, 0.4806369706548196) _gate_q_7;
  cu(0.18716625487389704, 2.915724250868388, 4.57641294768824, 2.702069995392471) _gate_q_9, _gate_q_8;
  rxx_5085210064(4.587852204191295) _gate_q_1, _gate_q_11;
  cu(2.0177427484955475, 4.15573111589339, 4.853318435886829, 0.15097098182500115) _gate_q_17, _gate_q_18;
  swap _gate_q_16, _gate_q_4;
  r_5085208528(1.0866522202065636, 2.1478595546291626) _gate_q_15;
  rz(5.172917037589733) _gate_q_10;
}