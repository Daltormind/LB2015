//propcolh

#include "wet.h"

void wet::propcolh()
{

	
	if(mask[k]!=1)
	{
		if(dimensions==2)
		{
		M0=M*(muh[d[k][6]]+muh[d[k][7]]+muh[d[k][8]]+muh[d[k][9]]+4.0*muh[d[k][0]]
		+4.0*muh[d[k][1]]+4.0*muh[d[k][2]]+4.0*muh[d[k][3]]-20.0*muh[k])/(6.0*dt*dt);
		}
		if(dimensions==3)
		{
		M0=M*(muh[d[k][6]]+muh[d[k][7]]+muh[d[k][8]]+muh[d[k][9]]+muh[d[k][10]]+muh[d[k][11]]+muh[d[k][12]]+muh[d[k][13]]+muh[d[k][14]]+muh[d[k][15]]+muh[d[k][16]]+muh[d[k][17]]+2.0*(muh[d[k][0]]+muh[d[k][1]]+muh[d[k][2]]+muh[d[k][3]]+muh[d[k][4]]+muh[d[k][5]])-24.0*muh[k])/(6.0*dt*dt);
		}
	}
	else if (mask[k]==1)
			{
			
				
				if(mask[d[k][0]]==28)
    	{hold1=muh[d[k][1]];}else{hold1=muh[d[k][0]];}
    	
    	if(mask[d[k][1]]==28)
    	{hold2=muh[d[k][0]];}else{hold2=muh[d[k][1]];}
    	
    	if(mask[d[k][2]]==28)
    	{hold3=muh[d[k][2]];}else{hold3=muh[d[k][2]];}
    	
    	if(mask[d[k][3]]==28)
    	{hold4=muh[d[k][3]];}else{hold4=muh[d[k][3]];}
    	
    	if(mask[d[k][4]]==28)
    	{hold5=muh[d[k][4]];}else{hold5=muh[d[k][4]];}
    	
    	if(mask[d[k][5]]==28)
    	{hold6=muh[d[k][5]];}else{hold6=muh[d[k][5]];}
    	
    	if(mask[d[k][6]]==28 || mask[d[d[k][6]][6]]==2)
    	{hold7=muh[d[k][9]];}else{hold7=muh[d[k][6]];}
    	
    	if(mask[d[k][7]]==28 || mask[d[d[k][7]][7]]==2)
    	{hold8=muh[d[k][8]];}else{hold8=muh[d[k][7]];}
    	
    	if(mask[d[k][8]]==28 || mask[d[d[k][8]][8]]==2)
    	{hold9=muh[d[k][7]];}else{hold9=muh[d[k][8]];}
    	
    	if(mask[d[k][9]]==28 || mask[d[d[k][9]][9]]==2)
    	{hold10=muh[d[k][6]];}else{hold10=muh[d[k][9]];}
    	
    	if(mask[d[k][10]]==28 || mask[d[d[k][10]][10]]==2)
    	{hold11=muh[d[k][13]];}else{hold11=muh[d[k][10]];}
    	
    	if(mask[d[k][11]]==28 || mask[d[d[k][11]][11]]==2)
    	{hold12=muh[d[k][12]];}else{hold12=muh[d[k][11]];}
    	
    	if(mask[d[k][12]]==28 || mask[d[d[k][12]][12]]==2)
    	{hold13=muh[d[k][11]];}else{hold13=muh[d[k][12]];}
    	
    	if(mask[d[k][13]]==28 || mask[d[d[k][13]][13]]==2)
    	{hold14=muh[d[k][10]];}else{hold14=muh[d[k][13]];}
    	
    	if(mask[d[k][14]]==28 || mask[d[d[k][14]][14]]==2)
    	{hold15=muh[d[k][17]];}else{hold15=muh[d[k][14]];}
    	
    	if(mask[d[k][15]]==28 || mask[d[d[k][15]][15]]==2)
    	{hold16=muh[d[k][16]];}else{hold16=muh[d[k][15]];}
    	
    	if(mask[d[k][16]]==28 || mask[d[d[k][16]][16]]==2)
    	{hold17=muh[d[k][15]];}else{hold17=muh[d[k][16]];}
    	
    	if(mask[d[k][17]]==28 || mask[d[d[k][17]][17]]==2)
    	{hold18=muh[d[k][14]];}else{hold18=muh[d[k][17]];}
			
			if(dimensions==3)
            {
            M0=M*(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*muh[k])/(6.0*dt*dt);
			}
			if(dimensions==2)
			{
            M0=M*(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*muh[k])/(6.0*dt*dt);
			}
			
			}
	
	
	
	/*
	else if(mask[k]==1)
	{
		
		
		M0=1.0/3.0*M*(muh[d[k][7]] + muh[d[k][9]] + 4.0*muh[d[k][1]]
	 + 2.0*muh[d[k][2]] + 2.0*muh[d[k][3]] - 10.0*muh[k]);
	}
	
	else if(mask[k]==2)
	{
		
		
		M0=1.0/3.0*M*(muh[d[k][6]] + muh[d[k][8]] + 4.0*muh[d[k][0]]
	+2.0*muh[d[k][2]] + 2.0*muh[d[k][3]] - 10.0*muh[k]);

		
	}
	
	else if(mask[k]==3)
	{
		
		
		M0=1.0/3.0*M*(muh[d[k][8]] + muh[d[k][9]] + 4.0*muh[d[k][3]]
	+2.0*muh[d[k][0]] + 2.0*muh[d[k][1]] - 10.0*muh[k]);

		
	}
	
	else if(mask[k]==4)
	{
		
		
		M0=1.0/3.0*M*(muh[d[k][6]] + muh[d[k][7]] + 4.0*muh[d[k][2]]
	+2.0*muh[d[k][0]] + 2.0*muh[d[k][1]] - 10.0*muh[k]);

		
	}
	
	else if(mask[k]==7)
	{
		
		
		M0=1.0/6.0*M*(muh[d[k][8]] + 2.0*muh[d[k][9]] + muh[d[k][7]]+ 4.0*muh[d[k][3]] + 4.0*muh[d[k][2]]
	+4.0*muh[d[k][0]] + 4.0*muh[d[k][1]] - 20.0*muh[k]);

		
	}
	else if(mask[k]==8)
	{
		

		M0=1.0/6.0*M*(2.0*muh[d[k][8]] + muh[d[k][9]] + muh[d[k][6]]+ 4.0*muh[d[k][3]] + 4.0*muh[d[k][2]]
	+4.0*muh[d[k][0]] + 4.0*muh[d[k][1]] - 20.0*muh[k]);
		
	}
	
	else if(mask[k]==9)
	{
		
		
		M0=1.0/6.0*M*(muh[d[k][6]] + 2.0*muh[d[k][7]] + muh[d[k][9]]+ 4.0*muh[d[k][3]] + 4.0*muh[d[k][2]]
	+4.0*muh[d[k][0]] + 4.0*muh[d[k][1]] - 20.0*muh[k]);

		
	}
	
	else if(mask[k]==10)
	{
		

		M0=1.0/6.0*M*(muh[d[k][8]] + 2.0*muh[d[k][6]] + muh[d[k][7]]+ 4.0*muh[d[k][3]] + 4.0*muh[d[k][2]]
	+4.0*muh[d[k][0]] + 4.0*muh[d[k][1]] - 20.0*muh[k]);
	}
	*/
	
		
	
	/*
	else
	{
	
	if(mask[d[k][0]]==1)
	{
		M1=1.0/6.0*M*(muh[d[d[k][0]][7]]+muh[d[d[k][0]][7]]+muh[d[d[k][0]][9]]+muh[d[d[k][0]][9]]+4.0*muh[d[d[k][0]][1]]
	+4.0*muh[d[d[k][0]][1]]+4.0*muh[d[d[k][0]][2]]+4.0*muh[d[d[k][0]][3]]-20.0*muh[d[k][0]]);
	
	}
	
	if(mask[d[k][6]]==1)
	{
		M7=1.0/6.0*M*(muh[d[d[k][6]][7]]+muh[d[d[k][6]][7]]+muh[d[d[k][6]][9]]+muh[d[d[k][6]][9]]+4.0*muh[d[d[k][6]][1]]
	+4.0*muh[d[d[k][6]][1]]+4.0*muh[d[d[k][6]][2]]+4.0*muh[d[d[k][6]][3]]-20.0*muh[d[k][6]]);
	
	}
	
	if(mask[d[k][8]]==1)
	{
		M9=1.0/6.0*M*(muh[d[d[k][8]][9]]+muh[d[d[k][8]][7]]+muh[d[d[k][8]][7]]+muh[d[d[k][8]][9]]+4.0*muh[d[d[k][8]][1]]
	+4.0*muh[d[d[k][8]][1]]+4.0*muh[d[d[k][8]][2]]+4.0*muh[d[d[k][8]][3]]-20.0*muh[d[k][8]]);
	
	}
	
	if(mask[d[k][7]]==2)
	{
		M8=1.0/6.0*M*(muh[d[d[k][7]][6]]+muh[d[d[k][7]][6]]+muh[d[d[k][7]][8]]+muh[d[d[k][7]][8]]+4.0*muh[d[d[k][7]][0]]
	+4.0*muh[d[d[k][7]][0]]+4.0*muh[d[d[k][7]][2]]+4.0*muh[d[d[k][7]][3]]-20.0*muh[d[k][7]]);
	
	}
	
	if(mask[d[k][9]]==2)
	{
		M10=1.0/6.0*M*(muh[d[d[k][9]][6]]+muh[d[d[k][9]][6]]+muh[d[d[k][9]][8]]+muh[d[d[k][9]][8]]+4.0*muh[d[d[k][9]][0]]
	+4.0*muh[d[d[k][9]][0]]+4.0*muh[d[d[k][9]][2]]+4.0*muh[d[d[k][9]][3]]-20.0*muh[d[k][9]]);
	
	}
	
	if(mask[d[k][1]]==2)
	{
		M2=1.0/6.0*M*(muh[d[d[k][1]][6]]+muh[d[d[k][1]][6]]+muh[d[d[k][1]][8]]+muh[d[d[k][1]][8]]+4.0*muh[d[d[k][1]][0]]
	+4.0*muh[d[d[k][1]][0]]+4.0*muh[d[d[k][1]][2]]+4.0*muh[d[d[k][1]][3]]-20.0*muh[d[k][1]]);
	
	}
	}
	
	*/
	
	hc0[k]=h0[k]-1/(tau[k]+0.5)*(h0[k]-heq0)+dt*(0.5*M0*gamma0-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma0);
	hc1[k]=h1[k]-1/(tau[k]+0.5)*(h1[k]-heq1)+dt*(0.5*M0*gamma1-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma1+FhM1*gamma1);
	hc2[k]=h2[k]-1/(tau[k]+0.5)*(h2[k]-heq2)+dt*(0.5*M0*gamma2-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma2+FhM2*gamma2);
	hc3[k]=h3[k]-1/(tau[k]+0.5)*(h3[k]-heq3)+dt*(0.5*M0*gamma3-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma3+FhM3*gamma3);
	hc4[k]=h4[k]-1/(tau[k]+0.5)*(h4[k]-heq4)+dt*(0.5*M0*gamma4-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma4+FhM4*gamma4);
	hc7[k]=h7[k]-1/(tau[k]+0.5)*(h7[k]-heq7)+dt*(0.5*M0*gamma7-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma7+FhM7*gamma7);
	hc8[k]=h8[k]-1/(tau[k]+0.5)*(h8[k]-heq8)+dt*(0.5*M0*gamma8-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma8+FhM8*gamma8);
	hc9[k]=h9[k]-1/(tau[k]+0.5)*(h9[k]-heq9)+dt*(0.5*M0*gamma9-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma9+FhM9*gamma9);
	hc10[k]=h10[k]-1/(tau[k]+0.5)*(h10[k]-heq10)+dt*(0.5*M0*gamma10-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma10+FhM10*gamma10);

	hc5[k]=h5[k]-1/(tau[k]+0.5)*(h5[k]-heq5)+dt*(0.5*M0*gamma5-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma5+FhM5*gamma5);
	hc6[k]=h6[k]-1/(tau[k]+0.5)*(h6[k]-heq6)+dt*(0.5*M0*gamma6-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma6+FhM6*gamma6);
	hc11[k]=h11[k]-1/(tau[k]+0.5)*(h11[k]-heq11)+dt*(0.5*M0*gamma11-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma11+FhM11*gamma11);
	hc12[k]=h12[k]-1/(tau[k]+0.5)*(h12[k]-heq12)+dt*(0.5*M0*gamma12-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma12+FhM12*gamma12);
	hc13[k]=h13[k]-1/(tau[k]+0.5)*(h13[k]-heq13)+dt*(0.5*M0*gamma13-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma13+FhM13*gamma13);
	hc14[k]=h14[k]-1/(tau[k]+0.5)*(h14[k]-heq14)+dt*(0.5*M0*gamma14-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma14+FhM14*gamma14);
	hc15[k]=h15[k]-1/(tau[k]+0.5)*(h15[k]-heq15)+dt*(0.5*M0*gamma15-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma15+FhM15*gamma15);
	hc16[k]=h16[k]-1/(tau[k]+0.5)*(h16[k]-heq16)+dt*(0.5*M0*gamma16-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma16+FhM16*gamma16);
	hc17[k]=h17[k]-1/(tau[k]+0.5)*(h17[k]-heq17)+dt*(0.5*M0*gamma17-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma17+FhM17*gamma17);
	hc18[k]=h18[k]-1/(tau[k]+0.5)*(h18[k]-heq18)+dt*(0.5*M0*gamma18-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma18+FhM18*gamma18);


	
}	
