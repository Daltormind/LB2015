

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
		M0=M*(mu[d[k][6]]+mu[d[k][7]]+mu[d[k][8]]+mu[d[k][9]]+4.0*mu[d[k][0]]
		      +4.0*mu[d[k][1]]+4.0*mu[d[k][2]]+4.0*mu[d[k][3]]-20.0*mu[k])/(6.0*dt*dt);
		if(C[k]<0)
		  {
		     M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k])/kappa;
		     // cout << "st=" << st << " k=" << k << " " << " C=" << C[k] << "M0=" << M0 << " have entered loop " << endl;
		  }

		}
		if(dimensions==3)
		{
		M0=M*(mu[d[k][6]]+mu[d[k][7]]+mu[d[k][8]]+mu[d[k][9]]+mu[d[k][10]]+mu[d[k][11]]+mu[d[k][12]]+mu[d[k][13]]+mu[d[k][14]]+mu[d[k][15]]+mu[d[k][16]]+mu[d[k][17]]+2.0*(mu[d[k][0]]+mu[d[k][1]]+mu[d[k][2]]+mu[d[k][3]]+mu[d[k][4]]+mu[d[k][5]])-24.0*mu[k])/(6.0*dt*dt);
		
		if(C[k]<0)
		  {
		    M0+=M*2*BA*( 2*B*(C[k]*(C[k]-1)*(C[k]-1)+C[k]*C[k]*(C[k]-1)) - mu[k])/kappa;
		  }
		}
	}
	
	else if (mask[k]==1 || mask[k]==4)
			{
			
				
		if(mask[d[k][0]]==28)
    	{
    	hold1=mu[d[k][1]];
		h2[k]=h1[k];
		g2[k]=g1[k];
    	}
    	else{hold1=mu[d[k][0]];}
    	
    	if(mask[d[k][1]]==28)
    	{
    	hold2=mu[d[k][0]];
		h1[k]=h2[k];
		g1[k]=g2[k];
    	}
    	else{hold2=mu[d[k][1]];}
    	if(mask[d[k][2]]==28)
    	{
    	hold3=mu[d[k][3]];
	    h4[k]=h3[k];
		g4[k]=g3[k];
    	}
    	else{hold3=mu[d[k][2]];}
    	if(mask[d[k][3]]==28)
    	{
    	hold4=mu[d[k][2]];
		h3[k]=h4[k];
    	g3[k]=g4[k];
    	}
    	else{hold4=mu[d[k][3]];}
    	if(mask[d[k][4]]==28)
    	{
    	hold5=mu[d[k][5]];
		h6[k]=h5[k];
		g6[k]=g5[k];
    	}
    	else{hold5=mu[d[k][4]];}
    	if(mask[d[k][5]]==28)
    	{
    	hold6=mu[d[k][4]];
		h5[k]=h6[k];
		g5[k]=g6[k];
    	}
    	else{hold6=mu[d[k][5]];}
    	if(mask[d[k][6]]==28 )
    	{
    	hold7=mu[d[k][9]];
		h10[k]=h7[k];
		g10[k]=g7[k];
    	}
    	else{hold7=mu[d[k][6]];}
    	if(mask[d[k][7]]==28 )
    	{
    	hold8=mu[d[k][8]];
		h9[k]=h8[k];
		g9[k]=g8[k];
    	}
    	else{hold8=mu[d[k][7]];}
    	if(mask[d[k][8]]==28 )
    	{
    	hold9=mu[d[k][7]];
		h8[k]=h9[k];
		g8[k]=g9[k];
    	}
    	else{hold9=mu[d[k][8]];}
    	if(mask[d[k][9]]==28 )
    	{
    	hold10=mu[d[k][6]];
		h7[k]=h10[k];
		g7[k]=g10[k];
    	}
    	else{hold10=mu[d[k][9]];}
    	if(mask[d[k][10]]==28 )
    	{
    	hold11=mu[d[k][13]];
		h14[k]=h11[k];
		g14[k]=g11[k];
	
    	}
    	else{hold11=mu[d[k][10]];}
    	if(mask[d[k][11]]==28 )
    	{
    	hold12=mu[d[k][12]];
		h13[k]=h12[k];
		g13[k]=g12[k];
    	}
    	else{hold12=mu[d[k][11]];}
    	if(mask[d[k][12]]==28 )
    	{
    	hold13=mu[d[k][11]];
		h12[k]=h13[k];
		g12[k]=g13[k];
    	}
    	else{hold13=mu[d[k][12]];}
    	if(mask[d[k][13]]==28 )
    	{
    	hold14=mu[d[k][10]];
		h11[k]=h14[k];
		g11[k]=g14[k];
	       
    	}
    	else{hold14=mu[d[k][13]];}
    	if(mask[d[k][14]]==28 )
    	{
    	hold15=mu[d[k][17]];
		h18[k]=h15[k];
		g18[k]=g15[k];
    	}
    	else{hold15=mu[d[k][14]];}
    	if(mask[d[k][15]]==28 )
    	{
    	hold16=mu[d[k][16]];
		h17[k]=h16[k];
		g17[k]=g16[k];
    	}
    	else{hold16=mu[d[k][15]];}
    	if(mask[d[k][16]]==28 )
    	{
    	hold17=mu[d[k][15]];
		h16[k]=h17[k];
		g16[k]=g17[k];
    	}
    	else{hold17=mu[d[k][16]];}
    	if(mask[d[k][17]]==28 )
    	{
    	hold18=mu[d[k][14]];
		h15[k]=h18[k];
		g15[k]=g18[k];
    	}
    	else{hold18=mu[d[k][17]];}
			
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
			
			else if (mask[k]==3)
			{
			
				
		if(mask[d[k][0]]==28)
    	{
    	hold1=mu[d[k][1]];
		h2[k]=h1[k];
		g2[k]=g1[k];
    	}
    	else{hold1=mu[d[k][0]];}
    	
    	if(mask[d[k][1]]==28)
    	{
    	hold2=mu[d[k][0]];
		h1[k]=h2[k];
		g1[k]=g2[k];
    	}
    	else{hold2=mu[d[k][1]];}
    	if(mask[d[k][2]]==28)
    	{
    	hold3=mu[d[k][3]];
	    h4[k]=h3[k];
		g4[k]=g3[k];
    	}
    	else{hold3=mu[d[k][2]];}
    	if(mask[d[k][3]]==28)
    	{
    	hold4=mu[d[k][2]];
		h3[k]=h4[k];
    	g3[k]=g4[k];
    	}
    	else{hold4=mu[d[k][3]];}
    	if(mask[d[k][4]]==28)
    	{
    	hold5=mu[d[k][5]];
		h6[k]=h5[k];
		g6[k]=g5[k];
    	}
    	else{hold5=mu[d[k][4]];}
    	if(mask[d[k][5]]==28)
    	{
    	hold6=mu[d[k][4]];
		h5[k]=h6[k];
		g5[k]=g6[k];
    	}
    	else{hold6=mu[d[k][5]];}
    	if(mask[d[k][6]]==28 || mask[d[k][6]]==3)
    	{
    	hold7=mu[d[k][9]];
		h10[k]=h7[k];
		g10[k]=g7[k];
    	}
    	else{hold7=mu[d[k][6]];}
    	if(mask[d[k][7]]==28 || mask[d[k][7]]==3)
    	{
    	hold8=mu[d[k][8]];
		h9[k]=h8[k];
		g9[k]=g8[k];
    	}
    	else{hold8=mu[d[k][7]];}
    	if(mask[d[k][8]]==28 || mask[d[k][8]]==3)
    	{
    	hold9=mu[d[k][7]];
		h8[k]=h9[k];
		g8[k]=g9[k];
    	}
    	else{hold9=mu[d[k][8]];}
    	if(mask[d[k][9]]==28 || mask[d[k][9]]==3)
    	{
    	hold10=mu[d[k][6]];
		h7[k]=h10[k];
		g7[k]=g10[k];
    	}
    	else{hold10=mu[d[k][9]];}
    	if(mask[d[k][10]]==28 ||  mask[d[k][10]]==3)
    	{
    	hold11=mu[d[k][13]];
		h14[k]=h11[k];
		g14[k]=g11[k];
	
    	}
    	else{hold11=mu[d[k][10]];}
    	if(mask[d[k][11]]==28 || mask[d[k][11]]==3)
    	{
    	hold12=mu[d[k][12]];
		h13[k]=h12[k];
		g13[k]=g12[k];
    	}
    	else{hold12=mu[d[k][11]];}
    	if(mask[d[k][12]]==28 || mask[d[k][12]]==3)
    	{
    	hold13=mu[d[k][11]];
		h12[k]=h13[k];
		g12[k]=g13[k];
    	}
    	else{hold13=mu[d[k][12]];}
    	if(mask[d[k][13]]==28 || mask[d[k][13]]==3)
    	{
    	hold14=mu[d[k][10]];
		h11[k]=h14[k];
		g11[k]=g14[k];
	       
    	}
    	else{hold14=mu[d[k][13]];}
    	if(mask[d[k][14]]==28 || mask[d[k][14]]==3)
    	{
    	hold15=mu[d[k][17]];
		h18[k]=h15[k];
		g18[k]=g15[k];
    	}
    	else{hold15=mu[d[k][14]];}
    	if(mask[d[k][15]]==28 || mask[d[k][15]]==3)
    	{
    	hold16=mu[d[k][16]];
		h17[k]=h16[k];
		g17[k]=g16[k];
    	}
    	else{hold16=mu[d[k][15]];}
    	if(mask[d[k][16]]==28 || mask[d[k][16]]==3)
    	{
    	hold17=mu[d[k][15]];
		h16[k]=h17[k];
		g16[k]=g17[k];
    	}
    	else{hold17=mu[d[k][16]];}
    	if(mask[d[k][17]]==28 || mask[d[k][17]]==3)
    	{
    	hold18=mu[d[k][14]];
		h15[k]=h18[k];
		g15[k]=g18[k];
    	}
    	else{hold18=mu[d[k][17]];}
			
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
	
	else if (mask[k]==5)
			{
			
				
		if(mask[d[k][0]]==28)
    	{
    	hold1=mu[d[k][1]];
		h2[k]=h1[k];
		g2[k]=g1[k];
		
	      

    	}
    	else{hold1=mu[d[k][0]];}
    	
    	if(mask[d[k][1]]==28)
    	{
    	hold2=mu[d[k][0]];
		h1[k]=h2[k];
		g1[k]=g2[k];
    	}
    	else{hold2=mu[d[k][1]];}
    	if(mask[d[k][2]]==28)
    	{
    	hold3=mu[d[k][3]];
	    h4[k]=h3[k];
		g4[k]=g3[k];
    	}
    	else{hold3=mu[d[k][2]];}
    	if(mask[d[k][3]]==28)
    	{
    	hold4=mu[d[k][2]];
		h3[k]=h4[k];
    	g3[k]=g4[k];
    	}
    	else{hold4=mu[d[k][3]];}
    
	if(mask[d[k][4]]==28)
    	{
    	hold5=mu[d[k][5]];
		h6[k]=h5[k];
		g6[k]=g5[k];
    	}
    	else{hold5=mu[d[k][4]];}
  
  	if(mask[d[k][5]]==28)
    	{
    	hold6=mu[d[k][4]];
		h5[k]=h6[k];
		g5[k]=g6[k];
    	}
    	else{hold6=mu[d[k][5]];}

    	if(mask[d[k][6]]==28 )
    	{
    	hold7=mu[d[k][9]];
		h10[k]=h7[k];
		g10[k]=g7[k];
		
		if(mask[d[k][9]]==28)
		  {
		    hold7=mu[k];
		    h10[k]=hc10[k];
		    g10[k]=gc10[k];
		  }
		

  	}
    	else{hold7=mu[d[k][6]];}

    	if(mask[d[k][7]]==28 )
    	{
    	hold8=mu[d[k][8]];
		h9[k]=h8[k];
		g9[k]=g8[k];
		
		
		if(mask[d[k][8]]==28)
		  {
		    hold8=mu[k];
		    h9[k]=hc9[k];
		    g9[k]=gc9[k];
		  }
		

	}
    	else{hold8=mu[d[k][7]];}
    	
	if(mask[d[k][8]]==28 )
    	{
    	hold9=mu[d[k][7]];
		h8[k]=h9[k];
		g8[k]=g9[k];

		
		if(mask[d[k][7]]==28)
		  {
		    hold9=mu[k];
		    h8[k]=hc8[k];
		    g8[k]=gc8[k];
		  }
		

    	}
    	else{hold9=mu[d[k][8]];}
    
	if(mask[d[k][9]]==28 )
    	{
    	hold10=mu[d[k][6]];
		h7[k]=h10[k];
		g7[k]=g10[k];

		
		if(mask[d[k][6]]==28)
		  {
		    hold10=mu[k];
		    h7[k]=hc7[k];
		    g7[k]=gc7[k];
		  }
		


    	}
    	else{hold10=mu[d[k][9]];}
 
   	if(mask[d[k][10]]==28 )
    	{
    	hold11=mu[d[k][13]];
		h14[k]=h11[k];
		g14[k]=g11[k];
		
		
		if(mask[d[k][13]]==28)
		  {
		    hold11=mu[k];
		    h14[k]=hc11[k];
		    g14[k]=gc11[k];
		  }
		
    	}
    	else{hold11=mu[d[k][10]];}
    	
	if(mask[d[k][11]]==28 )
    	{
    	hold12=mu[d[k][12]];
		h13[k]=h12[k];
		g13[k]=g12[k];
		
		
		if(mask[d[k][12]]==28)
		  {
		    hold12=mu[k];
		    h13[k]=hc13[k];
		    g13[k]=gc13[k];
		  }
		
	}
    	else{hold12=mu[d[k][11]];}

    	if(mask[d[k][12]]==28 )
    	{
    	hold13=mu[d[k][11]];
		h12[k]=h13[k];
		g12[k]=g13[k];
  
		
		if(mask[d[k][11]]==28)
		  {
		    hold13=mu[k];
		    h12[k]=hc12[k];
		    g12[k]=gc12[k];
		  }
		
  	}
    	else{hold13=mu[d[k][12]];}

    	if(mask[d[k][13]]==28 )
    	{
    	hold14=mu[d[k][10]];
		h11[k]=h14[k];
		g11[k]=g14[k];
	       
		
		if(mask[d[k][10]]==28)
		  {
		    hold14=mu[k];
		    h11[k]=hc11[k];
		    g11[k]=gc11[k];
		  }
		
		
    	}
    	else{hold14=mu[d[k][13]];}

    	if(mask[d[k][14]]==28 )
    	{
    	hold15=mu[d[k][17]];
		h18[k]=h15[k];
		g18[k]=g15[k];
    
		
		if(mask[d[k][17]]==28)
		  {
		    hold15=mu[k];
		    h18[k]=hc18[k];
		    g18[k]=gc18[k];
		  }
		
	}
    	else{hold15=mu[d[k][14]];}

    	if(mask[d[k][15]]==28 )
    	{
    	hold16=mu[d[k][16]];
		h17[k]=h16[k];
		g17[k]=g16[k];
    	
		
		if(mask[d[k][16]]==28)
		  {
		    hold16=mu[k];
		    h17[k]=hc17[k];
		    g17[k]=gc17[k];
		  }
		
}
    	else{hold16=mu[d[k][15]];}
    
	if(mask[d[k][16]]==28 )
    	{
    	hold17=mu[d[k][15]];
		h16[k]=h17[k];
		g16[k]=g17[k];
		
		
		if(mask[d[k][15]]==28)
		  {
		    hold17=mu[k];
		    h16[k]=hc16[k];
		    g16[k]=gc16[k];
		  }
		

    	}
    	else{hold17=mu[d[k][16]];}

    	if(mask[d[k][17]]==28 )
    	{
    	hold18=mu[d[k][14]];
		h15[k]=h18[k];
		g15[k]=g18[k];

		
		if(mask[d[k][14]]==28)
		  {
		    hold18=mu[k];
		    h15[k]=hc15[k];
		    g15[k]=gc15[k];
		  }
		
    	}
    	else{hold18=mu[d[k][17]];}
			
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
			
	/*
	else if(mask[k]==1)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][1]][1]]+4*C[d[k][1]]);
		
		h2[k]=h1[k];
		h10[k]=h7[k];
		h8[k]=h9[k];
		//h0[k]+=h[d[k][0]][1]+h[d[k][6]][7]+h[d[k][8]][9]-h2[k]-h8[k]-h10[k];
		
		g2[k]=g1[k];
		g10[k]=g7[k];
		g8[k]=g9[k];
		//g0[k]+=g[d[k][0]][1]+g[d[k][6]][7]+g[d[k][8]][9]-g2[k]-g8[k]-g10[k];
		
		M0=1.0/3.0*M*(mu[d[k][7]] + mu[d[k][9]] + 4.0*mu[d[k][1]]
	 + 2.0*mu[d[k][2]] + 2.0*mu[d[k][3]] - 10.0*mu[k]);
	}
	
	else if(mask[k]==2)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h1[k]=h2[k];
		h7[k]=h10[k];
		h9[k]=h8[k];
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g1[k]=g2[k];
		g7[k]=g10[k];
		g9[k]=g8[k];
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];
		
		M0=1.0/3.0*M*(mu[d[k][6]] + mu[d[k][8]] + 4.0*mu[d[k][0]]
	+2.0*mu[d[k][2]] + 2.0*mu[d[k][3]] - 10.0*mu[k]);

		
	}
	
	else if(mask[k]==3)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h4[k]=h3[k];
		h9[k]=h8[k];
		h10[k]=h7[k];
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g4[k]=g3[k];
		g9[k]=g8[k];
		g10[k]=g7[k];
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];
		
		M0=1.0/3.0*M*(mu[d[k][8]] + mu[d[k][9]] + 4.0*mu[d[k][3]]
	+2.0*mu[d[k][0]] + 2.0*mu[d[k][1]] - 10.0*mu[k]);

		
	}
	
	else if(mask[k]==4)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h3[k]=h4[k];
		h7[k]=h10[k];
		h8[k]=h9[k];
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g3[k]=g4[k];
		g7[k]=g10[k];
		g8[k]=g9[k];
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];
		
		M0=1.0/3.0*M*(mu[d[k][6]] + mu[d[k][7]] + 4.0*mu[d[k][2]]
	+2.0*mu[d[k][0]] + 2.0*mu[d[k][1]] - 10.0*mu[k]);

		
	}
	
	else if(mask[k]==7)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h10[k]=h7[k];
		
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g10[k]=g7[k];
		
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];
		
		M0=1.0/6.0*M*(mu[d[k][8]] + 2.0*mu[d[k][9]] + mu[d[k][7]]+ 4.0*mu[d[k][3]] + 4.0*mu[d[k][2]]
	+4.0*mu[d[k][0]] + 4.0*mu[d[k][1]] - 20.0*mu[k]);

		
	}
	else if(mask[k]==8)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h9[k]=h8[k];
		
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g9[k]=g8[k];
		
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];

		M0=1.0/6.0*M*(2.0*mu[d[k][8]] + mu[d[k][9]] + mu[d[k][6]]+ 4.0*mu[d[k][3]] + 4.0*mu[d[k][2]]
	+4.0*mu[d[k][0]] + 4.0*mu[d[k][1]] - 20.0*mu[k]);
		
	}
	
	else if(mask[k]==9)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h8[k]=h9[k];
		
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g8[k]=g9[k];
		
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];
		
		M0=1.0/6.0*M*(mu[d[k][6]] + 2.0*mu[d[k][7]] + mu[d[k][9]]+ 4.0*mu[d[k][3]] + 4.0*mu[d[k][2]]
	+4.0*mu[d[k][0]] + 4.0*mu[d[k][1]] - 20.0*mu[k]);

		
	}
	
	else if(mask[k]==10)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h7[k]=h10[k];
		
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g7[k]=g10[k];
		
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];

		M0=1.0/6.0*M*(mu[d[k][8]] + 2.0*mu[d[k][6]] + mu[d[k][7]]+ 4.0*mu[d[k][3]] + 4.0*mu[d[k][2]]
	+4.0*mu[d[k][0]] + 4.0*mu[d[k][1]] - 20.0*mu[k]);
	}
	*/
	
	/*
	else if(mask[k]==27)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h2[k]=h1[k];
		h10[k]=h7[k];
		
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g2[k]=g1[k];
		g10[k]=g7[k];
		
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];

		
	}
	else if(mask[k]==29)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h2[k]=h1[k];
		h8[k]=h9[k];
		
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g2[k]=g1[k];
		g8[k]=g9[k];
		
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];

		
	}
	
	else if(mask[k]==38)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h1[k]=h2[k];
		h9[k]=h8[k];
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g1[k]=g2[k];
		g9[k]=g8[k];
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];

		
	}
	
	else if(mask[k]==40)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h1[k]=h2[k];
		h7[k]=h10[k];
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g1[k]=g2[k];
		g7[k]=g10[k];
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];

		
	}
	else if(mask[k]==47)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h4[k]=h3[k];
		h10[k]=h7[k];
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g4[k]=g3[k];
		g10[k]=g7[k];
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];

		
	}
	
	else if(mask[k]==48)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h4[k]=h3[k];
		h9[k]=h8[k];
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g4[k]=g[k][3
		g9[k]=g8[k];
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];

		
	}
	
	else if(mask[k]==59)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h3[k]=h4[k];
		h8[k]=h9[k];
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g3[k]=g4[k];
		g8[k]=g9[k];
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];

		
	}
	
	else if(mask[k]==60)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h3[k]=h4[k];
		h7[k]=h10[k];
		//h0[k]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h1[k]-h7[k]-h9[k];

		
		g3[k]=g4[k];
		g7[k]=g10[k];
		//g0[k]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g1[k]-g7[k]-g9[k];

		
	}
	*/
	
	
/*
if (mask[k]==0)
{
M0=M*(mu[d[k][6]]+mu[d[k][7]]+mu[d[k][8]]+mu[d[k][9]]+4.0*mu[d[k][0]]
		+4.0*mu[d[k][1]]+4.0*mu[d[k][2]]+4.0*mu[d[k][3]]-20.0*mu[k])/(6.0*dt*dt);
}		
	else	if(mask[k]==1)
	
	{
		M0=1.0/3.0*M*(mu[d[k][7]] + mu[d[k][9]] + 4.0*mu[d[k][1]]
	 + 2.0*mu[d[k][2]] + 2.0*mu[d[k][3]] - 10.0*mu[k]);
		
	
	}
	
	else if(mask[k]==2)
	
	{
		M0=1.0/3.0*M*(mu[d[k][6]] + mu[d[k][8]] + 4.0*mu[d[k][0]]
	+2.0*mu[d[k][2]] + 2.0*mu[d[k][3]] - 10.0*mu[k]);
		
	}
	
	else if(mask[k]==3)
	
	{
		M0=1.0/3.0*M*(mu[d[k][8]] + mu[d[k][9]] + 4.0*mu[d[k][3]]
	+2.0*mu[d[k][0]] + 2.0*mu[d[k][1]] - 10.0*mu[k]);
		
	}
*/
   
   
   
	
       
   
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
/*   
 computecoordinates(k);
   if(yk==0 and xk==102)
     {
       cout << "hcheck " << h0[k] << " " << h1[k] << " " << h2[k] << " " << h3[k] << " " << h4[k] << " " << h7[k] << " " << h8[k] << " " << h9[k] << " " << h10[k] << endl; 
     }
*/
}
