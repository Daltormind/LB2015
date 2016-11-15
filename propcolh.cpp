//propcolh

#include "wet.h"

void wet::propcolh()
{

	
	if(mask[k]==0 || mask[k]==2)
	{
		if(dimensions==2)
		{
		M0=M*(mu[d[6]]+mu[d[7]]+mu[d[8]]+mu[d[9]]+4.0*mu[d[0]]
		      +4.0*mu[d[1]]+4.0*mu[d[2]]+4.0*mu[d[3]]-20.0*mu[k])/(6.0*dt*dt);
		
		if(C[k]<0)
		  {
		    M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k] )/kappa;
		    //  cout << "st=" << st <<  " k=" << k << " C=" << C[k] << "MO=" << M0 << " mu="<< mu[k]  << " Have entered loop in propcol" << endl; 
		  }
		
		}
		if(dimensions==3)
		{
		  M0=M*(mu[d[6]]+mu[d[7]]+mu[d[8]]+mu[d[9]]+mu[d[10]]+mu[d[11]]+mu[d[12]]+mu[d[13]]+mu[d[14]]+mu[d[15]]+mu[d[16]]+mu[d[17]]+2.0*(mu[d[0]]+mu[d[1]]+mu[d[2]]+mu[d[3]]+mu[d[4]]+mu[d[5]])-24.0*mu[k])/(6.0*dt*dt);

		  if(C[k]<0)
		    {
		      M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k] )/kappa;
		    }

		}
	}

	/*
	else if (mask[k]==1)
			{
			
				
				if(mask[d[0]]==28)
    	{hold1=mu[d[1]];}else{hold1=mu[d[0]];}
    	
    	if(mask[d[1]]==28)
    	{hold2=mu[d[0]];}else{hold2=mu[d[1]];}
    	
    	if(mask[d[2]]==28)
    	{hold3=mu[d[2]];}else{hold3=mu[d[2]];}
    	
    	if(mask[d[3]]==28)
    	{hold4=mu[d[3]];}else{hold4=mu[d[3]];}
    	
    	if(mask[d[4]]==28)
    	{hold5=mu[d[4]];}else{hold5=mu[d[4]];}
    	
    	if(mask[d[5]]==28)
    	{hold6=mu[d[5]];}else{hold6=mu[d[5]];}
    	
    	if(mask[d[6]]==28)
    	{hold7=mu[d[9]];}else{hold7=mu[d[6]];}
    	
    	if(mask[d[7]]==28)
    	{hold8=mu[d[8]];}else{hold8=mu[d[7]];}
    	
    	if(mask[d[8]]==28)
    	{hold9=mu[d[7]];}else{hold9=mu[d[8]];}
    	
    	if(mask[d[9]]==28)
    	{hold10=mu[d[6]];}else{hold10=mu[d[9]];}
    	
    	if(mask[d[10]]==28)
    	{hold11=mu[d[13]];}else{hold11=mu[d[10]];}
    	
    	if(mask[d[11]]==28)
    	{hold12=mu[d[12]];}else{hold12=mu[d[11]];}
    	
    	if(mask[d[12]]==28)
    	{hold13=mu[d[11]];}else{hold13=mu[d[12]];}
    	
    	if(mask[d[13]]==28)
    	{hold14=mu[d[10]];}else{hold14=mu[d[13]];}
    	
    	if(mask[d[14]]==28)
    	{hold15=mu[d[17]];}else{hold15=mu[d[14]];}
    	
    	if(mask[d[15]]==28)
    	{hold16=mu[d[16]];}else{hold16=mu[d[15]];}
    	
    	if(mask[d[16]]==28)
    	{hold17=mu[d[15]];}else{hold17=mu[d[16]];}
    	
    	if(mask[d[17]]==28)
    	{hold18=mu[d[14]];}else{hold18=mu[d[17]];}
			
			if(dimensions==3)
            {
            M0=M*(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*mu[k])/(6.0*dt*dt);
	    
	    if(C[k]<0)
	      {
		M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k] )/kappa;
	      }
	    
			}
			if(dimensions==2)
			{
			  M0=M*(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*mu[k])/(6.0*dt*dt);
			  
			  if(C[k]<0)

			    {
			      M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k] )/kappa;
			    }
			  
	}
			
			}
	*/
