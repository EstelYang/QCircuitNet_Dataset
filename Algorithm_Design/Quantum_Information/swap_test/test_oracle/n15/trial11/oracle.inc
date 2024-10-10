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
gate rzz_5072971888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.014776716699552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072969680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.163044750698044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate rzz_5072969632(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6372808549922617) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072966896(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.301304946505396) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072967232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.8396256863099638) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.531197062807608) _gate_q_1;
  ry(-0.531197062807608) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.8396256863099638) _gate_q_0;
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
gate rxx_5072967808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5520657016982915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072963008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.032943982865851) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072972320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.36871258769775) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072966272(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.320832475152788) _gate_q_0;
  u1(1.2952899453845799) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9110882427518084, 0, -1.320832475152788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9110882427518084, 0.025542529768207953, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5072967328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3949356662523655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072977600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.992667533028085) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.744606476435486) _gate_q_1;
  ry(-2.744606476435486) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.992667533028085) _gate_q_0;
}
gate xx_plus_yy_5072971600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3298799368334484) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3663978727797994) _gate_q_1;
  ry(-1.3663978727797994) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3298799368334484) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5072962336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6596507861551402) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.365038679319881) _gate_q_1;
  ry(-2.365038679319881) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6596507861551402) _gate_q_0;
}
gate cu1_5072973088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6898763522975501) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6898763522975501) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6898763522975501) _gate_q_1;
}
gate xx_plus_yy_5072962816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.016696178131284715) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7137580611474932) _gate_q_1;
  ry(-1.7137580611474932) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.016696178131284715) _gate_q_0;
}
gate cu3_5072974528(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7402047170577886) _gate_q_0;
  u1(1.487675158378943) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4016185247120685, 0, -3.7402047170577886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4016185247120685, 2.252529558678846, 0) _gate_q_1;
}
gate xx_minus_yy_5072972464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.846755130061412) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.48754467899192394) _gate_q_0;
  ry(-0.48754467899192394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.846755130061412) _gate_q_1;
}
gate rxx_5072970496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.534985726271778) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  p(4.887177528054911) _gate_q_8;
  csx _gate_q_14, _gate_q_3;
  rzz_5072971888(2.014776716699552) _gate_q_1, _gate_q_0;
  rxx_5072969680(6.163044750698044) _gate_q_4, _gate_q_9;
  ecr _gate_q_11, _gate_q_2;
  rzz_5072969632(1.6372808549922617) _gate_q_6, _gate_q_13;
  U(4.902644314259755, 5.668798687045968, 1.183181762316646) _gate_q_12;
  h _gate_q_5;
  crz(2.0252550603516584) _gate_q_7, _gate_q_10;
  rz(0.6854970454401889) _gate_q_13;
  ryy_5072966896(4.301304946505396) _gate_q_6, _gate_q_12;
  cu(5.899337173389193, 4.820967511285054, 3.5829082500182166, 5.850193958588414) _gate_q_2, _gate_q_11;
  p(0.6088088109901956) _gate_q_1;
  tdg _gate_q_3;
  ry(5.207889841604314) _gate_q_8;
  p(4.484325984844369) _gate_q_5;
  cy _gate_q_14, _gate_q_9;
  u3(2.521961619097652, 2.7496972069611676, 1.627090302745598) _gate_q_7;
  cx _gate_q_10, _gate_q_0;
  s _gate_q_4;
  id _gate_q_4;
  ch _gate_q_11, _gate_q_7;
  sxdg _gate_q_2;
  u3(3.187832831004837, 5.9151597060243715, 0.3415196374946514) _gate_q_12;
  t _gate_q_14;
  rz(0.6767349041210673) _gate_q_3;
  U(0.17743589527319845, 5.6722246076976806, 4.140291192857739) _gate_q_1;
  xx_plus_yy_5072967232(1.062394125615216, 1.8396256863099638) _gate_q_9, _gate_q_8;
  y _gate_q_5;
  ecr _gate_q_13, _gate_q_10;
  p(0.7458528094542314) _gate_q_6;
  t _gate_q_0;
  sdg _gate_q_3;
  cry(0.9369589397644421) _gate_q_14, _gate_q_13;
  cs _gate_q_8, _gate_q_7;
  csdg _gate_q_11, _gate_q_1;
  rxx_5072967808(0.5520657016982915) _gate_q_9, _gate_q_10;
  sxdg _gate_q_12;
  x _gate_q_6;
  rz(4.2667103701498235) _gate_q_5;
  rz(5.138980008528075) _gate_q_0;
  rz(6.2559227037646625) _gate_q_2;
  h _gate_q_4;
  sxdg _gate_q_13;
  rzx_5072963008(3.032943982865851) _gate_q_7, _gate_q_14;
  crz(5.182308569415912) _gate_q_11, _gate_q_4;
  ryy_5072972320(5.36871258769775) _gate_q_8, _gate_q_6;
  y _gate_q_2;
  x _gate_q_5;
  x _gate_q_3;
  cu3_5072966272(1.8221764855036169, 0.025542529768207953, 2.616122420537368) _gate_q_0, _gate_q_1;
  cz _gate_q_12, _gate_q_9;
  u1(4.590568434231528) _gate_q_10;
  cs _gate_q_6, _gate_q_5;
  z _gate_q_1;
  csx _gate_q_2, _gate_q_0;
  dcx _gate_q_8, _gate_q_13;
  sdg _gate_q_11;
  rxx_5072967328(3.3949356662523655) _gate_q_12, _gate_q_14;
  xx_plus_yy_5072977600(5.489212952870972, 3.992667533028085) _gate_q_4, _gate_q_3;
  rx(3.800401139233965) _gate_q_10;
  y _gate_q_9;
  u2(5.680233763347459, 4.867024206692297) _gate_q_7;
  crx(2.289979232846178) _gate_q_6, _gate_q_13;
  crx(6.062889165680828) _gate_q_2, _gate_q_10;
  xx_plus_yy_5072971600(2.732795745559599, 1.3298799368334484) _gate_q_5, _gate_q_11;
  ch _gate_q_0, _gate_q_7;
  x _gate_q_8;
  u2(0.06304493226279571, 4.434296146549715) _gate_q_4;
  h _gate_q_12;
  u2(1.0796607349200857, 4.196714445361378) _gate_q_9;
  iswap _gate_q_3, _gate_q_14;
  U(2.622180813668945, 3.774311076191487, 0.3460529414045398) _gate_q_1;
  iswap _gate_q_8, _gate_q_7;
  t _gate_q_0;
  sdg _gate_q_2;
  xx_plus_yy_5072962336(4.730077358639762, 1.6596507861551402) _gate_q_13, _gate_q_6;
  rz(4.10800162112012) _gate_q_10;
  cu1_5072973088(1.3797527045951001) _gate_q_11, _gate_q_4;
  crx(3.2382068506595356) _gate_q_9, _gate_q_14;
  xx_plus_yy_5072962816(3.4275161222949864, 0.016696178131284715) _gate_q_3, _gate_q_12;
  cs _gate_q_5, _gate_q_1;
  sx _gate_q_5;
  sx _gate_q_14;
  cu3_5072974528(4.803237049424137, 2.252529558678846, 5.227879875436732) _gate_q_2, _gate_q_6;
  sxdg _gate_q_11;
  iswap _gate_q_12, _gate_q_9;
  z _gate_q_10;
  u3(1.59615349221469, 2.8191783383600693, 4.962427653879977) _gate_q_1;
  p(2.990310084538416) _gate_q_13;
  h _gate_q_8;
  crx(2.302611915428998) _gate_q_4, _gate_q_0;
  sxdg _gate_q_3;
  sdg _gate_q_7;
  p(2.5840398067865578) _gate_q_3;
  x _gate_q_9;
  crz(1.0948242902665382) _gate_q_8, _gate_q_11;
  p(4.369728746419989) _gate_q_0;
  cy _gate_q_13, _gate_q_7;
  rz(0.7680799675624721) _gate_q_10;
  rz(2.495047490061151) _gate_q_5;
  xx_minus_yy_5072972464(0.9750893579838479, 4.846755130061412) _gate_q_2, _gate_q_12;
  rxx_5072970496(4.534985726271778) _gate_q_14, _gate_q_1;
  u2(4.143489859224331, 1.6776069499425859) _gate_q_6;
  s _gate_q_4;
}
gate cu3_5072965984(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.784738575722503) _gate_q_0;
  u1(2.427522223897667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9989473652353837, 0, -3.784738575722503) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9989473652353837, 1.3572163518248364, 0) _gate_q_1;
}
gate rzx_5072966656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9490148317827254) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072964736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3981109899117263) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072977456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9822056928414395) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9822056928414395) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9822056928414395) _gate_q_1;
}
gate xx_plus_yy_5072963488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.264605840535005) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9101209446319024) _gate_q_1;
  ry(-0.9101209446319024) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.264605840535005) _gate_q_0;
}
gate rzx_5072969776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.743702528594225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072962864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4573127239202197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072966560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.013609760839126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072968000(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.705358372436802) _gate_q_0;
  u1(-0.15275070975714966) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0268675297500898, 0, -4.705358372436802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0268675297500898, 4.858109082193952, 0) _gate_q_1;
}
gate ryy_5072968192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5585994844135307) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072963968(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8601478799055358) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5072970352(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4113788315672564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5072976544(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.4738635750212623) _gate_q_0;
  u1(2.284041741622847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8651504106580594, 0, -3.4738635750212623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8651504106580594, 1.1898218333984156, 0) _gate_q_1;
}
gate r_5072972032(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.021019679131099, -1.19482430828744, 1.19482430828744) _gate_q_0;
}
gate rzx_5072975056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.097776025179406) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072964256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.25603622770538664) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.610336350372106) _gate_q_1;
  ry(-2.610336350372106) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.25603622770538664) _gate_q_0;
}
gate xx_plus_yy_5072976112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3347887666294656) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6731029374071473) _gate_q_1;
  ry(-0.6731029374071473) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3347887666294656) _gate_q_0;
}
gate xx_minus_yy_5072976016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.905210840213037) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2121549074123363) _gate_q_0;
  ry(-2.2121549074123363) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.905210840213037) _gate_q_1;
}
gate xx_minus_yy_5072976352(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.735630030763239) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.15285374229700763) _gate_q_0;
  ry(-0.15285374229700763) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.735630030763239) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  sx _gate_q_9;
  u3(4.714024683536831, 4.901467117362858, 2.4239021675777193) _gate_q_4;
  cu3_5072965984(3.9978947304707675, 1.3572163518248364, 6.21226079962017) _gate_q_10, _gate_q_1;
  ecr _gate_q_14, _gate_q_0;
  rz(1.9677136449923234) _gate_q_13;
  sdg _gate_q_11;
  ch _gate_q_5, _gate_q_3;
  u2(1.5346842223409405, 1.7999483456730674) _gate_q_12;
  cu(3.955211571887472, 4.266818065614294, 4.395789125047778, 1.2766936188619427) _gate_q_8, _gate_q_7;
  rzx_5072966656(1.9490148317827254) _gate_q_6, _gate_q_2;
  rzx_5072964736(2.3981109899117263) _gate_q_2, _gate_q_10;
  rz(2.985397872561451) _gate_q_4;
  cu(5.297414659944013, 5.712737679981235, 3.281187882978507, 3.119725269734804) _gate_q_8, _gate_q_3;
  cu1_5072977456(1.964411385682879) _gate_q_9, _gate_q_12;
  csdg _gate_q_5, _gate_q_11;
  xx_plus_yy_5072963488(1.8202418892638048, 5.264605840535005) _gate_q_6, _gate_q_7;
  id _gate_q_1;
  iswap _gate_q_14, _gate_q_0;
  z _gate_q_13;
  u1(5.502317003260654) _gate_q_2;
  ecr _gate_q_5, _gate_q_8;
  t _gate_q_12;
  p(4.015774441259669) _gate_q_10;
  sx _gate_q_1;
  swap _gate_q_7, _gate_q_6;
  p(1.6590580189642872) _gate_q_13;
  rx(1.3972847439698903) _gate_q_11;
  csdg _gate_q_9, _gate_q_0;
  ch _gate_q_3, _gate_q_4;
  h _gate_q_14;
  t _gate_q_1;
  rzx_5072969776(4.743702528594225) _gate_q_3, _gate_q_6;
  u1(4.987599942663767) _gate_q_4;
  rzx_5072962864(3.4573127239202197) _gate_q_10, _gate_q_8;
  dcx _gate_q_5, _gate_q_2;
  t _gate_q_14;
  x _gate_q_13;
  u2(3.217132182394439, 1.1725100481819393) _gate_q_9;
  rxx_5072966560(3.013609760839126) _gate_q_7, _gate_q_11;
  rz(3.771438519982161) _gate_q_0;
  u2(3.771245881517165, 0.7436595686477184) _gate_q_12;
  rz(2.4165208489016283) _gate_q_4;
  U(4.044034894549135, 5.332437581463325, 6.253426530581323) _gate_q_14;
  U(0.5855795335665254, 3.8201478628433665, 6.128042121690269) _gate_q_7;
  h _gate_q_8;
  id _gate_q_11;
  u2(1.778791775322805, 0.25970725007273954) _gate_q_0;
  cx _gate_q_6, _gate_q_13;
  sdg _gate_q_5;
  rx(1.8590699985878172) _gate_q_3;
  rx(5.691936785074965) _gate_q_9;
  cs _gate_q_2, _gate_q_1;
  h _gate_q_12;
  p(5.136307670106679) _gate_q_10;
  s _gate_q_0;
  cu(5.935777779895698, 5.506244172165971, 2.8820395123403246, 1.220131366147581) _gate_q_9, _gate_q_5;
  crz(0.8978562647434384) _gate_q_12, _gate_q_2;
  cz _gate_q_4, _gate_q_7;
  h _gate_q_8;
  u1(2.0377796358761375) _gate_q_1;
  ecr _gate_q_14, _gate_q_11;
  csdg _gate_q_6, _gate_q_13;
  iswap _gate_q_3, _gate_q_10;
  s _gate_q_10;
  cs _gate_q_1, _gate_q_11;
  y _gate_q_6;
  sxdg _gate_q_7;
  cx _gate_q_4, _gate_q_8;
  cu3_5072968000(2.0537350595001795, 4.858109082193952, 4.552607662679653) _gate_q_12, _gate_q_14;
  cp(2.8027152059387976) _gate_q_3, _gate_q_5;
  z _gate_q_13;
  cu(1.8741172798475105, 5.35997823013658, 2.5600631265121394, 4.211136959433417) _gate_q_9, _gate_q_2;
  rz(5.9337775577346585) _gate_q_0;
  sx _gate_q_4;
  ryy_5072968192(2.5585994844135307) _gate_q_0, _gate_q_11;
  h _gate_q_10;
  id _gate_q_3;
  U(2.463968347186836, 5.219440243661888, 3.6513264781391084) _gate_q_13;
  rzz_5072963968(1.8601478799055358) _gate_q_7, _gate_q_6;
  h _gate_q_8;
  rz(2.2756863701561434) _gate_q_1;
  y _gate_q_14;
  rx(1.5063605934970583) _gate_q_9;
  rz(1.125684515424921) _gate_q_12;
  rzz_5072970352(1.4113788315672564) _gate_q_2, _gate_q_5;
  cu3_5072976544(3.730300821316119, 1.1898218333984156, 5.757905316644109) _gate_q_1, _gate_q_6;
  cp(3.486063921670329) _gate_q_14, _gate_q_3;
  sx _gate_q_5;
  rx(6.131523271599946) _gate_q_9;
  r_5072972032(3.021019679131099, 0.3759720185074566) _gate_q_8;
  csx _gate_q_7, _gate_q_2;
  rzx_5072975056(3.097776025179406) _gate_q_11, _gate_q_12;
  cz _gate_q_4, _gate_q_10;
  p(1.7154258648072425) _gate_q_0;
  ry(0.5822942354671751) _gate_q_13;
  tdg _gate_q_6;
  xx_plus_yy_5072964256(5.220672700744212, 0.25603622770538664) _gate_q_14, _gate_q_3;
  ch _gate_q_2, _gate_q_13;
  id _gate_q_11;
  xx_plus_yy_5072976112(1.3462058748142947, 1.3347887666294656) _gate_q_5, _gate_q_8;
  xx_minus_yy_5072976016(4.424309814824673, 4.905210840213037) _gate_q_12, _gate_q_4;
  xx_minus_yy_5072976352(0.30570748459401526, 3.735630030763239) _gate_q_9, _gate_q_7;
  ecr _gate_q_10, _gate_q_1;
  sdg _gate_q_0;
}