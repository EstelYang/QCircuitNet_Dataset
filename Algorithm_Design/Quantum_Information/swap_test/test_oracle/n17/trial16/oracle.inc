gate rzz_5072962288(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4291447522080938) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5072975344(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2863205376837872) _gate_q_0;
  u1(0.3966981041944646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.368292453245894, 0, -1.2863205376837872) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.368292453245894, 0.8896224334893226, 0) _gate_q_1;
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
gate xx_minus_yy_5072977888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.780519124548583) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.727555305333788) _gate_q_0;
  ry(-2.727555305333788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.780519124548583) _gate_q_1;
}
gate r_5072970208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4495106265507887, 1.4455421375392556, -1.4455421375392556) _gate_q_0;
}
gate r_5072972032(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5901490188046157, 3.0643124604840457, -3.0643124604840457) _gate_q_0;
}
gate r_5072976592(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.24684933598645645, 0.3625057840900068, -0.3625057840900068) _gate_q_0;
}
gate ryy_5072971168(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.764684958743858) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5072966272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.145183009574834) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5072975440(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.427161471204479, 1.837617722593246, -1.837617722593246) _gate_q_0;
}
gate rzx_5072977696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.867841002874786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072972896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7477576828778165, 1.5077288575306644, -1.5077288575306644) _gate_q_0;
}
gate cu3_5072970256(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6661072852845873) _gate_q_0;
  u1(1.1324004889531376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.427519360833288, 0, -1.6661072852845873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.427519360833288, 0.5337067963314495, 0) _gate_q_1;
}
gate r_5072974576(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.1263446347742425, 0.7183984541477195, -0.7183984541477195) _gate_q_0;
}
gate ryy_5072968816(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2576977703194194) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072977504(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.640272604129997) _gate_q_1;
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
gate xx_minus_yy_5072961664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.440618084160431) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2888410886392509) _gate_q_0;
  ry(-0.2888410886392509) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.440618084160431) _gate_q_1;
}
gate cu1_5072975488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4180653497793494) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4180653497793494) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4180653497793494) _gate_q_1;
}
gate r_5072964784(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5268996330797185, -0.3528802689972679, 0.3528802689972679) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  rzz_5072962288(1.4291447522080938) _gate_q_9, _gate_q_0;
  u1(5.367656035325478) _gate_q_4;
  cy _gate_q_16, _gate_q_14;
  cu3_5072975344(4.736584906491788, 0.8896224334893226, 1.6830186418782518) _gate_q_11, _gate_q_12;
  t _gate_q_1;
  csx _gate_q_6, _gate_q_10;
  xx_minus_yy_5072977888(5.455110610667576, 2.780519124548583) _gate_q_15, _gate_q_7;
  p(3.499509700322503) _gate_q_3;
  y _gate_q_2;
  t _gate_q_5;
  sdg _gate_q_13;
  r_5072970208(1.4495106265507887, 3.016338464334152) _gate_q_8;
  cry(0.655835831086749) _gate_q_9, _gate_q_8;
  r_5072972032(1.5901490188046157, 4.635108787278942) _gate_q_12;
  cu(4.939375723864344, 4.136343227031805, 3.185883949906097, 2.397797538190423) _gate_q_7, _gate_q_6;
  U(3.68213045858964, 3.1040383491180203, 0.1591833181808176) _gate_q_3;
  sdg _gate_q_14;
  r_5072976592(0.24684933598645645, 1.9333021108849033) _gate_q_10;
  ryy_5072971168(4.764684958743858) _gate_q_5, _gate_q_13;
  ch _gate_q_4, _gate_q_11;
  cz _gate_q_15, _gate_q_16;
  cp(0.6387786700832367) _gate_q_0, _gate_q_2;
  rz(2.4752743635350742) _gate_q_1;
  crx(4.670999478645924) _gate_q_4, _gate_q_14;
  rz(0.7996802324977313) _gate_q_7;
  rxx_5072966272(4.145183009574834) _gate_q_5, _gate_q_3;
  y _gate_q_11;
  cs _gate_q_13, _gate_q_12;
  u2(4.271320811469038, 0.17361746868019617) _gate_q_8;
  sxdg _gate_q_6;
  r_5072975440(4.427161471204479, 3.4084140493881425) _gate_q_9;
  cu(4.48521392352103, 5.158503999334016, 0.38681579252525156, 0.3599371438294896) _gate_q_10, _gate_q_16;
  cs _gate_q_2, _gate_q_15;
  cy _gate_q_1, _gate_q_0;
  u1(6.002151369205113) _gate_q_16;
  h _gate_q_11;
  cp(3.2207516774231175) _gate_q_6, _gate_q_15;
  cz _gate_q_8, _gate_q_4;
  rzx_5072977696(2.867841002874786) _gate_q_5, _gate_q_3;
  sdg _gate_q_14;
  cu(0.3291692145881252, 0.6882933280186267, 4.296879121509707, 4.926506874282194) _gate_q_2, _gate_q_0;
  cry(2.885146714137972) _gate_q_10, _gate_q_7;
  u2(0.6777621955015413, 4.007134020010576) _gate_q_9;
  cx _gate_q_12, _gate_q_13;
  y _gate_q_1;
  ry(1.2264649373741259) _gate_q_15;
  x _gate_q_10;
  rx(3.296043997176844) _gate_q_12;
  crx(4.944274534238278) _gate_q_0, _gate_q_14;
  t _gate_q_9;
  cz _gate_q_6, _gate_q_11;
  cs _gate_q_13, _gate_q_8;
  csx _gate_q_5, _gate_q_4;
  cp(1.638624400672945) _gate_q_2, _gate_q_16;
  ry(4.1266040144025515) _gate_q_7;
  sx _gate_q_1;
  r_5072972896(3.7477576828778165, 3.078525184325561) _gate_q_3;
  cu3_5072970256(2.855038721666576, 0.5337067963314495, 2.798507774237725) _gate_q_0, _gate_q_11;
  r_5072974576(5.1263446347742425, 2.289194780942616) _gate_q_3;
  cry(2.499165598589103) _gate_q_9, _gate_q_10;
  tdg _gate_q_5;
  cx _gate_q_12, _gate_q_8;
  x _gate_q_4;
  sdg _gate_q_1;
  tdg _gate_q_2;
  ryy_5072968816(1.2576977703194194) _gate_q_6, _gate_q_7;
  cs _gate_q_15, _gate_q_14;
  rz(3.9436994793433295) _gate_q_13;
  t _gate_q_16;
  sxdg _gate_q_1;
  csx _gate_q_4, _gate_q_6;
  ryy_5072977504(3.640272604129997) _gate_q_7, _gate_q_2;
  y _gate_q_16;
  cx _gate_q_5, _gate_q_15;
  sdg _gate_q_10;
  z _gate_q_11;
  cp(3.770915771633404) _gate_q_12, _gate_q_9;
  crx(1.4309227818080013) _gate_q_3, _gate_q_8;
  cy _gate_q_0, _gate_q_14;
  id _gate_q_13;
  sx _gate_q_15;
  iswap _gate_q_4, _gate_q_5;
  cz _gate_q_6, _gate_q_2;
  cry(1.223485060137134) _gate_q_3, _gate_q_11;
  h _gate_q_1;
  iswap _gate_q_10, _gate_q_14;
  sdg _gate_q_12;
  xx_minus_yy_5072961664(0.5776821772785018, 2.440618084160431) _gate_q_9, _gate_q_16;
  rz(2.1400104596205947) _gate_q_0;
  csx _gate_q_8, _gate_q_7;
  h _gate_q_13;
  cu1_5072975488(4.836130699558699) _gate_q_11, _gate_q_5;
  csx _gate_q_12, _gate_q_6;
  u1(4.387377583169433) _gate_q_15;
  t _gate_q_10;
  t _gate_q_2;
  U(5.816771871328137, 1.8679234473715858, 6.136935821005926) _gate_q_13;
  u3(4.3216901118607876, 1.8220898180317153, 0.30970663360422684) _gate_q_3;
  tdg _gate_q_9;
  csx _gate_q_4, _gate_q_1;
  cu(0.7545624427429273, 1.1206137469993762, 0.3086754117604916, 4.816827596342314) _gate_q_7, _gate_q_8;
  cp(2.3092913917781703) _gate_q_16, _gate_q_0;
  ry(0.5769605629074315) _gate_q_14;
  sdg _gate_q_7;
  h _gate_q_13;
  cy _gate_q_0, _gate_q_6;
  swap _gate_q_3, _gate_q_9;
  u2(5.304066485427094, 0.5484901281103021) _gate_q_14;
  cx _gate_q_1, _gate_q_16;
  s _gate_q_8;
  r_5072964784(0.5268996330797185, 1.2179160577976287) _gate_q_4;
  sxdg _gate_q_5;
  dcx _gate_q_15, _gate_q_10;
  cy _gate_q_12, _gate_q_11;
  u3(2.0418387297993794, 5.0871257571325375, 4.568419998991359) _gate_q_2;
}
gate r_5072316720(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5410346753528814, -0.9068889710709599, 0.9068889710709599) _gate_q_0;
}
gate r_5072320416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5690147902515585, -1.5454846539428826, 1.5454846539428826) _gate_q_0;
}
gate rzz_5072311344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.688300641081819) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072313072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.707896099364678) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5726570026330979) _gate_q_1;
  ry(-0.5726570026330979) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.707896099364678) _gate_q_0;
}
gate cu3_5072314752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.641205081559221) _gate_q_0;
  u1(1.432224426530057) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7872253827869202, 0, -2.641205081559221) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7872253827869202, 1.2089806550291642, 0) _gate_q_1;
}
gate xx_plus_yy_5072308272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.023460493640772) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.1389078444268192) _gate_q_1;
  ry(-3.1389078444268192) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.023460493640772) _gate_q_0;
}
gate rzx_5072310240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6477776826707684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072318592(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6634912499018929) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate cu1_5072314368(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7976841750323993) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7976841750323993) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7976841750323993) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5072320368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.33651391971279) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072308704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.22878405321263004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072307264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.1889217785096067) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.025781813598179) _gate_q_1;
  ry(-1.025781813598179) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.1889217785096067) _gate_q_0;
}
gate ryy_5072316912(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8410212550927354) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072312208(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.996472689524088) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5072317968(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6106098231949462) _gate_q_0;
  u1(1.520243717323996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2892921003792095, 0, -1.6106098231949462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2892921003792095, 0.09036610587095034, 0) _gate_q_1;
}
gate xx_minus_yy_5072318976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2413636502007634) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0801054401162535) _gate_q_0;
  ry(-1.0801054401162535) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2413636502007634) _gate_q_1;
}
gate rxx_5072312976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5354185954106827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072313216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.006205612131584) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5295160119750264) _gate_q_0;
  ry(-2.5295160119750264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.006205612131584) _gate_q_1;
}
gate xx_minus_yy_5072309520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.6817162967963091) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7792444030591104) _gate_q_0;
  ry(-2.7792444030591104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.6817162967963091) _gate_q_1;
}
gate xx_minus_yy_5072307840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.5965439960478) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0158592396109967) _gate_q_0;
  ry(-1.0158592396109967) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.5965439960478) _gate_q_1;
}
gate xx_minus_yy_5072316480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.86439410560448) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3027409018660605) _gate_q_0;
  ry(-2.3027409018660605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.86439410560448) _gate_q_1;
}
gate xx_plus_yy_5072322288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8731583368193077) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.707824900236985) _gate_q_1;
  ry(-2.707824900236985) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8731583368193077) _gate_q_0;
}
gate rzx_5072310096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9629969939662018) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5072317824(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.794889825184356) _gate_q_0;
  u1(0.3357987913319319) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.05945023227585005, 0, -1.794889825184356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.05945023227585005, 1.4590910338524241, 0) _gate_q_1;
}
gate cu1_5072310384(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.680507922745575) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.680507922745575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.680507922745575) _gate_q_1;
}
gate cu1_5072314128(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.138337841843356) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.138337841843356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.138337841843356) _gate_q_1;
}
gate xx_plus_yy_5072320704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.879427746886569) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6087573465290055) _gate_q_1;
  ry(-1.6087573465290055) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.879427746886569) _gate_q_0;
}
gate cu1_5072309184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.879224126841233) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.879224126841233) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.879224126841233) _gate_q_1;
}
gate ryy_5072316960(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.18770919922748144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5072310288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.978537547276462) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.8126444193391333) _gate_q_0;
  ry(-2.8126444193391333) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.978537547276462) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  u2(0.3032112193211791, 3.983392757012829) _gate_q_2;
  ry(0.316659289232522) _gate_q_5;
  u1(5.6516538356121275) _gate_q_9;
  u1(1.6656376841340081) _gate_q_14;
  swap _gate_q_3, _gate_q_16;
  crz(5.887049573223252) _gate_q_0, _gate_q_10;
  cp(1.2323339033499208) _gate_q_1, _gate_q_6;
  rx(2.7835782676294243) _gate_q_11;
  U(5.4822177612801894, 5.7405658189129, 2.8852136490194407) _gate_q_15;
  r_5072316720(3.5410346753528814, 0.6639073557239367) _gate_q_13;
  r_5072320416(3.5690147902515585, 0.025311672852014026) _gate_q_8;
  u1(1.0417379171083592) _gate_q_4;
  rzz_5072311344(4.688300641081819) _gate_q_12, _gate_q_7;
  tdg _gate_q_12;
  ch _gate_q_7, _gate_q_5;
  cp(3.875389537739292) _gate_q_10, _gate_q_1;
  ry(0.9326672529848334) _gate_q_16;
  xx_plus_yy_5072313072(1.1453140052661959, 5.707896099364678) _gate_q_8, _gate_q_2;
  t _gate_q_13;
  crz(0.6950570148119891) _gate_q_0, _gate_q_11;
  sx _gate_q_14;
  s _gate_q_6;
  cu3_5072314752(1.5744507655738404, 1.2089806550291642, 4.073429508089278) _gate_q_4, _gate_q_15;
  u1(0.7033622836352018) _gate_q_3;
  h _gate_q_9;
  xx_plus_yy_5072308272(6.2778156888536385, 4.023460493640772) _gate_q_7, _gate_q_11;
  rzx_5072310240(2.6477776826707684) _gate_q_12, _gate_q_9;
  sx _gate_q_4;
  cy _gate_q_14, _gate_q_13;
  ryy_5072318592(0.6634912499018929) _gate_q_15, _gate_q_6;
  t _gate_q_2;
  rz(1.285731276848561) _gate_q_3;
  s _gate_q_5;
  ecr _gate_q_1, _gate_q_16;
  cu1_5072314368(3.5953683500647986) _gate_q_0, _gate_q_10;
  id _gate_q_8;
  sxdg _gate_q_3;
  csdg _gate_q_14, _gate_q_5;
  rx(4.095261027431786) _gate_q_15;
  cu(2.3713801042648033, 1.0312432132538891, 5.069852141000976, 5.357048609399659) _gate_q_4, _gate_q_16;
  rxx_5072320368(4.33651391971279) _gate_q_9, _gate_q_6;
  rzx_5072308704(0.22878405321263004) _gate_q_8, _gate_q_2;
  sxdg _gate_q_1;
  s _gate_q_0;
  xx_plus_yy_5072307264(2.051563627196358, 1.1889217785096067) _gate_q_11, _gate_q_13;
  h _gate_q_12;
  ryy_5072316912(2.8410212550927354) _gate_q_10, _gate_q_7;
  U(5.100914035586461, 4.050346463654604, 3.110201267211125) _gate_q_1;
  cz _gate_q_11, _gate_q_14;
  rzz_5072312208(4.996472689524088) _gate_q_5, _gate_q_9;
  ry(1.3326890076857816) _gate_q_16;
  ecr _gate_q_13, _gate_q_0;
  ry(1.024354830636372) _gate_q_3;
  cz _gate_q_6, _gate_q_7;
  cu3_5072317968(2.578584200758419, 0.09036610587095034, 3.130853540518942) _gate_q_15, _gate_q_4;
  cx _gate_q_10, _gate_q_2;
  cs _gate_q_8, _gate_q_12;
  x _gate_q_13;
  crx(3.7055744769537053) _gate_q_6, _gate_q_5;
  y _gate_q_2;
  U(2.162317423276556, 3.6495245486064714, 5.238798579303291) _gate_q_4;
  xx_minus_yy_5072318976(2.160210880232507, 1.2413636502007634) _gate_q_3, _gate_q_7;
  s _gate_q_9;
  rxx_5072312976(0.5354185954106827) _gate_q_10, _gate_q_16;
  xx_minus_yy_5072313216(5.059032023950053, 6.006205612131584) _gate_q_11, _gate_q_15;
  p(2.3943579228849012) _gate_q_1;
  ecr _gate_q_8, _gate_q_0;
  sx _gate_q_12;
  rx(0.9070643556300684) _gate_q_14;
  u3(3.6099107103308854, 2.9205174325480945, 5.8040393030583415) _gate_q_3;
  ch _gate_q_6, _gate_q_1;
  xx_minus_yy_5072309520(5.558488806118221, 0.6817162967963091) _gate_q_10, _gate_q_2;
  rx(1.9783604034541353) _gate_q_11;
  sdg _gate_q_16;
  cp(1.6726917328925834) _gate_q_12, _gate_q_14;
  cu(1.016689091291084, 3.9495977143400793, 3.944563098986815, 3.498920674075166) _gate_q_4, _gate_q_9;
  xx_minus_yy_5072307840(2.0317184792219933, 2.5965439960478) _gate_q_8, _gate_q_0;
  xx_minus_yy_5072316480(4.605481803732121, 5.86439410560448) _gate_q_7, _gate_q_13;
  U(5.80429037967758, 0.6369417025651667, 6.082112937118901) _gate_q_15;
  u2(5.384424328297267, 1.8878347331767422) _gate_q_5;
  id _gate_q_7;
  ry(2.1146089348831465) _gate_q_12;
  dcx _gate_q_4, _gate_q_10;
  xx_plus_yy_5072322288(5.41564980047397, 3.8731583368193077) _gate_q_0, _gate_q_11;
  cy _gate_q_13, _gate_q_16;
  rz(2.447634791536754) _gate_q_5;
  tdg _gate_q_2;
  rzx_5072310096(3.9629969939662018) _gate_q_9, _gate_q_6;
  cu3_5072317824(0.1189004645517001, 1.4590910338524241, 2.130688616516288) _gate_q_8, _gate_q_14;
  u1(3.307200640122469) _gate_q_3;
  cu1_5072310384(5.36101584549115) _gate_q_15, _gate_q_1;
  sx _gate_q_6;
  cu1_5072314128(4.276675683686712) _gate_q_12, _gate_q_2;
  xx_plus_yy_5072320704(3.217514693058011, 5.879427746886569) _gate_q_16, _gate_q_7;
  y _gate_q_8;
  sx _gate_q_15;
  ry(5.488157096063796) _gate_q_1;
  s _gate_q_13;
  csx _gate_q_0, _gate_q_9;
  cu(3.3500767192713328, 5.788291234878357, 3.757027017868134, 4.118390466835031) _gate_q_11, _gate_q_4;
  crz(6.1832376670999345) _gate_q_3, _gate_q_10;
  tdg _gate_q_5;
  sdg _gate_q_14;
  ch _gate_q_7, _gate_q_0;
  cu1_5072309184(5.758448253682466) _gate_q_6, _gate_q_14;
  cz _gate_q_10, _gate_q_12;
  U(2.500358470035571, 2.4451527085600553, 1.6196426720189496) _gate_q_9;
  ryy_5072316960(0.18770919922748144) _gate_q_8, _gate_q_2;
  xx_minus_yy_5072310288(5.625288838678267, 0.978537547276462) _gate_q_15, _gate_q_11;
  csx _gate_q_1, _gate_q_4;
  sx _gate_q_3;
  crx(1.6875227350394706) _gate_q_5, _gate_q_16;
  t _gate_q_13;
}