else if (mask[k]==3)
			{
			
				
				if(mask[d[0]]==28)
    	{hold1=mu[d[1]];}else{hold1=mu[d[0]];}
    	
    	if(mask[d[1]]==28)
    	{hold2=mu[d[0]];}else{hold2=mu[d[1]];}
    	
    	if(mask[d[2]]==28)
    	{hold3=mu[d[2]];}else{hold3=mu[d[2]];}
    	
    	if(mask[d[3]]==28)
    	{hold4=mu[d[3]];}else{hold4=mu[d[3]];}
    	
    	if(mask[d[4]]==28)
    	{hold5=mu[d[4]];}else{hold5=mu[d[4]];}
    	
    	if(mask[d[5]]==28)
    	{hold6=mu[d[5]];}else{hold6=mu[d[5]];}
    	
    	if(mask[d[6]]==28 || mask[d[6]]==3)
    	{hold7=mu[d[9]];}else{hold7=mu[d[6]];}
    	
    	if(mask[d[7]]==28 || mask[d[7]]==3)
    	{hold8=mu[d[8]];}else{hold8=mu[d[7]];}
    	
    	if(mask[d[8]]==28 || mask[d[8]]==3)
    	{hold9=mu[d[7]];}else{hold9=mu[d[8]];}
    	
    	if(mask[d[9]]==28 || mask[d[9]]==3)
    	{hold10=mu[d[6]];}else{hold10=mu[d[9]];}
    	
    	if(mask[d[10]]==28 || mask[d[10]]==3)
    	{hold11=mu[d[13]];}else{hold11=mu[d[10]];}
    	
    	if(mask[d[11]]==28 || mask[d[11]]==3)
    	{hold12=mu[d[12]];}else{hold12=mu[d[11]];}
    	
    	if(mask[d[12]]==28 || mask[d[12]]==3)
    	{hold13=mu[d[11]];}else{hold13=mu[d[12]];}
    	
    	if(mask[d[13]]==28 || mask[d[13]]==3)
    	{hold14=mu[d[10]];}else{hold14=mu[d[13]];}
    	
    	if(mask[d[14]]==28 || mask[d[14]]==3)
    	{hold15=mu[d[17]];}else{hold15=mu[d[14]];}
    	
    	if(mask[d[15]]==28 || mask[d[15]]==3)
    	{hold16=mu[d[16]];}else{hold16=mu[d[15]];}
    	
    	if(mask[d[16]]==28 || mask[d[16]]==3)
    	{hold17=mu[d[15]];}else{hold17=mu[d[16]];}
    	
    	if(mask[d[17]]==28 || mask[d[17]]==3)
    	{hold18=mu[d[14]];}else{hold18=mu[d[17]];}
			
			if(dimensions==3)
            {
            M0=M*(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*mu[k])/(6.0*dt*dt);
	    
	    if(C[k]<0)
	      {
		M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k] )/kappa;
	      }
	    
			}
			if(dimensions==2)
			{
			  M0=M*(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*mu[k])/(6.0*dt*dt);
			  
			  if(C[k]<0)

			    {
			      M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k] )/kappa;
			    }
			  
	}
			
			}
	
	else if (mask[k]==1)
			{
			
				
				if(mask[d[0]]==28)
    	{hold1=mu[d[1]];}else{hold1=mu[d[0]];}
    	
    	if(mask[d[1]]==28)
    	{hold2=mu[d[0]];}else{hold2=mu[d[1]];}
    	
    	if(mask[d[2]]==28)
    	{hold3=mu[d[2]];}else{hold3=mu[d[2]];}
    	
    	if(mask[d[3]]==28)
    	{hold4=mu[d[3]];}else{hold4=mu[d[3]];}
    	
    	if(mask[d[4]]==28)
    	{hold5=mu[d[4]];}else{hold5=mu[d[4]];}
    	
    	if(mask[d[5]]==28)
    	{hold6=mu[d[5]];}else{hold6=mu[d[5]];}
    	
    	if(mask[d[6]]==28)
    	{hold7=mu[d[9]];
	  if(mask[d[9]]==28){hold7=mu[k];}
	}else{hold7=mu[d[6]];}
    	
    	if(mask[d[7]]==28)
    	{hold8=mu[d[8]];
	  if(mask[d[8]]==28){hold8=mu[k];}
}else{hold8=mu[d[7]];}
    	
    	if(mask[d[8]]==28)
    	{hold9=mu[d[7]];
	  if(mask[d[7]]==28){hold9=mu[k];}
}else{hold9=mu[d[8]];}
    	
    	if(mask[d[9]]==28)
    	{hold10=mu[d[6]];
	  if(mask[d[6]]==28){hold10=mu[k];}
}else{hold10=mu[d[9]];}
    	
    	if(mask[d[10]]==28)
    	{hold11=mu[d[13]];
	  if(mask[d[13]]==28){hold11=mu[k];}
}else{hold11=mu[d[10]];}
    	
    	if(mask[d[11]]==28)
    	{hold12=mu[d[12]];
	  if(mask[d[12]]==28){hold12=mu[k];}
}else{hold12=mu[d[11]];}
    	
    	if(mask[d[12]]==28)
    	{hold13=mu[d[11]];
	  if(mask[d[11]]==28){hold13=mu[k];}
}else{hold13=mu[d[12]];}
    	
    	if(mask[d[13]]==28)
    	{hold14=mu[d[10]];
	  if(mask[d[10]]==28){hold14=mu[k];}
}else{hold14=mu[d[13]];}
    	
    	if(mask[d[14]]==28)
    	{hold15=mu[d[17]];
	  if(mask[d[17]]==28){hold15=mu[k];}
}else{hold15=mu[d[14]];}
    	
    	if(mask[d[15]]==28)
    	{hold16=mu[d[16]];
	  if(mask[d[16]]==28){hold16=mu[k];}
}else{hold16=mu[d[15]];}
    	
    	if(mask[d[16]]==28)
    	{hold17=mu[d[15]];
	  if(mask[d[15]]==28){hold17=mu[k];}
}else{hold17=mu[d[16]];}
    	
    	if(mask[d[17]]==28)
    	{hold18=mu[d[14]];
	  if(mask[d[14]]==28){hold18=mu[k];}
}else{hold18=mu[d[17]];}
			
			if(dimensions==3)
            {
            M0=M*(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*mu[k])/(6.0*dt*dt);
	    
	    if(C[k]<0)
	      {
		M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k] )/kappa;
	      }
	    
			}
			if(dimensions==2)
			{
			  M0=M*(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*mu[k])/(6.0*dt*dt);
			  
			  if(C[k]<0)

			    {
			      M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k] )/kappa;
			    }
			  
			}
			
			}

	
	
	
	/*
	else if(mask[k]==1)
	{
		
		
		M0=1.0/3.0*M*(mu[d[7]] + mu[d[9]] + 4.0*mu[d[1]]
	 + 2.0*mu[d[2]] + 2.0*mu[d[3]] - 10.0*mu[k]);
	}
	
	else if(mask[k]==2)
	{
		
		
		M0=1.0/3.0*M*(mu[d[6]] + mu[d[8]] + 4.0*mu[d[0]]
	+2.0*mu[d[2]] + 2.0*mu[d[3]] - 10.0*mu[k]);

		
	}
	
	else if(mask[k]==3)
	{
		
		
		M0=1.0/3.0*M*(mu[d[8]] + mu[d[9]] + 4.0*mu[d[3]]
	+2.0*mu[d[0]] + 2.0*mu[d[1]] - 10.0*mu[k]);

		
	}
	
	else if(mask[k]==4)
	{
		
		
		M0=1.0/3.0*M*(mu[d[6]] + mu[d[7]] + 4.0*mu[d[2]]
	+2.0*mu[d[0]] + 2.0*mu[d[1]] - 10.0*mu[k]);

		
	}
	
	else if(mask[k]==7)
	{
		
		
		M0=1.0/6.0*M*(mu[d[8]] + 2.0*mu[d[9]] + mu[d[7]]+ 4.0*mu[d[3]] + 4.0*mu[d[2]]
	+4.0*mu[d[0]] + 4.0*mu[d[1]] - 20.0*mu[k]);

		
	}
	else if(mask[k]==8)
	{
		

		M0=1.0/6.0*M*(2.0*mu[d[8]] + mu[d[9]] + mu[d[6]]+ 4.0*mu[d[3]] + 4.0*mu[d[2]]
	+4.0*mu[d[0]] + 4.0*mu[d[1]] - 20.0*mu[k]);
		
	}
	
	else if(mask[k]==9)
	{
		
		
		M0=1.0/6.0*M*(mu[d[6]] + 2.0*mu[d[7]] + mu[d[9]]+ 4.0*mu[d[3]] + 4.0*mu[d[2]]
	+4.0*mu[d[0]] + 4.0*mu[d[1]] - 20.0*mu[k]);

		
	}
	
	else if(mask[k]==10)
	{
		

		M0=1.0/6.0*M*(mu[d[8]] + 2.0*mu[d[6]] + mu[d[7]]+ 4.0*mu[d[3]] + 4.0*mu[d[2]]
	+4.0*mu[d[0]] + 4.0*mu[d[1]] - 20.0*mu[k]);
	}
	*/
	
		
	
	/*
	else
	{
	
	if(mask[d[0]]==1)
	{
		M1=1.0/6.0*M*(mu[d[d[0]][7]]+mu[d[d[0]][7]]+mu[d[d[0]][9]]+mu[d[d[0]][9]]+4.0*mu[d[d[0]][1]]
	+4.0*mu[d[d[0]][1]]+4.0*mu[d[d[0]][2]]+4.0*mu[d[d[0]][3]]-20.0*mu[d[0]]);
	
	}
	
	if(mask[d[6]]==1)
	{
		M7=1.0/6.0*M*(mu[d[d[6]][7]]+mu[d[d[6]][7]]+mu[d[d[6]][9]]+mu[d[d[6]][9]]+4.0*mu[d[d[6]][1]]
	+4.0*mu[d[d[6]][1]]+4.0*mu[d[d[6]][2]]+4.0*mu[d[d[6]][3]]-20.0*mu[d[6]]);
	
	}
	
	if(mask[d[8]]==1)
	{
		M9=1.0/6.0*M*(mu[d[d[8]][9]]+mu[d[d[8]][7]]+mu[d[d[8]][7]]+mu[d[d[8]][9]]+4.0*mu[d[d[8]][1]]
	+4.0*mu[d[d[8]][1]]+4.0*mu[d[d[8]][2]]+4.0*mu[d[d[8]][3]]-20.0*mu[d[8]]);
	
	}
	
	if(mask[d[7]]==2)
	{
		M8=1.0/6.0*M*(mu[d[d[7]][6]]+mu[d[d[7]][6]]+mu[d[d[7]][8]]+mu[d[d[7]][8]]+4.0*mu[d[d[7]][0]]
	+4.0*mu[d[d[7]][0]]+4.0*mu[d[d[7]][2]]+4.0*mu[d[d[7]][3]]-20.0*mu[d[7]]);
	
	}
	
	if(mask[d[9]]==2)
	{
		M10=1.0/6.0*M*(mu[d[d[9]][6]]+mu[d[d[9]][6]]+mu[d[d[9]][8]]+mu[d[d[9]][8]]+4.0*mu[d[d[9]][0]]
	+4.0*mu[d[d[9]][0]]+4.0*mu[d[d[9]][2]]+4.0*mu[d[d[9]][3]]-20.0*mu[d[9]]);
	
	}
	
	if(mask[d[1]]==2)
	{
		M2=1.0/6.0*M*(mu[d[d[1]][6]]+mu[d[d[1]][6]]+mu[d[d[1]][8]]+mu[d[d[1]][8]]+4.0*mu[d[d[1]][0]]
	+4.0*mu[d[d[1]][0]]+4.0*mu[d[d[1]][2]]+4.0*mu[d[d[1]][3]]-20.0*mu[d[1]]);
	
	}
	}
	
	*/
	
	hc0[k]=/*h0[k]-1/(tau[k]+0.5)*(h0[k]-heq0)*/heq0+dt*(0.5*M0*gamma0-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma0);
	hc1[k]=/*h1[k]-1/(tau[k]+0.5)*(h1[k]-heq1)*/heq1+dt*(0.5*M0*gamma1-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma1+FhM1*gamma1);
	hc2[k]=/*h2[k]-1/(tau[k]+0.5)*(h2[k]-heq2)*/heq2+dt*(0.5*M0*gamma2-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma2+FhM2*gamma2);
	hc3[k]=/*h3[k]-1/(tau[k]+0.5)*(h3[k]-heq3)*/heq3+dt*(0.5*M0*gamma3-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma3+FhM3*gamma3);
	hc4[k]=/*h4[k]-1/(tau[k]+0.5)*(h4[k]-heq4)*/heq4+dt*(0.5*M0*gamma4-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma4+FhM4*gamma4);
	hc7[k]=/*h7[k]-1/(tau[k]+0.5)*(h7[k]-heq7)*/heq7+dt*(0.5*M0*gamma7-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma7+FhM7*gamma7);
	hc8[k]=/*h8[k]-1/(tau[k]+0.5)*(h8[k]-heq8)*/heq8+dt*(0.5*M0*gamma8-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma8+FhM8*gamma8);
	hc9[k]=/*h9[k]-1/(tau[k]+0.5)*(h9[k]-heq9)*/heq9+dt*(0.5*M0*gamma9-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma9+FhM9*gamma9);
	hc10[k]=/*h10[k]-1/(tau[k]+0.5)*(h10[k]-heq10)*/heq10+dt*(0.5*M0*gamma10-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma10+FhM10*gamma10);

	hc5[k]=/*h5[k]-1/(tau[k]+0.5)*(h5[k]-heq5)*/heq5+dt*(0.5*M0*gamma5-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma5+FhM5*gamma5);
	hc6[k]=/*h6[k]-1/(tau[k]+0.5)*(h6[k]-heq6)*/heq6+dt*(0.5*M0*gamma6-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma6+FhM6*gamma6);
	hc11[k]=/*h11[k]-1/(tau[k]+0.5)*(h11[k]-heq11)*/heq11+dt*(0.5*M0*gamma11-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma11+FhM11*gamma11);
	hc12[k]=/*h12[k]-1/(tau[k]+0.5)*(h12[k]-heq12)*/heq12+dt*(0.5*M0*gamma12-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma12+FhM12*gamma12);
	hc13[k]=/*h13[k]-1/(tau[k]+0.5)*(h13[k]-heq13)*/heq13+dt*(0.5*M0*gamma13-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma13+FhM13*gamma13);
	hc14[k]=/*h14[k]-1/(tau[k]+0.5)*(h14[k]-heq14)*/heq14+dt*(0.5*M0*gamma14-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma14+FhM14*gamma14);
	hc15[k]=/*h15[k]-1/(tau[k]+0.5)*(h15[k]-heq15)*/heq15+dt*(0.5*M0*gamma15-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma15+FhM15*gamma15);
	hc16[k]=/*h16[k]-1/(tau[k]+0.5)*(h16[k]-heq16)*/heq16+dt*(0.5*M0*gamma16-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma16+FhM16*gamma16);
	hc17[k]=/*h17[k]-1/(tau[k]+0.5)*(h17[k]-heq17)*/heq17+dt*(0.5*M0*gamma17-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma17+FhM17*gamma17);
	hc18[k]=/*h18[k]-1/(tau[k]+0.5)*(h18[k]-heq18)*/heq18+dt*(0.5*M0*gamma18-(ux[k]*FhMx+uy[k]*FhMy+uz[k]*FhMz)*gamma18+FhM18*gamma18);


	
}	
