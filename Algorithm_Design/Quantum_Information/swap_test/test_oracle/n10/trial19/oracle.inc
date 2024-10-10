gate cu1_5072322480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7875246697245134) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7875246697245134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7875246697245134) _gate_q_1;
}
gate r_5072314224(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.186776685235422, -0.24889906368892034, 0.24889906368892034) _gate_q_0;
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
gate r_5072319984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8076406551402107, 0.8174866323698198, -0.8174866323698198) _gate_q_0;
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
gate ryy_5072313264(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5191191665511528) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5072320128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.43422861786295874) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072318640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.03811087081744779) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1794467509850537) _gate_q_1;
  ry(-2.1794467509850537) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.03811087081744779) _gate_q_0;
}
gate rzz_5072320176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.2704185146902766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5072313024(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.221311640294193) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072315664(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.240352686612457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072321808(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.5104818003405525, -1.4058251808008042, 1.4058251808008042) _gate_q_0;
}
gate xx_minus_yy_5072307024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.9724501213590746) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6062819294014555) _gate_q_0;
  ry(-0.6062819294014555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.9724501213590746) _gate_q_1;
}
gate rzx_5072313648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.055076724117406) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072319840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.174823490467034, 4.441988641748728, -4.441988641748728) _gate_q_0;
}
gate xx_plus_yy_5072317632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.266431059125884) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8466423514056084) _gate_q_1;
  ry(-0.8466423514056084) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.266431059125884) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5072314608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.749192369260066) _gate_q_0;
  u1(0.29177040036525237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5368707920508275, 0, -2.749192369260066) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5368707920508275, 2.457421968894814, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  h _gate_q_6;
  cu1_5072322480(1.5750493394490268) _gate_q_3, _gate_q_5;
  cp(3.422204881577192) _gate_q_8, _gate_q_7;
  u2(1.0874870819285125, 6.063239068052102) _gate_q_4;
  crx(0.8537641382828076) _gate_q_9, _gate_q_0;
  r_5072314224(6.186776685235422, 1.3218972631059762) _gate_q_1;
  u3(0.7197254771597723, 3.1402549592894387, 5.379935878215223) _gate_q_2;
  cp(4.213070865812088) _gate_q_1, _gate_q_4;
  tdg _gate_q_9;
  crx(1.9468911605210297) _gate_q_7, _gate_q_3;
  csx _gate_q_2, _gate_q_8;
  t _gate_q_6;
  r_5072319984(1.8076406551402107, 2.3882829591647163) _gate_q_5;
  p(2.518269990623036) _gate_q_0;
  z _gate_q_6;
  ecr _gate_q_5, _gate_q_0;
  ryy_5072313264(3.5191191665511528) _gate_q_4, _gate_q_3;
  ch _gate_q_2, _gate_q_7;
  u1(2.64991064214775) _gate_q_1;
  cp(2.2882914846074915) _gate_q_9, _gate_q_8;
  p(1.2402682777558252) _gate_q_3;
  ch _gate_q_1, _gate_q_4;
  crz(0.9963078126364595) _gate_q_8, _gate_q_6;
  u3(3.06542488660837, 6.083074206917931, 3.086993138219162) _gate_q_7;
  iswap _gate_q_0, _gate_q_2;
  sdg _gate_q_5;
  sdg _gate_q_9;
  sx _gate_q_0;
  crz(4.929478968765667) _gate_q_8, _gate_q_2;
  rz(5.487316835833831) _gate_q_9;
  rxx_5072320128(0.43422861786295874) _gate_q_3, _gate_q_5;
  xx_plus_yy_5072318640(4.358893501970107, 0.03811087081744779) _gate_q_7, _gate_q_1;
  rzz_5072320176(0.2704185146902766) _gate_q_6, _gate_q_4;
  iswap _gate_q_8, _gate_q_2;
  cp(0.0708763683879409) _gate_q_0, _gate_q_9;
  sdg _gate_q_1;
  swap _gate_q_5, _gate_q_6;
  rzz_5072313024(3.221311640294193) _gate_q_7, _gate_q_4;
  U(5.212420956983384, 1.803203291634368, 1.220188543684474) _gate_q_3;
  ch _gate_q_1, _gate_q_5;
  rxx_5072315664(4.240352686612457) _gate_q_4, _gate_q_6;
  cp(0.9505244143539959) _gate_q_3, _gate_q_8;
  r_5072321808(4.5104818003405525, 0.16497114599409232) _gate_q_0;
  cry(2.6433755570540534) _gate_q_7, _gate_q_9;
  y _gate_q_2;
  xx_minus_yy_5072307024(1.212563858802911, 3.9724501213590746) _gate_q_0, _gate_q_3;
  sx _gate_q_6;
  t _gate_q_9;
  rzx_5072313648(5.055076724117406) _gate_q_7, _gate_q_2;
  cu(0.5036365970070338, 1.452528835860994, 1.6473492011454607, 2.332448594396799) _gate_q_8, _gate_q_4;
  crz(3.9389494476758626) _gate_q_1, _gate_q_5;
  r_5072319840(1.174823490467034, 6.012784968543625) _gate_q_6;
  ch _gate_q_2, _gate_q_0;
  rz(5.96661489432556) _gate_q_1;
  cp(2.506306999527826) _gate_q_7, _gate_q_9;
  tdg _gate_q_5;
  xx_plus_yy_5072317632(1.6932847028112168, 6.266431059125884) _gate_q_4, _gate_q_8;
  sdg _gate_q_3;
  cs _gate_q_2, _gate_q_0;
  tdg _gate_q_7;
  cry(1.5165015880875121) _gate_q_9, _gate_q_4;
  sx _gate_q_1;
  cu3_5072314608(5.073741584101655, 2.457421968894814, 3.0409627696253185) _gate_q_8, _gate_q_6;
  csdg _gate_q_3, _gate_q_5;
}
gate rxx_5072612784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2824833814407535) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072604096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.949935843790064, -1.2403381276355205, 1.2403381276355205) _gate_q_0;
}
gate cu1_5072606592(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9147873754270828) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9147873754270828) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9147873754270828) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5072605920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0249850095035518, 0.6386317338200298, -0.6386317338200298) _gate_q_0;
}
gate xx_plus_yy_5072604240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.123442030712877) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7967284528794107) _gate_q_1;
  ry(-2.7967284528794107) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.123442030712877) _gate_q_0;
}
gate cu3_5072617152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.395164580119367) _gate_q_0;
  u1(-2.3747767995827935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9561063794053206, 0, -3.395164580119367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9561063794053206, 5.769941379702161, 0) _gate_q_1;
}
gate rxx_5072607600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.843836210399944) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072611488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.228200679903725) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4241807193882865) _gate_q_1;
  ry(-2.4241807193882865) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.228200679903725) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  ch _gate_q_2, _gate_q_4;
  sx _gate_q_0;
  x _gate_q_8;
  y _gate_q_5;
  swap _gate_q_6, _gate_q_9;
  ry(3.7119154204364357) _gate_q_1;
  rxx_5072612784(0.2824833814407535) _gate_q_3, _gate_q_7;
  cy _gate_q_2, _gate_q_0;
  r_5072604096(5.949935843790064, 0.330458199159376) _gate_q_4;
  t _gate_q_3;
  crx(3.2221574199314906) _gate_q_7, _gate_q_8;
  rx(6.094563079239535) _gate_q_1;
  cy _gate_q_9, _gate_q_6;
  rz(2.637823208654664) _gate_q_5;
  u2(3.1246538035912863, 2.792149508820668) _gate_q_7;
  z _gate_q_6;
  cu1_5072606592(3.8295747508541655) _gate_q_2, _gate_q_3;
  s _gate_q_0;
  dcx _gate_q_1, _gate_q_9;
  cy _gate_q_5, _gate_q_8;
  sdg _gate_q_4;
  csdg _gate_q_2, _gate_q_1;
  r_5072605920(3.0249850095035518, 2.2094280606149264) _gate_q_7;
  rx(3.3843507088870606) _gate_q_6;
  s _gate_q_3;
  u3(3.255539918642322, 3.0524186830694617, 2.2373285489859454) _gate_q_5;
  cry(1.8909851833404543) _gate_q_4, _gate_q_8;
  cry(4.183700717962351) _gate_q_9, _gate_q_0;
  cx _gate_q_8, _gate_q_6;
  cy _gate_q_7, _gate_q_2;
  cy _gate_q_4, _gate_q_0;
  csdg _gate_q_9, _gate_q_1;
  cry(4.28081749598416) _gate_q_3, _gate_q_5;
  sx _gate_q_4;
  cry(1.9231843553103223) _gate_q_1, _gate_q_7;
  u2(4.385134168888698, 2.8146671260423877) _gate_q_8;
  csx _gate_q_5, _gate_q_0;
  rx(3.2689392986574286) _gate_q_2;
  h _gate_q_3;
  ecr _gate_q_6, _gate_q_9;
  xx_plus_yy_5072604240(5.5934569057588215, 1.123442030712877) _gate_q_6, _gate_q_2;
  sx _gate_q_7;
  t _gate_q_0;
  tdg _gate_q_3;
  swap _gate_q_5, _gate_q_4;
  rx(4.971458974196693) _gate_q_1;
  cp(4.9031866272493145) _gate_q_8, _gate_q_9;
  swap _gate_q_1, _gate_q_7;
  iswap _gate_q_4, _gate_q_6;
  csx _gate_q_9, _gate_q_0;
  tdg _gate_q_5;
  y _gate_q_8;
  csx _gate_q_2, _gate_q_3;
  rz(4.525131610218074) _gate_q_2;
  sdg _gate_q_7;
  csdg _gate_q_4, _gate_q_5;
  cu3_5072617152(5.912212758810641, 5.769941379702161, 1.020387780536573) _gate_q_1, _gate_q_3;
  rxx_5072607600(2.843836210399944) _gate_q_9, _gate_q_8;
  cp(1.2512525983889484) _gate_q_0, _gate_q_6;
  id _gate_q_6;
  s _gate_q_7;
  cry(5.723687381368969) _gate_q_0, _gate_q_4;
  U(1.0590051232777564, 1.414734081876017, 0.0025706803943333716) _gate_q_5;
  xx_plus_yy_5072611488(4.848361438776573, 2.228200679903725) _gate_q_9, _gate_q_8;
  iswap _gate_q_1, _gate_q_3;
  z _gate_q_2;
}