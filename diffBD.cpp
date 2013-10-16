//Computes biased differences

#include "wet.h"

void wet::diffBD()
{
	
	
	
	
	
	//2D differentials
	gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
	
	gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;

	gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    
    gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    
    //3D differentials
    gradrhoU5=0.5*(-rho[d[d[k][4]][4]]+4*rho[d[k][4]]-3*rho[k])/dt;
    gradrhoU6=0.5*(-rho[d[d[k][5]][5]]+4*rho[d[k][5]]-3*rho[k])/dt;
    gradrhoU11=0.5*(-rho[d[d[k][10]][10]]+4*rho[d[k][10]]-3*rho[k])/dt;
    gradrhoU12=0.5*(-rho[d[d[k][11]][11]]+4*rho[d[k][11]]-3*rho[k])/dt;
    gradrhoU13=0.5*(-rho[d[d[k][12]][12]]+4*rho[d[k][12]]-3*rho[k])/dt;
    gradrhoU14=0.5*(-rho[d[d[k][13]][13]]+4*rho[d[k][13]]-3*rho[k])/dt;
    gradrhoU15=0.5*(-rho[d[d[k][14]][14]]+4*rho[d[k][14]]-3*rho[k])/dt;
    gradrhoU16=0.5*(-rho[d[d[k][15]][15]]+4*rho[d[k][15]]-3*rho[k])/dt;
    gradrhoU17=0.5*(-rho[d[d[k][16]][16]]+4*rho[d[k][16]]-3*rho[k])/dt;
    gradrhoU18=0.5*(-rho[d[d[k][17]][17]]+4*rho[d[k][17]]-3*rho[k])/dt;
    
    gradCU5=0.5*(-C[d[d[k][4]][4]]+4*C[d[k][4]]-3*C[k])/dt;
    gradCU6=0.5*(-C[d[d[k][5]][5]]+4*C[d[k][5]]-3*C[k])/dt;
    gradCU11=0.5*(-C[d[d[k][10]][10]]+4*C[d[k][10]]-3*C[k])/dt;
    gradCU12=0.5*(-C[d[d[k][11]][11]]+4*C[d[k][11]]-3*C[k])/dt;
    gradCU13=0.5*(-C[d[d[k][12]][12]]+4*C[d[k][12]]-3*C[k])/dt;
    gradCU14=0.5*(-C[d[d[k][13]][13]]+4*C[d[k][13]]-3*C[k])/dt;
    gradCU15=0.5*(-C[d[d[k][14]][14]]+4*C[d[k][14]]-3*C[k])/dt;
    gradCU16=0.5*(-C[d[d[k][15]][15]]+4*C[d[k][15]]-3*C[k])/dt;
    gradCU17=0.5*(-C[d[d[k][16]][16]]+4*C[d[k][16]]-3*C[k])/dt;
    gradCU18=0.5*(-C[d[d[k][17]][17]]+4*C[d[k][17]]-3*C[k])/dt;
    
    gradmuU5=0.5*(-mu[d[d[k][4]][4]]+4*mu[d[k][4]]-3*mu[k])/dt;
    gradmuU6=0.5*(-mu[d[d[k][5]][5]]+4*mu[d[k][5]]-3*mu[k])/dt;
    gradmuU11=0.5*(-mu[d[d[k][10]][10]]+4*mu[d[k][10]]-3*mu[k])/dt;
    gradmuU12=0.5*(-mu[d[d[k][11]][11]]+4*mu[d[k][11]]-3*mu[k])/dt;
    gradmuU13=0.5*(-mu[d[d[k][12]][12]]+4*mu[d[k][12]]-3*mu[k])/dt;
    gradmuU14=0.5*(-mu[d[d[k][13]][13]]+4*mu[d[k][13]]-3*mu[k])/dt;
    gradmuU15=0.5*(-mu[d[d[k][14]][14]]+4*mu[d[k][14]]-3*mu[k])/dt;
    gradmuU16=0.5*(-mu[d[d[k][15]][15]]+4*mu[d[k][15]]-3*mu[k])/dt;
    gradmuU17=0.5*(-mu[d[d[k][16]][16]]+4*mu[d[k][16]]-3*mu[k])/dt;
    gradmuU18=0.5*(-mu[d[d[k][17]][17]]+4*mu[d[k][17]]-3*mu[k])/dt;
    
    gradpU5=0.5*(-p[d[d[k][4]][4]]+4*p[d[k][4]]-3*p[k])/dt;
    gradpU6=0.5*(-p[d[d[k][5]][5]]+4*p[d[k][5]]-3*p[k])/dt;
    gradpU11=0.5*(-p[d[d[k][10]][10]]+4*p[d[k][10]]-3*p[k])/dt;
    gradpU12=0.5*(-p[d[d[k][11]][11]]+4*p[d[k][11]]-3*p[k])/dt;
    gradpU13=0.5*(-p[d[d[k][12]][12]]+4*p[d[k][12]]-3*p[k])/dt;
    gradpU14=0.5*(-p[d[d[k][13]][13]]+4*p[d[k][13]]-3*p[k])/dt;
    gradpU15=0.5*(-p[d[d[k][14]][14]]+4*p[d[k][14]]-3*p[k])/dt;
    gradpU16=0.5*(-p[d[d[k][15]][15]]+4*p[d[k][15]]-3*p[k])/dt;
    gradpU17=0.5*(-p[d[d[k][16]][16]]+4*p[d[k][16]]-3*p[k])/dt;
    gradpU18=0.5*(-p[d[d[k][17]][17]]+4*p[d[k][17]]-3*p[k])/dt;
    
    
    
    
	 if(mask[k]==1)
    {
    	if(mask[d[k][0]]==28)
    	{gradrhoU1=gradrhoU2;gradCU1=gradCU2;gradmuU1=gradmuU2;gradpU1=gradpU2;}
    	
    	if(mask[d[k][1]]==28)
    	{gradrhoU2=gradrhoU1;gradCU2=gradCU1;gradmuU1=gradmuU1;gradpU2=gradpU1;}
    	
    	if(mask[d[k][2]]==28)
    	{gradrhoU3=gradrhoU4;gradCU3=gradCU4;gradmuU3=gradmuU4;gradpU3=gradpU4;}
    	
    	if(mask[d[k][3]]==28)
    	{gradrhoU4=gradrhoU3;gradCU4=gradCU3;gradmuU4=gradmuU3;gradpU4=gradpU3;}
    	
    	if(mask[d[k][4]]==28)
    	{gradrhoU5=gradrhoU6;gradCU5=gradCU6;gradmuU5=gradmuU6;gradpU5=gradpU6;}
    	
    	if(mask[d[k][5]]==28)
    	{gradrhoU6=gradrhoU5;gradCU6=gradCU5;gradmuU6=gradmuU5;gradpU6=gradpU5;}
    	
    	if(mask[d[k][6]]==28)
    	{gradrhoU7=gradrhoU10;gradCU7=gradCU10;gradmuU7=gradmuU10;gradpU7=gradpU10;}
    	
    	if(mask[d[k][7]]==28 || mask[d[d[k][7]][7]]==2)
    	{gradrhoU8=gradrhoU9;gradCU8=gradCU9;gradmuU8=gradmuU9;gradpU8=gradpU9;}
    	
    	if(mask[d[k][8]]==28 || mask[d[d[k][8]][8]]==2)
    	{gradrhoU9=gradrhoU8;gradCU9=gradCU8;gradmuU9=gradmuU8;gradpU9=gradpU8;}
    	
    	if(mask[d[k][9]]==28 || mask[d[d[k][9]][9]]==2)
    	{gradrhoU10=gradrhoU7;gradCU10=gradCU7;gradmuU10=gradmuU7;gradpU10=gradpU7;}
    	
    	if(mask[d[k][10]]==28 || mask[d[d[k][10]][10]]==2)
    	{gradrhoU11=gradrhoU14;gradCU11=gradCU14;gradmuU11=gradmuU14;gradpU11=gradpU14;}
    	
    	if(mask[d[k][11]]==28 || mask[d[d[k][11]][11]]==2)
    	{gradrhoU12=gradrhoU13;gradCU12=gradCU13;gradmuU12=gradmuU13;gradpU12=gradpU13;}
    	
    	if(mask[d[k][12]]==28 || mask[d[d[k][12]][12]]==2)
    	{gradrhoU13=gradrhoU12;gradCU13=gradCU12;gradmuU13=gradmuU12;gradpU13=gradpU12;}
    	
    	if(mask[d[k][13]]==28 || mask[d[d[k][13]][13]]==2)
    	{gradrhoU14=gradrhoU11;gradCU14=gradCU11;gradmuU14=gradmuU11;gradpU14=gradpU11;}
    	
    	if(mask[d[k][14]]==28 || mask[d[d[k][14]][14]]==2)
    	{gradrhoU15=gradrhoU18;gradCU15=gradCU18;gradmuU15=gradmuU18;gradpU15=gradpU18;}
    	
    	if(mask[d[k][15]]==28 || mask[d[d[k][15]][15]]==2)
    	{gradrhoU16=gradrhoU17;gradCU16=gradCU17;gradmuU16=gradmuU17;gradpU16=gradpU17;}
    	
    	if(mask[d[k][16]]==28 || mask[d[d[k][16]][16]]==2)
    	{gradrhoU17=gradrhoU16;gradCU17=gradCU16;gradmuU17=gradmuU16;gradpU17=gradpU16;}
    	
    	if(mask[d[k][17]]==28 || mask[d[d[k][17]][17]]==2)
    	{gradrhoU18=gradrhoU15;gradCU18=gradCU15;gradmuU18=gradmuU15;gradpU18=gradpU15;}
    	
    
    	
		/*
		if(mask[d[k][3]]==28 && mask[d[k][8]]==28)
		{gradrhoU10=gradrhoU7;gradCU10=gradrhoU7;gradmuU10=gradrhoU7;gradpU10=gradrhoU7;}
		
		if(mask[d[k][3]]==28 && mask[d[k][9]]==28)
		{gradrhoU9=gradrhoU8;gradCU9=gradCU8;gradmuU9=gradmuU8;gradpU9=gradpU8;}
		
		if(mask[d[k][2]]==28 && mask[d[k][6]]==28)
		{gradrhoU8=gradrhoU9;gradCU8=gradCU9;gradmuU8=gradmuU9;gradpU8=gradpU9;}
		
		if(mask[d[k][2]]==28 && mask[d[k][7]]==28)
		{gradrhoU7=gradrhoU10;gradCU7=gradCU10;gradmuU7=gradmuU10;gradpU7=gradpU10;}
		
		if(mask[d[k][1]]==28 && mask[d[k][7]]==28)
		{gradrhoU10=gradrhoU7;gradCU10=gradCU7;gradmuU10=gradmuU7;gradpU10=gradpU7;}
		
		if(mask[d[k][1]]==28 && mask[d[k][9]]==28)
		{gradrhoU8=gradrhoU9;gradCU8=gradCU9;gradmuU8=gradmuU9;gradpU8=gradpU9;}
		
		if(mask[d[k][0]]==28 && mask[d[k][6]]==28)
		{gradrhoU9=gradrhoU8;gradCU9=gradCU8;gradmuU9=gradmuU8;gradpU9=gradpU8;}
		
		if(mask[d[k][3]]==28 && mask[d[k][8]]==28)
		{gradrhoU7=gradrhoU10;gradCU7=gradCU10;gradmuU7=gradmuU10;gradpU7=gradpU10;}
    	*/
    	
    	}
    
     if(mask[k]==2 || mask[k]==1)
    {
    	if(mask[d[k][0]]==1 && mask[d[d[k][0]][0]]!=2)
    	{
    	gradrhoU1=0.5*(4*rho[d[k][0]]-4*rho[k])/dt;
    	gradCU1=0.5*(4*C[d[k][0]]-4*C[k])/dt;
    	gradmuU1=0.5*(4*mu[d[k][0]]-4*mu[k])/dt;
		gradpU1=0.5*(4*p[d[k][0]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
		gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
		gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
		gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
		}
		
		if(mask[d[k][1]]==1 && mask[d[d[k][1]][1]]!=2)
    	{
    	gradrhoU2=0.5*(4*rho[d[k][1]]-4*rho[k])/dt;
    	gradCU2=0.5*(4*C[d[k][1]]-4*C[k])/dt;
    	gradmuU2=0.5*(4*mu[d[k][1]]-4*mu[k])/dt;
		gradpU2=0.5*(4*p[d[k][1]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
		gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
		gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
		gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
		}
		
		if(mask[d[k][2]]==1 && mask[d[d[k][2]][2]]!=2)
    	{
    	gradrhoU3=0.5*(4*rho[d[k][2]]-4*rho[k])/dt;
    	gradCU3=0.5*(4*C[d[k][2]]-4*C[k])/dt;
    	gradmuU3=0.5*(4*mu[d[k][2]]-4*mu[k])/dt;
		gradpU3=0.5*(4*p[d[k][2]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
		gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
		gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
		gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
		}
		
		if(mask[d[k][3]]==1 && mask[d[d[k][3]][3]]!=2)
    	{
    	gradrhoU4=0.5*(4*rho[d[k][3]]-4*rho[k])/dt;
    	gradCU4=0.5*(4*C[d[k][3]]-4*C[k])/dt;
    	gradmuU4=0.5*(4*mu[d[k][3]]-4*mu[k])/dt;
		gradpU4=0.5*(4*p[d[k][3]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
		gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
		gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
		gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
		}
		
		if(mask[d[k][4]]==1 && mask[d[d[k][4]][4]]!=2)
    	{
    	gradrhoU5=0.5*(4*rho[d[k][4]]-4*rho[k])/dt;
    	gradCU5=0.5*(4*C[d[k][4]]-4*C[k])/dt;
    	gradmuU5=0.5*(4*mu[d[k][4]]-4*mu[k])/dt;
		gradpU5=0.5*(4*p[d[k][4]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU5=0.5*(-rho[d[d[k][4]][4]]+4*rho[d[k][4]]-3*rho[k])/dt;
		gradCU5=0.5*(-C[d[d[k][4]][4]]+4*C[d[k][4]]-3*C[k])/dt;
		gradmuU5=0.5*(-mu[d[d[k][4]][4]]+4*mu[d[k][4]]-3*mu[k])/dt;
		gradpU5=0.5*(-p[d[d[k][4]][4]]+4*p[d[k][4]]-3*p[k])/dt;
		}
		
		if(mask[d[k][5]]==1 && mask[d[d[k][5]][5]]!=2)
    	{
    	gradrhoU6=0.5*(4*rho[d[k][5]]-4*rho[k])/dt;
    	gradCU6=0.5*(4*C[d[k][5]]-4*C[k])/dt;
    	gradmuU6=0.5*(4*mu[d[k][5]]-4*mu[k])/dt;
		gradpU6=0.5*(4*p[d[k][5]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU6=0.5*(-rho[d[d[k][5]][5]]+4*rho[d[k][5]]-3*rho[k])/dt;
		gradCU6=0.5*(-C[d[d[k][5]][5]]+4*C[d[k][5]]-3*C[k])/dt;
		gradmuU6=0.5*(-mu[d[d[k][5]][5]]+4*mu[d[k][5]]-3*mu[k])/dt;
		gradpU6=0.5*(-p[d[d[k][5]][5]]+4*p[d[k][5]]-3*p[k])/dt;
		}
		
		if(mask[d[k][6]]==1 && mask[d[d[k][6]][6]]!=2)
    	{
    	gradrhoU7=0.5*(4*rho[d[k][6]]-4*rho[k])/dt;
    	gradCU7=0.5*(4*C[d[k][6]]-4*C[k])/dt;
    	gradmuU7=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
		gradpU7=0.5*(4*p[d[k][6]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
		gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
		gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
		gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
		}
		
		if(mask[d[k][7]]==1 && mask[d[d[k][7]][7]]!=2)
    	{
    	gradrhoU8=0.5*(4*rho[d[k][7]]-4*rho[k])/dt;
    	gradCU8=0.5*(4*C[d[k][7]]-4*C[k])/dt;
    	gradmuU8=0.5*(4*mu[d[k][7]]-4*mu[k])/dt;
		gradpU8=0.5*(4*p[d[k][7]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
		gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
		gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
		gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
		}
		
		if(mask[d[k][8]]==1 && mask[d[d[k][8]][8]]!=2)
    	{
    	gradrhoU9=0.5*(4*rho[d[k][8]]-4*rho[k])/dt;
    	gradCU9=0.5*(4*C[d[k][8]]-4*C[k])/dt;
    	gradmuU9=0.5*(4*mu[d[k][8]]-4*mu[k])/dt;
		gradpU9=0.5*(4*p[d[k][8]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
		gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
		gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
		gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
		}
		
		if(mask[d[k][9]]==1 && mask[d[d[k][9]][9]]!=2)
    	{
    	gradrhoU10=0.5*(4*rho[d[k][9]]-4*rho[k])/dt;
    	gradCU10=0.5*(4*C[d[k][9]]-4*C[k])/dt;
    	gradmuU10=0.5*(4*mu[d[k][9]]-4*mu[k])/dt;
		gradpU10=0.5*(4*p[d[k][9]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
		gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
		gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
		gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
		}
		
		if(mask[d[k][10]]==1 && mask[d[d[k][10]][10]]!=2)
    	{
    	gradrhoU11=0.5*(4*rho[d[k][10]]-4*rho[k])/dt;
    	gradCU11=0.5*(4*C[d[k][10]]-4*C[k])/dt;
    	gradmuU11=0.5*(4*mu[d[k][10]]-4*mu[k])/dt;
		gradpU11=0.5*(4*p[d[k][10]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU11=0.5*(-rho[d[d[k][10]][10]]+4*rho[d[k][10]]-3*rho[k])/dt;
		gradCU11=0.5*(-C[d[d[k][10]][10]]+4*C[d[k][10]]-3*C[k])/dt;
		gradmuU11=0.5*(-mu[d[d[k][10]][10]]+4*mu[d[k][10]]-3*mu[k])/dt;
		gradpU11=0.5*(-p[d[d[k][10]][10]]+4*p[d[k][10]]-3*p[k])/dt;
		}
		
		if(mask[d[k][11]]==1 && mask[d[d[k][11]][11]]!=2)
    	{
    	gradrhoU12=0.5*(4*rho[d[k][11]]-4*rho[k])/dt;
    	gradCU12=0.5*(4*C[d[k][11]]-4*C[k])/dt;
    	gradmuU12=0.5*(4*mu[d[k][11]]-4*mu[k])/dt;
		gradpU12=0.5*(4*p[d[k][11]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU12=0.5*(-rho[d[d[k][11]][11]]+4*rho[d[k][11]]-3*rho[k])/dt;
		gradCU12=0.5*(-C[d[d[k][11]][11]]+4*C[d[k][11]]-3*C[k])/dt;
		gradmuU12=0.5*(-mu[d[d[k][11]][11]]+4*mu[d[k][11]]-3*mu[k])/dt;
		gradpU12=0.5*(-p[d[d[k][11]][11]]+4*p[d[k][11]]-3*p[k])/dt;
		}
		
		if(mask[d[k][12]]==1 && mask[d[d[k][12]][12]]!=2)
    	{
    	gradrhoU13=0.5*(4*rho[d[k][12]]-4*rho[k])/dt;
    	gradCU13=0.5*(4*C[d[k][12]]-4*C[k])/dt;
    	gradmuU13=0.5*(4*mu[d[k][12]]-4*mu[k])/dt;
		gradpU13=0.5*(4*p[d[k][12]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU13=0.5*(-rho[d[d[k][12]][12]]+4*rho[d[k][12]]-3*rho[k])/dt;
		gradCU13=0.5*(-C[d[d[k][12]][12]]+4*C[d[k][12]]-3*C[k])/dt;
		gradmuU13=0.5*(-mu[d[d[k][12]][12]]+4*mu[d[k][12]]-3*mu[k])/dt;
		gradpU13=0.5*(-p[d[d[k][12]][12]]+4*p[d[k][12]]-3*p[k])/dt;
		}
		
		if(mask[d[k][13]]==1 && mask[d[d[k][13]][13]]!=2)
    	{
    	gradrhoU14=0.5*(4*rho[d[k][13]]-4*rho[k])/dt;
    	gradCU14=0.5*(4*C[d[k][13]]-4*C[k])/dt;
    	gradmuU14=0.5*(4*mu[d[k][13]]-4*mu[k])/dt;
		gradpU14=0.5*(4*p[d[k][13]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU14=0.5*(-rho[d[d[k][13]][13]]+4*rho[d[k][13]]-3*rho[k])/dt;
		gradCU14=0.5*(-C[d[d[k][13]][13]]+4*C[d[k][13]]-3*C[k])/dt;
		gradmuU14=0.5*(-mu[d[d[k][13]][13]]+4*mu[d[k][13]]-3*mu[k])/dt;
		gradpU14=0.5*(-p[d[d[k][13]][13]]+4*p[d[k][13]]-3*p[k])/dt;
		}
		
		if(mask[d[k][14]]==1 && mask[d[d[k][14]][14]]!=2)
    	{
    	gradrhoU15=0.5*(4*rho[d[k][14]]-4*rho[k])/dt;
    	gradCU15=0.5*(4*C[d[k][14]]-4*C[k])/dt;
    	gradmuU15=0.5*(4*mu[d[k][14]]-4*mu[k])/dt;
		gradpU15=0.5*(4*p[d[k][14]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU15=0.5*(-rho[d[d[k][14]][14]]+4*rho[d[k][14]]-3*rho[k])/dt;
		gradCU15=0.5*(-C[d[d[k][14]][14]]+4*C[d[k][14]]-3*C[k])/dt;
		gradmuU15=0.5*(-mu[d[d[k][14]][14]]+4*mu[d[k][14]]-3*mu[k])/dt;
		gradpU15=0.5*(-p[d[d[k][14]][14]]+4*p[d[k][14]]-3*p[k])/dt;
		}
		
		if(mask[d[k][15]]==1 && mask[d[d[k][15]][15]]!=2)
    	{
    	gradrhoU16=0.5*(4*rho[d[k][15]]-4*rho[k])/dt;
    	gradCU16=0.5*(4*C[d[k][15]]-4*C[k])/dt;
    	gradmuU16=0.5*(4*mu[d[k][15]]-4*mu[k])/dt;
		gradpU16=0.5*(4*p[d[k][15]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU16=0.5*(-rho[d[d[k][15]][15]]+4*rho[d[k][15]]-3*rho[k])/dt;
		gradCU16=0.5*(-C[d[d[k][15]][15]]+4*C[d[k][15]]-3*C[k])/dt;
		gradmuU16=0.5*(-mu[d[d[k][15]][15]]+4*mu[d[k][15]]-3*mu[k])/dt;
		gradpU16=0.5*(-p[d[d[k][15]][15]]+4*p[d[k][15]]-3*p[k])/dt;
		}
		
		if(mask[d[k][16]]==1 && mask[d[d[k][16]][16]]!=2)
    	{
    	gradrhoU17=0.5*(4*rho[d[k][16]]-4*rho[k])/dt;
    	gradCU17=0.5*(4*C[d[k][16]]-4*C[k])/dt;
    	gradmuU17=0.5*(4*mu[d[k][16]]-4*mu[k])/dt;
		gradpU17=0.5*(4*p[d[k][16]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU17=0.5*(-rho[d[d[k][16]][16]]+4*rho[d[k][16]]-3*rho[k])/dt;
		gradCU17=0.5*(-C[d[d[k][16]][16]]+4*C[d[k][16]]-3*C[k])/dt;
		gradmuU17=0.5*(-mu[d[d[k][16]][16]]+4*mu[d[k][16]]-3*mu[k])/dt;
		gradpU17=0.5*(-p[d[d[k][16]][16]]+4*p[d[k][16]]-3*p[k])/dt;
		}
		
		if(mask[d[k][17]]==1 && mask[d[d[k][17]][17]]!=2)
    	{
    	gradrhoU18=0.5*(4*rho[d[k][17]]-4*rho[k])/dt;
    	gradCU18=0.5*(4*C[d[k][17]]-4*C[k])/dt;
    	gradmuU18=0.5*(4*mu[d[k][17]]-4*mu[k])/dt;
		gradpU18=0.5*(4*p[d[k][17]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU18=0.5*(-rho[d[d[k][17]][17]]+4*rho[d[k][17]]-3*rho[k])/dt;
		gradCU18=0.5*(-C[d[d[k][17]][17]]+4*C[d[k][17]]-3*C[k])/dt;
		gradmuU18=0.5*(-mu[d[d[k][17]][17]]+4*mu[d[k][17]]-3*mu[k])/dt;
		gradpU18=0.5*(-p[d[d[k][17]][17]]+4*p[d[k][17]]-3*p[k])/dt;
		}
    
    
    
    }
    /*
   else if(mask[k]==1)
			{
				gradrhoU1=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
				
				gradCU1=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
				
				
				
			}
			
		else if(mask[k]==2)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
   				gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
   				gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
   				gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
   				gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
				
				
				
				
				
				
				
			}
    
   else if(mask[k]==-1)
    {
    			gradrhoU1=0.5*(4*rho[d[k][0]]-4*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(4*rho[d[k][6]]-4*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(4*rho[d[k][8]]-4*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
				
				gradCU1=0.5*(4*C[d[k][0]]-4*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(4*C[d[k][6]]-4*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
   				gradCU9=0.5*(4*C[d[k][8]]-4*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(4*mu[d[k][0]]-4*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
   				gradmuU9=0.5*(4*mu[d[k][8]]-4*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(4*p[d[k][0]]-4*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(4*p[d[k][6]]-4*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
   				gradpU9=0.5*(4*p[d[k][8]]-4*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
				
				
				
    }
    
    else if(mask[k]==-2)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(4*rho[d[k][1]]-4*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
   				gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(4*rho[d[k][7]]-4*rho[k])/dt;
    			gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(4*rho[d[k][9]]-4*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(4*C[d[k][1]]-4*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
   				gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(4*C[d[k][7]]-4*C[k])/dt;
    			gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(4*C[d[k][9]]-4*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(4*mu[d[k][1]]-4*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
   				gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(4*mu[d[k][7]]-4*mu[k])/dt;
    			gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(4*mu[d[k][9]]-4*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(4*p[d[k][1]]-4*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
   				gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(4*p[d[k][7]]-4*p[k])/dt;
    			gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(4*p[d[k][9]]-4*p[k])/dt;
				
				
				
				
				
				
			}
			
			else if(mask[k]==3)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
				
				
				
				
				
			}
			
			else if(mask[k]==4)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
			
				gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    		}
    		
    		else if(mask[k]==-3)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(4*rho[d[k][2]]-4*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(4*rho[d[k][6]]-4*rho[k])/dt;
    			gradrhoU8=0.5*(4*rho[d[k][7]]-4*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(4*C[d[k][2]]-4*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(4*C[d[k][6]]-4*C[k])/dt;
    			gradCU8=0.5*(4*C[d[k][7]]-4*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(4*mu[d[k][2]]-4*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
    			gradmuU8=0.5*(4*mu[d[k][7]]-4*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(4*p[d[k][2]]-4*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(4*p[d[k][6]]-4*p[k])/dt;
    			gradpU8=0.5*(4*p[d[k][7]]-4*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
			}
			
			else if(mask[k]==-4)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(4*rho[d[k][3]]-4*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(4*rho[d[k][8]]-4*rho[k])/dt;
    			gradrhoU10=0.5*(4*rho[d[k][9]]-4*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU4=0.5*(4*C[d[k][3]]-4*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
   				gradCU9=0.5*(4*C[d[k][8]]-4*C[k])/dt;
    			gradCU10=0.5*(4*C[d[k][9]]-4*C[k])/dt;
			
				gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU4=0.5*(4*mu[d[k][3]]-4*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
   				gradmuU9=0.5*(4*mu[d[k][8]]-4*mu[k])/dt;
    			gradmuU10=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU4=0.5*(4*p[d[k][3]]-4*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
   				gradpU9=0.5*(4*p[d[k][8]]-4*p[k])/dt;
    			gradpU10=0.5*(4*p[d[k][9]]-4*p[k])/dt;
    		}
    		
    		else if(mask[k]==-410)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(4*rho[d[k][3]]-4*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(4*rho[d[k][9]]-4*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU4=0.5*(4*C[d[k][3]]-4*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(4*C[d[k][9]]-4*C[k])/dt;
			
				gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU4=0.5*(4*mu[d[k][3]]-4*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU4=0.5*(4*p[d[k][3]]-4*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(4*p[d[k][9]]-4*p[k])/dt;
    		}
    		
    		else if(mask[k]==-409)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(4*rho[d[k][3]]-4*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(4*rho[d[k][8]]-4*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU4=0.5*(4*C[d[k][3]]-4*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
   				gradCU9=0.5*(4*C[d[k][8]]-4*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
			
				gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU4=0.5*(4*mu[d[k][3]]-4*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
   				gradmuU9=0.5*(4*mu[d[k][8]]-4*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU4=0.5*(4*p[d[k][3]]-4*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
   				gradpU9=0.5*(4*p[d[k][8]]-4*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    		}
    		
    		else if(mask[k]==-307)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(4*rho[d[k][2]]-4*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(4*rho[d[k][6]]-4*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(4*C[d[k][2]]-4*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(4*C[d[k][6]]-4*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(4*mu[d[k][2]]-4*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(4*p[d[k][2]]-4*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(4*p[d[k][6]]-4*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
			}
			
			else if(mask[k]==-308)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(4*rho[d[k][2]]-4*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(4*rho[d[k][7]]-4*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(4*C[d[k][2]]-4*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(4*C[d[k][7]]-4*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(4*mu[d[k][2]]-4*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(4*mu[d[k][7]]-4*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(4*p[d[k][2]]-4*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(4*p[d[k][7]]-4*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
			}
			
			else if(mask[k]==-1)
    {
    			gradrhoU1=0.5*(4*rho[d[k][0]]-4*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(4*rho[d[k][6]]-4*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
				
				gradCU1=0.5*(4*C[d[k][0]]-4*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(4*C[d[k][6]]-4*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(4*mu[d[k][0]]-4*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(4*p[d[k][0]]-4*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(4*p[d[k][6]]-4*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
				
				
				
    }
    
    else if(mask[k]==-109)
    {
    			gradrhoU1=0.5*(4*rho[d[k][0]]-4*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(4*rho[d[k][8]]-4*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
				
				gradCU1=0.5*(4*C[d[k][0]]-4*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
   				gradCU9=0.5*(4*C[d[k][8]]-4*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(4*mu[d[k][0]]-4*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
   				gradmuU9=0.5*(4*mu[d[k][8]]-4*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(4*p[d[k][0]]-4*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
   				gradpU9=0.5*(4*p[d[k][8]]-4*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
				
				
				
    }
    else if(mask[k]==-208)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(4*rho[d[k][1]]-4*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
   				gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(4*rho[d[k][7]]-4*rho[k])/dt;
    			gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(4*C[d[k][1]]-4*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
   				gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(4*C[d[k][7]]-4*C[k])/dt;
    			gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(4*mu[d[k][1]]-4*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
   				gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(4*mu[d[k][7]]-4*mu[k])/dt;
    			gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(4*p[d[k][1]]-4*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
   				gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(4*p[d[k][7]]-4*p[k])/dt;
    			gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
				
				
				
				
				
				
			}
			else if(mask[k]==-210)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(4*rho[d[k][1]]-4*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
   				gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    			gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(4*rho[d[k][9]]-4*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(4*C[d[k][1]]-4*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
   				gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    			gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(4*C[d[k][9]]-4*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(4*mu[d[k][1]]-4*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
   				gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    			gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(4*mu[d[k][9]]-4*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(4*p[d[k][1]]-4*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
   				gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    			gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(4*p[d[k][9]]-4*p[k])/dt;
				
				
				
				
				
				
			}
			else if(mask[k]==7)
	{
	gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    gradrhoU7=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
	
	gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    gradmuU7=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;

	gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    gradCU7=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    
    
    gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    
    gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    gradpU7=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    }
    
    else if(mask[k]==8)
	{
	gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    gradrhoU8=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
	
	gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    gradmuU8=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;

	gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    gradCU8=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    
    
    gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    
    gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    gradpU8=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    }
    else if(mask[k]==9)
	{
	gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    gradrhoU9=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
	
	gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    gradmuU9=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;

	gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    gradCU9=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    
    
    gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    
    gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    gradpU9=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    }
    
    else if(mask[k]==10)
	{
	gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    gradrhoU10=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
	
	gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    gradmuU10=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;

	gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    
    
    gradCU10=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    
    gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    gradpU10=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    }
    
    else if(mask[k]==31)
	{
	
    gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    gradrhoU8=0.0;
    gradrhoU9=0.0;
    gradrhoU1=gradrhoU2;
	gradrhoU7=gradrhoU10;
	gradrhoU3=gradrhoU4;
	
	gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    gradCU8=0.0;
    gradCU9=0.0;
    gradCU1=gradCU2;
	gradCU7=gradCU10;
	gradCU3=gradCU4;
	
	gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    gradmuU8=0.0;
    gradmuU9=0.0;
    gradmuU1=gradmuU2;
	gradmuU7=gradmuU10;
	gradmuU3=gradmuU4;
	
	gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    gradpU8=0.0;
    gradpU9=0.0;
    gradpU1=gradpU2;
	gradpU7=gradpU10;
	gradpU3=gradpU4;
    }
    
    else if(mask[k]==32)
	{
	
    gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    gradrhoU7=0.0;
    gradrhoU10=0.0;
    gradrhoU2=gradrhoU1;
	gradrhoU8=gradrhoU9;
	gradrhoU3=gradrhoU4;
	
	gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    gradmuU7=0.0;
    gradmuU10=0.0;
    gradmuU2=gradmuU1;
	gradmuU8=gradmuU9;
	gradmuU3=gradmuU4;
	
	gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    gradCU7=0.0;
    gradCU10=0.0;
    gradCU2=gradCU1;
	gradCU8=gradCU9;
	gradCU3=gradCU4;
	
	gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    gradpU7=0.0;
    gradpU10=0.0;
    gradpU2=gradpU1;
	gradpU8=gradpU9;
	gradpU3=gradpU4;
	
	
	
	
    }		
    		   				
	else if(mask[k]==41)
	{
	
    gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    gradrhoU7=0.0;
    gradrhoU10=0.0;
    gradrhoU1=gradrhoU2;
	gradrhoU9=gradrhoU8;
	gradrhoU4=gradrhoU3;
	
	gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    gradCU7=0.0;
    gradCU10=0.0;
    gradCU1=gradCU2;
	gradCU9=gradCU8;
	gradCU4=gradCU3;
	
	gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    gradmuU7=0.0;
    gradmuU10=0.0;
    gradmuU1=gradmuU2;
	gradmuU9=gradmuU8;
	gradmuU4=gradmuU3;
	
	gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    gradpU7=0.0;
    gradpU10=0.0;
    gradpU1=gradpU2;
	gradpU9=gradpU8;
	gradpU4=gradpU3;
	
	
	
    }		
    
    else if(mask[k]==42)
	{
	
    gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    gradrhoU8=0.0;
    gradrhoU9=0.0;
    gradrhoU2=gradrhoU1;
	gradrhoU10=gradrhoU7;
	gradrhoU4=gradrhoU3;
	
	gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    gradCU8=0.0;
    gradCU9=0.0;
    gradCU2=gradCU1;
	gradCU10=gradCU7;
	gradCU4=gradCU3;
	
	gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    gradmuU8=0.0;
    gradmuU9=0.0;
    gradmuU2=gradmuU1;
	gradmuU10=gradmuU7;
	gradmuU4=gradmuU3;
	
	gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    gradpU8=0.0;
    gradpU9=0.0;
    gradpU2=gradpU1;
	gradpU10=gradpU7;
	gradpU4=gradpU3;
	
	
	
    }		
    
   else if(mask[k]==317)
	{
	gradrhoU1=0.5*(4*rho[d[k][0]]-4*rho[k])/dt;
    gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    gradrhoU3=0.5*(4*rho[d[k][2]]-4*rho[k])/dt;
    gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    gradrhoU7=0.5*(4*rho[d[k][6]]-4*rho[k])/dt;
    gradrhoU8=0.5*(4*rho[d[k][7]]-4*rho[k])/dt;
    gradrhoU9=0.5*(4*rho[d[k][8]]-4*rho[k])/dt;
    gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
	
	gradCU1=0.5*(4*C[d[k][0]]-4*C[k])/dt;
    gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    gradCU3=0.5*(4*C[d[k][2]]-4*C[k])/dt;
    gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    gradCU7=0.5*(4*C[d[k][6]]-4*C[k])/dt;
    gradCU8=0.5*(4*C[d[k][7]]-4*C[k])/dt;
    gradCU9=0.5*(4*C[d[k][8]]-4*C[k])/dt;
    gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    
    gradmuU1=0.5*(4*mu[d[k][0]]-4*mu[k])/dt;
    gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    gradmuU3=0.5*(4*mu[d[k][2]]-4*mu[k])/dt;
    gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    gradmuU7=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
    gradmuU8=0.5*(4*mu[d[k][7]]-4*mu[k])/dt;
    gradmuU9=0.5*(4*mu[d[k][8]]-4*mu[k])/dt;
    gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    
    gradpU1=0.5*(4*p[d[k][0]]-4*p[k])/dt;
    gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    gradpU3=0.5*(4*p[d[k][2]]-4*p[k])/dt;
    gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    gradpU7=0.5*(4*p[d[k][6]]-4*p[k])/dt;
    gradpU8=0.5*(4*p[d[k][7]]-4*p[k])/dt;
    gradpU9=0.5*(4*p[d[k][8]]-4*p[k])/dt;
    gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    }
    
    else if(mask[k]==328)
	{
	gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    gradrhoU2=0.5*(4*rho[d[k][1]]-4*rho[k])/dt;
    gradrhoU3=0.5*(4*rho[d[k][2]]-4*rho[k])/dt;
    gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    gradrhoU7=0.5*(4*rho[d[k][6]]-4*rho[k])/dt;
    gradrhoU8=0.5*(4*rho[d[k][7]]-4*rho[k])/dt;
    gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    gradrhoU10=0.5*(4*rho[d[k][9]]-4*rho[k])/dt;
	
	gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    gradmuU2=0.5*(4*mu[d[k][1]]-4*mu[k])/dt;
    gradmuU3=0.5*(4*mu[d[k][2]]-4*mu[k])/dt;
    gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    gradmuU7=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
    gradmuU8=0.5*(4*mu[d[k][7]]-4*mu[k])/dt;
    gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    gradmuU10=0.5*(4*mu[d[k][9]]-4*mu[k])/dt;
    
    gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    gradCU2=0.5*(4*C[d[k][1]]-4*C[k])/dt;
    gradCU3=0.5*(4*C[d[k][2]]-4*C[k])/dt;
    gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    gradCU7=0.5*(4*C[d[k][6]]-4*C[k])/dt;
    gradCU8=0.5*(4*C[d[k][7]]-4*C[k])/dt;
    gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    gradCU10=0.5*(4*C[d[k][9]]-4*C[k])/dt;
    
    gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    gradpU2=0.5*(4*p[d[k][1]]-4*p[k])/dt;
    gradpU3=0.5*(4*p[d[k][2]]-4*p[k])/dt;
    gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    gradpU7=0.5*(4*p[d[k][6]]-4*p[k])/dt;
    gradpU8=0.5*(4*p[d[k][7]]-4*p[k])/dt;
    gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    gradpU10=0.5*(4*p[d[k][9]]-4*p[k])/dt;
    }
    
    if(mask[k]==419)
	{
	gradrhoU1=0.5*(4*rho[d[k][0]]-4*rho[k])/dt;
    gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    gradrhoU4=0.5*(4*rho[d[k][3]]-4*rho[k])/dt;
    gradrhoU7=0.5*(4*rho[d[k][6]]-4*rho[k])/dt;
    gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    gradrhoU9=0.5*(4*rho[d[k][8]]-4*rho[k])/dt;
    gradrhoU10=0.5*(4*rho[d[k][9]]-4*rho[k])/dt;
    
    gradCU1=0.5*(4*C[d[k][0]]-4*C[k])/dt;
    gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    gradCU4=0.5*(4*C[d[k][3]]-4*C[k])/dt;
    gradCU7=0.5*(4*C[d[k][6]]-4*C[k])/dt;
    gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    gradCU9=0.5*(4*C[d[k][8]]-4*C[k])/dt;
    gradCU10=0.5*(4*C[d[k][9]]-4*C[k])/dt;
    
    gradmuU1=0.5*(4*mu[d[k][0]]-4*mu[k])/dt;
    gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    gradmuU4=0.5*(4*mu[d[k][3]]-4*mu[k])/dt;
    gradmuU7=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
    gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    gradmuU9=0.5*(4*mu[d[k][8]]-4*mu[k])/dt;
    gradmuU10=0.5*(4*mu[d[k][9]]-4*mu[k])/dt;
    
    gradpU1=0.5*(4*p[d[k][0]]-4*p[k])/dt;
    gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    gradpU4=0.5*(4*p[d[k][3]]-4*p[k])/dt;
    gradpU7=0.5*(4*p[d[k][6]]-4*p[k])/dt;
    gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    gradpU9=0.5*(4*p[d[k][8]]-4*p[k])/dt;
    gradpU10=0.5*(4*p[d[k][9]]-4*p[k])/dt;
	
	
    }
    
   else if(mask[k]==430)
	{
	gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    gradrhoU2=0.5*(4*rho[d[k][1]]-4*rho[k])/dt;
    gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    gradrhoU4=0.5*(4*rho[d[k][3]]-4*rho[k])/dt;
    gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    gradrhoU8=0.5*(4*rho[d[k][7]]-4*rho[k])/dt;
    gradrhoU9=0.5*(4*rho[d[k][8]]-4*rho[k])/dt;
    gradrhoU10=0.5*(4*rho[d[k][9]]-4*rho[k])/dt;
    
    gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    gradCU2=0.5*(4*C[d[k][1]]-4*C[k])/dt;
    gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    gradCU4=0.5*(4*C[d[k][3]]-4*C[k])/dt;
    gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    gradCU8=0.5*(4*C[d[k][7]]-4*C[k])/dt;
    gradCU9=0.5*(4*C[d[k][8]]-4*C[k])/dt;
    gradCU10=0.5*(4*C[d[k][9]]-4*C[k])/dt;
    
    gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    gradmuU2=0.5*(4*mu[d[k][1]]-4*mu[k])/dt;
    gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    gradmuU4=0.5*(4*mu[d[k][3]]-4*mu[k])/dt;
    gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    gradmuU8=0.5*(4*mu[d[k][7]]-4*mu[k])/dt;
    gradmuU9=0.5*(4*mu[d[k][8]]-4*mu[k])/dt;
    gradmuU10=0.5*(4*mu[d[k][9]]-4*mu[k])/dt;
    
    gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    gradpU2=0.5*(4*p[d[k][1]]-4*p[k])/dt;
    gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    gradpU4=0.5*(4*p[d[k][3]]-4*p[k])/dt;
    gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    gradpU8=0.5*(4*p[d[k][7]]-4*p[k])/dt;
    gradpU9=0.5*(4*p[d[k][8]]-4*p[k])/dt;
    gradpU10=0.5*(4*p[d[k][9]]-4*p[k])/dt;
	
	
    }
    
    else if(mask[k]==313)
			{
				gradrhoU1=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(4*rho[d[k][2]]-4*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(4*rho[d[k][7]]-4*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
				
				gradCU1=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(4*C[d[k][2]]-4*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			gradCU8=0.5*(4*C[d[k][7]]-4*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(4*mu[d[k][2]]-4*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			gradmuU8=0.5*(4*mu[d[k][7]]-4*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(4*p[d[k][2]]-4*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    			gradpU8=0.5*(4*p[d[k][7]]-4*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
				
				
				
			}
			
			else if(mask[k]==414)
			{
				gradrhoU1=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(4*rho[d[k][3]]-4*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(4*rho[d[k][9]]-4*rho[k])/dt;
				
				gradCU1=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU4=0.5*(4*C[d[k][3]]-4*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    			gradCU10=0.5*(4*C[d[k][9]]-4*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU4=0.5*(4*mu[d[k][3]]-4*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    			gradmuU10=0.5*(4*mu[d[k][9]]-4*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU4=0.5*(4*p[d[k][3]]-4*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    			gradpU10=0.5*(4*p[d[k][9]]-4*p[k])/dt;
				
				
				
			}
			
			else if(mask[k]==323)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(4*rho[d[k][2]]-4*rho[k])/dt;
   				gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(4*rho[d[k][6]]-4*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU3=0.5*(4*C[d[k][2]]-4*C[k])/dt;
   				gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(4*C[d[k][6]]-4*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU3=0.5*(4*mu[d[k][2]]-4*mu[k])/dt;
   				gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU3=0.5*(4*p[d[k][2]]-4*p[k])/dt;
   				gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(4*p[d[k][6]]-4*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
				
				}
				
				else if(mask[k]==424)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
   				gradrhoU4=0.5*(4*rho[d[k][3]]-4*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU9=0.5*(4*rho[d[k][8]]-4*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
   				gradCU4=0.5*(4*C[d[k][3]]-4*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU9=0.5*(4*C[d[k][8]]-4*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
   				gradmuU4=0.5*(4*mu[d[k][3]]-4*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU9=0.5*(4*mu[d[k][8]]-4*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
   				gradpU4=0.5*(4*p[d[k][3]]-4*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU9=0.5*(4*p[d[k][8]]-4*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
				
				
				
				
				
				
				
			}
			
			else if(mask[k]==311)
			{
				gradrhoU1=0.5*(4*rho[d[k][0]]-4*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(4*rho[d[k][8]]-4*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(4*C[d[k][0]]-4*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
   				gradCU9=0.5*(4*C[d[k][8]]-4*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			
    			gradmuU1=0.5*(4*mu[d[k][0]]-4*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
   				gradmuU9=0.5*(4*mu[d[k][8]]-4*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(4*p[d[k][0]]-4*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
   				gradpU9=0.5*(4*p[d[k][8]]-4*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
				
				}
				
				else if(mask[k]==322)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(4*rho[d[k][1]]-4*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][3]][3]]+4*rho[d[k][3]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][9]][9]]+4*rho[d[k][9]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][8]][8]]+4*rho[d[k][8]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(4*rho[d[k][9]]-4*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(4*C[d[k][1]]-4*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][3]][3]]+4*C[d[k][3]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][9]][9]]+4*C[d[k][9]]-3*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][8]][8]]+4*C[d[k][8]]-3*C[k])/dt;
    			gradCU10=0.5*(4*C[d[k][9]]-4*C[k])/dt;
    			
    			gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(4*mu[d[k][1]]-4*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][3]][3]]+4*mu[d[k][3]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][9]][9]]+4*mu[d[k][9]]-3*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][8]][8]]+4*mu[d[k][8]]-3*mu[k])/dt;
    			gradmuU10=0.5*(4*mu[d[k][9]]-4*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(4*p[d[k][1]]-4*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][3]][3]]+4*p[d[k][3]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][9]][9]]+4*p[d[k][9]]-3*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][8]][8]]+4*p[d[k][8]]-3*p[k])/dt;
    			gradpU10=0.5*(4*p[d[k][9]]-4*p[k])/dt;
				
			}
			
			else if(mask[k]==411)
			{
				gradrhoU1=0.5*(4*rho[d[k][0]]-4*rho[k])/dt;
    			gradrhoU2=0.5*(-rho[d[d[k][1]][1]]+4*rho[d[k][1]]-3*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(4*rho[d[k][6]]-4*rho[k])/dt;
    			gradrhoU8=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(4*C[d[k][0]]-4*C[k])/dt;
    			gradCU2=0.5*(-C[d[d[k][1]][1]]+4*C[d[k][1]]-3*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU7=0.5*(4*C[d[k][6]]-4*C[k])/dt;
    			gradCU8=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
			
				gradmuU1=0.5*(4*mu[d[k][0]]-4*mu[k])/dt;
    			gradmuU2=0.5*(-mu[d[d[k][1]][1]]+4*mu[d[k][1]]-3*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU7=0.5*(4*mu[d[k][6]]-4*mu[k])/dt;
    			gradmuU8=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(4*p[d[k][0]]-4*p[k])/dt;
    			gradpU2=0.5*(-p[d[d[k][1]][1]]+4*p[d[k][1]]-3*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU7=0.5*(4*p[d[k][6]]-4*p[k])/dt;
    			gradpU8=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    		}
    		
    		else if(mask[k]==422)
			{
				gradrhoU1=0.5*(-rho[d[d[k][0]][0]]+4*rho[d[k][0]]-3*rho[k])/dt;
    			gradrhoU2=0.5*(4*rho[d[k][1]]-4*rho[k])/dt;
    			gradrhoU3=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU4=0.5*(-rho[d[d[k][2]][2]]+4*rho[d[k][2]]-3*rho[k])/dt;
    			gradrhoU7=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			gradrhoU8=0.5*(4*rho[d[k][7]]-4*rho[k])/dt;
   				gradrhoU9=0.5*(-rho[d[d[k][7]][7]]+4*rho[d[k][7]]-3*rho[k])/dt;
    			gradrhoU10=0.5*(-rho[d[d[k][6]][6]]+4*rho[d[k][6]]-3*rho[k])/dt;
    			
    			gradCU1=0.5*(-C[d[d[k][0]][0]]+4*C[d[k][0]]-3*C[k])/dt;
    			gradCU2=0.5*(4*C[d[k][1]]-4*C[k])/dt;
    			gradCU3=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU4=0.5*(-C[d[d[k][2]][2]]+4*C[d[k][2]]-3*C[k])/dt;
    			gradCU7=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
    			gradCU8=0.5*(4*C[d[k][7]]-4*C[k])/dt;
   				gradCU9=0.5*(-C[d[d[k][7]][7]]+4*C[d[k][7]]-3*C[k])/dt;
    			gradCU10=0.5*(-C[d[d[k][6]][6]]+4*C[d[k][6]]-3*C[k])/dt;
			
				gradmuU1=0.5*(-mu[d[d[k][0]][0]]+4*mu[d[k][0]]-3*mu[k])/dt;
    			gradmuU2=0.5*(4*mu[d[k][1]]-4*mu[k])/dt;
    			gradmuU3=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU4=0.5*(-mu[d[d[k][2]][2]]+4*mu[d[k][2]]-3*mu[k])/dt;
    			gradmuU7=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			gradmuU8=0.5*(4*mu[d[k][7]]-4*mu[k])/dt;
   				gradmuU9=0.5*(-mu[d[d[k][7]][7]]+4*mu[d[k][7]]-3*mu[k])/dt;
    			gradmuU10=0.5*(-mu[d[d[k][6]][6]]+4*mu[d[k][6]]-3*mu[k])/dt;
    			
    			gradpU1=0.5*(-p[d[d[k][0]][0]]+4*p[d[k][0]]-3*p[k])/dt;
    			gradpU2=0.5*(4*p[d[k][1]]-4*p[k])/dt;
    			gradpU3=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU4=0.5*(-p[d[d[k][2]][2]]+4*p[d[k][2]]-3*p[k])/dt;
    			gradpU7=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    			gradpU8=0.5*(4*p[d[k][7]]-4*p[k])/dt;
   				gradpU9=0.5*(-p[d[d[k][7]][7]]+4*p[d[k][7]]-3*p[k])/dt;
    			gradpU10=0.5*(-p[d[d[k][6]][6]]+4*p[d[k][6]]-3*p[k])/dt;
    		}
			*/
			
    // Work out x and y derivatives
    		if(dimensions==2)
    		{
    		gradrhoUx=1.0/3.0*(gradrhoU1-gradrhoU2)+1.0/12.0*(gradrhoU7-gradrhoU8+gradrhoU9-gradrhoU10);
    		gradrhoUy=1.0/3.0*(gradrhoU3-gradrhoU4)+1.0/12.0*(gradrhoU7+gradrhoU8-gradrhoU9-gradrhoU10);
    		
    		
    		gradCUx=1.0/3.0*(gradCU1-gradCU2)+1.0/12.0*(gradCU7-gradCU8+gradCU9-gradCU10);
    		gradCUy=1.0/3.0*(gradCU3-gradCU4)+1.0/12.0*(gradCU7+gradCU8-gradCU9-gradCU10);
    		
    		gradmuUx=1.0/3.0*(gradmuU1-gradmuU2)+1.0/12.0*(gradmuU7-gradmuU8+gradmuU9-gradmuU10);
    		gradmuUy=1.0/3.0*(gradmuU3-gradmuU4)+1.0/12.0*(gradmuU7+gradmuU8-gradmuU9-gradmuU10);
    		
    		gradpUx=1.0/3.0*(gradpU1-gradpU2)+1.0/12.0*(gradpU7-gradpU8+gradpU9-gradpU10);
    		gradpUy=1.0/3.0*(gradpU3-gradpU4)+1.0/12.0*(gradpU7+gradpU8-gradpU9-gradpU10);
    		}
    		
    		if (dimensions==3)
    		{
    		
    		gradrhoUx=1.0/6.0*(gradrhoU1-gradrhoU2)+1.0/12.0*(gradrhoU7-gradrhoU8+gradrhoU9-gradrhoU10+gradrhoU15+gradrhoU17-gradrhoU16-gradrhoU18);
    		gradrhoUy=1.0/6.0*(gradrhoU3-gradrhoU4)+1.0/12.0*(gradrhoU7+gradrhoU8-gradrhoU9-gradrhoU10+gradrhoU11+gradrhoU13-gradrhoU12-gradrhoU14);
    		gradrhoUz=1.0/6.0*(gradrhoU5-gradrhoU6)+1.0/12.0*(gradrhoU11+gradrhoU12-gradrhoU13-gradrhoU14+gradrhoU16+gradrhoU15-gradrhoU17-gradrhoU18);
    		
    		gradCUx=1.0/6.0*(gradCU1-gradCU2)+1.0/12.0*(gradCU7-gradCU8+gradCU9-gradCU10+gradCU15+gradCU17-gradCU16-gradCU18);
    		gradCUy=1.0/6.0*(gradCU3-gradCU4)+1.0/12.0*(gradCU7+gradCU8-gradCU9-gradCU10+gradCU11+gradCU13-gradCU12-gradCU14);
    		gradCUz=1.0/6.0*(gradCU5-gradCU6)+1.0/12.0*(gradCU11+gradCU12-gradCU13-gradCU14+gradCU16+gradCU15-gradCU17-gradCU18);
		
			gradmuUx=1.0/6.0*(gradmuU1-gradmuU2)+1.0/12.0*(gradmuU7-gradmuU8+gradmuU9-gradmuU10+gradmuU15+gradmuU17-gradmuU16-gradmuU18);
    		gradmuUy=1.0/6.0*(gradmuU3-gradmuU4)+1.0/12.0*(gradmuU7+gradmuU8-gradmuU9-gradmuU10+gradmuU11+gradmuU13-gradmuU12-gradmuU14);
    		gradmuUz=1.0/6.0*(gradmuU5-gradmuU6)+1.0/12.0*(gradmuU11+gradmuU12-gradmuU13-gradmuU14+gradmuU16+gradmuU15-gradmuU17-gradmuU18);
		
			gradpUx=1.0/6.0*(gradpU1-gradpU2)+1.0/12.0*(gradpU7-gradpU8+gradpU9-gradpU10+gradpU15+gradpU17-gradpU16-gradpU18);
    		gradpUy=1.0/6.0*(gradpU3-gradpU4)+1.0/12.0*(gradpU7+gradpU8-gradpU9-gradpU10+gradpU11+gradpU13-gradpU12-gradpU14);
    		gradpUz=1.0/6.0*(gradpU5-gradpU6)+1.0/12.0*(gradpU11+gradpU12-gradpU13-gradpU14+gradpU16+gradpU15-gradpU17-gradpU18);
    		
    		}
	
}