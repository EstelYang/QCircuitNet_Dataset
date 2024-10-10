gate r_5105279504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.2425718834552075, -1.4383524358154613, 1.4383524358154613) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzx_5105279600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5361500276929175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  r_5105279504(4.2425718834552075, 0.13244389097943524) _gate_q_1;
  sx _gate_q_2;
  sxdg _gate_q_0;
  rzx_5105279600(0.5361500276929175) _gate_q_1, _gate_q_0;
  rx(1.7993573505693505) _gate_q_2;
  cs _gate_q_1, _gate_q_0;
  ry(0.433559002514534) _gate_q_2;
}
gate cu1_5105271584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3877784245984537) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3877784245984537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3877784245984537) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  x _gate_q_0;
  cu1_5105271584(4.775556849196907) _gate_q_2, _gate_q_1;
  sdg _gate_q_0;
  cry(3.520607524946663) _gate_q_1, _gate_q_2;
  rz(5.218199387932596) _gate_q_0;
  cu(5.792061635425184, 4.932370247881669, 3.4037767292889254, 2.4113255135275717) _gate_q_1, _gate_q_2;
}