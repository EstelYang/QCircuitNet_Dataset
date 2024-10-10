OPENQASM 3.0;
include "stdgates.inc";
bit[25] c;
qubit[25] q;
x q[24];
ry(-1.3694384060045657) q[23];
cz q[24], q[23];
ry(1.3694384060045657) q[23];
ry(-1.3652273956337226) q[22];
cz q[23], q[22];
ry(1.3652273956337226) q[22];
ry(-1.3607405877236576) q[21];
cz q[22], q[21];
ry(1.3607405877236576) q[21];
ry(-1.3559464937191843) q[20];
cz q[21], q[20];
ry(1.3559464937191843) q[20];
ry(-1.3508083493994372) q[19];
cz q[20], q[19];
ry(1.3508083493994372) q[19];
ry(-1.3452829208967654) q[18];
cz q[19], q[18];
ry(1.3452829208967654) q[18];
ry(-1.3393189628247182) q[17];
cz q[18], q[17];
ry(1.3393189628247182) q[17];
ry(-1.3328552019646882) q[16];
cz q[17], q[16];
ry(1.3328552019646882) q[16];
ry(-1.3258176636680323) q[15];
cz q[16], q[15];
ry(1.3258176636680323) q[15];
ry(-1.318116071652818) q[14];
cz q[15], q[14];
ry(1.318116071652818) q[14];
ry(-1.3096389158918722) q[13];
cz q[14], q[13];
ry(1.3096389158918722) q[13];
ry(-1.3002465638163236) q[12];
cz q[13], q[12];
ry(1.3002465638163236) q[12];
ry(-1.2897614252920828) q[11];
cz q[12], q[11];
ry(1.2897614252920828) q[11];
ry(-1.277953555066321) q[10];
cz q[11], q[10];
ry(1.277953555066321) q[10];
ry(-1.2645189576252271) q[9];
cz q[10], q[9];
ry(1.2645189576252271) q[9];
ry(-1.2490457723982544) q[8];
cz q[9], q[8];
ry(1.2490457723982544) q[8];
ry(-1.2309594173407747) q[7];
cz q[8], q[7];
ry(1.2309594173407747) q[7];
ry(-1.2094292028881888) q[6];
cz q[7], q[6];
ry(1.2094292028881888) q[6];
ry(-1.183199640139716) q[5];
cz q[6], q[5];
ry(1.183199640139716) q[5];
ry(-1.1502619915109316) q[4];
cz q[5], q[4];
ry(1.1502619915109316) q[4];
ry(-1.1071487177940904) q[3];
cz q[4], q[3];
ry(1.1071487177940904) q[3];
ry(-pi/3) q[2];
cz q[3], q[2];
ry(pi/3) q[2];
ry(-0.9553166181245093) q[1];
cz q[2], q[1];
ry(0.9553166181245093) q[1];
ry(-pi/4) q[0];
cz q[1], q[0];
ry(pi/4) q[0];
cx q[23], q[24];
cx q[22], q[23];
cx q[21], q[22];
cx q[20], q[21];
cx q[19], q[20];
cx q[18], q[19];
cx q[17], q[18];
cx q[16], q[17];
cx q[15], q[16];
cx q[14], q[15];
cx q[13], q[14];
cx q[12], q[13];
cx q[11], q[12];
cx q[10], q[11];
cx q[9], q[10];
cx q[8], q[9];
cx q[7], q[8];
cx q[6], q[7];
cx q[5], q[6];
cx q[4], q[5];
cx q[3], q[4];
cx q[2], q[3];
cx q[1], q[2];
cx q[0], q[1];
