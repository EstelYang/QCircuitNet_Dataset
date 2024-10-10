gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5105151408(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.1965586251516664, 4.134781128258557, -4.134781128258557) _gate_q_0;
}
gate xx_plus_yy_5105151648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3412827516002912) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4626547784610409) _gate_q_1;
  ry(-1.4626547784610409) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3412827516002912) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  crx(3.1487297407043084) _gate_q_2, _gate_q_1;
  sxdg _gate_q_0;
  cu(3.45552909622172, 3.873847910451651, 1.556152941745599, 3.3924136468630004) _gate_q_1, _gate_q_2;
  r_5105151408(2.1965586251516664, 5.7055774550534535) _gate_q_0;
  sxdg _gate_q_2;
  xx_plus_yy_5105151648(2.9253095569220817, 1.3412827516002912) _gate_q_1, _gate_q_0;
}
gate r_5105142432(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3128439908010237, 4.301906167678672, -4.301906167678672) _gate_q_0;
}
gate rxx_5105142960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0887028581461269) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  sx _gate_q_1;
  u1(6.189409412633208) _gate_q_2;
  r_5105142432(1.3128439908010237, 5.872702494473568) _gate_q_0;
  rxx_5105142960(1.0887028581461269) _gate_q_1, _gate_q_0;
  sdg _gate_q_2;
  rz(0.8408333230994667) _gate_q_1;
  p(2.5436340039001943) _gate_q_2;
  s _gate_q_0;
}