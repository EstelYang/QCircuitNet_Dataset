OPENQASM 3;
include "stdgates.inc";
gate GH _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  u3(0.8446094769634604, 1.0931380177326417, 1.9018689446176733) _gate_q_0;
  u3(2.2365773771021673, 2.023130263883841, -1.2792015976528854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(pi/4, -pi/2, pi/2) _gate_q_0;
  u3(1.5836029225145771, -3.075244764179975, -0.19039870281993654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.12325292775189554, -pi, -pi/2) _gate_q_0;
  u3(1.5033799780254342, -0.004569261441113692, 1.6385211889720477) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8446094769634594, -1.2397237089721198, -2.048454635857152) _gate_q_0;
  u3(1.1725811204553798, -3.0897732390897534, 0.7664309782574037) _gate_q_1;
  u3(0.8446094769634604, 1.0931380177326417, 1.9018689446176733) _gate_q_2;
  u3(2.2365773771021673, 2.023130263883841, -1.2792015976528854) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  u3(pi/4, -pi/2, pi/2) _gate_q_2;
  u3(1.5836029225145771, -3.075244764179975, -0.19039870281993654) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  u3(0.12325292775189554, -pi, -pi/2) _gate_q_2;
  u3(1.5033799780254342, -0.004569261441113692, 1.6385211889720477) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  u3(0.8446094769634594, -1.2397237089721198, -2.048454635857152) _gate_q_2;
  u3(1.1725811204553798, -3.0897732390897534, 0.7664309782574037) _gate_q_3;
  u3(0.8446094769634604, 1.0931380177326417, 1.9018689446176733) _gate_q_4;
  u3(2.2365773771021673, 2.023130263883841, -1.2792015976528854) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  u3(pi/4, -pi/2, pi/2) _gate_q_4;
  u3(1.5836029225145771, -3.075244764179975, -0.19039870281993654) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  u3(0.12325292775189554, -pi, -pi/2) _gate_q_4;
  u3(1.5033799780254342, -0.004569261441113692, 1.6385211889720477) _gate_q_5;
  cx _gate_q_4, _gate_q_5;
  u3(0.8446094769634594, -1.2397237089721198, -2.048454635857152) _gate_q_4;
  u3(1.1725811204553798, -3.0897732390897534, 0.7664309782574037) _gate_q_5;
  u3(0.8446094769634604, 1.0931380177326417, 1.9018689446176733) _gate_q_6;
  u3(2.2365773771021673, 2.023130263883841, -1.2792015976528854) _gate_q_7;
  cx _gate_q_6, _gate_q_7;
  u3(pi/4, -pi/2, pi/2) _gate_q_6;
  u3(1.5836029225145771, -3.075244764179975, -0.19039870281993654) _gate_q_7;
  cx _gate_q_6, _gate_q_7;
  u3(0.12325292775189554, -pi, -pi/2) _gate_q_6;
  u3(1.5033799780254342, -0.004569261441113692, 1.6385211889720477) _gate_q_7;
  cx _gate_q_6, _gate_q_7;
  u3(0.8446094769634594, -1.2397237089721198, -2.048454635857152) _gate_q_6;
  u3(1.1725811204553798, -3.0897732390897534, 0.7664309782574037) _gate_q_7;
}


include "oracle.inc";
bit[8] c;
qubit[13] q;
GH q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12];
inv @ GH q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
c[0] = measure q[0];
c[1] = measure q[1];
c[2] = measure q[2];
c[3] = measure q[3];
c[4] = measure q[4];
c[5] = measure q[5];
c[6] = measure q[6];
c[7] = measure q[7];