gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5116637552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.899422053835752) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5116637024(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.472794629926767) _gate_q_0;
  u1(1.7704520913376398) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.36220431779305706, 0, -4.472794629926767) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.36220431779305706, 2.7023425385891278, 0) _gate_q_1;
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
gate xx_plus_yy_5116637792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.264307824262854) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0961414199458903) _gate_q_1;
  ry(-2.0961414199458903) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.264307824262854) _gate_q_0;
}
gate cu1_5116636976(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6101294303886098) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6101294303886098) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6101294303886098) _gate_q_1;
}
gate rzz_5116638176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.133884656119317) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5116639760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.205179970305328) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.205179970305328) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.205179970305328) _gate_q_1;
}
gate cu3_5116639664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.611844945355495) _gate_q_0;
  u1(0.8954942256351457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0882470917589195, 0, -4.611844945355495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0882470917589195, 3.716350719720349, 0) _gate_q_1;
}
gate cu3_5116640192(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.034398655280964) _gate_q_0;
  u1(2.2925151192536193) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8073107569054047, 0, -3.034398655280964) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8073107569054047, 0.7418835360273451, 0) _gate_q_1;
}
gate r_5116639280(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8111601013154928, 0.8196910467345604, -0.8196910467345604) _gate_q_0;
}
gate ryy_5116640432(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.10773051325667687) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5116639952(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8767866493901426) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5116640480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8270817919514617) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8270817919514617) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8270817919514617) _gate_q_1;
}
gate ryy_5116640672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2508140823376688) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5116640576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6230942189203814) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6230942189203814) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6230942189203814) _gate_q_1;
}
gate rzz_5116640528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.396723709978864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5116638992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.721512804168525) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5107064448(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4204816363348705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107072704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.268792231873498) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2389701636771457) _gate_q_1;
  ry(-2.2389701636771457) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.268792231873498) _gate_q_0;
}
gate rxx_5107061616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.009213062292662) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107069488(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3693360755258004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  sxdg _gate_q_13;
  h _gate_q_9;
  rxx_5116637552(5.899422053835752) _gate_q_11, _gate_q_3;
  cu3_5116637024(0.7244086355861141, 2.7023425385891278, 6.243246721264407) _gate_q_8, _gate_q_1;
  id _gate_q_7;
  cx _gate_q_6, _gate_q_14;
  ecr _gate_q_5, _gate_q_12;
  cy _gate_q_2, _gate_q_4;
  xx_plus_yy_5116637792(4.192282839891781, 4.264307824262854) _gate_q_0, _gate_q_10;
  sxdg _gate_q_5;
  sxdg _gate_q_0;
  s _gate_q_12;
  cp(6.035821120053392) _gate_q_10, _gate_q_1;
  cry(2.813157630456134) _gate_q_11, _gate_q_9;
  cx _gate_q_6, _gate_q_2;
  cu(6.027771362030136, 4.713940294309808, 0.8234741107442942, 2.3373437678993216) _gate_q_4, _gate_q_8;
  cu1_5116636976(3.2202588607772196) _gate_q_3, _gate_q_14;
  x _gate_q_7;
  u3(6.0380117374831785, 0.570122135079532, 3.441358375362143) _gate_q_13;
  tdg _gate_q_7;
  rzz_5116638176(1.133884656119317) _gate_q_9, _gate_q_10;
  cu(1.5566446185153688, 2.0507523377572694, 3.3585391408680585, 4.997642523726007) _gate_q_5, _gate_q_6;
  cs _gate_q_13, _gate_q_0;
  p(4.302452908497592) _gate_q_1;
  dcx _gate_q_3, _gate_q_14;
  cs _gate_q_8, _gate_q_12;
  u1(3.0345369097216293) _gate_q_11;
  ry(6.207507633179997) _gate_q_4;
  s _gate_q_2;
  cry(0.936670690600455) _gate_q_10, _gate_q_14;
  u3(1.6427610759819495, 0.39820493554379066, 3.8999482095029263) _gate_q_13;
  cu(6.187631803973501, 4.516372496888255, 5.295781271081395, 2.750571357461272) _gate_q_6, _gate_q_11;
  p(5.940270247182318) _gate_q_5;
  cu(1.4802560690083417, 6.063298162825742, 1.6335809298044655, 5.323311226826475) _gate_q_4, _gate_q_3;
  sxdg _gate_q_2;
  crz(3.931674690512307) _gate_q_1, _gate_q_9;
  t _gate_q_8;
  csdg _gate_q_7, _gate_q_0;
  sxdg _gate_q_12;
  iswap _gate_q_4, _gate_q_2;
  ecr _gate_q_8, _gate_q_11;
  x _gate_q_0;
  ch _gate_q_1, _gate_q_10;
  dcx _gate_q_9, _gate_q_13;
  y _gate_q_5;
  U(5.00593086013693, 2.049981931370904, 4.002820621755626) _gate_q_12;
  s _gate_q_7;
  u3(3.923062398930323, 1.9474683836018232, 2.288751157197666) _gate_q_6;
  u2(0.31937377327832794, 1.4782952318216527) _gate_q_14;
  t _gate_q_3;
  cp(4.469286259741215) _gate_q_4, _gate_q_13;
  ch _gate_q_12, _gate_q_1;
  cu(2.6252578996290428, 4.6618722868157185, 0.8431698209770196, 1.1064882031055037) _gate_q_10, _gate_q_3;
  u2(0.7205920251336176, 2.0255090890226626) _gate_q_5;
  s _gate_q_8;
  cu1_5116639760(4.410359940610656) _gate_q_6, _gate_q_7;
  swap _gate_q_0, _gate_q_11;
  cu(0.573039764122764, 1.2116947247087144, 3.5476063572582603, 0.4034026713965519) _gate_q_2, _gate_q_14;
  U(4.137914160425066, 3.68792111280403, 6.017516963672874) _gate_q_9;
  u1(1.870968965792834) _gate_q_11;
  cu3_5116639664(6.176494183517839, 3.716350719720349, 5.50733917099064) _gate_q_5, _gate_q_3;
  cp(3.498934473677431) _gate_q_2, _gate_q_7;
  id _gate_q_10;
  t _gate_q_13;
  cu3_5116640192(1.6146215138108093, 0.7418835360273451, 5.326913774534583) _gate_q_0, _gate_q_12;
  r_5116639280(1.8111601013154928, 2.390487373529457) _gate_q_8;
  p(1.089465392385745) _gate_q_4;
  sxdg _gate_q_9;
  ryy_5116640432(0.10773051325667687) _gate_q_6, _gate_q_1;
  p(0.38801965937168476) _gate_q_14;
  ryy_5116639952(3.8767866493901426) _gate_q_13, _gate_q_7;
  u2(4.300281570720885, 1.6675169658972042) _gate_q_9;
  cu1_5116640480(1.6541635839029234) _gate_q_10, _gate_q_6;
  rx(4.309532195031816) _gate_q_3;
  rx(5.80589648301704) _gate_q_8;
  csdg _gate_q_2, _gate_q_4;
  swap _gate_q_11, _gate_q_14;
  ryy_5116640672(1.2508140823376688) _gate_q_5, _gate_q_1;
  U(1.9273469885043528, 6.009632938457789, 5.000118652615014) _gate_q_0;
  sx _gate_q_12;
  cu1_5116640576(3.246188437840763) _gate_q_11, _gate_q_10;
  U(0.5665127406703303, 4.018215275148169, 2.644655245781554) _gate_q_8;
  tdg _gate_q_9;
  cry(3.126974987911065) _gate_q_7, _gate_q_4;
  u2(3.3917979487546024, 1.641031329014016) _gate_q_3;
  rz(4.368783414566805) _gate_q_0;
  y _gate_q_1;
  rzz_5116640528(2.396723709978864) _gate_q_14, _gate_q_6;
  rzx_5116638992(1.721512804168525) _gate_q_5, _gate_q_12;
  s _gate_q_13;
  u3(0.9807023388589147, 0.895082732747708, 5.596126147727075) _gate_q_2;
  z _gate_q_8;
  cx _gate_q_6, _gate_q_10;
  z _gate_q_3;
  ryy_5107064448(1.4204816363348705) _gate_q_1, _gate_q_12;
  xx_plus_yy_5107072704(4.4779403273542915, 6.268792231873498) _gate_q_11, _gate_q_2;
  crz(5.823458389745348) _gate_q_7, _gate_q_5;
  rxx_5107061616(3.009213062292662) _gate_q_14, _gate_q_13;
  rzz_5107069488(1.3693360755258004) _gate_q_9, _gate_q_4;
  U(2.604874762154488, 3.9225128280789874, 2.4578741016781014) _gate_q_0;
}
gate ryy_5116901088(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.984309594161187) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5116901568(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.1608018813382148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5116894512(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.598903556066989, 1.3811829040824617, -1.3811829040824617) _gate_q_0;
}
gate rzz_5116900656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.251623139037766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5106107696(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.05950785814967277) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.05950785814967277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.05950785814967277) _gate_q_1;
}
gate cu3_5106114464(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2717657549927526) _gate_q_0;
  u1(0.8963443944215758) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.21041171600318015, 0, -1.2717657549927526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.21041171600318015, 0.37542136057117687, 0) _gate_q_1;
}
gate rzz_5106107600(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.117980390777694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106108704(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.980169187541039, 2.3861614802197137, -2.3861614802197137) _gate_q_0;
}
gate xx_minus_yy_5106120896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.5377785778465523) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4092531969806243) _gate_q_0;
  ry(-2.4092531969806243) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.5377785778465523) _gate_q_1;
}
gate cu1_5106569280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2940719643827396) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2940719643827396) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2940719643827396) _gate_q_1;
}
gate rzz_5106567216(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6638212189734571) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5106566592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.028177046822397) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate cu3_5106565776(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.068869538376002) _gate_q_0;
  u1(3.0686683024916963) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8425728263110397, 0, -3.068869538376002) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8425728263110397, 0.00020123588430520265, 0) _gate_q_1;
}
gate cu3_5106573600(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.0931398394806995) _gate_q_0;
  u1(-0.152373814142174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4234595490222697, 0, -1.0931398394806995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4234595490222697, 1.2455136536228735, 0) _gate_q_1;
}
gate r_5106581472(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.781974853306069, 0.5678305490905027, -0.5678305490905027) _gate_q_0;
}
gate cu3_5106577248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.643747401302076) _gate_q_0;
  u1(-0.7454195140737594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.775831778721833, 0, -4.643747401302076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.775831778721833, 5.389166915375836, 0) _gate_q_1;
}
gate xx_minus_yy_5106996896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.005597971154646) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7691261556839648) _gate_q_0;
  ry(-0.7691261556839648) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.005597971154646) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  ryy_5116901088(4.984309594161187) _gate_q_13, _gate_q_3;
  y _gate_q_12;
  csdg _gate_q_1, _gate_q_10;
  h _gate_q_11;
  rzz_5116901568(1.1608018813382148) _gate_q_9, _gate_q_4;
  cz _gate_q_8, _gate_q_7;
  crz(2.093871746416777) _gate_q_2, _gate_q_14;
  cry(5.497241685390935) _gate_q_0, _gate_q_6;
  sdg _gate_q_5;
  cx _gate_q_3, _gate_q_13;
  crz(3.48993246133281) _gate_q_7, _gate_q_12;
  sx _gate_q_10;
  ry(2.9983690648424353) _gate_q_14;
  ecr _gate_q_9, _gate_q_1;
  h _gate_q_11;
  crx(1.197296727123192) _gate_q_6, _gate_q_4;
  r_5116894512(3.598903556066989, 2.9519792308773583) _gate_q_2;
  y _gate_q_0;
  iswap _gate_q_5, _gate_q_8;
  sdg _gate_q_13;
  cx _gate_q_3, _gate_q_12;
  cu(0.004305572108226261, 1.475194976399592, 3.7373900123671415, 2.1708557071137977) _gate_q_9, _gate_q_0;
  rzz_5116900656(2.251623139037766) _gate_q_14, _gate_q_6;
  U(0.46704530165671515, 4.6506776531005425, 0.18991663945483017) _gate_q_4;
  sdg _gate_q_7;
  sxdg _gate_q_5;
  U(4.64606602600918, 3.220201823966276, 0.8738056797558872) _gate_q_1;
  p(5.644927640264716) _gate_q_2;
  u2(3.2814833359493556, 6.156901040367626) _gate_q_8;
  u3(4.188200611086154, 0.21604726217748643, 4.542473116499446) _gate_q_10;
  u3(0.8835960626774091, 0.9776171812501764, 1.1750284919462508) _gate_q_11;
  crz(3.990079149471946) _gate_q_0, _gate_q_2;
  swap _gate_q_4, _gate_q_12;
  u2(2.4630463480517197, 3.123805893551133) _gate_q_1;
  crz(5.8667712538370145) _gate_q_11, _gate_q_5;
  ch _gate_q_10, _gate_q_3;
  cu1_5106107696(0.11901571629934554) _gate_q_9, _gate_q_14;
  cu3_5106114464(0.4208234320063603, 0.37542136057117687, 2.1681101494143284) _gate_q_6, _gate_q_7;
  rzz_5106107600(3.117980390777694) _gate_q_13, _gate_q_8;
  ry(4.682058351058924) _gate_q_5;
  y _gate_q_7;
  cx _gate_q_8, _gate_q_2;
  sdg _gate_q_3;
  r_5106108704(2.980169187541039, 3.9569578070146103) _gate_q_6;
  h _gate_q_13;
  rz(1.8494424466180306) _gate_q_11;
  xx_minus_yy_5106120896(4.818506393961249, 2.5377785778465523) _gate_q_0, _gate_q_14;
  crx(2.457542327172741) _gate_q_4, _gate_q_12;
  cu1_5106569280(4.588143928765479) _gate_q_1, _gate_q_10;
  tdg _gate_q_9;
  ch _gate_q_3, _gate_q_5;
  rzz_5106567216(1.6638212189734571) _gate_q_11, _gate_q_13;
  rz(4.872587001410766) _gate_q_2;
  U(4.908732804379422, 1.3334336225247567, 1.3519979957626995) _gate_q_7;
  U(0.7818599258480866, 0.898960128758239, 1.6710468101974172) _gate_q_12;
  sdg _gate_q_4;
  rzx_5106566592(2.028177046822397) _gate_q_8, _gate_q_10;
  ch _gate_q_1, _gate_q_14;
  x _gate_q_6;
  ch _gate_q_9, _gate_q_0;
  y _gate_q_5;
  sdg _gate_q_12;
  csx _gate_q_10, _gate_q_2;
  cy _gate_q_8, _gate_q_4;
  s _gate_q_14;
  iswap _gate_q_6, _gate_q_11;
  u2(2.091459020493385, 0.9750589189028555) _gate_q_13;
  z _gate_q_3;
  u1(1.6652832117920475) _gate_q_1;
  rx(0.01134183349212758) _gate_q_7;
  cu3_5106565776(3.6851456526220794, 0.00020123588430520265, 6.137537840867698) _gate_q_9, _gate_q_0;
  sx _gate_q_4;
  cu3_5106573600(4.846919098044539, 1.2455136536228735, 0.9407660253385255) _gate_q_9, _gate_q_10;
  r_5106581472(4.781974853306069, 2.1386268758853992) _gate_q_14;
  x _gate_q_2;
  cz _gate_q_13, _gate_q_5;
  u3(3.3101814585719977, 3.0993697309230344, 6.201112321114888) _gate_q_8;
  rz(2.7514253557506896) _gate_q_7;
  cs _gate_q_0, _gate_q_3;
  h _gate_q_11;
  csx _gate_q_1, _gate_q_12;
  tdg _gate_q_6;
  U(4.796889625465628, 4.386633064764929, 2.066226424350209) _gate_q_5;
  s _gate_q_3;
  ry(0.6626235090009474) _gate_q_10;
  t _gate_q_13;
  cry(5.590758065205878) _gate_q_14, _gate_q_11;
  u2(0.23437783612449362, 1.267282864058925) _gate_q_9;
  u3(3.7842416898709823, 2.307631849343549, 5.172123500297323) _gate_q_4;
  z _gate_q_8;
  u3(3.620930601570023, 1.4144047395222665, 5.200902249061135) _gate_q_2;
  cu3_5106577248(5.551663557443666, 5.389166915375836, 3.898327887228317) _gate_q_0, _gate_q_12;
  cp(0.4377635291397464) _gate_q_7, _gate_q_1;
  ry(5.397589883962458) _gate_q_6;
  u3(1.1366164073092573, 1.1096914481515825, 2.1279162817248043) _gate_q_3;
  ecr _gate_q_7, _gate_q_13;
  crz(0.9797052813617242) _gate_q_12, _gate_q_4;
  ry(2.0939598670437727) _gate_q_14;
  x _gate_q_5;
  sx _gate_q_11;
  h _gate_q_10;
  cz _gate_q_9, _gate_q_0;
  xx_minus_yy_5106996896(1.5382523113679296, 4.005597971154646) _gate_q_8, _gate_q_1;
  t _gate_q_2;
  tdg _gate_q_6;
}