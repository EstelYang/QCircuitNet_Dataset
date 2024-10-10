OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
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
bit[2] c;
qubit[2] q;
h q[0];
h q[1];
Oracle q[0], q[1];
Diffuser q[0], q[1];
c[0] = measure q[0];
c[1] = measure q[1];
