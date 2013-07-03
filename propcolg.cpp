//Propogation and collision of g

#include "wet.h"

void wet::propcolg()
{
	double gforce0,gforce1,gforce2,gforce3,gforce4,gforce7,gforce8,gforce9,gforce10,gforce6;

  gforce0=-u[k][0]*(FgrMx*gammar0+FgMx*gamma0)-u[k][1]*(FgrMx*gammar0+FgMy*gamma0);
  gforce1=-u[k][0]*(FgrMx*gammar1+FgMx*gamma1)-u[k][1]*(FgrMx*gammar1+FgMy*gamma1)+FgM1*gamma1+FgrM1*gammar1;
  gforce2=-u[k][0]*(FgrMx*gammar2+FgMx*gamma2)-u[k][1]*(FgrMx*gammar2+FgMy*gamma2)+FgM2*gamma2+FgrM2*gammar2;
  gforce3=-u[k][0]*(FgrMx*gammar3+FgMx*gamma3)-u[k][1]*(FgrMx*gammar3+FgMy*gamma3)+FgM3*gamma3+FgrM3*gammar3;
  gforce4=-u[k][0]*(FgrMx*gammar4+FgMx*gamma4)-u[k][1]*(FgrMx*gammar4+FgMy*gamma4)+FgM4*gamma4+FgrM4*gammar4;
  gforce7=-u[k][0]*(FgrMx*gammar7+FgMx*gamma7)-u[k][1]*(FgrMx*gammar7+FgMy*gamma7)+FgM7*gamma7+FgrM7*gammar7;
  gforce8=-u[k][0]*(FgrMx*gammar8+FgMx*gamma8)-u[k][1]*(FgrMx*gammar8+FgMy*gamma8)+FgM8*gamma8+FgrM8*gammar8;
  gforce9=-u[k][0]*(FgrMx*gammar9+FgMx*gamma9)-u[k][1]*(FgrMx*gammar9+FgMy*gamma9)+FgM9*gamma9+FgrM9*gammar9;
  gforce10=-u[k][0]*(FgrMx*gammar10+FgMx*gamma10)-u[k][1]*(FgrMx*gammar10+FgMy*gamma10)+FgM10*gamma10+FgrM10*gammar10;
  
  if(gforce0>0.0000000001 or gforce1>0.0000000001 or gforce2>0.0000000001 or gforce3>0.0000000001 or gforce4>0.0000000001 or gforce6>0.0000000001 or gforce7>0.0000000001 or gforce8>0.0000000001 or gforce9>0.0000000001 or gforce10>0.0000000001 )
  {
  	//cout << "At t= "<< st << " k= " << k << " force is too large" << endl;
  }
  
  g[k][0]=g[k][0]-1.0/(tau[k]+0.5)*(g[k][0]-geq0)+gforce0;//-u[k][0]*FgMx*gamma0-u[k][1]*FgMy*gamma0+4.0/27.0*u[k][0]*gradrhoMx+4.0/27.0*u[k][1]*gradrhoMy;
  g[d[k][0]][1]=g[k][1]-1.0/(tau[k]+0.5)*(g[k][1]-geq1)+gforce1;//-u[k][0]*FgMx*gamma1-u[k][1]*FgMy*gamma1+1.0/27.0*u[k][0]*gradrhoMx+1.0/27.0*u[k][1]*gradrhoMy;
  // g[d[k][0]][1]+=FgM1*gamma1-1.0/27.0*gradrhoM1;
  g[d[k][1]][2]=g[k][2]-1.0/(tau[k]+0.5)*(g[k][2]-geq2)+gforce2;//-u[k][0]*FgMx*gamma2-u[k][1]*FgMy*gamma2+1.0/27.0*u[k][0]*gradrhoMx+1.0/27.0*u[k][1]*gradrhoMy;
   //g[d[k][1]][2]+=FgM2*gamma2-1.0/27.0*gradrhoM2;
  g[d[k][2]][3]=g[k][3]-1.0/(tau[k]+0.5)*(g[k][3]-geq3)+gforce3;//-u[k][0]*FgMx*gamma3-u[k][1]*FgMy*gamma3+1.0/27.0*u[k][0]*gradrhoMx+1.0/27.0*u[k][1]*gradrhoMy;
  //g[d[k][2]][3]+=FgM3*gamma3-1.0/27.0*gradrhoM3;
  g[d[k][3]][4]=g[k][4]-1.0/(tau[k]+0.5)*(g[k][4]-geq4)+gforce4;//-u[k][0]*FgMx*gamma4-u[k][1]*FgMy*gamma4+1.0/27.0*u[k][0]*gradrhoMx+1.0/27.0*u[k][1]*gradrhoMy;
   //g[d[k][3]][4]+=FgM4*gamma4-1.0/27.0*gradrhoM4;
    
  g[d[k][6]][7]=g[k][7]-1.0/(tau[k]+0.5)*(g[k][7]-geq7)+gforce7;//-u[k][0]*FgMx*gamma7-u[k][1]*FgMy*gamma7+1.0/108.0*u[k][0]*gradrhoMx+1.0/108.0*u[k][1]*gradrhoMy;
   //g[d[k][6]][7]+=FgM7*gamma7-1.0/108.0*gradrhoM7;
  g[d[k][7]][8]=g[k][8]-1.0/(tau[k]+0.5)*(g[k][8]-geq8)+gforce8;//-u[k][0]*FgMx*gamma8-u[k][1]*FgMy*gamma8+1.0/108.0*u[k][0]*gradrhoMx+1.0/108.0*u[k][1]*gradrhoMy;
   //g[d[k][7]][8]+=FgM8*gamma8-1.0/108.0*gradrhoM8;
  g[d[k][8]][9]=g[k][9]-1.0/(tau[k]+0.5)*(g[k][9]-geq9)+gforce9;//-u[k][0]*FgMx*gamma9-u[k][1]*FgMy*gamma9+1.0/108.0*u[k][0]*gradrhoMx+1.0/108.0*u[k][1]*gradrhoMy;
   //g[d[k][8]][9]+=FgM9*gamma9-1.0/108.0*gradrhoM9;
  g[d[k][9]][10]=g[k][10]-1.0/(tau[k]+0.5)*(g[k][10]-geq10)+gforce10;//-u[k][0]*FgMx*gamma10-u[k][1]*FgMy*gamma10+1.0/108.0*u[k][0]*gradrhoMx+1.0/108.0*u[k][1]*gradrhoMy;
   //g[d[k][9]][10]+=FgM10*gamma10-1.0/108.0*gradrhoM10;



}
