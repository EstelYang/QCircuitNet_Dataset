OPENQASM 3;
include "stdgates.inc";
gate cu_1(_gate_p_0) _gate_q_0, _gate_q_1 {u1(pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;}
gate cu_2(_gate_p_0) _gate_q_0, _gate_q_1 {u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;}
gate cu_3(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {cu_1(pi/32) _gate_q_5, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu_2(-pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu_1(pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu_2(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu_1(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu_2(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu_1(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu_2(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu_1(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu_2(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu_1(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu_2(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu_1(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu_2(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu_1(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu_2(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu_1(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu_2(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu_1(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu_2(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu_1(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu_2(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu_1(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu_2(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu_1(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu_2(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu_1(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu_2(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu_1(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu_2(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu_1(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu_2(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu_1(pi/32) _gate_q_0, _gate_q_6;}
gate mcx_gray _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  h _gate_q_6;
  cu_3(pi) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  h _gate_q_6;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  mcx_gray _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
}
gate mcx_o4 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
}
gate mcx_o5 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
}
gate mcx_o6 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_3;
  x _gate_q_4;
  x _gate_q_5;
}
gate mcx_o8 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
  x _gate_q_5;
}
gate mcx_o9 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
  x _gate_q_5;
}
gate mcx_o10 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_2;
  x _gate_q_4;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_2;
  x _gate_q_4;
  x _gate_q_5;
}
gate mcx_o16 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_5;
}
gate mcx_o17 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_5;
}
gate mcx_o18 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_5;
}
gate mcx_o20 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_5;
}
gate mcx_o21 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_5;
}
gate mcx_o22 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_3;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_3;
  x _gate_q_5;
}
gate mcx_o24 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_5;
}
gate mcx_o25 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_5;
}
gate mcx_o26 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_2;
  x _gate_q_5;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_2;
  x _gate_q_5;
}
gate mcx_o32 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_4;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_4;
}
gate mcx_o33 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_4;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_4;
}
gate mcx_o34 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_4;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_2;
  x _gate_q_3;
  x _gate_q_4;
}
gate mcx_o36 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_4;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_4;
}
gate mcx_o37 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_4;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_4;
}
gate mcx_o38 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_3;
  x _gate_q_4;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_3;
  x _gate_q_4;
}
gate mcx_o40 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
}
gate mcx_o41 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_4;
}
gate mcx_o42 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_0;
  x _gate_q_2;
  x _gate_q_4;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_0;
  x _gate_q_2;
  x _gate_q_4;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  mcx_o4 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o5 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o6 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o8 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o9 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o10 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o16 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o16 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o17 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o17 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o18 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o18 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o20 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o21 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o22 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o24 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o24 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o25 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o25 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o26 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o26 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o32 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o32 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o33 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o33 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o34 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o34 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o36 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o36 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o36 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o37 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o37 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o37 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o38 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_7;
  mcx_o38 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_8;
  mcx_o38 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_9;
  mcx_o40 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  mcx_o41 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  mcx_o42 _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
}
qubit[11] q;
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9];