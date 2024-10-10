gate rzz_5070304032(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5615330077165819) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070295584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.099824859566956) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.875557023867356) _gate_q_1;
  ry(-1.875557023867356) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.099824859566956) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5070295488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.715332411341518, 1.4580993785012106, -1.4580993785012106) _gate_q_0;
}
gate r_5070295440(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.888786750049294, 3.5355279927801453, -3.5355279927801453) _gate_q_0;
}
gate xx_minus_yy_5070299472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.268189608588586) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.23989098512426513) _gate_q_0;
  ry(-0.23989098512426513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.268189608588586) _gate_q_1;
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
gate xx_minus_yy_5070298608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.8074441929390375) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.71053155418287) _gate_q_0;
  ry(-2.71053155418287) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.8074441929390375) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5070303936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.541756967196525) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6590228339886135) _gate_q_1;
  ry(-1.6590228339886135) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.541756967196525) _gate_q_0;
}
gate rxx_5070303264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.201641162865018) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070299616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9868458787247114) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9340688028562765) _gate_q_1;
  ry(-1.9340688028562765) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9868458787247114) _gate_q_0;
}
gate rxx_5070291456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.275854084010525) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5070298176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4668162195620185) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5070297264(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.4171224265821798) _gate_q_0;
  u1(1.336055697731954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.569903289674616, 0, -1.4171224265821798) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.569903289674616, 0.0810667288502256, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  crz(1.124180727360448) _gate_q_4, _gate_q_0;
  crz(1.5460143384140344) _gate_q_1, _gate_q_9;
  cry(0.18171665626362704) _gate_q_6, _gate_q_7;
  swap _gate_q_3, _gate_q_8;
  u1(5.703247877969694) _gate_q_2;
  sx _gate_q_5;
  tdg _gate_q_3;
  cry(5.551788402751156) _gate_q_2, _gate_q_6;
  rz(4.257608574845957) _gate_q_7;
  rzz_5070304032(1.5615330077165819) _gate_q_1, _gate_q_9;
  xx_plus_yy_5070295584(3.751114047734712, 3.099824859566956) _gate_q_8, _gate_q_0;
  dcx _gate_q_5, _gate_q_4;
  r_5070295488(5.715332411341518, 3.028895705296107) _gate_q_4;
  U(5.23022690939779, 1.4544411598459595, 1.9871240989383492) _gate_q_8;
  rz(3.952482440441796) _gate_q_3;
  r_5070295440(1.888786750049294, 5.106324319575042) _gate_q_1;
  tdg _gate_q_2;
  xx_minus_yy_5070299472(0.47978197024853025, 4.268189608588586) _gate_q_6, _gate_q_0;
  cz _gate_q_9, _gate_q_5;
  h _gate_q_7;
  csx _gate_q_8, _gate_q_6;
  ry(2.356231854650809) _gate_q_0;
  u2(5.22350816166669, 3.1477834630989387) _gate_q_1;
  rz(3.9483340916748864) _gate_q_3;
  dcx _gate_q_2, _gate_q_9;
  crx(3.5158495288193072) _gate_q_7, _gate_q_5;
  u2(1.9909590807298265, 3.6117904896980604) _gate_q_4;
  csx _gate_q_1, _gate_q_0;
  ry(4.3517283979410095) _gate_q_8;
  x _gate_q_4;
  xx_minus_yy_5070298608(5.42106310836574, 4.8074441929390375) _gate_q_9, _gate_q_6;
  y _gate_q_5;
  t _gate_q_2;
  s _gate_q_3;
  ry(5.005019514835081) _gate_q_7;
  cs _gate_q_5, _gate_q_1;
  U(1.9387980249026429, 4.761449108260032, 1.297197340642887) _gate_q_2;
  cs _gate_q_4, _gate_q_3;
  cry(2.285467352571716) _gate_q_7, _gate_q_6;
  xx_plus_yy_5070303936(3.318045667977227, 4.541756967196525) _gate_q_0, _gate_q_8;
  id _gate_q_9;
  rz(6.087089923278902) _gate_q_4;
  cz _gate_q_6, _gate_q_7;
  s _gate_q_2;
  sx _gate_q_9;
  h _gate_q_8;
  h _gate_q_0;
  rxx_5070303264(4.201641162865018) _gate_q_1, _gate_q_5;
  p(2.679466744881834) _gate_q_3;
  cp(3.657035787552024) _gate_q_0, _gate_q_8;
  dcx _gate_q_3, _gate_q_9;
  sxdg _gate_q_1;
  cz _gate_q_6, _gate_q_2;
  id _gate_q_7;
  u1(0.2882973397831979) _gate_q_5;
  s _gate_q_4;
  csx _gate_q_7, _gate_q_6;
  cy _gate_q_8, _gate_q_9;
  xx_plus_yy_5070299616(3.868137605712553, 1.9868458787247114) _gate_q_1, _gate_q_2;
  rxx_5070291456(4.275854084010525) _gate_q_0, _gate_q_3;
  u1(0.6981088734884797) _gate_q_5;
  u1(1.7023147403312546) _gate_q_4;
  rzz_5070298176(3.4668162195620185) _gate_q_9, _gate_q_7;
  u1(5.5415245549125585) _gate_q_6;
  rz(3.676618002973979) _gate_q_0;
  cz _gate_q_3, _gate_q_4;
  u2(2.58210295011444, 3.9939114341350113) _gate_q_2;
  cu3_5070297264(5.139806579349232, 0.0810667288502256, 2.753178124314134) _gate_q_1, _gate_q_8;
  U(0.02398750665030918, 5.940342675659641, 4.652488187458247) _gate_q_5;
}
gate rzx_5070298272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5655836802517205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5070295056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4489992700202692, 3.635887960531125, -3.635887960531125) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5070301344(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4696418735787415) _gate_q_0;
  u1(1.889461206918837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9293243332111849, 0, -2.4696418735787415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9293243332111849, 0.5801806666599045, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5070295248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.2445701764639785) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5070300288(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0384042525136088) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070291840(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2782697815216895) _gate_q_0;
  u1(1.9911744586618618) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7082985433323046, 0, -3.2782697815216895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7082985433323046, 1.2870953228598274, 0) _gate_q_1;
}
gate cu3_5070303408(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.775961317714951) _gate_q_0;
  u1(2.0680124426647852) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7479990155506062, 0, -2.775961317714951) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7479990155506062, 0.7079488750501653, 0) _gate_q_1;
}
gate rxx_5070291120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.5938077321231665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5070291264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.767126566734576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070300720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.22772301611795975) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0528502632756505) _gate_q_0;
  ry(-3.0528502632756505) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.22772301611795975) _gate_q_1;
}
gate rzx_5070291648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.029533980652419) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate ryy_5070301584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1575055071716234) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  rzx_5070298272(2.5655836802517205) _gate_q_2, _gate_q_4;
  r_5070295056(1.4489992700202692, 5.206684287326022) _gate_q_8;
  cz _gate_q_7, _gate_q_6;
  cs _gate_q_1, _gate_q_9;
  sx _gate_q_5;
  sxdg _gate_q_0;
  s _gate_q_3;
  crx(5.317241968974721) _gate_q_4, _gate_q_7;
  ry(2.3271252008895) _gate_q_3;
  y _gate_q_6;
  p(5.919468244859952) _gate_q_0;
  u1(4.496681718061253) _gate_q_8;
  iswap _gate_q_2, _gate_q_1;
  cz _gate_q_9, _gate_q_5;
  cs _gate_q_7, _gate_q_1;
  z _gate_q_5;
  iswap _gate_q_4, _gate_q_8;
  crx(0.5791644570623636) _gate_q_2, _gate_q_3;
  cz _gate_q_0, _gate_q_9;
  u2(1.3884455661257542, 6.042114278002848) _gate_q_6;
  cry(2.811452311567422) _gate_q_5, _gate_q_9;
  ch _gate_q_2, _gate_q_8;
  cz _gate_q_6, _gate_q_1;
  cu3_5070301344(1.8586486664223698, 0.5801806666599045, 4.3591030804975786) _gate_q_7, _gate_q_0;
  x _gate_q_4;
  x _gate_q_3;
  swap _gate_q_3, _gate_q_2;
  sxdg _gate_q_6;
  csdg _gate_q_0, _gate_q_5;
  sdg _gate_q_4;
  ch _gate_q_7, _gate_q_1;
  rzz_5070295248(2.2445701764639785) _gate_q_9, _gate_q_8;
  dcx _gate_q_6, _gate_q_4;
  s _gate_q_9;
  csdg _gate_q_2, _gate_q_3;
  ryy_5070300288(1.0384042525136088) _gate_q_0, _gate_q_7;
  csx _gate_q_8, _gate_q_5;
  rz(2.78444490295755) _gate_q_1;
  csx _gate_q_1, _gate_q_9;
  cu3_5070291840(5.416597086664609, 1.2870953228598274, 5.269444240183551) _gate_q_6, _gate_q_2;
  p(2.9481239527176606) _gate_q_8;
  iswap _gate_q_3, _gate_q_0;
  u3(3.324295521663072, 3.483883462076198, 2.1213212831240322) _gate_q_7;
  p(3.9083516263058646) _gate_q_4;
  y _gate_q_5;
  U(5.795964859243909, 2.9954828974436536, 1.8195205880050243) _gate_q_8;
  cu3_5070303408(3.4959980311012124, 0.7079488750501653, 4.843973760379736) _gate_q_7, _gate_q_3;
  t _gate_q_4;
  rxx_5070291120(5.5938077321231665) _gate_q_1, _gate_q_2;
  rzx_5070291264(4.767126566734576) _gate_q_0, _gate_q_9;
  xx_minus_yy_5070300720(6.105700526551301, 0.22772301611795975) _gate_q_5, _gate_q_6;
  crx(0.6437726224659642) _gate_q_8, _gate_q_2;
  rzx_5070291648(6.029533980652419) _gate_q_5, _gate_q_9;
  x _gate_q_0;
  sx _gate_q_6;
  x _gate_q_3;
  rx(1.4136032174099613) _gate_q_7;
  cz _gate_q_1, _gate_q_4;
  sx _gate_q_5;
  x _gate_q_9;
  rx(1.6800442147005) _gate_q_4;
  ecr _gate_q_0, _gate_q_3;
  ryy_5070301584(2.1575055071716234) _gate_q_7, _gate_q_6;
  s _gate_q_2;
  ry(2.130126291544722) _gate_q_8;
  sx _gate_q_1;
}