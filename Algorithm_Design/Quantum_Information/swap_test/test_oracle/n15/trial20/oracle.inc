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
gate ryy_5072977216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.184538860416807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072971168(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0529246640026866) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072970400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.43842482381158) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7267467059691997) _gate_q_1;
  ry(-1.7267467059691997) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.43842482381158) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5072974096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.137661425090508, 1.4405020733370555, -1.4405020733370555) _gate_q_0;
}
gate cu1_5072975200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.704593299885189) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.704593299885189) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.704593299885189) _gate_q_1;
}
gate ryy_5072975440(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.062325091799066) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5072976736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.526261832826625) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.638816675637502) _gate_q_1;
  ry(-2.638816675637502) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.526261832826625) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5072967280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.387963901511252) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072972224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.6833535060937236) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8589211018181853) _gate_q_0;
  ry(-1.8589211018181853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.6833535060937236) _gate_q_1;
}
gate rzz_5072974048(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.167146118134652) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072779696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.506232807355127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072779648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5900056936680667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072774080(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.7372792252011156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072777248(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.6051924286087558, -1.1787925137124786, 1.1787925137124786) _gate_q_0;
}
gate rzx_5072769568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.012939949179182) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072769520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.3115324158322546) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1485896516300134) _gate_q_1;
  ry(-2.1485896516300134) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.3115324158322546) _gate_q_0;
}
gate rxx_5072770432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.047238790638728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072781184(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.598063328192523) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072770480(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3148444650986703) _gate_q_1;
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
gate rzx_5072768944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.636721350408639) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072777296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.317783597755001, 3.9408539764442576, -3.9408539764442576) _gate_q_0;
}
gate rzz_5072780368(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5026100035240493) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072771296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.643415840181147, 0.8666265140350125, -0.8666265140350125) _gate_q_0;
}
gate cu3_5072776912(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.986324098163045) _gate_q_0;
  u1(0.5300681024268776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7223187069727997, 0, -4.986324098163045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7223187069727997, 4.456255995736167, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  U(0.3418749444501857, 4.231982061202432, 2.8951821107564855) _gate_q_10;
  crz(5.763317862946748) _gate_q_8, _gate_q_2;
  ecr _gate_q_4, _gate_q_12;
  ryy_5072977216(6.184538860416807) _gate_q_0, _gate_q_11;
  rzz_5072971168(1.0529246640026866) _gate_q_6, _gate_q_1;
  u1(6.045385827586374) _gate_q_14;
  xx_plus_yy_5072970400(3.4534934119383993, 5.43842482381158) _gate_q_5, _gate_q_7;
  cs _gate_q_3, _gate_q_13;
  sdg _gate_q_9;
  U(1.5180279068424565, 3.476929700838597, 1.4101926841624253) _gate_q_6;
  cx _gate_q_10, _gate_q_3;
  crz(2.5215915833907174) _gate_q_14, _gate_q_13;
  ch _gate_q_1, _gate_q_5;
  r_5072974096(2.137661425090508, 3.011298400131952) _gate_q_0;
  cu1_5072975200(3.409186599770378) _gate_q_7, _gate_q_11;
  sxdg _gate_q_12;
  ryy_5072975440(4.062325091799066) _gate_q_4, _gate_q_2;
  sdg _gate_q_9;
  sxdg _gate_q_8;
  rz(2.176004166831849) _gate_q_9;
  ch _gate_q_8, _gate_q_11;
  dcx _gate_q_0, _gate_q_7;
  z _gate_q_10;
  swap _gate_q_14, _gate_q_13;
  xx_plus_yy_5072976736(5.277633351275004, 4.526261832826625) _gate_q_5, _gate_q_3;
  csdg _gate_q_1, _gate_q_6;
  cry(2.674274737551205) _gate_q_12, _gate_q_4;
  sx _gate_q_2;
  rzx_5072967280(3.387963901511252) _gate_q_4, _gate_q_3;
  ch _gate_q_11, _gate_q_0;
  xx_minus_yy_5072972224(3.7178422036363705, 0.6833535060937236) _gate_q_9, _gate_q_12;
  cs _gate_q_5, _gate_q_7;
  sxdg _gate_q_14;
  t _gate_q_2;
  ecr _gate_q_13, _gate_q_1;
  csdg _gate_q_6, _gate_q_10;
  u3(1.141076926353876, 2.7305515922098773, 1.3918914563809393) _gate_q_8;
  s _gate_q_13;
  id _gate_q_1;
  csdg _gate_q_8, _gate_q_11;
  s _gate_q_4;
  s _gate_q_7;
  rzz_5072974048(1.167146118134652) _gate_q_3, _gate_q_6;
  rxx_5072779696(4.506232807355127) _gate_q_2, _gate_q_10;
  crx(4.973530409273043) _gate_q_0, _gate_q_12;
  rzx_5072779648(3.5900056936680667) _gate_q_14, _gate_q_5;
  sdg _gate_q_9;
  u1(0.6554543652491817) _gate_q_8;
  dcx _gate_q_1, _gate_q_4;
  rx(2.560216794590657) _gate_q_7;
  u2(5.353996954488037, 1.311395944372398) _gate_q_12;
  swap _gate_q_13, _gate_q_6;
  ryy_5072774080(5.7372792252011156) _gate_q_2, _gate_q_5;
  tdg _gate_q_3;
  r_5072777248(2.6051924286087558, 0.39200381308241794) _gate_q_10;
  swap _gate_q_14, _gate_q_0;
  rzx_5072769568(5.012939949179182) _gate_q_9, _gate_q_11;
  cy _gate_q_13, _gate_q_5;
  xx_plus_yy_5072769520(4.297179303260027, 5.3115324158322546) _gate_q_1, _gate_q_9;
  u1(1.1368693260230764) _gate_q_3;
  U(1.1054699356379822, 5.997233317276817, 5.782213418313554) _gate_q_0;
  swap _gate_q_8, _gate_q_11;
  p(1.138718382438562) _gate_q_14;
  U(3.887762316630772, 5.765426328622745, 5.946795075009843) _gate_q_7;
  tdg _gate_q_2;
  rxx_5072770432(6.047238790638728) _gate_q_12, _gate_q_4;
  sxdg _gate_q_6;
  u2(4.073784453804687, 2.399376403208935) _gate_q_10;
  U(5.648087067016752, 1.2676134599961228, 0.022944558071890487) _gate_q_0;
  u1(0.4245508548872885) _gate_q_7;
  rzz_5072781184(2.598063328192523) _gate_q_3, _gate_q_13;
  cu(1.7138996561936934, 0.4335364305524406, 6.226978598395521, 5.345639305329283) _gate_q_9, _gate_q_2;
  U(4.472010759780662, 2.635528486681641, 2.4947706285966293) _gate_q_8;
  crx(3.3854814974793483) _gate_q_11, _gate_q_5;
  ryy_5072770480(0.3148444650986703) _gate_q_1, _gate_q_4;
  iswap _gate_q_12, _gate_q_14;
  cx _gate_q_6, _gate_q_10;
  p(4.36745596106504) _gate_q_2;
  cy _gate_q_8, _gate_q_10;
  iswap _gate_q_9, _gate_q_12;
  rzx_5072768944(5.636721350408639) _gate_q_14, _gate_q_4;
  ch _gate_q_7, _gate_q_6;
  y _gate_q_11;
  r_5072777296(4.317783597755001, 5.511650303239154) _gate_q_0;
  x _gate_q_5;
  s _gate_q_1;
  sxdg _gate_q_13;
  sdg _gate_q_3;
  iswap _gate_q_11, _gate_q_14;
  crz(1.0245158939339767) _gate_q_0, _gate_q_7;
  id _gate_q_3;
  rzz_5072780368(2.5026100035240493) _gate_q_6, _gate_q_8;
  cy _gate_q_5, _gate_q_1;
  cy _gate_q_10, _gate_q_13;
  r_5072771296(4.643415840181147, 2.437422840829909) _gate_q_9;
  cu3_5072776912(3.4446374139455993, 4.456255995736167, 5.516392200589922) _gate_q_2, _gate_q_12;
  x _gate_q_4;
}
gate cu1_5072779120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.08933017164851179) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.08933017164851179) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.08933017164851179) _gate_q_1;
}
gate xx_minus_yy_5072767552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7403494239112327) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.53950115657921) _gate_q_0;
  ry(-2.53950115657921) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7403494239112327) _gate_q_1;
}
gate rzx_5072780032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.11156224024527883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5072772112(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.182478510239733) _gate_q_0;
  u1(-0.3540806711651121) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4666971038789465, 0, -4.182478510239733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4666971038789465, 4.536559181404845, 0) _gate_q_1;
}
gate cu3_5072767648(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.2693025175840402) _gate_q_0;
  u1(-1.627315853688831) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4849778400522948, 0, -2.2693025175840402) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4849778400522948, 3.8966183712728713, 0) _gate_q_1;
}
gate cu1_5072774272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6075789399993168) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6075789399993168) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6075789399993168) _gate_q_1;
}
gate cu3_5072778496(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.274803391226944) _gate_q_0;
  u1(1.8239087954537525) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6140557823845016, 0, -3.274803391226944) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6140557823845016, 1.4508945957731918, 0) _gate_q_1;
}
gate xx_plus_yy_5072775808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.213614253215547) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.87420761019844) _gate_q_1;
  ry(-2.87420761019844) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.213614253215547) _gate_q_0;
}
gate xx_minus_yy_5072771776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.159488601750632) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9804554105282919) _gate_q_0;
  ry(-0.9804554105282919) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.159488601750632) _gate_q_1;
}
gate r_5072776048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.173066592197039, 0.8437363386365075, -0.8437363386365075) _gate_q_0;
}
gate xx_plus_yy_5072777392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.874382029865093) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.08286133245262402) _gate_q_1;
  ry(-0.08286133245262402) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.874382029865093) _gate_q_0;
}
gate cu1_5072766832(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.048133274958061) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.048133274958061) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.048133274958061) _gate_q_1;
}
gate rzz_5072776672(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.828824995699763) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072780224(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.655149812394398) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072768128(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7586839994960365) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7586839994960365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7586839994960365) _gate_q_1;
}
gate xx_plus_yy_5072769472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.10125748841683) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1429518759609207) _gate_q_1;
  ry(-1.1429518759609207) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.10125748841683) _gate_q_0;
}
gate rxx_5072768032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.1716598935006495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072774704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.682771779717411) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.12493945777513092) _gate_q_1;
  ry(-0.12493945777513092) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.682771779717411) _gate_q_0;
}
gate rxx_5072781136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3759541823102963) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072778640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.4834923845199124) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8311122464253741) _gate_q_0;
  ry(-0.8311122464253741) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.4834923845199124) _gate_q_1;
}
gate rzz_5072777680(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.320081517761071) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072779216(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.744100297118721, 1.6187888166952034, -1.6187888166952034) _gate_q_0;
}
gate xx_plus_yy_5072771488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6613111724648213) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.537066018700465) _gate_q_1;
  ry(-0.537066018700465) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6613111724648213) _gate_q_0;
}
gate rzz_5072765008(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.673050029961845) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  cz _gate_q_4, _gate_q_6;
  cu1_5072779120(0.17866034329702357) _gate_q_11, _gate_q_3;
  xx_minus_yy_5072767552(5.07900231315842, 1.7403494239112327) _gate_q_0, _gate_q_10;
  rzx_5072780032(0.11156224024527883) _gate_q_1, _gate_q_13;
  cu3_5072772112(2.933394207757893, 4.536559181404845, 3.828397839074621) _gate_q_7, _gate_q_14;
  cx _gate_q_9, _gate_q_12;
  cu(6.183795651860746, 1.778243882578445, 4.315925679515699, 6.251393236647747) _gate_q_8, _gate_q_2;
  y _gate_q_5;
  rz(0.4963618096314291) _gate_q_1;
  crz(1.610499822026965) _gate_q_7, _gate_q_0;
  tdg _gate_q_11;
  ecr _gate_q_5, _gate_q_2;
  cu3_5072767648(2.9699556801045897, 3.8966183712728713, 0.6419866638952094) _gate_q_6, _gate_q_12;
  ch _gate_q_3, _gate_q_4;
  p(4.764205867671212) _gate_q_9;
  cry(2.6430734524088653) _gate_q_8, _gate_q_10;
  cu1_5072774272(1.2151578799986336) _gate_q_14, _gate_q_13;
  cu3_5072778496(5.228111564769003, 1.4508945957731918, 5.098712186680697) _gate_q_1, _gate_q_8;
  rx(1.3000249569163072) _gate_q_9;
  sx _gate_q_4;
  x _gate_q_10;
  dcx _gate_q_6, _gate_q_14;
  tdg _gate_q_12;
  rx(2.14983927462375) _gate_q_0;
  xx_plus_yy_5072775808(5.74841522039688, 5.213614253215547) _gate_q_13, _gate_q_5;
  xx_minus_yy_5072771776(1.9609108210565838, 6.159488601750632) _gate_q_2, _gate_q_3;
  u1(5.231597035246654) _gate_q_11;
  r_5072776048(6.173066592197039, 2.414532665431404) _gate_q_7;
  rx(3.4622360489377595) _gate_q_5;
  cx _gate_q_4, _gate_q_11;
  z _gate_q_7;
  u2(4.269655116367549, 3.3649071385390026) _gate_q_6;
  xx_plus_yy_5072777392(0.16572266490524803, 5.874382029865093) _gate_q_9, _gate_q_2;
  t _gate_q_0;
  cu1_5072766832(6.096266549916122) _gate_q_14, _gate_q_8;
  rzz_5072776672(0.828824995699763) _gate_q_1, _gate_q_13;
  cs _gate_q_10, _gate_q_12;
  rx(5.002018126575854) _gate_q_3;
  s _gate_q_1;
  rx(5.255091802618956) _gate_q_4;
  crz(2.1630041013886387) _gate_q_8, _gate_q_5;
  sdg _gate_q_9;
  sx _gate_q_11;
  U(3.510239259273034, 4.83016649703805, 4.457833018274178) _gate_q_7;
  cp(0.34651263191786874) _gate_q_2, _gate_q_6;
  rz(2.554526317186162) _gate_q_13;
  rz(2.0514794306114377) _gate_q_14;
  csdg _gate_q_3, _gate_q_10;
  x _gate_q_0;
  y _gate_q_12;
  t _gate_q_12;
  u2(2.007699081722825, 5.25447511446414) _gate_q_4;
  iswap _gate_q_5, _gate_q_6;
  id _gate_q_1;
  ecr _gate_q_13, _gate_q_3;
  u2(0.11653258882951335, 4.864759317469443) _gate_q_2;
  ryy_5072780224(4.655149812394398) _gate_q_14, _gate_q_8;
  sdg _gate_q_9;
  rz(3.480202329968231) _gate_q_11;
  cs _gate_q_0, _gate_q_10;
  y _gate_q_7;
  rz(5.793537272834679) _gate_q_13;
  iswap _gate_q_10, _gate_q_9;
  cu1_5072768128(1.517367998992073) _gate_q_4, _gate_q_8;
  xx_plus_yy_5072769472(2.2859037519218415, 2.10125748841683) _gate_q_3, _gate_q_14;
  sxdg _gate_q_2;
  rxx_5072768032(6.1716598935006495) _gate_q_12, _gate_q_11;
  ch _gate_q_0, _gate_q_7;
  x _gate_q_1;
  u3(0.1636578462404951, 2.711516575688455, 0.4526334950848582) _gate_q_6;
  u1(3.0561540928003748) _gate_q_5;
  cp(2.9386481650896488) _gate_q_7, _gate_q_10;
  xx_plus_yy_5072774704(0.24987891555026184, 4.682771779717411) _gate_q_6, _gate_q_4;
  tdg _gate_q_13;
  sx _gate_q_9;
  u1(2.90025453844983) _gate_q_3;
  crz(4.586511857870555) _gate_q_8, _gate_q_0;
  csdg _gate_q_11, _gate_q_5;
  crx(2.895616515660247) _gate_q_1, _gate_q_14;
  id _gate_q_2;
  s _gate_q_12;
  rxx_5072781136(3.3759541823102963) _gate_q_10, _gate_q_13;
  iswap _gate_q_1, _gate_q_14;
  x _gate_q_9;
  sx _gate_q_3;
  xx_minus_yy_5072778640(1.6622244928507481, 3.4834923845199124) _gate_q_7, _gate_q_2;
  csdg _gate_q_0, _gate_q_11;
  rx(4.350191943327871) _gate_q_12;
  cy _gate_q_8, _gate_q_6;
  id _gate_q_5;
  z _gate_q_4;
  s _gate_q_3;
  rzz_5072777680(4.320081517761071) _gate_q_12, _gate_q_13;
  csdg _gate_q_9, _gate_q_4;
  r_5072779216(4.744100297118721, 3.1895851434901) _gate_q_11;
  xx_plus_yy_5072771488(1.07413203740093, 0.6613111724648213) _gate_q_10, _gate_q_14;
  rzz_5072765008(4.673050029961845) _gate_q_5, _gate_q_6;
  sdg _gate_q_0;
  t _gate_q_8;
  cp(5.379842235413193) _gate_q_7, _gate_q_1;
  p(2.924746426632678) _gate_q_2;
}