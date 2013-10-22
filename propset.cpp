
#include "wet.h"

void wet ::propset()
{
/*
gamma0 = 4.0/9.0 * (1.0 - 1.5*(ux[k]*ux[k] + uy[k]*uy[k]));
  
  gamma1 = 1.0/9.0 * (1.0 + 3.0*ux[k] + 3.0*ux[k]*ux[k] - 1.5*uy[k]*uy[k]);
  
  gamma3 = 1.0/9.0*(1.0+3.0*uy[k]+3.0*uy[k]*uy[k]-1.5*ux[k]*ux[k]);
  
  gamma2 = 1.0/9.0*(1.0-3.0*ux[k]+3.0*ux[k]*ux[k]-1.5*uy[k]*uy[k]);
  
  gamma4 = 1.0/9.0*(1.0-3.0*uy[k]+3.0*uy[k]*uy[k]-1.5*ux[k]*ux[k]);
  
  gamma7 = 1.0/36.0*(1.0+3.0*(ux[k]+uy[k]+ux[k]*ux[k]+uy[k]*uy[k])+9.0*ux[k]*uy[k]);
  
  gamma8 = 1.0/36.0*(1.0+3.0*(-ux[k]+uy[k]+ux[k]*ux[k]+uy[k]*uy[k])-9.0*ux[k]*uy[k]);
  
  gamma10 = 1.0/36.0*(1.0+3.0*(-ux[k]-uy[k]+ux[k]*ux[k]+uy[k]*uy[k])+9.0*ux[k]*uy[k]);
  
  gamma9 = 1.0/36.0*(1.0+3.0*(ux[k]-uy[k]+ux[k]*ux[k]+uy[k]*uy[k])-9.0*ux[k]*uy[k]);

M0=M*(muh[d[k][6]]+muh[d[k][7]]+muh[d[k][8]]+muh[d[k][9]]+4.0*muh[d[k][0]]
		+4.0*muh[d[k][1]]+4.0*muh[d[k][2]]+4.0*muh[d[k][3]]-20.0*muh[k])/(6.0*dt*dt);
		
*/		

h0[k]=hc0[k];//+dt*0.5*M0*gamma0;
h1[k]=hc1[d[k][1]];//+dt*0.5*M0*gamma1;
h2[k]=hc2[d[k][0]];//+dt*0.5*M0*gamma2;
h3[k]=hc3[d[k][3]];//+dt*0.5*M0*gamma3;
h4[k]=hc4[d[k][2]];//+dt*0.5*M0*gamma4;
h5[k]=hc5[d[k][5]];//+dt*0.5*M0*gamma5;
h6[k]=hc6[d[k][4]];//+dt*0.5*M0*gamma6;
h7[k]=hc7[d[k][9]];//+dt*0.5*M0*gamma7;
h8[k]=hc8[d[k][8]];//+dt*0.5*M0*gamma8;
h9[k]=hc9[d[k][7]];//+dt*0.5*M0*gamma9;
h10[k]=hc10[d[k][6]];//+dt*0.5*M0*gamma10;
h11[k]=hc11[d[k][13]];//+dt*0.5*M0*gamma11;
h12[k]=hc12[d[k][12]];//+dt*0.5*M0*gamma12;
h13[k]=hc13[d[k][11]];//+dt*0.5*M0*gamma13;
h14[k]=hc14[d[k][10]];//+dt*0.5*M0*gamma14;
h15[k]=hc15[d[k][17]];//+dt*0.5*M0*gamma15;
h16[k]=hc16[d[k][16]];//+dt*0.5*M0*gamma16;
h17[k]=hc17[d[k][15]];//+dt*0.5*M0*gamma17;
h18[k]=hc18[d[k][14]];//+dt*0.5*M0*gamma18;

g0[k]=gc0[k];
g1[k]=gc1[d[k][1]];
g2[k]=gc2[d[k][0]];
g3[k]=gc3[d[k][3]];
g4[k]=gc4[d[k][2]];
g5[k]=gc5[d[k][5]];
g6[k]=gc6[d[k][4]];
g7[k]=gc7[d[k][9]];
g8[k]=gc8[d[k][8]];
g9[k]=gc9[d[k][7]];
g10[k]=gc10[d[k][6]];
g11[k]=gc11[d[k][13]];
g12[k]=gc12[d[k][12]];
g13[k]=gc13[d[k][11]];
g14[k]=gc14[d[k][10]];
g15[k]=gc15[d[k][17]];
g16[k]=gc16[d[k][16]];
g17[k]=gc17[d[k][15]];
g18[k]=gc18[d[k][14]];

}