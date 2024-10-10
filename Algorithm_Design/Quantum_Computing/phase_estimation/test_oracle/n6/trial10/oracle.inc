gate Psi _gate_q_0 {
  x _gate_q_0;
}
gate CU_0 _gate_q_0, _gate_q_1 {
  p(1.354110975795472) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-1.354110975795472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(1.354110975795472) _gate_q_1;
}