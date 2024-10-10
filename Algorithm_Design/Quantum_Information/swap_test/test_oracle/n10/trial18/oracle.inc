gate r_5072252144(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.822998718516442, -1.278088077329521, 1.278088077329521) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072247008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.4143890458103305) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1052331685588235) _gate_q_1;
  ry(-1.1052331685588235) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.4143890458103305) _gate_q_0;
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
gate cu1_5072254880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.287259027548393) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.287259027548393) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.287259027548393) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5072255120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0741933931173713) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8224931976212546) _gate_q_1;
  ry(-1.8224931976212546) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0741933931173713) _gate_q_0;
}
gate ryy_5072243312(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9687020764778556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072249600(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.7847440806857175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072248976(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.525984243139555, 3.276690823096529, -3.276690823096529) _gate_q_0;
}
gate ryy_5072240768(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.49253940964249343) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072251424(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7995651699689882) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7995651699689882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7995651699689882) _gate_q_1;
}
gate xx_minus_yy_5072243072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.049279295022342) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7018195304235686) _gate_q_0;
  ry(-1.7018195304235686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.049279295022342) _gate_q_1;
}
gate cu3_5072245664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.450454980093989) _gate_q_0;
  u1(0.2979261187910036) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4746111698063373, 0, -5.450454980093989) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4746111698063373, 5.152528861302986, 0) _gate_q_1;
}
gate rxx_5072243216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8783456067185589) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072251520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1601788565460174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  z _gate_q_2;
  tdg _gate_q_4;
  cu(6.022449550905864, 2.772296758461257, 5.9231170220397455, 1.517157439408043) _gate_q_7, _gate_q_3;
  crz(1.9995959781030352) _gate_q_8, _gate_q_6;
  sx _gate_q_9;
  r_5072252144(4.822998718516442, 0.29270824946537555) _gate_q_1;
  xx_plus_yy_5072247008(2.210466337117647, 2.4143890458103305) _gate_q_5, _gate_q_0;
  cp(3.446856163722955) _gate_q_6, _gate_q_1;
  sdg _gate_q_4;
  cz _gate_q_9, _gate_q_8;
  cz _gate_q_0, _gate_q_7;
  tdg _gate_q_5;
  p(6.182023252154972) _gate_q_2;
  sx _gate_q_3;
  csx _gate_q_3, _gate_q_6;
  ecr _gate_q_2, _gate_q_9;
  cu1_5072254880(2.574518055096786) _gate_q_0, _gate_q_7;
  h _gate_q_5;
  ch _gate_q_8, _gate_q_1;
  rz(1.7629235975821993) _gate_q_4;
  u1(1.6384444578752684) _gate_q_9;
  sxdg _gate_q_5;
  p(5.420941812985518) _gate_q_1;
  u2(6.006037710223359, 2.608691224910464) _gate_q_4;
  cs _gate_q_2, _gate_q_6;
  u1(2.7864212344286234) _gate_q_0;
  y _gate_q_3;
  s _gate_q_7;
  z _gate_q_8;
  xx_plus_yy_5072255120(3.6449863952425092, 3.0741933931173713) _gate_q_9, _gate_q_1;
  ecr _gate_q_2, _gate_q_4;
  U(0.5419487437428999, 0.4911988144949022, 0.8066712231332304) _gate_q_7;
  cu(3.9055086822465177, 3.0112493588336346, 2.036074614136482, 3.756622958654724) _gate_q_8, _gate_q_3;
  rx(4.324475258759643) _gate_q_0;
  h _gate_q_5;
  t _gate_q_6;
  ryy_5072243312(3.9687020764778556) _gate_q_1, _gate_q_8;
  sdg _gate_q_4;
  rzz_5072249600(4.7847440806857175) _gate_q_2, _gate_q_9;
  r_5072248976(3.525984243139555, 4.847487149891426) _gate_q_7;
  sdg _gate_q_0;
  cx _gate_q_3, _gate_q_6;
  ry(6.190279817574651) _gate_q_5;
  rz(2.493294638384787) _gate_q_3;
  ryy_5072240768(0.49253940964249343) _gate_q_0, _gate_q_2;
  cp(1.4018238071376492) _gate_q_8, _gate_q_9;
  rz(2.397636404711883) _gate_q_5;
  cz _gate_q_4, _gate_q_1;
  crz(5.779455674165603) _gate_q_7, _gate_q_6;
  cu(1.587529544473176, 2.507805437569853, 4.816691157873799, 1.3672625809695786) _gate_q_4, _gate_q_7;
  rx(3.8346151047286585) _gate_q_9;
  sxdg _gate_q_5;
  x _gate_q_3;
  cu1_5072251424(1.5991303399379764) _gate_q_6, _gate_q_8;
  s _gate_q_0;
  rz(3.028118676222683) _gate_q_1;
  u2(0.11169227868624686, 5.232793998223767) _gate_q_2;
  id _gate_q_5;
  xx_minus_yy_5072243072(3.403639060847137, 2.049279295022342) _gate_q_7, _gate_q_2;
  z _gate_q_4;
  s _gate_q_3;
  cu3_5072245664(4.949222339612675, 5.152528861302986, 5.748381098884993) _gate_q_1, _gate_q_8;
  cs _gate_q_0, _gate_q_6;
  s _gate_q_9;
  cx _gate_q_7, _gate_q_3;
  rxx_5072243216(1.8783456067185589) _gate_q_9, _gate_q_0;
  cu(4.246471913679086, 3.893465292200951, 1.1350164227299058, 1.0282111263401479) _gate_q_2, _gate_q_4;
  rx(5.9754271167919555) _gate_q_6;
  rzx_5072251520(2.1601788565460174) _gate_q_1, _gate_q_5;
  id _gate_q_8;
}
gate cu1_5072245040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9272586198346062) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9272586198346062) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9272586198346062) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5072255408(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.3156660873795087, 0.49717603309635283, -0.49717603309635283) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5072245808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.321436310497485) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4574388386499733) _gate_q_1;
  ry(-2.4574388386499733) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.321436310497485) _gate_q_0;
}
gate rzx_5072248304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.029722907195626) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5072253392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0915168211235566) _gate_q_0;
  u1(2.209439296282595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3248019817095675, 0, -3.0915168211235566) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3248019817095675, 0.8820775248409617, 0) _gate_q_1;
}
gate r_5072243648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.996765844399145, 1.608869314471641, -1.608869314471641) _gate_q_0;
}
gate rzz_5072249888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9391885860532694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072249936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3590304658768788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072242112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.06460691272015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072255168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.588005930986062) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.15710332234021748) _gate_q_1;
  ry(-0.15710332234021748) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.588005930986062) _gate_q_0;
}
gate rzx_5072244704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1809311735100274) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072245136(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6425251827426289) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6425251827426289) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6425251827426289) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  id _gate_q_6;
  cu1_5072245040(1.8545172396692124) _gate_q_2, _gate_q_9;
  csdg _gate_q_8, _gate_q_7;
  cs _gate_q_5, _gate_q_1;
  cu(3.892351820270213, 3.673892278956007, 2.029620048918635, 5.778437732512247) _gate_q_4, _gate_q_0;
  s _gate_q_3;
  u3(0.32368939453560125, 5.425080073503593, 2.606090638073261) _gate_q_9;
  r_5072255408(3.3156660873795087, 2.0679723598912494) _gate_q_6;
  csx _gate_q_4, _gate_q_5;
  id _gate_q_7;
  cz _gate_q_0, _gate_q_8;
  sxdg _gate_q_1;
  sxdg _gate_q_3;
  t _gate_q_2;
  ry(5.919430504444599) _gate_q_5;
  u1(4.725972232313563) _gate_q_4;
  dcx _gate_q_1, _gate_q_9;
  rz(4.513372373150434) _gate_q_0;
  sx _gate_q_8;
  ry(1.1544475872435986) _gate_q_2;
  xx_plus_yy_5072245808(4.9148776772999465, 3.321436310497485) _gate_q_3, _gate_q_6;
  p(3.4856339289521214) _gate_q_7;
  sxdg _gate_q_7;
  rzx_5072248304(4.029722907195626) _gate_q_9, _gate_q_4;
  ch _gate_q_6, _gate_q_3;
  u2(5.897994264289541, 3.537046283961658) _gate_q_2;
  cu3_5072253392(2.649603963419135, 0.8820775248409617, 5.300956117406152) _gate_q_1, _gate_q_0;
  s _gate_q_5;
  h _gate_q_8;
  rz(2.410403449834738) _gate_q_3;
  dcx _gate_q_9, _gate_q_5;
  p(2.526814013804058) _gate_q_4;
  sdg _gate_q_0;
  crx(4.940389003579877) _gate_q_1, _gate_q_8;
  ry(0.2309672176993443) _gate_q_7;
  cy _gate_q_6, _gate_q_2;
  csdg _gate_q_1, _gate_q_4;
  u1(3.552780244619499) _gate_q_6;
  tdg _gate_q_5;
  u2(1.542735664905168, 0.08127635857602555) _gate_q_9;
  u2(4.304917713261393, 2.6045346898135344) _gate_q_3;
  u3(4.7813718252891855, 2.885774754501342, 4.982613761292834) _gate_q_0;
  crx(3.246950038360524) _gate_q_8, _gate_q_2;
  x _gate_q_7;
  r_5072243648(1.996765844399145, 3.1796656412665376) _gate_q_1;
  u3(4.763970162157818, 2.7846828384196542, 3.5536488962844377) _gate_q_7;
  tdg _gate_q_8;
  t _gate_q_9;
  id _gate_q_6;
  x _gate_q_0;
  cs _gate_q_2, _gate_q_5;
  p(0.9036530724488016) _gate_q_3;
  sxdg _gate_q_4;
  cy _gate_q_1, _gate_q_4;
  cs _gate_q_2, _gate_q_8;
  dcx _gate_q_3, _gate_q_9;
  rzz_5072249888(1.9391885860532694) _gate_q_6, _gate_q_7;
  ch _gate_q_5, _gate_q_0;
  rzx_5072249936(1.3590304658768788) _gate_q_2, _gate_q_0;
  rzz_5072242112(5.06460691272015) _gate_q_4, _gate_q_5;
  sxdg _gate_q_7;
  xx_plus_yy_5072255168(0.31420664468043497, 4.588005930986062) _gate_q_6, _gate_q_3;
  cry(3.403262667247199) _gate_q_1, _gate_q_8;
  u3(0.9937330482255623, 1.2027056050040583, 4.3720252958213015) _gate_q_9;
  rx(4.650019682204547) _gate_q_3;
  cx _gate_q_5, _gate_q_7;
  rzx_5072244704(2.1809311735100274) _gate_q_2, _gate_q_1;
  z _gate_q_4;
  ecr _gate_q_9, _gate_q_0;
  cu1_5072245136(1.2850503654852579) _gate_q_8, _gate_q_6;
}