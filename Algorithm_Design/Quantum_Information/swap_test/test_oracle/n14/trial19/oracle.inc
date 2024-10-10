gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072780992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.061214219045972) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6155473058300664) _gate_q_1;
  ry(-0.6155473058300664) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.061214219045972) _gate_q_0;
}
gate xx_minus_yy_5072771584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.650282035494692) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.04059591265223336) _gate_q_0;
  ry(-0.04059591265223336) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.650282035494692) _gate_q_1;
}
gate rxx_5072766160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.565316939783115) _gate_q_1;
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
gate cu3_5072769472(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.385918111015766) _gate_q_0;
  u1(-0.8443448776898461) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4230606133619514, 0, -4.385918111015766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4230606133619514, 5.230262988705612, 0) _gate_q_1;
}
gate rzz_5072779984(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.046495478566342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5072767120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3933779517147684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072769952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.06023399218252, 3.0015865487635507, -3.0015865487635507) _gate_q_0;
}
gate cu1_5072767744(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8837379370150529) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8837379370150529) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8837379370150529) _gate_q_1;
}
gate rzx_5072779552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8618395012683255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072771776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5017384926790236) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5072768224(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.242282975627711) _gate_q_0;
  u1(0.5989773351895625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9264449483242703, 0, -1.242282975627711) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9264449483242703, 0.6433056404381485, 0) _gate_q_1;
}
gate xx_minus_yy_5072774320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.0969268504376544) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0631154079420098) _gate_q_0;
  ry(-2.0631154079420098) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.0969268504376544) _gate_q_1;
}
gate cu3_5072771248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.319500809144788) _gate_q_0;
  u1(-1.6549813158765447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.252457801226104, 0, -4.319500809144788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.252457801226104, 5.974482125021333, 0) _gate_q_1;
}
gate xx_plus_yy_5072779120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.08403665688109441) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.391016382168073) _gate_q_1;
  ry(-2.391016382168073) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.08403665688109441) _gate_q_0;
}
gate ryy_5072766304(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6110926977640563) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5072767552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.030563025801648) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8571117233973804) _gate_q_1;
  ry(-1.8571117233973804) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.030563025801648) _gate_q_0;
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
gate cu1_5072771104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7059089303820947) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7059089303820947) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7059089303820947) _gate_q_1;
}
gate xx_minus_yy_5072776336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.605494390093583) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.46790468494285176) _gate_q_0;
  ry(-0.46790468494285176) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.605494390093583) _gate_q_1;
}
gate cu1_5072768368(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.004093011214517014) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.004093011214517014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.004093011214517014) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5072773888(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7247168187241364) _gate_q_0;
  u1(-0.3192824698771084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4294584587217777, 0, -2.7247168187241364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4294584587217777, 3.0439992886012446, 0) _gate_q_1;
}
gate rzx_5072776768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.248357026002744) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  cx _gate_q_11, _gate_q_7;
  crz(6.042977532944432) _gate_q_10, _gate_q_8;
  xx_plus_yy_5072780992(1.231094611660133, 5.061214219045972) _gate_q_2, _gate_q_6;
  xx_minus_yy_5072771584(0.08119182530446672, 4.650282035494692) _gate_q_4, _gate_q_5;
  rxx_5072766160(4.565316939783115) _gate_q_1, _gate_q_0;
  crx(4.155154148301947) _gate_q_12, _gate_q_3;
  ecr _gate_q_9, _gate_q_13;
  cu3_5072769472(4.846121226723903, 5.230262988705612, 3.54157323332592) _gate_q_10, _gate_q_4;
  cy _gate_q_13, _gate_q_6;
  rzz_5072779984(5.046495478566342) _gate_q_8, _gate_q_7;
  cu(6.154415208984121, 0.9329006069338013, 5.503671360345142, 1.2055853341975882) _gate_q_1, _gate_q_3;
  u3(5.776020702134602, 1.3904887323893538, 1.8202973483775804) _gate_q_12;
  x _gate_q_5;
  cs _gate_q_0, _gate_q_9;
  sdg _gate_q_11;
  u3(3.904279439053425, 5.899775047706912, 1.7677649842436811) _gate_q_2;
  U(5.1608724823439305, 3.1638903495490514, 5.79468180953529) _gate_q_7;
  ch _gate_q_13, _gate_q_12;
  cx _gate_q_2, _gate_q_9;
  rxx_5072767120(1.3933779517147684) _gate_q_11, _gate_q_6;
  sxdg _gate_q_4;
  r_5072769952(4.06023399218252, 4.572382875558447) _gate_q_3;
  cu1_5072767744(1.7674758740301058) _gate_q_10, _gate_q_8;
  s _gate_q_5;
  rzx_5072779552(1.8618395012683255) _gate_q_0, _gate_q_1;
  z _gate_q_7;
  u1(5.858610490359606) _gate_q_11;
  ecr _gate_q_4, _gate_q_1;
  rzx_5072771776(1.5017384926790236) _gate_q_9, _gate_q_12;
  cry(3.202772929246027) _gate_q_13, _gate_q_2;
  u1(1.1889179748088374) _gate_q_0;
  ry(6.102181815464668) _gate_q_5;
  s _gate_q_8;
  cu3_5072768224(5.8528898966485405, 0.6433056404381485, 1.8412603108172736) _gate_q_10, _gate_q_6;
  U(3.1243060386761092, 2.2466996039451885, 5.968998620622021) _gate_q_3;
  u1(0.26762018589043424) _gate_q_10;
  cs _gate_q_2, _gate_q_7;
  cu(0.982056765475481, 3.145659756263792, 4.131856986867097, 3.1410630313271017) _gate_q_0, _gate_q_13;
  cp(3.6957940015803463) _gate_q_3, _gate_q_5;
  sdg _gate_q_9;
  crz(3.9041106213726176) _gate_q_12, _gate_q_4;
  u2(0.23754168803210768, 2.886516813073733) _gate_q_11;
  crx(1.0145208691021839) _gate_q_6, _gate_q_1;
  s _gate_q_8;
  xx_minus_yy_5072774320(4.1262308158840195, 3.0969268504376544) _gate_q_13, _gate_q_9;
  u3(0.3718812653473151, 5.83558174355444, 2.8397901585921175) _gate_q_11;
  sxdg _gate_q_4;
  sxdg _gate_q_5;
  s _gate_q_0;
  cu3_5072771248(4.504915602452208, 5.974482125021333, 2.6645194932682434) _gate_q_1, _gate_q_12;
  cz _gate_q_10, _gate_q_3;
  id _gate_q_6;
  rx(1.7922357891664402) _gate_q_8;
  ecr _gate_q_7, _gate_q_2;
  xx_plus_yy_5072779120(4.782032764336146, 0.08403665688109441) _gate_q_10, _gate_q_11;
  cs _gate_q_8, _gate_q_4;
  cs _gate_q_9, _gate_q_0;
  cry(2.8115680549083724) _gate_q_1, _gate_q_2;
  u2(4.753676431714465, 3.572704237149152) _gate_q_7;
  ryy_5072766304(1.6110926977640563) _gate_q_3, _gate_q_12;
  xx_plus_yy_5072767552(3.714223446794761, 5.030563025801648) _gate_q_5, _gate_q_13;
  sxdg _gate_q_6;
  u3(1.0033855524014208, 1.6010401022515595, 0.37424715727077207) _gate_q_11;
  crx(2.9285392412182456) _gate_q_2, _gate_q_5;
  u2(4.270096417153173, 3.7491879807970534) _gate_q_3;
  csx _gate_q_10, _gate_q_7;
  sxdg _gate_q_13;
  cu1_5072771104(3.4118178607641894) _gate_q_9, _gate_q_8;
  ry(4.9880368998370965) _gate_q_12;
  x _gate_q_1;
  xx_minus_yy_5072776336(0.9358093698857035, 4.605494390093583) _gate_q_6, _gate_q_4;
  sx _gate_q_0;
  u3(3.9845929025233677, 3.074631114837197, 3.7049320330482525) _gate_q_3;
  cu1_5072768368(0.008186022429034028) _gate_q_10, _gate_q_4;
  cy _gate_q_5, _gate_q_7;
  csx _gate_q_1, _gate_q_13;
  csdg _gate_q_6, _gate_q_2;
  id _gate_q_8;
  id _gate_q_12;
  h _gate_q_9;
  cu3_5072773888(0.8589169174435554, 3.0439992886012446, 2.405434348847028) _gate_q_0, _gate_q_11;
  u2(3.573679651371204, 3.3055302435176346) _gate_q_6;
  cry(2.8344807866809982) _gate_q_7, _gate_q_1;
  z _gate_q_11;
  rz(1.4821736507637109) _gate_q_10;
  cu(4.190683938325779, 3.3553060607165124, 2.192415297281784, 6.226589548030196) _gate_q_5, _gate_q_2;
  rzx_5072776768(5.248357026002744) _gate_q_9, _gate_q_3;
  csdg _gate_q_4, _gate_q_8;
  cs _gate_q_12, _gate_q_0;
  t _gate_q_13;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5072773312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.9169735872709955) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2113074848435033) _gate_q_1;
  ry(-2.2113074848435033) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.9169735872709955) _gate_q_0;
}
gate xx_minus_yy_5072771920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.944406027707941) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8640051435086996) _gate_q_0;
  ry(-0.8640051435086996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.944406027707941) _gate_q_1;
}
gate rxx_5072776192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.284626940570796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5072766832(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.417364410091481) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072780800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.21342537365221) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072780608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7711973009330225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072765536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.231191906519133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5072780848(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.82536445422594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5074192768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.136021206839817) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074193344(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.246369654042978) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.246369654042978) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.246369654042978) _gate_q_1;
}
gate rxx_5074202416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.221799911152244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074200880(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.6758197670060007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5074200832(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5450765281414016) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5450765281414016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5450765281414016) _gate_q_1;
}
gate rzx_5074197568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.767477815947406) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074191184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.211088712921606) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3731742020620497) _gate_q_1;
  ry(-1.3731742020620497) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.211088712921606) _gate_q_0;
}
gate rzx_5074191808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3319600816725137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074203136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.765380860878104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074200976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.507894027203741) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074198048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.730838868773918, -1.3063195801532268, 1.3063195801532268) _gate_q_0;
}
gate rzz_5074203280(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3540355405767532) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  iswap _gate_q_8, _gate_q_10;
  xx_plus_yy_5072773312(4.4226149696870065, 0.9169735872709955) _gate_q_11, _gate_q_13;
  crx(0.9804155730890286) _gate_q_4, _gate_q_9;
  sx _gate_q_5;
  ch _gate_q_3, _gate_q_1;
  csx _gate_q_2, _gate_q_6;
  cx _gate_q_12, _gate_q_0;
  u2(5.438262771089619, 3.850745328305082) _gate_q_7;
  xx_minus_yy_5072771920(1.7280102870173992, 4.944406027707941) _gate_q_4, _gate_q_12;
  cy _gate_q_3, _gate_q_0;
  ry(1.5004205412609) _gate_q_7;
  sdg _gate_q_11;
  sdg _gate_q_9;
  rx(5.244908677270678) _gate_q_13;
  rxx_5072776192(4.284626940570796) _gate_q_1, _gate_q_6;
  tdg _gate_q_8;
  crx(1.0517278482492223) _gate_q_2, _gate_q_5;
  ry(1.012472002632452) _gate_q_10;
  ryy_5072766832(4.417364410091481) _gate_q_1, _gate_q_6;
  rzz_5072780800(5.21342537365221) _gate_q_9, _gate_q_7;
  rzx_5072780608(0.7711973009330225) _gate_q_4, _gate_q_3;
  cz _gate_q_13, _gate_q_5;
  p(3.482945071341717) _gate_q_0;
  rxx_5072765536(6.231191906519133) _gate_q_12, _gate_q_2;
  ryy_5072780848(5.82536445422594) _gate_q_11, _gate_q_8;
  ry(3.5397205039222372) _gate_q_10;
  u3(4.120558979746972, 4.493844573565843, 1.0831006486793664) _gate_q_6;
  sx _gate_q_2;
  U(2.8631094664564425, 1.3604149593479067, 0.10652183146309764) _gate_q_5;
  cy _gate_q_8, _gate_q_9;
  dcx _gate_q_4, _gate_q_3;
  crx(0.9937605845279923) _gate_q_7, _gate_q_0;
  cry(0.44024061484513377) _gate_q_1, _gate_q_11;
  dcx _gate_q_12, _gate_q_13;
  ry(4.190935398552223) _gate_q_10;
  cx _gate_q_4, _gate_q_12;
  rz(2.6074619418986464) _gate_q_9;
  y _gate_q_11;
  rxx_5074192768(4.136021206839817) _gate_q_10, _gate_q_13;
  cry(0.3414117768883191) _gate_q_7, _gate_q_6;
  rx(2.7570205275290283) _gate_q_0;
  p(3.6978699999268363) _gate_q_1;
  t _gate_q_3;
  U(4.904447327868441, 3.0625671254461353, 0.8652375142013474) _gate_q_8;
  rx(6.045037594997175) _gate_q_2;
  rx(4.853879821945378) _gate_q_5;
  sxdg _gate_q_7;
  rx(2.3223739139217243) _gate_q_11;
  id _gate_q_3;
  y _gate_q_4;
  ch _gate_q_8, _gate_q_6;
  cu1_5074193344(4.492739308085956) _gate_q_2, _gate_q_9;
  iswap _gate_q_12, _gate_q_10;
  rxx_5074202416(6.221799911152244) _gate_q_1, _gate_q_13;
  h _gate_q_5;
  sx _gate_q_0;
  z _gate_q_6;
  rzz_5074200880(3.6758197670060007) _gate_q_0, _gate_q_8;
  rz(2.8280324556212304) _gate_q_5;
  csdg _gate_q_1, _gate_q_9;
  iswap _gate_q_2, _gate_q_13;
  crz(3.9796115341051075) _gate_q_7, _gate_q_10;
  t _gate_q_4;
  dcx _gate_q_12, _gate_q_3;
  s _gate_q_11;
  h _gate_q_1;
  cu1_5074200832(5.090153056282803) _gate_q_11, _gate_q_0;
  h _gate_q_8;
  rzx_5074197568(5.767477815947406) _gate_q_12, _gate_q_9;
  y _gate_q_3;
  xx_plus_yy_5074191184(2.7463484041240993, 5.211088712921606) _gate_q_13, _gate_q_7;
  h _gate_q_6;
  csx _gate_q_10, _gate_q_5;
  rzx_5074191808(0.3319600816725137) _gate_q_4, _gate_q_2;
  rzz_5074203136(0.765380860878104) _gate_q_6, _gate_q_4;
  rzx_5074200976(5.507894027203741) _gate_q_1, _gate_q_9;
  dcx _gate_q_12, _gate_q_0;
  rz(4.600967043760207) _gate_q_11;
  p(4.282937454653293) _gate_q_8;
  u3(5.020978524943995, 2.613031089199947, 5.574819269363402) _gate_q_13;
  z _gate_q_10;
  z _gate_q_3;
  u3(2.6484571622603963, 2.2005283665586224, 1.9824981609694676) _gate_q_7;
  rx(2.438907774908286) _gate_q_5;
  u3(1.9689821645285166, 0.057284560663628935, 2.4010258454398383) _gate_q_2;
  sx _gate_q_9;
  cu(3.5517683588307642, 0.17678509768222284, 3.676233327984999, 0.7182051731265366) _gate_q_12, _gate_q_4;
  r_5074198048(5.730838868773918, 0.2644767466416698) _gate_q_8;
  rx(2.41893528995318) _gate_q_7;
  cx _gate_q_6, _gate_q_11;
  rzz_5074203280(1.3540355405767532) _gate_q_3, _gate_q_5;
  cp(5.488983154948982) _gate_q_13, _gate_q_1;
  u1(2.7343646404151793) _gate_q_2;
  cx _gate_q_0, _gate_q_10;
}