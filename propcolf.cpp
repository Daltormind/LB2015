
#include "wet.h"

void wet::propcolf()
{
	f[k][0]=f[k][0]-1.0/(tau[k]+0.5)*(f[k][0]-feq0)-ux[k]*FfMx*gamma0-uy[k]*FfMy*gamma0;
	f[d[0]][1]=f[k][1]-1.0/(tau[k]+0.5)*(f[k][1]-feq1)-ux[k]*FfMx*gamma1-uy[k]*FfMy*gamma1+FfM1*gamma1;
    f[d[1]][2]=f[k][2]-1.0/(tau[k]+0.5)*(f[k][2]-feq2)-ux[k]*FfMx*gamma2-uy[k]*FfMy*gamma2+FfM2*gamma2;
    f[d[2]][3]=f[k][3]-1.0/(tau[k]+0.5)*(f[k][3]-feq3)-ux[k]*FfMx*gamma3-uy[k]*FfMy*gamma3+FfM3*gamma3;
    f[d[3]][4]=f[k][4]-1.0/(tau[k]+0.5)*(f[k][4]-feq4)-ux[k]*FfMx*gamma4-uy[k]*FfMy*gamma4+FfM4*gamma4;
    f[d[6]][7]=f[k][7]-1.0/(tau[k]+0.5)*(f[k][7]-feq7)-ux[k]*FfMx*gamma7-uy[k]*FfMy*gamma7+FfM7*gamma7;
    f[d[7]][8]=f[k][8]-1.0/(tau[k]+0.5)*(f[k][8]-feq8)-ux[k]*FfMx*gamma8-uy[k]*FfMy*gamma8+FfM8*gamma8;
    f[d[8]][9]=f[k][9]-1.0/(tau[k]+0.5)*(f[k][9]-feq9)-ux[k]*FfMx*gamma9-uy[k]*FfMy*gamma9+FfM9*gamma9;
    f[d[9]][10]=f[k][10]-1.0/(tau[k]+0.5)*(f[k][10]-feq10)-ux[k]*FfMx*gamma10-uy[k]*FfMy*gamma10+FfM10*gamma10;




}