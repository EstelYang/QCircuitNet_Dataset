gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105510944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0650943134578261) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6011593061316036) _gate_q_0;
  ry(-1.6011593061316036) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0650943134578261) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5105513488(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0489593136080027) _gate_q_0;
  u1(-2.090107398209992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.765129531446408, 0, -3.0489593136080027) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.765129531446408, 5.1390667118179945, 0) _gate_q_1;
}
gate rzx_5105501200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.256135278115557) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105506720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.979907338307928) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  t _gate_q_1;
  xx_minus_yy_5105510944(3.2023186122632072, 1.0650943134578261) _gate_q_4, _gate_q_3;
  tdg _gate_q_0;
  u1(4.886579718441885) _gate_q_2;
  dcx _gate_q_1, _gate_q_3;
  cu3_5105513488(5.530259062892816, 5.1390667118179945, 0.9588519153980112) _gate_q_4, _gate_q_0;
  u2(3.8506251495060773, 0.636446639908829) _gate_q_2;
  cz _gate_q_1, _gate_q_0;
  ch _gate_q_4, _gate_q_2;
  rx(2.732802684155182) _gate_q_3;
  ch _gate_q_1, _gate_q_4;
  cry(4.48400236486852) _gate_q_3, _gate_q_2;
  z _gate_q_0;
  rzx_5105501200(4.256135278115557) _gate_q_1, _gate_q_4;
  rxx_5105506720(5.979907338307928) _gate_q_2, _gate_q_0;
  x _gate_q_3;
}
gate xx_minus_yy_5105515648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7053891595441537) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.508555515883778) _gate_q_0;
  ry(-2.508555515883778) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7053891595441537) _gate_q_1;
}
gate xx_plus_yy_5105505184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.25386946501174107) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5037265101776344) _gate_q_1;
  ry(-0.5037265101776344) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.25386946501174107) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  cz _gate_q_1, _gate_q_0;
  dcx _gate_q_3, _gate_q_4;
  s _gate_q_2;
  sx _gate_q_3;
  cx _gate_q_2, _gate_q_4;
  id _gate_q_1;
  p(4.8538764209429095) _gate_q_0;
  ry(4.80689434093776) _gate_q_3;
  u1(3.7635376066829913) _gate_q_2;
  sxdg _gate_q_1;
  z _gate_q_4;
  h _gate_q_0;
  xx_minus_yy_5105515648(5.017111031767556, 3.7053891595441537) _gate_q_4, _gate_q_3;
  u3(5.750193771587987, 4.834159418351352, 5.019251475330165) _gate_q_0;
  s _gate_q_2;
  s _gate_q_1;
  swap _gate_q_4, _gate_q_0;
  xx_plus_yy_5105505184(1.0074530203552687, 0.25386946501174107) _gate_q_3, _gate_q_1;
  tdg _gate_q_2;
}