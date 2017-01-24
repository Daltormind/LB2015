

#include "wet.h"

void wet::setwallnodes()
{
  //computecoordinates(k);
	gamma0 = t0*(1.0 - 1.5*(ux[k]*ux[k] + uy[k]*uy[k] + uz[k]*uz[k]));
  
  gamma1 = t1*(1.0 + 3.0*ux[k] + 3.0*ux[k]*ux[k] - 1.5*uy[k]*uy[k] - 1.5*uz[k]*uz[k]);
  
  gamma3 = t1*(1.0+3.0*uy[k]+3.0*uy[k]*uy[k]-1.5*ux[k]*ux[k] - 1.5*uz[k]*uz[k]);
  
  gamma2 = t1*(1.0-3.0*ux[k]+3.0*ux[k]*ux[k]-1.5*uy[k]*uy[k] - 1.5*uz[k]*uz[k]);
  
  gamma4 = t1*(1.0-3.0*uy[k]+3.0*uy[k]*uy[k]-1.5*ux[k]*ux[k] - 1.5*uz[k]*uz[k]);
  
  gamma5 = t1*(1.0 + 3.0*uz[k] + 3.0*uz[k]*uz[k] - 1.5*uy[k]*uy[k] - 1.5*ux[k]*ux[k]);
  
  gamma6 = t1*(1.0 - 3.0*uz[k] + 3.0*uz[k]*uz[k] - 1.5*uy[k]*uy[k] - 1.5*ux[k]*ux[k]);
  
  gamma7 = t2*(1.0+3.0*(ux[k]+uy[k]+ux[k]*ux[k]+uy[k]*uy[k])+9.0*ux[k]*uy[k] - 1.5*uz[k]*uz[k]);
  
  gamma8 = t2*(1.0+3.0*(-ux[k]+uy[k]+ux[k]*ux[k]+uy[k]*uy[k])-9.0*ux[k]*uy[k] - 1.5*uz[k]*uz[k]);
  
  gamma10 = t2*(1.0+3.0*(-ux[k]-uy[k]+ux[k]*ux[k]+uy[k]*uy[k])+9.0*ux[k]*uy[k] - 1.5*uz[k]*uz[k]);
  
  gamma9 = t2*(1.0+3.0*(ux[k]-uy[k]+ux[k]*ux[k]+uy[k]*uy[k])-9.0*ux[k]*uy[k] - 1.5*uz[k]*uz[k]);
	
  gamma11 = t2*(1.0+3.0*(uy[k]+uz[k]+uy[k]*uy[k]+uz[k]*uz[k])+9.0*uy[k]*uz[k] - 1.5*ux[k]*ux[k]);

  gamma12 = t2*(1.0+3.0*(-uy[k]+uz[k]+uy[k]*uy[k]+uz[k]*uz[k])-9.0*uy[k]*uz[k] - 1.5*ux[k]*ux[k]);

  gamma13 = t2*(1.0+3.0*(uy[k]-uz[k]+uy[k]*uy[k]+uz[k]*uz[k])-9.0*uy[k]*uz[k] - 1.5*ux[k]*ux[k]);

  gamma14 = t2*(1.0+3.0*(-uy[k]-uz[k]+uy[k]*uy[k]+uz[k]*uz[k])+9.0*uy[k]*uz[k] - 1.5*ux[k]*ux[k]);

  gamma15 = t2*(1.0+3.0*(ux[k]+uz[k]+ux[k]*ux[k]+uz[k]*uz[k])+9.0*ux[k]*uz[k] - 1.5*uy[k]*uy[k]);
	
  gamma16 = t2*(1.0+3.0*(-ux[k]+uz[k]+ux[k]*ux[k]+uz[k]*uz[k])-9.0*ux[k]*uz[k] - 1.5*uy[k]*uy[k]);

  gamma17 = t2*(1.0+3.0*(ux[k]-uz[k]+ux[k]*ux[k]+uz[k]*uz[k])-9.0*ux[k]*uz[k] - 1.5*uy[k]*uy[k]);

  gamma18 = t2*(1.0+3.0*(-ux[k]-uz[k]+ux[k]*ux[k]+uz[k]*uz[k])+9.0*ux[k]*uz[k] - 1.5*uy[k]*uy[k]);
			

	if(mask[k]==0 || mask[k]==2)
	{	
		if(dimensions==2)
		{
		M0=M*(mu[d[6]]+mu[d[7]]+mu[d[8]]+mu[d[9]]+4.0*mu[d[0]]
		      +4.0*mu[d[1]]+4.0*mu[d[2]]+4.0*mu[d[3]]-20.0*mu[k])/(6.0*dt*dt);
		if(C[k]<0)
		  {
		     M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k])/kappa;
		     // cout << "st=" << st << " k=" << k << " " << " C=" << C[k] << "M0=" << M0 << " have entered loop " << endl;
		  }

		}
		if(dimensions==3)
		{
		M0=M*(mu[d[6]]+mu[d[7]]+mu[d[8]]+mu[d[9]]+mu[d[10]]+mu[d[11]]+mu[d[12]]+mu[d[13]]+mu[d[14]]+mu[d[15]]+mu[d[16]]+mu[d[17]]+2.0*(mu[d[0]]+mu[d[1]]+mu[d[2]]+mu[d[3]]+mu[d[4]]+mu[d[5]])-24.0*mu[k])/(6.0*dt*dt);
		
		if(C[k]<0)
		  {
		    M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k])/kappa;
		  }
		}
	}
	
			else if (mask[k]==3)
			{
			
				
		if(mask[d[0]]==28)
    	{
    	hold1=mu[d[1]];
		h2[k]=h1[k];
		g2[k]=g1[k];
    	}
    	else{hold1=mu[d[0]];}
    	
    	if(mask[d[1]]==28)
    	{
    	hold2=mu[d[0]];
		h1[k]=h2[k];
		g1[k]=g2[k];
    	}
    	else{hold2=mu[d[1]];}
    	if(mask[d[2]]==28)
    	{
    	hold3=mu[d[3]];
	    h4[k]=h3[k];
		g4[k]=g3[k];
    	}
    	else{hold3=mu[d[2]];}
    	if(mask[d[3]]==28)
    	{
    	hold4=mu[d[2]];
		h3[k]=h4[k];
    	g3[k]=g4[k];
    	}
    	else{hold4=mu[d[3]];}
    	if(mask[d[4]]==28)
    	{
    	hold5=mu[d[5]];
		h6[k]=h5[k];
		g6[k]=g5[k];
    	}
    	else{hold5=mu[d[4]];}
    	if(mask[d[5]]==28)
    	{
    	hold6=mu[d[4]];
		h5[k]=h6[k];
		g5[k]=g6[k];
    	}
    	else{hold6=mu[d[5]];}
    	if(mask[d[6]]==28 || mask[d[6]]==3)
    	{
    	hold7=mu[d[9]];
		h10[k]=h7[k];
		g10[k]=g7[k];
    	}
    	else{hold7=mu[d[6]];}
    	if(mask[d[7]]==28 || mask[d[7]]==3)
    	{
    	hold8=mu[d[8]];
		h9[k]=h8[k];
		g9[k]=g8[k];
    	}
    	else{hold8=mu[d[7]];}
    	if(mask[d[8]]==28 || mask[d[8]]==3)
    	{
    	hold9=mu[d[7]];
		h8[k]=h9[k];
		g8[k]=g9[k];
    	}
    	else{hold9=mu[d[8]];}
    	if(mask[d[9]]==28 || mask[d[9]]==3)
    	{
    	hold10=mu[d[6]];
		h7[k]=h10[k];
		g7[k]=g10[k];
    	}
    	else{hold10=mu[d[9]];}
    	if(mask[d[10]]==28 ||  mask[d[10]]==3)
    	{
    	hold11=mu[d[13]];
		h14[k]=h11[k];
		g14[k]=g11[k];
	
    	}
    	else{hold11=mu[d[10]];}
    	if(mask[d[11]]==28 || mask[d[11]]==3)
    	{
    	hold12=mu[d[12]];
		h13[k]=h12[k];
		g13[k]=g12[k];
    	}
    	else{hold12=mu[d[11]];}
    	if(mask[d[12]]==28 || mask[d[12]]==3)
    	{
    	hold13=mu[d[11]];
		h12[k]=h13[k];
		g12[k]=g13[k];
    	}
    	else{hold13=mu[d[12]];}
    	if(mask[d[13]]==28 || mask[d[13]]==3)
    	{
    	hold14=mu[d[10]];
		h11[k]=h14[k];
		g11[k]=g14[k];
	       
    	}
    	else{hold14=mu[d[13]];}
    	if(mask[d[14]]==28 || mask[d[14]]==3)
    	{
    	hold15=mu[d[17]];
		h18[k]=h15[k];
		g18[k]=g15[k];
    	}
    	else{hold15=mu[d[14]];}
    	if(mask[d[15]]==28 || mask[d[15]]==3)
    	{
    	hold16=mu[d[16]];
		h17[k]=h16[k];
		g17[k]=g16[k];
    	}
    	else{hold16=mu[d[15]];}
    	if(mask[d[16]]==28 || mask[d[16]]==3)
    	{
    	hold17=mu[d[15]];
		h16[k]=h17[k];
		g16[k]=g17[k];
    	}
    	else{hold17=mu[d[16]];}
    	if(mask[d[17]]==28 || mask[d[17]]==3)
    	{
    	hold18=mu[d[14]];
		h15[k]=h18[k];
		g15[k]=g18[k];
    	}
    	else{hold18=mu[d[17]];}
			
			if(dimensions==3)
            {
            M0=M*(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*mu[k])/(6.0*dt*dt);
	    
	    if(C[k]<0)
	      {
		 M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k])/kappa;
		 }
	    
			}
			if(dimensions==2)
			{
            M0=M*(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*mu[k])/(6.0*dt*dt);
	    
	    if(C[k]<0)
	      {
		 M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k])/kappa;
	      }
	    
			}
			
			}
	
	else if (mask[k]==1)
			{
			
				
		if(mask[d[0]]==28)
    	{
    	hold1=mu[d[1]];
		h2[k]=h1[k];
		g2[k]=g1[k];
		
	      

    	}
    	else{hold1=mu[d[0]];}
    	
    	if(mask[d[1]]==28)
    	{
    	hold2=mu[d[0]];
		h1[k]=h2[k];
		g1[k]=g2[k];
    	}
    	else{hold2=mu[d[1]];}
    	if(mask[d[2]]==28)
    	{
    	hold3=mu[d[3]];
	    h4[k]=h3[k];
		g4[k]=g3[k];
    	}
    	else{hold3=mu[d[2]];}
    	if(mask[d[3]]==28)
    	{
    	hold4=mu[d[2]];
		h3[k]=h4[k];
    	g3[k]=g4[k];
    	}
    	else{hold4=mu[d[3]];}
    
	if(mask[d[4]]==28)
    	{
    	hold5=mu[d[5]];
		h6[k]=h5[k];
		g6[k]=g5[k];
    	}
    	else{hold5=mu[d[4]];}
  
  	if(mask[d[5]]==28)
    	{
    	hold6=mu[d[4]];
		h5[k]=h6[k];
		g5[k]=g6[k];
    	}
    	else{hold6=mu[d[5]];}

    	if(mask[d[6]]==28 )
    	{
    	hold7=mu[d[9]];
		h10[k]=h7[k];
		g10[k]=g7[k];
		
		if(mask[d[9]]==28)
		  {
		    hold7=mu[k];
		    h10[k]=hc10[k];
		    g10[k]=gc10[k];
		  }
		

  	}
    	else{hold7=mu[d[6]];}

    	if(mask[d[7]]==28 )
    	{
    	hold8=mu[d[8]];
		h9[k]=h8[k];
		g9[k]=g8[k];
		
		
		if(mask[d[8]]==28)
		  {
		    hold8=mu[k];
		    h9[k]=hc9[k];
		    g9[k]=gc9[k];
		  }
		

	}
    	else{hold8=mu[d[7]];}
    	
	if(mask[d[8]]==28 )
    	{
    	hold9=mu[d[7]];
		h8[k]=h9[k];
		g8[k]=g9[k];

		
		if(mask[d[7]]==28)
		  {
		    hold9=mu[k];
		    h8[k]=hc8[k];
		    g8[k]=gc8[k];
		  }
		

    	}
    	else{hold9=mu[d[8]];}
    
	if(mask[d[9]]==28 )
    	{
    	hold10=mu[d[6]];
		h7[k]=h10[k];
		g7[k]=g10[k];

		
		if(mask[d[6]]==28)
		  {
		    hold10=mu[k];
		    h7[k]=hc7[k];
		    g7[k]=gc7[k];
		  }
		


    	}
    	else{hold10=mu[d[9]];}
 
   	if(mask[d[10]]==28 )
    	{
    	hold11=mu[d[13]];
		h14[k]=h11[k];
		g14[k]=g11[k];
		
		
		if(mask[d[13]]==28)
		  {
		    hold11=mu[k];
		    h14[k]=hc11[k];
		    g14[k]=gc11[k];
		  }
		
    	}
    	else{hold11=mu[d[10]];}
    	
	if(mask[d[11]]==28 )
    	{
    	hold12=mu[d[12]];
		h13[k]=h12[k];
		g13[k]=g12[k];
		
		
		if(mask[d[12]]==28)
		  {
		    hold12=mu[k];
		    h13[k]=hc13[k];
		    g13[k]=gc13[k];
		  }
		
	}
    	else{hold12=mu[d[11]];}

    	if(mask[d[12]]==28 )
    	{
    	hold13=mu[d[11]];
		h12[k]=h13[k];
		g12[k]=g13[k];
  
		
		if(mask[d[11]]==28)
		  {
		    hold13=mu[k];
		    h12[k]=hc12[k];
		    g12[k]=gc12[k];
		  }
		
  	}
    	else{hold13=mu[d[12]];}

    	if(mask[d[13]]==28 )
    	{
    	hold14=mu[d[10]];
		h11[k]=h14[k];
		g11[k]=g14[k];
	       
		
		if(mask[d[10]]==28)
		  {
		    hold14=mu[k];
		    h11[k]=hc11[k];
		    g11[k]=gc11[k];
		  }
		
		
    	}
    	else{hold14=mu[d[13]];}

    	if(mask[d[14]]==28 )
    	{
    	hold15=mu[d[17]];
		h18[k]=h15[k];
		g18[k]=g15[k];
    
		
		if(mask[d[17]]==28)
		  {
		    hold15=mu[k];
		    h18[k]=hc18[k];
		    g18[k]=gc18[k];
		  }
		
	}
    	else{hold15=mu[d[14]];}

    	if(mask[d[15]]==28 )
    	{
    	hold16=mu[d[16]];
		h17[k]=h16[k];
		g17[k]=g16[k];
    	
		
		if(mask[d[16]]==28)
		  {
		    hold16=mu[k];
		    h17[k]=hc17[k];
		    g17[k]=gc17[k];
		  }
		
}
    	else{hold16=mu[d[15]];}
    
	if(mask[d[16]]==28 )
    	{
    	hold17=mu[d[15]];
		h16[k]=h17[k];
		g16[k]=g17[k];
		
		
		if(mask[d[15]]==28)
		  {
		    hold17=mu[k];
		    h16[k]=hc16[k];
		    g16[k]=gc16[k];
		  }
		

    	}
    	else{hold17=mu[d[16]];}

    	if(mask[d[17]]==28 )
    	{
    	hold18=mu[d[14]];
		h15[k]=h18[k];
		g15[k]=g18[k];

		
		if(mask[d[14]]==28)
		  {
		    hold18=mu[k];
		    h15[k]=hc15[k];
		    g15[k]=gc15[k];
		  }
		
    	}
    	else{hold18=mu[d[17]];}
			
			if(dimensions==3)
            {
            M0=M*(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*mu[k])/(6.0*dt*dt);
	    
	    if(C[k]<0)
	      {
		 M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k])/kappa;
	      }
	    
			}
			if(dimensions==2)
			{
            M0=M*(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*mu[k])/(6.0*dt*dt);
	    
	    if(C[k]<0)
	      {
		 M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k])/kappa;
	      }
	    
			}
			
			}
			  
h0[k]+=dt*0.5*M0*gamma0;
h1[k]+=dt*0.5*M0*gamma1;
h2[k]+=dt*0.5*M0*gamma2;
h3[k]+=dt*0.5*M0*gamma3;
h4[k]+=dt*0.5*M0*gamma4;
h5[k]+=dt*0.5*M0*gamma5;
h6[k]+=dt*0.5*M0*gamma6;
h7[k]+=dt*0.5*M0*gamma7;
h8[k]+=dt*0.5*M0*gamma8;
h9[k]+=dt*0.5*M0*gamma9;
h10[k]+=dt*0.5*M0*gamma10;
h11[k]+=dt*0.5*M0*gamma11;
h12[k]+=dt*0.5*M0*gamma12;
h13[k]+=dt*0.5*M0*gamma13;
h14[k]+=dt*0.5*M0*gamma14;
h15[k]+=dt*0.5*M0*gamma15;
h16[k]+=dt*0.5*M0*gamma16;
h17[k]+=dt*0.5*M0*gamma17;
h18[k]+=dt*0.5*M0*gamma18;
   
}
