gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5105271152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.048288803210622) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105283872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.730578629837478) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105277776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7197828808092694) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7197828808092694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7197828808092694) _gate_q_1;
}
gate rxx_5105277920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.392652217994567) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate ryy_5105272448(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.232431513358959) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate xx_minus_yy_5105273984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0739206073098893) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.20221425368729584) _gate_q_0;
  ry(-0.20221425368729584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0739206073098893) _gate_q_1;
}
gate cu1_5105285840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.013074502987651887) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.013074502987651887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.013074502987651887) _gate_q_1;
}
gate ryy_5105283440(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.57374191200636) _gate_q_1;
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
gate cu3_5105282528(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.884127373299335) _gate_q_0;
  u1(-1.7901339157747334) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9586104769961468, 0, -3.884127373299335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9586104769961468, 5.674261289074068, 0) _gate_q_1;
}
gate xx_minus_yy_5105280992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.959518100560818) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.313959903783728) _gate_q_0;
  ry(-2.313959903783728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.959518100560818) _gate_q_1;
}
gate xx_plus_yy_5105271680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3437750828418162) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.406916665356782) _gate_q_1;
  ry(-2.406916665356782) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3437750828418162) _gate_q_0;
}
gate cu3_5105276048(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1740970558071786) _gate_q_0;
  u1(-1.4219987780418193) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.679924402549728, 0, -3.1740970558071786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.679924402549728, 4.596095833848998, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5105273216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8078181418089592) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.144746943503829) _gate_q_0;
  ry(-2.144746943503829) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8078181418089592) _gate_q_1;
}
gate rxx_5105275760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8550802685209214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105271920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.454280741734854, -1.3984405658908026, 1.3984405658908026) _gate_q_0;
}
gate xx_plus_yy_5105276480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4379184482124074) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8862921213930575) _gate_q_1;
  ry(-1.8862921213930575) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4379184482124074) _gate_q_0;
}
gate cu1_5105270912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5489969456374876) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5489969456374876) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5489969456374876) _gate_q_1;
}
gate xx_plus_yy_5105273792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.6693301937346625) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9550291331400211) _gate_q_1;
  ry(-0.9550291331400211) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.6693301937346625) _gate_q_0;
}
gate rxx_5105785872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8188201172685727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  U(5.207507299651957, 2.397597516851237, 5.494241947759557) _gate_q_13;
  t _gate_q_0;
  cs _gate_q_15, _gate_q_14;
  ecr _gate_q_9, _gate_q_7;
  cz _gate_q_11, _gate_q_2;
  z _gate_q_3;
  dcx _gate_q_5, _gate_q_8;
  cz _gate_q_16, _gate_q_10;
  cs _gate_q_1, _gate_q_12;
  tdg _gate_q_4;
  ry(0.9120897339754321) _gate_q_6;
  y _gate_q_7;
  swap _gate_q_16, _gate_q_9;
  rzx_5105271152(2.048288803210622) _gate_q_0, _gate_q_2;
  dcx _gate_q_6, _gate_q_5;
  p(5.723961531879627) _gate_q_8;
  p(3.2688965382438875) _gate_q_10;
  U(5.763503084328423, 3.3234139898488997, 1.3434992547244875) _gate_q_4;
  cx _gate_q_14, _gate_q_13;
  sdg _gate_q_12;
  cy _gate_q_15, _gate_q_11;
  rz(1.16616703341601) _gate_q_1;
  u1(1.082260238133535) _gate_q_3;
  t _gate_q_11;
  sdg _gate_q_1;
  u2(0.7249870311173199, 0.043719021799582806) _gate_q_12;
  rxx_5105283872(2.730578629837478) _gate_q_6, _gate_q_0;
  y _gate_q_10;
  cu1_5105277776(1.4395657616185389) _gate_q_5, _gate_q_8;
  dcx _gate_q_15, _gate_q_13;
  cx _gate_q_16, _gate_q_14;
  ecr _gate_q_4, _gate_q_9;
  p(6.005758485445689) _gate_q_2;
  rxx_5105277920(4.392652217994567) _gate_q_7, _gate_q_3;
  cp(0.11112842676648824) _gate_q_15, _gate_q_7;
  sxdg _gate_q_8;
  ryy_5105272448(4.232431513358959) _gate_q_4, _gate_q_16;
  csx _gate_q_9, _gate_q_14;
  xx_minus_yy_5105273984(0.4044285073745917, 1.0739206073098893) _gate_q_0, _gate_q_6;
  id _gate_q_3;
  ry(3.841731935091271) _gate_q_5;
  csx _gate_q_10, _gate_q_2;
  cy _gate_q_11, _gate_q_12;
  sdg _gate_q_1;
  u3(0.10129137148313867, 4.151436039498112, 3.596613957177003) _gate_q_13;
  U(0.7871227461677679, 3.576497262034189, 6.145651487350271) _gate_q_15;
  cu1_5105285840(0.026149005975303775) _gate_q_6, _gate_q_12;
  crx(0.9284719868147521) _gate_q_8, _gate_q_4;
  ch _gate_q_1, _gate_q_13;
  ryy_5105283440(2.57374191200636) _gate_q_11, _gate_q_9;
  cx _gate_q_3, _gate_q_7;
  ecr _gate_q_5, _gate_q_0;
  iswap _gate_q_16, _gate_q_10;
  crz(5.788315235402092) _gate_q_14, _gate_q_2;
  y _gate_q_11;
  cu3_5105282528(5.9172209539922935, 5.674261289074068, 2.0939934575246015) _gate_q_14, _gate_q_16;
  rx(3.005166181469071) _gate_q_0;
  x _gate_q_15;
  crz(1.5560384150144544) _gate_q_6, _gate_q_2;
  xx_minus_yy_5105280992(4.627919807567456, 5.959518100560818) _gate_q_5, _gate_q_9;
  U(5.2632335454937715, 0.9033883921126348, 2.4096181761460334) _gate_q_8;
  u3(4.251843847730689, 3.757243691004662, 0.5227634190174805) _gate_q_1;
  x _gate_q_4;
  xx_plus_yy_5105271680(4.813833330713564, 1.3437750828418162) _gate_q_13, _gate_q_10;
  h _gate_q_12;
  cu3_5105276048(1.359848805099456, 4.596095833848998, 1.7520982777653595) _gate_q_3, _gate_q_7;
  y _gate_q_0;
  U(4.560575947686071, 2.4564493135184233, 0.2920098191658882) _gate_q_11;
  tdg _gate_q_2;
  sx _gate_q_7;
  rz(5.32711061761763) _gate_q_16;
  ry(5.557184055821109) _gate_q_10;
  sdg _gate_q_3;
  p(4.019430182295755) _gate_q_4;
  csdg _gate_q_9, _gate_q_5;
  cx _gate_q_8, _gate_q_13;
  rz(1.276927289941951) _gate_q_6;
  crz(5.9512189171898955) _gate_q_14, _gate_q_12;
  cy _gate_q_15, _gate_q_1;
  s _gate_q_0;
  csx _gate_q_8, _gate_q_15;
  xx_minus_yy_5105273216(4.289493887007658, 1.8078181418089592) _gate_q_2, _gate_q_4;
  rxx_5105275760(0.8550802685209214) _gate_q_11, _gate_q_9;
  swap _gate_q_16, _gate_q_12;
  r_5105271920(4.454280741734854, 0.17235576090409402) _gate_q_14;
  crx(0.886155340361423) _gate_q_5, _gate_q_10;
  xx_plus_yy_5105276480(3.772584242786115, 1.4379184482124074) _gate_q_3, _gate_q_6;
  u3(0.5791552134032203, 3.327501132469538, 4.9864479359034455) _gate_q_13;
  cy _gate_q_7, _gate_q_1;
  cu1_5105270912(1.0979938912749752) _gate_q_10, _gate_q_5;
  x _gate_q_3;
  cs _gate_q_7, _gate_q_16;
  x _gate_q_0;
  crz(5.182500314110366) _gate_q_6, _gate_q_9;
  csx _gate_q_15, _gate_q_13;
  s _gate_q_4;
  xx_plus_yy_5105273792(1.9100582662800423, 3.6693301937346625) _gate_q_14, _gate_q_12;
  z _gate_q_1;
  u3(0.656245226764031, 3.751357400654823, 0.38563304767289686) _gate_q_8;
  U(4.320400059528653, 2.6266891378101414, 3.0913335280228567) _gate_q_2;
  rx(5.748719817044828) _gate_q_11;
  cry(1.1072536179826662) _gate_q_6, _gate_q_10;
  csx _gate_q_16, _gate_q_8;
  crz(0.9830664553544817) _gate_q_9, _gate_q_13;
  p(3.985030925056343) _gate_q_3;
  ecr _gate_q_15, _gate_q_0;
  crz(2.445643657989908) _gate_q_4, _gate_q_5;
  rxx_5105785872(3.8188201172685727) _gate_q_11, _gate_q_12;
  rx(3.830719073472441) _gate_q_14;
  tdg _gate_q_7;
  cry(0.4140074916304743) _gate_q_1, _gate_q_2;
}
gate rzz_5103919680(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.783920102693099) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5103919872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.929889803989428) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5103926160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.156760103521368) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5103921600(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0983869429437627) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0983869429437627) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0983869429437627) _gate_q_1;
}
gate rzx_5103926400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.300590846424636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5103923328(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.560504709486509) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5103923280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.77973597441735) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.77973597441735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.77973597441735) _gate_q_1;
}
gate rzx_5103919392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.440975877830459) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5103921504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.071641774886857) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5103925488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.10314441475449998) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.10314441475449998) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.10314441475449998) _gate_q_1;
}
gate rzz_5103921552(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.614613625294157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5103926304(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3975305032535847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5103924048(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.589799841787612) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5103920352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6977201561368682) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5103926064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.774489686139708) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5103924768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9552488067531012) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5106115904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7603985863974967) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106113408(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.2439892256232707) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2102275979013559) _gate_q_0;
  ry(-0.2102275979013559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.2439892256232707) _gate_q_1;
}
gate xx_plus_yy_5106122528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.563972429815593) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0588378957960332) _gate_q_1;
  ry(-1.0588378957960332) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.563972429815593) _gate_q_0;
}
gate cu1_5106121664(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7506989334965062) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7506989334965062) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7506989334965062) _gate_q_1;
}
gate r_5106121472(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7822073323909686, -0.908146152645999, 0.908146152645999) _gate_q_0;
}
gate rxx_5106110000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7856813590188505) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5106114704(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.105739817747825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  rz(4.420193463370219) _gate_q_9;
  rzz_5103919680(4.783920102693099) _gate_q_5, _gate_q_8;
  crx(1.9922264107544783) _gate_q_6, _gate_q_12;
  sx _gate_q_15;
  rxx_5103919872(5.929889803989428) _gate_q_16, _gate_q_10;
  csx _gate_q_3, _gate_q_7;
  crx(1.232129421028519) _gate_q_4, _gate_q_1;
  sx _gate_q_14;
  rzx_5103926160(5.156760103521368) _gate_q_13, _gate_q_2;
  csx _gate_q_0, _gate_q_11;
  cu1_5103921600(6.196773885887525) _gate_q_2, _gate_q_1;
  crx(3.2492460401207217) _gate_q_6, _gate_q_12;
  tdg _gate_q_16;
  rx(5.3913718282390075) _gate_q_5;
  rx(0.22466855527994947) _gate_q_8;
  y _gate_q_3;
  s _gate_q_14;
  tdg _gate_q_11;
  cs _gate_q_7, _gate_q_4;
  iswap _gate_q_13, _gate_q_10;
  rzx_5103926400(2.300590846424636) _gate_q_15, _gate_q_9;
  sdg _gate_q_0;
  iswap _gate_q_16, _gate_q_0;
  sdg _gate_q_9;
  x _gate_q_14;
  ryy_5103923328(5.560504709486509) _gate_q_11, _gate_q_5;
  h _gate_q_15;
  cz _gate_q_7, _gate_q_2;
  cx _gate_q_13, _gate_q_10;
  cu1_5103923280(3.5594719488347) _gate_q_1, _gate_q_4;
  swap _gate_q_6, _gate_q_12;
  rzx_5103919392(5.440975877830459) _gate_q_3, _gate_q_8;
  rzz_5103921504(5.071641774886857) _gate_q_1, _gate_q_15;
  cp(1.1748905321044387) _gate_q_3, _gate_q_7;
  z _gate_q_13;
  z _gate_q_14;
  u1(2.1083998960453494) _gate_q_5;
  rx(5.748373092178497) _gate_q_10;
  id _gate_q_4;
  cu1_5103925488(0.20628882950899996) _gate_q_0, _gate_q_6;
  csx _gate_q_2, _gate_q_8;
  ry(5.604204737059512) _gate_q_16;
  rzz_5103921552(5.614613625294157) _gate_q_9, _gate_q_12;
  y _gate_q_11;
  crx(5.34643706081401) _gate_q_0, _gate_q_15;
  sxdg _gate_q_8;
  ry(0.34417547238140045) _gate_q_13;
  id _gate_q_9;
  ryy_5103926304(0.3975305032535847) _gate_q_12, _gate_q_6;
  t _gate_q_1;
  u1(0.015552671324962056) _gate_q_11;
  iswap _gate_q_14, _gate_q_4;
  rx(2.244567449210766) _gate_q_5;
  ryy_5103924048(3.589799841787612) _gate_q_7, _gate_q_3;
  rz(0.6178874493637452) _gate_q_2;
  tdg _gate_q_16;
  z _gate_q_10;
  rxx_5103920352(0.6977201561368682) _gate_q_11, _gate_q_10;
  iswap _gate_q_3, _gate_q_15;
  cy _gate_q_9, _gate_q_1;
  rxx_5103926064(3.774489686139708) _gate_q_12, _gate_q_7;
  rxx_5103924768(0.9552488067531012) _gate_q_5, _gate_q_4;
  cs _gate_q_6, _gate_q_2;
  sdg _gate_q_14;
  ch _gate_q_8, _gate_q_16;
  crz(5.95058961231852) _gate_q_0, _gate_q_13;
  p(3.903643431591085) _gate_q_0;
  cx _gate_q_1, _gate_q_7;
  u2(0.0300874509231961, 5.657118549336818) _gate_q_2;
  crx(1.8459860338728649) _gate_q_6, _gate_q_3;
  rzx_5106115904(1.7603985863974967) _gate_q_15, _gate_q_13;
  cx _gate_q_4, _gate_q_10;
  rz(1.8863948279167524) _gate_q_14;
  csx _gate_q_12, _gate_q_16;
  u2(3.0107634009795174, 5.430180747903304) _gate_q_9;
  z _gate_q_11;
  iswap _gate_q_8, _gate_q_5;
  y _gate_q_14;
  h _gate_q_12;
  x _gate_q_3;
  xx_minus_yy_5106113408(0.4204551958027118, 3.2439892256232707) _gate_q_5, _gate_q_13;
  cz _gate_q_0, _gate_q_16;
  h _gate_q_9;
  x _gate_q_4;
  sdg _gate_q_8;
  xx_plus_yy_5106122528(2.1176757915920663, 0.563972429815593) _gate_q_2, _gate_q_7;
  csx _gate_q_10, _gate_q_15;
  swap _gate_q_1, _gate_q_6;
  ry(2.1395764472096523) _gate_q_11;
  cp(3.084552651682466) _gate_q_7, _gate_q_16;
  sdg _gate_q_3;
  s _gate_q_5;
  U(4.874162901241496, 0.322374244718478, 4.1294149956731205) _gate_q_11;
  cs _gate_q_15, _gate_q_12;
  cu1_5106121664(3.5013978669930124) _gate_q_6, _gate_q_14;
  tdg _gate_q_1;
  r_5106121472(2.7822073323909686, 0.6626501741488976) _gate_q_9;
  cp(5.352622565043689) _gate_q_13, _gate_q_8;
  sdg _gate_q_0;
  z _gate_q_10;
  u2(4.948486651857592, 5.483162369375812) _gate_q_4;
  tdg _gate_q_2;
  swap _gate_q_6, _gate_q_2;
  y _gate_q_15;
  x _gate_q_9;
  csx _gate_q_4, _gate_q_8;
  sdg _gate_q_10;
  id _gate_q_16;
  rxx_5106110000(3.7856813590188505) _gate_q_12, _gate_q_0;
  sx _gate_q_13;
  ryy_5106114704(5.105739817747825) _gate_q_11, _gate_q_5;
  crx(1.3252876749027733) _gate_q_1, _gate_q_7;
  cx _gate_q_14, _gate_q_3;
}