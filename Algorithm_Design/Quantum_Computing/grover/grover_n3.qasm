OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
gate Diffuser _gate_q_0, _gate_q_1, _gate_q_2 {
  h _gate_q_0;
  h _gate_q_1;
  h _gate_q_2;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  h _gate_q_2;
  ccx _gate_q_0, _gate_q_1, _gate_q_2;
  h _gate_q_2;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  h _gate_q_0;
  h _gate_q_1;
  h _gate_q_2;
}
bit[3] c;
qubit[3] q;
h q[0];
h q[1];
h q[2];
Oracle q[0], q[1], q[2];
Diffuser q[0], q[1], q[2];
Oracle q[0], q[1], q[2];
Diffuser q[0], q[1], q[2];
c[0] = measure q[0];
c[1] = measure q[1];
c[2] = measure q[2];
