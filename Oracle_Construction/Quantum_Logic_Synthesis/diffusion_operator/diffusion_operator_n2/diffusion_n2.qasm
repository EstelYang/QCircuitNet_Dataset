OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";
gate Diffuser _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  x _gate_q_0;
  x _gate_q_1;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  x _gate_q_0;
  x _gate_q_1;
  h _gate_q_0;
  h _gate_q_1;
}
qubit[2] q;
Diffuser q[0], q[1];
