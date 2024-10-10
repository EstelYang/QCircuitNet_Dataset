gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5108072080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1740026946409574) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1740026946409574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1740026946409574) _gate_q_1;
}
gate cu1_5108065120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3703112441224907) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3703112441224907) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3703112441224907) _gate_q_1;
}
gate cu1_5108070592(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9480231792305037) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9480231792305037) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9480231792305037) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5108068192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.1107482882562705) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.61872929295898) _gate_q_0;
  ry(-1.61872929295898) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.1107482882562705) _gate_q_1;
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
gate ryy_5108071600(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4609820631062247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5108071456(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.830660429980019, 4.349273074856657, -4.349273074856657) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5108069248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.384299329195736) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.433988842780827) _gate_q_1;
  ry(-2.433988842780827) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.384299329195736) _gate_q_0;
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
gate xx_minus_yy_5108060992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.389809637302729) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6572538813323042) _gate_q_0;
  ry(-0.6572538813323042) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.389809637302729) _gate_q_1;
}
gate cu1_5108070160(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.32791259737509) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.32791259737509) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.32791259737509) _gate_q_1;
}
gate r_5108068048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6967344011072736, 1.0130161691708537, -1.0130161691708537) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5108058832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.66595033286954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5108059312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3962887920446647) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3962887920446647) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3962887920446647) _gate_q_1;
}
gate cu1_5108066704(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.116953849069265) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.116953849069265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.116953849069265) _gate_q_1;
}
gate rxx_5108059600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7699520297824836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5108059552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.04269064781308207) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.04269064781308207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.04269064781308207) _gate_q_1;
}
gate xx_minus_yy_5108067184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.4353722618768) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8457276621159434) _gate_q_0;
  ry(-0.8457276621159434) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.4353722618768) _gate_q_1;
}
gate rzx_5108059744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9579444427567332) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5108068960(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.000958688186446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5108067328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8274380210972017) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5108059456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.22186755472779596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5108063104(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2948224556837373) _gate_q_0;
  u1(2.674789680369592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3972643225075043, 0, -3.2948224556837373) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3972643225075043, 0.6200327753141456, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  u2(2.452794428893985, 3.126993490450961) _gate_q_0;
  ry(5.403541611599072) _gate_q_5;
  rz(3.1433480982525452) _gate_q_2;
  iswap _gate_q_11, _gate_q_8;
  cs _gate_q_13, _gate_q_10;
  cu1_5108072080(4.348005389281915) _gate_q_15, _gate_q_4;
  cu1_5108065120(4.7406224882449814) _gate_q_7, _gate_q_12;
  cu1_5108070592(1.8960463584610074) _gate_q_3, _gate_q_1;
  crx(3.597224493252826) _gate_q_9, _gate_q_14;
  u1(2.838434044836721) _gate_q_6;
  ch _gate_q_0, _gate_q_13;
  xx_minus_yy_5108068192(3.23745858591796, 5.1107482882562705) _gate_q_10, _gate_q_4;
  ecr _gate_q_7, _gate_q_9;
  crx(6.2638096227541755) _gate_q_6, _gate_q_1;
  ryy_5108071600(2.4609820631062247) _gate_q_8, _gate_q_2;
  r_5108071456(4.830660429980019, 5.920069401651554) _gate_q_11;
  cx _gate_q_15, _gate_q_5;
  u2(5.919166114117562, 5.252262599377246) _gate_q_3;
  sxdg _gate_q_12;
  s _gate_q_14;
  cz _gate_q_15, _gate_q_9;
  csdg _gate_q_5, _gate_q_3;
  sx _gate_q_7;
  U(1.850557439843032, 1.8369522032343721, 3.5182150708904447) _gate_q_2;
  csdg _gate_q_1, _gate_q_11;
  cp(0.5340454148240235) _gate_q_10, _gate_q_4;
  u3(4.912430078319049, 4.480248168334158, 0.4293429256028515) _gate_q_12;
  crx(5.15161044453734) _gate_q_13, _gate_q_6;
  u3(1.411192634425413, 5.6338801482547884, 0.6170900700925069) _gate_q_0;
  crz(3.1371838158596286) _gate_q_8, _gate_q_14;
  crz(0.3414130058754726) _gate_q_8, _gate_q_15;
  cp(3.966012616259749) _gate_q_12, _gate_q_10;
  u3(3.198418466530219, 2.0271333450116833, 6.002130902659567) _gate_q_6;
  xx_plus_yy_5108069248(4.867977685561654, 1.384299329195736) _gate_q_5, _gate_q_11;
  csx _gate_q_13, _gate_q_2;
  crx(1.5339750074288958) _gate_q_3, _gate_q_0;
  z _gate_q_1;
  xx_minus_yy_5108060992(1.3145077626646084, 1.389809637302729) _gate_q_4, _gate_q_7;
  s _gate_q_9;
  id _gate_q_14;
  rx(2.0897170373587484) _gate_q_5;
  cu1_5108070160(4.65582519475018) _gate_q_1, _gate_q_0;
  U(5.761748509486878, 0.2925021500095545, 6.2100166067181926) _gate_q_10;
  z _gate_q_2;
  ry(4.654724789228686) _gate_q_12;
  r_5108068048(1.6967344011072736, 2.5838124959657502) _gate_q_3;
  cs _gate_q_6, _gate_q_7;
  sdg _gate_q_11;
  U(5.056267710561562, 4.265585554999675, 3.931275306313329) _gate_q_15;
  cz _gate_q_13, _gate_q_8;
  sxdg _gate_q_14;
  cs _gate_q_4, _gate_q_9;
  csdg _gate_q_8, _gate_q_0;
  dcx _gate_q_10, _gate_q_1;
  rz(2.8198228436823825) _gate_q_2;
  ecr _gate_q_7, _gate_q_5;
  rz(0.3269940915315906) _gate_q_6;
  rxx_5108058832(4.66595033286954) _gate_q_11, _gate_q_14;
  tdg _gate_q_12;
  u1(1.376171845611751) _gate_q_3;
  x _gate_q_4;
  id _gate_q_15;
  rz(1.3152280601523152) _gate_q_9;
  x _gate_q_13;
  crx(0.21639648777167395) _gate_q_1, _gate_q_4;
  iswap _gate_q_2, _gate_q_0;
  z _gate_q_10;
  cu(2.0698054245049216, 1.5570602030850216, 1.3880359195779883, 4.385506094230549) _gate_q_11, _gate_q_14;
  cu1_5108059312(4.792577584089329) _gate_q_8, _gate_q_15;
  cu1_5108066704(2.23390769813853) _gate_q_7, _gate_q_6;
  iswap _gate_q_12, _gate_q_3;
  u2(3.5813808714533626, 0.2616991024003887) _gate_q_13;
  p(6.199947278318954) _gate_q_5;
  sx _gate_q_9;
  cz _gate_q_12, _gate_q_5;
  t _gate_q_14;
  u1(5.378270136325282) _gate_q_3;
  cy _gate_q_2, _gate_q_4;
  y _gate_q_10;
  p(1.6294586354011755) _gate_q_7;
  ecr _gate_q_6, _gate_q_0;
  rxx_5108059600(1.7699520297824836) _gate_q_8, _gate_q_9;
  y _gate_q_11;
  ry(5.915139445752901) _gate_q_1;
  rz(3.847839340971799) _gate_q_15;
  U(2.2871351724887816, 3.9134871946094587, 1.8616696042741863) _gate_q_13;
  x _gate_q_9;
  csdg _gate_q_3, _gate_q_1;
  x _gate_q_13;
  cu1_5108059552(0.08538129562616414) _gate_q_10, _gate_q_0;
  xx_minus_yy_5108067184(1.6914553242318868, 5.4353722618768) _gate_q_2, _gate_q_11;
  crx(3.7431679400530564) _gate_q_8, _gate_q_7;
  ecr _gate_q_14, _gate_q_4;
  rzx_5108059744(0.9579444427567332) _gate_q_12, _gate_q_5;
  p(2.706666662240359) _gate_q_6;
  U(5.533030341802003, 1.0848385372046272, 0.996667334771159) _gate_q_15;
  rzz_5108068960(4.000958688186446) _gate_q_2, _gate_q_13;
  rzx_5108067328(3.8274380210972017) _gate_q_10, _gate_q_5;
  sdg _gate_q_11;
  cry(4.979757941152861) _gate_q_8, _gate_q_14;
  cs _gate_q_0, _gate_q_15;
  sdg _gate_q_6;
  rzz_5108059456(0.22186755472779596) _gate_q_4, _gate_q_1;
  cp(5.151725379916479) _gate_q_3, _gate_q_9;
  cu3_5108063104(2.7945286450150086, 0.6200327753141456, 5.969612136053329) _gate_q_7, _gate_q_12;
}
gate cu3_5108215600(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2913340482903672) _gate_q_0;
  u1(-0.014400158915671812) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4330449659701502, 0, -1.2913340482903672) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4330449659701502, 1.305734207206039, 0) _gate_q_1;
}
gate ryy_5108207248(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0244194830609556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5108206240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.61423220192119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5108209360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.676253007043934) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5108205376(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1182358639325383) _gate_q_0;
  u1(-2.3004949048809946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1500360691004256, 0, -3.1182358639325383) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1500360691004256, 5.418730768813533, 0) _gate_q_1;
}
gate cu1_5108206144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.961824782620282) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.961824782620282) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.961824782620282) _gate_q_1;
}
gate rxx_5108207488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3017557477787023) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5108208016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.262430004822992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5108212384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6922386179333233) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5108212528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.6240134829883734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5108212720(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8352599024845595) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8352599024845595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8352599024845595) _gate_q_1;
}
gate r_5108211088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.4673471306332186, -0.8910760011409798, 0.8910760011409798) _gate_q_0;
}
gate rxx_5108212336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.802613940352748) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5108212480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.135228518864393) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5108208496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.076015551146662) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4808435202944197) _gate_q_0;
  ry(-2.4808435202944197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.076015551146662) _gate_q_1;
}
gate xx_plus_yy_5108213152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.734058180930723) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.03511926327764511) _gate_q_1;
  ry(-0.03511926327764511) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.734058180930723) _gate_q_0;
}
gate rzx_5108206672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.830441135733573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5108208592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0589081016644784) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6505873562732293) _gate_q_0;
  ry(-0.6505873562732293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0589081016644784) _gate_q_1;
}
gate xx_plus_yy_5108212768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.223792163904516) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0937652918064307) _gate_q_1;
  ry(-1.0937652918064307) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.223792163904516) _gate_q_0;
}
gate rzx_5108214736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.7801009988216245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5108207008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.139437999197708) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.81580937628611) _gate_q_0;
  ry(-1.81580937628611) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.139437999197708) _gate_q_1;
}
gate r_5108206528(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.037518287361544, 4.1213338414396885, -4.1213338414396885) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  p(4.6806476026631225) _gate_q_7;
  sdg _gate_q_1;
  ry(2.929067050442686) _gate_q_13;
  iswap _gate_q_9, _gate_q_14;
  rz(0.6806619898392599) _gate_q_10;
  cu3_5108215600(0.8660899319403004, 1.305734207206039, 1.2769338893746953) _gate_q_6, _gate_q_5;
  ryy_5108207248(2.0244194830609556) _gate_q_8, _gate_q_12;
  iswap _gate_q_15, _gate_q_4;
  rzx_5108206240(3.61423220192119) _gate_q_0, _gate_q_3;
  rzx_5108209360(4.676253007043934) _gate_q_2, _gate_q_11;
  cu(4.154834599524236, 4.3584473029587265, 4.935609859963597, 4.232212092791417) _gate_q_14, _gate_q_2;
  cp(3.814584911379619) _gate_q_8, _gate_q_7;
  cu3_5108205376(0.3000721382008512, 5.418730768813533, 0.8177409590515441) _gate_q_1, _gate_q_12;
  u3(2.9449201261709677, 4.534049984265773, 4.452196460111278) _gate_q_0;
  ch _gate_q_4, _gate_q_11;
  csdg _gate_q_9, _gate_q_6;
  tdg _gate_q_15;
  crz(3.750915010257962) _gate_q_3, _gate_q_5;
  cu1_5108206144(5.923649565240564) _gate_q_10, _gate_q_13;
  t _gate_q_11;
  y _gate_q_13;
  rz(2.1148357380102794) _gate_q_5;
  s _gate_q_14;
  s _gate_q_4;
  ecr _gate_q_8, _gate_q_12;
  rxx_5108207488(1.3017557477787023) _gate_q_15, _gate_q_1;
  iswap _gate_q_7, _gate_q_0;
  y _gate_q_10;
  rzx_5108208016(4.262430004822992) _gate_q_3, _gate_q_2;
  u1(1.551174887172487) _gate_q_6;
  y _gate_q_9;
  cp(0.19950570855207392) _gate_q_1, _gate_q_7;
  rzx_5108212384(0.6922386179333233) _gate_q_15, _gate_q_2;
  u2(4.730800089722281, 4.115087716779976) _gate_q_13;
  z _gate_q_11;
  x _gate_q_8;
  rzz_5108212528(5.6240134829883734) _gate_q_12, _gate_q_5;
  csdg _gate_q_6, _gate_q_14;
  z _gate_q_4;
  cry(3.9305852368571466) _gate_q_0, _gate_q_10;
  iswap _gate_q_9, _gate_q_3;
  ry(1.9488421992750282) _gate_q_15;
  cry(4.791116679882057) _gate_q_2, _gate_q_13;
  ry(5.781283808148963) _gate_q_8;
  sdg _gate_q_1;
  cz _gate_q_9, _gate_q_6;
  cu1_5108212720(3.670519804969119) _gate_q_0, _gate_q_11;
  h _gate_q_12;
  y _gate_q_7;
  csx _gate_q_5, _gate_q_4;
  ry(4.734955831844642) _gate_q_10;
  s _gate_q_3;
  id _gate_q_14;
  cp(6.006410318495706) _gate_q_3, _gate_q_4;
  x _gate_q_10;
  cy _gate_q_12, _gate_q_9;
  z _gate_q_11;
  u2(0.4597077983347656, 0.1267887521683798) _gate_q_8;
  r_5108211088(2.4673471306332186, 0.6797203256539167) _gate_q_6;
  x _gate_q_0;
  sxdg _gate_q_5;
  cz _gate_q_13, _gate_q_2;
  rxx_5108212336(2.802613940352748) _gate_q_14, _gate_q_15;
  U(2.0041999941368704, 1.5860033327809537, 2.6076229520418277) _gate_q_7;
  U(6.116399452573739, 5.023364144953884, 3.396813873821077) _gate_q_1;
  cs _gate_q_9, _gate_q_7;
  s _gate_q_4;
  t _gate_q_10;
  rzx_5108212480(4.135228518864393) _gate_q_13, _gate_q_14;
  xx_minus_yy_5108208496(4.961687040588839, 5.076015551146662) _gate_q_0, _gate_q_1;
  cry(1.0194617988045431) _gate_q_8, _gate_q_11;
  U(4.3428955615555145, 4.925166097416341, 4.686931709521316) _gate_q_15;
  p(1.7288295390621977) _gate_q_12;
  cp(3.6800679844520308) _gate_q_5, _gate_q_2;
  cy _gate_q_6, _gate_q_3;
  y _gate_q_9;
  xx_plus_yy_5108213152(0.07023852655529023, 4.734058180930723) _gate_q_11, _gate_q_8;
  cu(1.5363999501757433, 2.4545546668941993, 2.2945089612002736, 1.7851308616571921) _gate_q_15, _gate_q_13;
  rzx_5108206672(4.830441135733573) _gate_q_12, _gate_q_3;
  x _gate_q_2;
  cry(1.1406729159518088) _gate_q_1, _gate_q_7;
  dcx _gate_q_0, _gate_q_10;
  cz _gate_q_14, _gate_q_4;
  xx_minus_yy_5108208592(1.3011747125464586, 1.0589081016644784) _gate_q_6, _gate_q_5;
  ecr _gate_q_1, _gate_q_2;
  t _gate_q_13;
  h _gate_q_0;
  z _gate_q_4;
  rx(5.9962478754831166) _gate_q_10;
  xx_plus_yy_5108212768(2.1875305836128613, 6.223792163904516) _gate_q_12, _gate_q_7;
  u3(0.37180344748570043, 3.3804978415299574, 6.220288613494878) _gate_q_3;
  rzx_5108214736(5.7801009988216245) _gate_q_15, _gate_q_9;
  y _gate_q_8;
  s _gate_q_14;
  cp(1.7269507976676453) _gate_q_11, _gate_q_6;
  U(4.432754631861653, 4.584706252752081, 4.696971062784179) _gate_q_5;
  dcx _gate_q_7, _gate_q_1;
  U(1.4684784792521197, 2.88810033681007, 2.089197485761066) _gate_q_15;
  u1(3.282736217210032) _gate_q_9;
  tdg _gate_q_4;
  tdg _gate_q_8;
  cz _gate_q_12, _gate_q_3;
  crz(0.6698689959387847) _gate_q_14, _gate_q_6;
  xx_minus_yy_5108207008(3.63161875257222, 5.139437999197708) _gate_q_10, _gate_q_0;
  cx _gate_q_13, _gate_q_11;
  r_5108206528(5.037518287361544, 5.692130168234585) _gate_q_5;
  id _gate_q_2;
}