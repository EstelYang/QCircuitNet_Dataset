gate cu1_5070909520(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.8794550467571542) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.8794550467571542) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.8794550467571542) _gate_q_1;
}
gate rzz_5070903184(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.7045372794707543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070901792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0585421738837075) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.03161265124659085) _gate_q_1;
  ry(-0.03161265124659085) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0585421738837075) _gate_q_0;
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
gate rzx_5070905344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.40052310266072344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070910528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4260886298489224) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4260886298489224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4260886298489224) _gate_q_1;
}
gate rzx_5070905056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1819689865272665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5070903088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.62456932844701) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5070897232(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9456891907002494) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9456891907002494) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9456891907002494) _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5070897760(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.39353856799223) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5070911104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.3218212446296675) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1044971677518975) _gate_q_1;
  ry(-2.1044971677518975) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.3218212446296675) _gate_q_0;
}
gate rzz_5070905968(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.744155885425932) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5070910144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2214416384738136) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2214416384738136) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2214416384738136) _gate_q_1;
}
gate cu3_5070899104(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.107815932517656) _gate_q_0;
  u1(0.5786120719041201) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.835093362453527, 0, -4.107815932517656) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.835093362453527, 3.5292038606135367, 0) _gate_q_1;
}
gate rzx_5070898480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.146969276904647) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  cu1_5070909520(5.7589100935143085) _gate_q_9, _gate_q_11;
  id _gate_q_12;
  rx(2.6866508603916737) _gate_q_8;
  rzz_5070903184(1.7045372794707543) _gate_q_13, _gate_q_5;
  xx_plus_yy_5070901792(0.0632253024931817, 3.0585421738837075) _gate_q_2, _gate_q_0;
  ecr _gate_q_4, _gate_q_1;
  ch _gate_q_3, _gate_q_7;
  u1(1.636357483902524) _gate_q_10;
  u2(1.4640641334945173, 2.7421728641932983) _gate_q_6;
  y _gate_q_8;
  rzx_5070905344(0.40052310266072344) _gate_q_10, _gate_q_3;
  cu1_5070910528(4.852177259697845) _gate_q_13, _gate_q_5;
  rzx_5070905056(2.1819689865272665) _gate_q_1, _gate_q_4;
  sx _gate_q_6;
  cz _gate_q_0, _gate_q_11;
  rz(4.65582883343043) _gate_q_7;
  u2(3.6128940730299153, 0.37256071536049207) _gate_q_12;
  cu(5.0042627885536906, 1.6066531413684768, 2.8621170661103315, 1.317195303782784) _gate_q_2, _gate_q_9;
  ry(4.6735918444763165) _gate_q_7;
  dcx _gate_q_8, _gate_q_11;
  z _gate_q_6;
  rxx_5070903088(2.62456932844701) _gate_q_5, _gate_q_3;
  cu1_5070897232(1.8913783814004987) _gate_q_12, _gate_q_13;
  x _gate_q_10;
  cx _gate_q_4, _gate_q_0;
  ch _gate_q_1, _gate_q_9;
  sx _gate_q_2;
  U(1.8388461943882572, 0.08486479272824636, 5.416837434990654) _gate_q_5;
  u2(2.2230828142825287, 3.0671184790719734) _gate_q_8;
  h _gate_q_0;
  swap _gate_q_2, _gate_q_7;
  csx _gate_q_1, _gate_q_4;
  csdg _gate_q_3, _gate_q_6;
  sx _gate_q_11;
  ch _gate_q_12, _gate_q_13;
  rzz_5070897760(4.39353856799223) _gate_q_10, _gate_q_9;
  h _gate_q_13;
  x _gate_q_7;
  cy _gate_q_8, _gate_q_5;
  p(4.108566312247252) _gate_q_12;
  csdg _gate_q_6, _gate_q_0;
  id _gate_q_3;
  cx _gate_q_1, _gate_q_10;
  cu(2.893491230235639, 1.649710958513606, 2.347727998216882, 3.263372413942282) _gate_q_11, _gate_q_2;
  cz _gate_q_4, _gate_q_9;
  cu(4.788159032990717, 5.258729070939439, 4.7062075406021355, 4.019505029674881) _gate_q_13, _gate_q_7;
  csx _gate_q_1, _gate_q_11;
  swap _gate_q_12, _gate_q_2;
  sx _gate_q_4;
  csx _gate_q_10, _gate_q_0;
  x _gate_q_5;
  sdg _gate_q_9;
  y _gate_q_8;
  cs _gate_q_6, _gate_q_3;
  swap _gate_q_8, _gate_q_13;
  csdg _gate_q_12, _gate_q_0;
  cx _gate_q_11, _gate_q_5;
  cry(1.1946610047028896) _gate_q_7, _gate_q_6;
  U(0.278314723752097, 5.15907204294738, 5.676326955615431) _gate_q_3;
  crz(4.188130997847304) _gate_q_10, _gate_q_1;
  rx(4.455241598411496) _gate_q_4;
  x _gate_q_9;
  rx(5.385623032872867) _gate_q_2;
  cu(2.7209733229974495, 0.2821919846470571, 6.095102508343584, 2.927126578117607) _gate_q_10, _gate_q_1;
  xx_plus_yy_5070911104(4.208994335503795, 4.3218212446296675) _gate_q_12, _gate_q_2;
  rz(3.1684117486794645) _gate_q_6;
  crz(2.409259268621162) _gate_q_8, _gate_q_4;
  ecr _gate_q_3, _gate_q_13;
  sxdg _gate_q_7;
  t _gate_q_9;
  rzz_5070905968(4.744155885425932) _gate_q_5, _gate_q_0;
  s _gate_q_11;
  cz _gate_q_1, _gate_q_5;
  cu1_5070910144(2.442883276947627) _gate_q_9, _gate_q_0;
  x _gate_q_2;
  sx _gate_q_7;
  id _gate_q_11;
  ry(1.5127251156116723) _gate_q_3;
  tdg _gate_q_13;
  cu3_5070899104(5.670186724907054, 3.5292038606135367, 4.686428004421777) _gate_q_6, _gate_q_12;
  sx _gate_q_10;
  h _gate_q_4;
  z _gate_q_8;
  t _gate_q_2;
  u3(1.4721087239516808, 1.2846939547857823, 1.129167572649808) _gate_q_13;
  cry(1.6746921630590952) _gate_q_7, _gate_q_0;
  z _gate_q_1;
  sdg _gate_q_4;
  s _gate_q_6;
  cu(3.5476770751715714, 2.4666592151326503, 1.452185474415889, 0.03648475529653865) _gate_q_12, _gate_q_8;
  rzx_5070898480(4.146969276904647) _gate_q_11, _gate_q_10;
  ch _gate_q_5, _gate_q_9;
  sx _gate_q_3;
}
gate cu3_5072840816(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.576593785453266) _gate_q_0;
  u1(0.6949683897906551) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8740928001126143, 0, -4.576593785453266) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8740928001126143, 3.8816253956626108, 0) _gate_q_1;
}
gate xx_plus_yy_5072837456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.002835123940125) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.22434807240969112) _gate_q_1;
  ry(-0.22434807240969112) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.002835123940125) _gate_q_0;
}
gate rzx_5072843888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0555388595559556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072836400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7153322066297745) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7153322066297745) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7153322066297745) _gate_q_1;
}
gate rzz_5072839712(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.621372990496362) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072846480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5476314326962702) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5476314326962702) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5476314326962702) _gate_q_1;
}
gate xx_minus_yy_5072846528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.71062922926796) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.07062976095782293) _gate_q_0;
  ry(-0.07062976095782293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.71062922926796) _gate_q_1;
}
gate ryy_5072841248(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.718792764626859) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072830544(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3324186195169445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072844944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5391652087690244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072831168(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.20090741601579784) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072834912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.556113915616828) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5072842304(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.7395134713136468) _gate_q_0;
  u1(0.1480340712601378) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.13612544271486515, 0, -0.7395134713136468) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.13612544271486515, 0.591479400053509, 0) _gate_q_1;
}
gate xx_plus_yy_5072831216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4694994958656817) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.499308136811324) _gate_q_1;
  ry(-2.499308136811324) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4694994958656817) _gate_q_0;
}
gate r_5072841536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.4023256846675545, 4.345646589337156, -4.345646589337156) _gate_q_0;
}
gate xx_plus_yy_5072835632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4819640949204023) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.861583460682117) _gate_q_1;
  ry(-1.861583460682117) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4819640949204023) _gate_q_0;
}
gate r_5072833472(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1304307675930918, 0.0683809276464391, -0.0683809276464391) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5072245040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.542560460799267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072241824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.048533589262842) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3960914091654346) _gate_q_1;
  ry(-1.3960914091654346) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.048533589262842) _gate_q_0;
}
gate ryy_5072245232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.536503217111086) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  crz(4.794210308743007) _gate_q_10, _gate_q_4;
  cy _gate_q_3, _gate_q_2;
  s _gate_q_7;
  cry(4.384883648851974) _gate_q_11, _gate_q_13;
  cz _gate_q_6, _gate_q_8;
  y _gate_q_1;
  cu3_5072840816(1.7481856002252285, 3.8816253956626108, 5.271562175243921) _gate_q_0, _gate_q_12;
  ry(5.685036191410308) _gate_q_5;
  sxdg _gate_q_9;
  cs _gate_q_7, _gate_q_12;
  p(4.381621472384432) _gate_q_1;
  u3(5.1624799121890765, 2.0468580308766207, 5.924305647307561) _gate_q_2;
  csx _gate_q_8, _gate_q_4;
  sxdg _gate_q_5;
  cu(2.601172772213309, 4.933268142216246, 0.12018955007973778, 5.219052507653401) _gate_q_10, _gate_q_9;
  csx _gate_q_11, _gate_q_3;
  tdg _gate_q_6;
  s _gate_q_13;
  rz(1.1648820227910162) _gate_q_0;
  p(3.5021832968002498) _gate_q_6;
  xx_plus_yy_5072837456(0.44869614481938225, 4.002835123940125) _gate_q_8, _gate_q_0;
  rzx_5072843888(1.0555388595559556) _gate_q_11, _gate_q_5;
  cu1_5072836400(1.430664413259549) _gate_q_12, _gate_q_10;
  rzz_5072839712(4.621372990496362) _gate_q_7, _gate_q_9;
  ry(0.7958904180701623) _gate_q_1;
  rz(3.5078981287703437) _gate_q_3;
  z _gate_q_2;
  cu1_5072846480(1.0952628653925405) _gate_q_4, _gate_q_13;
  crx(5.507085895020037) _gate_q_5, _gate_q_7;
  cx _gate_q_1, _gate_q_9;
  u2(2.6751024536420496, 5.2315819365742025) _gate_q_12;
  cp(5.357610869010751) _gate_q_6, _gate_q_13;
  h _gate_q_8;
  csdg _gate_q_2, _gate_q_0;
  xx_minus_yy_5072846528(0.14125952191564586, 4.71062922926796) _gate_q_4, _gate_q_3;
  ryy_5072841248(5.718792764626859) _gate_q_11, _gate_q_10;
  id _gate_q_10;
  p(1.6960399075619277) _gate_q_12;
  dcx _gate_q_6, _gate_q_9;
  tdg _gate_q_0;
  id _gate_q_2;
  csdg _gate_q_4, _gate_q_7;
  u2(1.668732030087888, 0.6696992464802747) _gate_q_5;
  cry(5.994133093685854) _gate_q_1, _gate_q_11;
  ryy_5072830544(3.3324186195169445) _gate_q_3, _gate_q_13;
  u2(6.000203156784204, 1.5375506700585233) _gate_q_8;
  u3(1.069279974832712, 5.00021001167156, 6.028838635972756) _gate_q_2;
  dcx _gate_q_6, _gate_q_5;
  U(4.404979096053957, 0.22376005972485905, 2.576159576427054) _gate_q_3;
  rzx_5072844944(3.5391652087690244) _gate_q_12, _gate_q_10;
  ry(1.0696136996016645) _gate_q_13;
  rzz_5072831168(0.20090741601579784) _gate_q_8, _gate_q_9;
  ecr _gate_q_0, _gate_q_7;
  rx(6.047852194534733) _gate_q_11;
  u1(6.0067679812875525) _gate_q_1;
  tdg _gate_q_4;
  rzx_5072834912(0.556113915616828) _gate_q_0, _gate_q_11;
  cp(0.31809870843818094) _gate_q_13, _gate_q_2;
  cs _gate_q_1, _gate_q_12;
  cx _gate_q_5, _gate_q_4;
  cz _gate_q_3, _gate_q_8;
  swap _gate_q_9, _gate_q_10;
  cu3_5072842304(0.2722508854297303, 0.591479400053509, 0.8875475425737845) _gate_q_7, _gate_q_6;
  xx_plus_yy_5072831216(4.998616273622648, 1.4694994958656817) _gate_q_0, _gate_q_7;
  dcx _gate_q_10, _gate_q_5;
  rz(0.39150886609044405) _gate_q_12;
  id _gate_q_13;
  p(5.260748662600983) _gate_q_4;
  sdg _gate_q_3;
  u3(2.003047216100687, 3.139484418623474, 6.001203376394505) _gate_q_11;
  r_5072841536(3.4023256846675545, 5.916442916132053) _gate_q_9;
  cry(5.6393742281321595) _gate_q_2, _gate_q_1;
  xx_plus_yy_5072835632(3.723166921364234, 3.4819640949204023) _gate_q_6, _gate_q_8;
  y _gate_q_13;
  crx(4.5510116971984855) _gate_q_1, _gate_q_5;
  r_5072833472(1.1304307675930918, 1.6391772544413357) _gate_q_9;
  cu(2.1507851605151846, 4.049245675212029, 1.0101515221704516, 0.7878820054704896) _gate_q_6, _gate_q_4;
  iswap _gate_q_3, _gate_q_8;
  sdg _gate_q_10;
  crx(1.2055077770562812) _gate_q_0, _gate_q_7;
  rzz_5072245040(4.542560460799267) _gate_q_11, _gate_q_12;
  u3(4.888046998459466, 3.795931140226761, 0.433481692786791) _gate_q_2;
  u3(5.9708761019285745, 3.5255043461757816, 3.848613808739093) _gate_q_6;
  xx_plus_yy_5072241824(2.7921828183308692, 6.048533589262842) _gate_q_0, _gate_q_4;
  sxdg _gate_q_7;
  y _gate_q_3;
  rx(0.47153029125521784) _gate_q_5;
  cy _gate_q_2, _gate_q_9;
  rx(6.053599636789768) _gate_q_8;
  ryy_5072245232(2.536503217111086) _gate_q_10, _gate_q_12;
  iswap _gate_q_13, _gate_q_11;
  p(1.41027645847129) _gate_q_1;
}