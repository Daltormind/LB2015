//Initialise moments sets values of initial moments from starting values

#include "wet.h"

void wet::initialisemoments()
{

	double test,num;
	//Initialise C Composition
	for(k=k1;k<k2;++k)
	{
	if(mask[k]!=28)
	{
	computecoordinates(k);

	if(R!=-1)
	{
	  /*
	if((xk-xcentre)*(xk-xcentre)+(yk-ycentre)*(yk-ycentre)+(zk-zcentre)*(zk-zcentre)<(R-5*ep)*(R-5*ep))
		{
			//C[k]=0.5+0.5*tanh(double(xk-25)/2/ep);//1;
			C[k]=1.0;//(1.0)/2.0+(1.0)/2.0*tanh(2.0/ep*(sqrt((xk-50.0)*(xk-50.0)+(yk-50.0)*(yk-50.0))-25.0));
			//rho[k]=rho1;
			ux[k]=uxi;
			uy[k]=uyi;
			uz[k]=uzi;

		}
	  */	
	  /*else*/ // if ((xk-xcentre)*(xk-xcentre)+(yk-ycentre)*(yk-ycentre)+(zk-zcentre)*(zk-zcentre)<(R+5*ep)*(R+5*ep))
	  //	{
		  
		  	num=sqrt((xk-xcentre)*(xk-xcentre)+(yk-ycentre)*(yk-ycentre)+(zk-zcentre)*(zk-zcentre));
		  	test=tanh(2.0*(-num+R)/ep);
		  	C[k]=0.5 + 0.5*test;
		  	
			
			ux[k]=C[k]*uxi;
		  	
			uy[k]=C[k]*uyi;
		  	uz[k]=C[k]*uzi;
			
				 
				//cout << "Entered boundry layer C=" << C[k]  << " test=" << test << " num=" << num << endl;
		
			//	}
			/*		
	else
		{

			//C[k]=0.5+0.5*tanh(double(75-xk)/2/ep);
			C[k]=0.0;//(1.0)/2.0+(1.0)/2.0*tanh(2.0/ep*(sqrt((xk-50.0)*(xk-50.0)+(yk-50.0)*(yk-50.0))-25.0));
			//rho[k]=rho2;
			ux[k]=uxi;//double(xk)/10000;
			uy[k]=uyi;
			uz[k]=uzi;
		
	

		}
			*/
		}


	else
	{
	  
	  
	  //C[k]=0.0;
	   
	  if(xk<30 ){C[k]=0.0;}
	  else if (xk<40)
	  
	    {
	  			test=tanh(2.0*(xk-35)/ep);
	  			
				C[k]=0.5 + 0.5*test;  	
	  					}
	  					else if(xk>60)
	  					{
	  						test=tanh(2.0*(90-xk)/ep);
				C[k]=0.5 + 0.5*test; 
	  					}
	  
	  else {C[k]=1.0;}
		
	  C[k]=0.0;
		ux[k]=uxi;
		uy[k]=uyi;
		uz[k]=uzi;
	   
	}
	
	
	
	
	}
	
	if(input==1)
	  { 
	    if(rank==ROOT){ktot=k+rank*(k2-(Lx%size+1)*k1)-k1;}
	    if(rank >ROOT){ktot=k+rank*(k2-k1)+(Lx%size)*Ly*Lz-k1;}
	    
	    C[k]=Chold[ktot];
	    ux[k]=uxhold[ktot];
	    uy[k]=1.5*uyhold[ktot];
	    uz[k]=uzhold[ktot];

	    if(C[k]==-2){C[k]=0;};
	  }
	

	}

	exchangeC();
	
	for(k=k1;k<k2;++k)//Initialise free energy and density
	{
		if(mask[k]!=28)
		{

            if (mask[k]==0 || mask[k]==2)
            
	      {
		if(dimensions==2)
		  {
            d2C=(C[d[k][6]]+C[d[k][7]]+C[d[k][8]]+C[d[k][9]]+4.0*(C[d[k][0]]+C[d[k][1]]+C[d[k][2]]+C[d[k][3]])-20.0*C[k])/(6.0*dt*dt);
		  }
		if (dimensions==3)
		  {
			            d2C=(C[d[k][6]]+C[d[k][7]]+C[d[k][8]]+C[d[k][9]]+C[d[k][10]]+C[d[k][11]]+C[d[k][12]]+C[d[k][13]]+C[d[k][14]]+C[d[k][15]]+C[d[k][16]]+C[d[k][17]]+2.0*(C[d[k][0]]+C[d[k][1]]+C[d[k][2]]+C[d[k][3]]+C[d[k][4]]+C[d[k][5]])-24.0*C[k])/(6.0*dt*dt);
		  }
	      }
		
	else if (mask[k]==1 || mask[k]==4)
	      {
			
				dC=Wc*(C[k]-C[k]*C[k]);
				if(mask[d[k][0]]==28)
    	{hold1=C[d[k][1]]-2*dC;}else{hold1=C[d[k][0]];}
    	
    	if(mask[d[k][1]]==28)
    	{hold2=C[d[k][0]]-2*dC;}else{hold2=C[d[k][1]];}
    	
    	if(mask[d[k][2]]==28)
    	{hold3=C[d[k][3]]-2*dC;}else{hold3=C[d[k][2]];}
    	
    	if(mask[d[k][3]]==28)
    	{hold4=C[d[k][2]]-2*dC;}else{hold4=C[d[k][3]];}
    	
    	if(mask[d[k][4]]==28)
    	{hold5=C[d[k][5]]-2*dC;}else{hold5=C[d[k][4]];}
    	
    	if(mask[d[k][5]]==28)
    	{hold6=C[d[k][4]]-2*dC;}else{hold6=C[d[k][5]];}
    	
    	if(mask[d[k][6]]==28)
    	{hold7=C[d[k][9]]-2*dC;}else{hold7=C[d[k][6]];}
    	
    	if(mask[d[k][7]]==28)
    	{hold8=C[d[k][8]]-2*dC;}else{hold8=C[d[k][7]];}
    	
    	if(mask[d[k][8]]==28)
    	{hold9=C[d[k][7]]-2*dC;}else{hold9=C[d[k][8]];}
    	
    	if(mask[d[k][9]]==28)
    	{hold10=C[d[k][6]]-2*dC;}else{hold10=C[d[k][9]];}
    	
    	if(mask[d[k][10]]==28)
    	{hold11=C[d[k][13]]-2*dC;}else{hold11=C[d[k][10]];}
    	
    	if(mask[d[k][11]]==28)
    	{hold12=C[d[k][12]]-2*dC;}else{hold12=C[d[k][11]];}
    	
    	if(mask[d[k][12]]==28)
    	{hold13=C[d[k][11]]-2*dC;}else{hold13=C[d[k][12]];}
    	
    	if(mask[d[k][13]]==28)
    	{hold14=C[d[k][10]]-2*dC;}else{hold14=C[d[k][13]];}
    	
    	if(mask[d[k][14]]==28)
    	{hold15=C[d[k][17]]-2*dC;}else{hold15=C[d[k][14]];}
    	
    	if(mask[d[k][15]]==28)
    	{hold16=C[d[k][16]]-2*dC;}else{hold16=C[d[k][15]];}
    	
    	if(mask[d[k][16]]==28)
    	{hold17=C[d[k][15]]-2*dC;}else{hold17=C[d[k][16]];}
    	
    	if(mask[d[k][17]]==28)
    	{hold18=C[d[k][14]]-2*dC;}else{hold18=C[d[k][17]];}
			
			if(dimensions==3)
            {
            d2C=(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*C[k])/(6.0*dt*dt);
			}
			if(dimensions==2)
			{
            d2C=(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*C[k])/(6.0*dt*dt);
			}
			
			}
	    
			else if (mask[k]==3)
			{
			
				dC=Wc*(C[k]-C[k]*C[k]);
				if(mask[d[k][0]]==28)
    	{hold1=C[d[k][1]]-2*dC;}else{hold1=C[d[k][0]];}
    	
    	if(mask[d[k][1]]==28)
    	{hold2=C[d[k][0]]-2*dC;}else{hold2=C[d[k][1]];}
    	
    	if(mask[d[k][2]]==28)
    	{hold3=C[d[k][3]]-2*dC;}else{hold3=C[d[k][2]];}
    	
    	if(mask[d[k][3]]==28)
    	{hold4=C[d[k][2]]-2*dC;}else{hold4=C[d[k][3]];}
    	
    	if(mask[d[k][4]]==28)
    	{hold5=C[d[k][5]]-2*dC;}else{hold5=C[d[k][4]];}
    	
    	if(mask[d[k][5]]==28)
    	{hold6=C[d[k][4]]-2*dC;}else{hold6=C[d[k][5]];}
    	
    	if(mask[d[k][6]]==28 || mask[d[k][6]]==3)
    	{hold7=C[d[k][9]]-2*dC;}else{hold7=C[d[k][6]];}
    	
    	if(mask[d[k][7]]==28 || mask[d[k][7]]==3)
    	{hold8=C[d[k][8]]-2*dC;}else{hold8=C[d[k][7]];}
    	
    	if(mask[d[k][8]]==28 || mask[d[k][8]]==3)
    	{hold9=C[d[k][7]]-2*dC;}else{hold9=C[d[k][8]];}
    	
    	if(mask[d[k][9]]==28 || mask[d[k][9]]==3)
    	{hold10=C[d[k][6]]-2*dC;}else{hold10=C[d[k][9]];}
    	
    	if(mask[d[k][10]]==28 || mask[d[k][10]]==3)
    	{hold11=C[d[k][13]]-2*dC;}else{hold11=C[d[k][10]];}
    	
    	if(mask[d[k][11]]==28 || mask[d[k][11]]==3)
    	{hold12=C[d[k][12]]-2*dC;}else{hold12=C[d[k][11]];}
    	
    	if(mask[d[k][12]]==28 || mask[d[k][12]]==3)
    	{hold13=C[d[k][11]]-2*dC;}else{hold13=C[d[k][12]];}
    	
    	if(mask[d[k][13]]==28 || mask[d[k][13]]==3)
    	{hold14=C[d[k][10]]-2*dC;}else{hold14=C[d[k][13]];}
    	
    	if(mask[d[k][14]]==28 || mask[d[k][14]]==3)
    	{hold15=C[d[k][17]]-2*dC;}else{hold15=C[d[k][14]];}
    	
    	if(mask[d[k][15]]==28 || mask[d[k][15]]==3)
    	{hold16=C[d[k][16]]-2*dC;}else{hold16=C[d[k][15]];}
    	
    	if(mask[d[k][16]]==28 || mask[d[k][16]]==3)
    	{hold17=C[d[k][15]]-2*dC;}else{hold17=C[d[k][16]];}
    	
    	if(mask[d[k][17]]==28 || mask[d[k][17]]==3)
    	{hold18=C[d[k][14]]-2*dC;}else{hold18=C[d[k][17]];}
			
			if(dimensions==3)
            {
            d2C=(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*C[k])/(6.0*dt*dt);
			}
			if(dimensions==2)
			{
            d2C=(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*C[k])/(6.0*dt*dt);
			}
			
			}
	    
	else if (mask[k]==5)
	      {
			
				dC=Wc*(C[k]-C[k]*C[k]);
				if(mask[d[k][0]]==28)
    	{hold1=C[d[k][1]]-2*dC;}else{hold1=C[d[k][0]];}
    	
    	if(mask[d[k][1]]==28)
    	{hold2=C[d[k][0]]-2*dC;}else{hold2=C[d[k][1]];}
    	
    	if(mask[d[k][2]]==28)
    	{hold3=C[d[k][3]]-2*dC;}else{hold3=C[d[k][2]];}
    	
    	if(mask[d[k][3]]==28)
    	{hold4=C[d[k][2]]-2*dC;}else{hold4=C[d[k][3]];}
    	
    	if(mask[d[k][4]]==28)
    	{hold5=C[d[k][5]]-2*dC;}else{hold5=C[d[k][4]];}
    	
    	if(mask[d[k][5]]==28)
    	{hold6=C[d[k][4]]-2*dC;}else{hold6=C[d[k][5]];}
    	
    	if(mask[d[k][6]]==28)
    	{hold7=C[d[k][9]]-2*dC;
	  if(mask[d[k][9]]==28){hold7=C[k];}
}else{hold7=C[d[k][6]];}
    	
    	if(mask[d[k][7]]==28)
    	{hold8=C[d[k][8]]-2*dC;
	  if(mask[d[k][8]]==28){hold8=C[k];}
}else{hold8=C[d[k][7]];}
    	
    	if(mask[d[k][8]]==28)
    	{hold9=C[d[k][7]]-2*dC;
	  if(mask[d[k][7]]==28){hold9=C[k];}
}else{hold9=C[d[k][8]];}
    	
    	if(mask[d[k][9]]==28)
    	{hold10=C[d[k][6]]-2*dC;
	  if(mask[d[k][6]]==28){hold10=C[k];}
}else{hold10=C[d[k][9]];}
    	
    	if(mask[d[k][10]]==28)
    	{hold11=C[d[k][13]]-2*dC;
	  if(mask[d[k][13]]==28){hold11=C[k];}
}else{hold11=C[d[k][10]];}
    	
    	if(mask[d[k][11]]==28)
    	{hold12=C[d[k][12]]-2*dC;
	  if(mask[d[k][12]]==28){hold12=C[k];}
}else{hold12=C[d[k][11]];}
    	
    	if(mask[d[k][12]]==28)
    	{hold13=C[d[k][11]]-2*dC;
	  if(mask[d[k][11]]==28){hold13=C[k];}
}else{hold13=C[d[k][12]];}
    	
    	if(mask[d[k][13]]==28)
    	{hold14=C[d[k][10]]-2*dC;
	  if(mask[d[k][10]]==28){hold14=C[k];}
}else{hold14=C[d[k][13]];}
    	
    	if(mask[d[k][14]]==28)
    	{hold15=C[d[k][17]]-2*dC;
	  if(mask[d[k][17]]==28){hold15=C[k];}
}else{hold15=C[d[k][14]];}
    	
    	if(mask[d[k][15]]==28)
    	{hold16=C[d[k][16]]-2*dC;
	  if(mask[d[k][16]]==28){hold16=C[k];}
}else{hold16=C[d[k][15]];}
    	
    	if(mask[d[k][16]]==28)
    	{hold17=C[d[k][15]]-2*dC;
	  if(mask[d[k][15]]==28){hold17=C[k];}
	}else{hold17=C[d[k][16]];}
    	
    	if(mask[d[k][17]]==28)
    	{hold18=C[d[k][14]]-2*dC;
	  if(mask[d[k][14]]==28){hold18=C[k];}
}else{hold18=C[d[k][17]];}
			
			if(dimensions==3)
            {
            d2C=(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*C[k])/(6.0*dt*dt);
			}
			if(dimensions==2)
			{
            d2C=(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*C[k])/(6.0*dt*dt);
			}
			
			}
	    
		

	/*		
	else if(mask[k]==1)
	{
		dC=Wc*(C[k]-C[k]*C[k]);
		d2C=(C[d[k][7]] + C[d[k][9]] + 4.0*C[d[k][1]] - 6.0*dC + 2.0*C[d[k][2]] + 2.0*C[d[k][3]]-10.0*C[k])/(3.0*dt*dt);

	}
	else if(mask[k]==2)
	{
		dC=Wc*(C[k]-C[k]*C[k]);
		d2C=(C[d[k][6]]+C[d[k][8]]+4.0*C[d[k][1]] + 2.0*C[d[k][2]] + 2.0*C[d[k][3]]-10.0*C[k] -6.0*dC )/(3.0*dt*dt);

	}
	else if(mask[k]==3)
	{
		dC=Wc*(C[k]-C[k]*C[k]);
		d2C=(C[d[k][8]]+C[d[k][9]]+4.0*C[d[k][3]] + 2.0*C[d[k][0]] + 2.0*C[d[k][1]]-10.0*C[k] -6.0*dC )/(3.0*dt*dt);

	}
	else if(mask[k]==4)
	{
		dC=Wc*(C[k]-C[k]*C[k]);
		d2C=(C[d[k][6]]+C[d[k][7]]+4.0*C[d[k][2]] + 2.0*C[d[k][0]] + 2.0*C[d[k][1]]-10.0*C[k] -6.0*dC )/(3.0*dt*dt);

	}
	else if(mask[k]==7)
	{
	dC=Wc*(C[k]-C[k]*C[k]);
	d2C=1.0/6.0*(C[d[k][8]] + 2.0*C[d[k][9]] + C[d[k][7]]+ 4.0*C[d[k][3]] + 4.0*C[d[k][2]]
	+4.0*C[d[k][0]] + 4.0*C[d[k][1]] - 20.0*C[k]);
	}	
	else if(mask[k]==8)
	{
	dC=Wc*(C[k]-C[k]*C[k]);
	d2C=1.0/6.0*(C[d[k][6]] + 2.0*C[d[k][8]] + C[d[k][9]]+ 4.0*C[d[k][3]] + 4.0*C[d[k][2]]
	+4.0*C[d[k][0]] + 4.0*C[d[k][1]] - 20.0*C[k]);
	}	
	else if(mask[k]==9)
	{
	dC=Wc*(C[k]-C[k]*C[k]);
	d2C=1.0/6.0*(C[d[k][6]] + 2.0*C[d[k][7]] + C[d[k][79]]+ 4.0*C[d[k][3]] + 4.0*C[d[k][2]]
	+4.0*C[d[k][0]] + 4.0*C[d[k][1]] - 20.0*C[k]);
	}	
	else if(mask[k]==10)
	{
	dC=Wc*(C[k]-C[k]*C[k]);
	d2C=1.0/6.0*(C[d[k][8]] + 2.0*C[d[k][6]] + C[d[k][7]]+ 4.0*C[d[k][3]] + 4.0*C[d[k][2]]
	+4.0*C[d[k][0]] + 4.0*C[d[k][1]] - 20.0*C[k]);
	}
	*/					
			
			mu[k]=2*B*( C[k]*pow(C[k]-1.0,2) + pow(C[k],2)*(C[k]-1.0) ) - kappa*d2C;

            rho[k]=C[k]*rho1+(1-C[k])*rho2;
            
            //d2rho=(rho[d[k][6]]+rho[d[k][7]]+rho[d[k][8]]+rho[d[k][9]]+4.0*(rho[d[k][0]]+rho[d[k][1]]+rho[d[k][2]]+rho[d[k][3]])-20.0*rho[k])/6.0;
            
            //mu[k]=0.0;//4.0*B*(rho[k]-rho1)*(rho[k]-rho2)*(rho[k]-(rho2+rho1)*0.5)-kappa*d2rho; 
            /*
            if(C[k]<0)
			{
			muh[k]=mu[k]+2*BA*C[k];
			}
			else{muh[k]=mu[k];}
			*/
		}
	}

	exchangemu();
	//exchangemuh();
	exchangerho();


	for(k=k1;k<k2;++k)//Initialise pressure and tau
	{

	if(mask[k]!=28)
	{
	
	
	p[k]=0.0;//g0[k]+g1[k]+g2[k]+g3[k]+g4[k]+g7[k]+g8[k]+g9[k]+g10[k]+g11[k]+g12[k]+g12[k]+g13[k]+g14[k]+g15[k]+g16[k]+g17[k]+g18[k]+g5[k]+g6[k]+dt*ux[k]*gradrhoCx/6.0+dt*gradrhoCy*uy[k]/6.0+dt*gradrhoCz*uz[k]/6.0;//compute pressure
	
	if(input==1)
	  {
	    if(rank==ROOT){ktot=k+rank*(k2-(Lx%size+1)*k1)-k1;}
	    if(rank >ROOT){ktot=k+rank*(k2-k1)+(Lx%size)*Ly*Lz-k1;}
	    
	    p[k]=phold[ktot];
	  }
	
tau[k]=1.0/(C[k]/tau1+(1-C[k])/tau2);



}

}

	
	exchangep();
	
	exchangevel();

}
