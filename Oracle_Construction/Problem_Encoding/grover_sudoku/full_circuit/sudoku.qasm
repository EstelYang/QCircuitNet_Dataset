OPENQASM 3.0;
include "stdgates.inc";
gate XOR _gate_q_0, _gate_q_1, _gate_q_2 {
  cx _gate_q_0, _gate_q_2;
  cx _gate_q_1, _gate_q_2;
}
gate XOR_4769655712 _gate_q_0, _gate_q_1, _gate_q_2 {
  cx _gate_q_0, _gate_q_2;
  cx _gate_q_1, _gate_q_2;
}
gate XOR_4769656096 _gate_q_0, _gate_q_1, _gate_q_2 {
  cx _gate_q_0, _gate_q_2;
  cx _gate_q_1, _gate_q_2;
}
gate XOR_4769656432 _gate_q_0, _gate_q_1, _gate_q_2 {
  cx _gate_q_0, _gate_q_2;
  cx _gate_q_1, _gate_q_2;
}
gate cu1_4769478608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate rcccx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  u2(0, pi) _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  u2(0, pi) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  u2(0, pi) _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  u2(0, pi) _gate_q_3;
}
gate cu1_4769472992(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
}
gate rcccx_dg _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  u2(-2*pi, pi) _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  u2(-2*pi, pi) _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  u2(-2*pi, pi) _gate_q_3;
  u1(pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  u1(-pi/4) _gate_q_3;
  u2(-2*pi, pi) _gate_q_3;
}
gate cu1_4347235840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
}
gate cu1_4378568144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
}
gate cu1_4360641408(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
}
gate cu1_4378570016(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
}
gate cu1_4378569632(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
}
gate cu1_4378806560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
}
gate cu1_4378806656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/16) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/16) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/16) _gate_q_1;
}
gate c3sx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  h _gate_q_3;
  cu1_4347235840(pi/8) _gate_q_0, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_3;
  cu1_4378568144(-pi/8) _gate_q_1, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_3;
  cu1_4360641408(pi/8) _gate_q_1, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_1, _gate_q_2;
  h _gate_q_3;
  cu1_4378570016(-pi/8) _gate_q_2, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_0, _gate_q_2;
  h _gate_q_3;
  cu1_4378569632(pi/8) _gate_q_2, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_1, _gate_q_2;
  h _gate_q_3;
  cu1_4378806560(-pi/8) _gate_q_2, _gate_q_3;
  h _gate_q_3;
  cx _gate_q_0, _gate_q_2;
  h _gate_q_3;
  cu1_4378806656(pi/8) _gate_q_2, _gate_q_3;
  h _gate_q_3;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  h _gate_q_4;
  cu1_4769478608(pi/2) _gate_q_3, _gate_q_4;
  h _gate_q_4;
  rcccx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  h _gate_q_4;
  cu1_4769472992(-pi/2) _gate_q_3, _gate_q_4;
  h _gate_q_4;
  rcccx_dg _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  c3sx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_4;
}
gate XOR_4769656576 _gate_q_0, _gate_q_1, _gate_q_2 {
  cx _gate_q_0, _gate_q_2;
  cx _gate_q_1, _gate_q_2;
}
gate XOR_4769657152 _gate_q_0, _gate_q_1, _gate_q_2 {
  cx _gate_q_0, _gate_q_2;
  cx _gate_q_1, _gate_q_2;
}
gate XOR_4769657488 _gate_q_0, _gate_q_1, _gate_q_2 {
  cx _gate_q_0, _gate_q_2;
  cx _gate_q_1, _gate_q_2;
}
gate XOR_4769657824 _gate_q_0, _gate_q_1, _gate_q_2 {
  cx _gate_q_0, _gate_q_2;
  cx _gate_q_1, _gate_q_2;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  XOR _gate_q_0, _gate_q_1, _gate_q_4;
  XOR_4769655712 _gate_q_0, _gate_q_2, _gate_q_5;
  XOR_4769656096 _gate_q_1, _gate_q_3, _gate_q_6;
  XOR_4769656432 _gate_q_2, _gate_q_3, _gate_q_7;
  mcx _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8;
  XOR_4769656576 _gate_q_0, _gate_q_1, _gate_q_4;
  XOR_4769657152 _gate_q_0, _gate_q_2, _gate_q_5;
  XOR_4769657488 _gate_q_1, _gate_q_3, _gate_q_6;
  XOR_4769657824 _gate_q_2, _gate_q_3, _gate_q_7;
}
qubit[9] q;
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8];
