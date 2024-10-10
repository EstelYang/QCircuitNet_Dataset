gate rxx_5070591408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.081565432277309) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2 {
  rxx_5070591408(6.081565432277309) _gate_q_2, _gate_q_1;
  z _gate_q_0;
  id _gate_q_0;
  u1(6.223779937429351) _gate_q_2;
  tdg _gate_q_1;
  rx(1.5656498082079675) _gate_q_2;
  h _gate_q_0;
  sxdg _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2 {
  crx(1.5473863604120583) _gate_q_0, _gate_q_1;
  y _gate_q_2;
  cy _gate_q_1, _gate_q_0;
  y _gate_q_2;
  h _gate_q_2;
  cx _gate_q_1, _gate_q_0;
}