//Computemoments
//Computes the values of the moments from the functional density variables, 

#include "wet.h"

void wet::computemoments()
{



//Compute Composition C
for(k=k1;k<k2;k++)
{
if(mask[k]!=28)
{

		
		

		if(dimensions==3)
		{
		C[k]=h0[k]+h1[k]+h2[k]+h3[k]+h4[k]+h7[k]+h8[k]+h9[k]+h10[k]+h11[k]+h12[k]+h13[k]+h14[k]+h15[k]+h16[k]+h17[k]+h18[k]+h5[k]+h6[k]; //Compute C from updated velocity distributions
		
		  
		    
		  
	}
		//Check for NaN and output first occurence.
		if(isnan(C[k])!=0)
		  {if(first==0)
		      {
		    computecoordinates(k);
		    cout << "First NAN is at " << xk << " " << yk << " " << zk << endl;
		    first=1;
		      }
		  }
		if(dimensions==2)
		{
		C[k]=h0[k]+h1[k]+h2[k]+h3[k]+h4[k]+h7[k]+h8[k]+h9[k]+h10[k]; //Compute C from updated velocity distributions
		
		}
		
 		rho[k]=C[k]*rho1+(1-C[k])*rho2; //Compute Rho from updated moments
		
		tau[k]=1.0/(C[k]/tau1+(1-C[k])/tau2); // Compute tau for updated moments
		if(rt==1){
	if (mask[k]==1 || mask[k]==3){tau[k]=0.5;}//Setting surface relaxation type.
		}
	
}
}

//Exchanging information with other nodes. 
if(size>1)
{
exchangeC();
exchangerho();
}

for(k=k1;k<k2;k++)//computing chemical potential 
	{ neibour(k);
		if(mask[k]!=28)
		{
		
			//Computing Laplacian of C in the Bulk
			if (mask[k]==0 || mask[k]==2)
            {
            if(dimensions==3)
            {
            d2C=(C[d[6]]+C[d[7]]+C[d[8]]+C[d[9]]+C[d[10]]+C[d[11]]+C[d[12]]+C[d[13]]+C[d[14]]+C[d[15]]+C[d[16]]+C[d[17]]+2.0*(C[d[0]]+C[d[1]]+C[d[2]]+C[d[3]]+C[d[4]]+C[d[5]])-24.0*C[k])/(6.0*dt*dt);
			}
			if(dimensions==2)
			{
            d2C=(C[d[6]]+C[d[7]]+C[d[8]]+C[d[9]]+4.0*(C[d[0]]+C[d[1]]+C[d[2]]+C[d[3]])-20.0*C[k])/(6.0*dt*dt);
			}
			}
			//Computing laplacian of C at corners
			else if (mask[k]==3)
			{
			
				dC=Wc[k]*(C[k]-C[k]*C[k]);
				if(mask[d[0]]==28)
    	{hold1=C[d[1]]-2*dC;}else{hold1=C[d[0]];}
    	
    	if(mask[d[1]]==28)
    	{hold2=C[d[0]]-2*dC;}else{hold2=C[d[1]];}
    	
    	if(mask[d[2]]==28)
    	{hold3=C[d[3]]-2*dC;}else{hold3=C[d[2]];}
    	
    	if(mask[d[3]]==28)
    	{hold4=C[d[2]]-2*dC;}else{hold4=C[d[3]];}
    	
    	if(mask[d[4]]==28)
    	{hold5=C[d[5]]-2*dC;}else{hold5=C[d[4]];}
    	
    	if(mask[d[5]]==28)
    	{hold6=C[d[4]]-2*dC;}else{hold6=C[d[5]];}
    	
    	if(mask[d[6]]==28 || mask[d[6]]==3)
    	{hold7=C[d[9]]-2*dC;
  if(mask[d[9]]==28 || mask[d[9]]==3){hold7=C[k];}
}else{hold7=C[d[6]];}
    	
    	if(mask[d[7]]==28 || mask[d[7]]==3)
    	{hold8=C[d[8]]-2*dC;
	   if(mask[d[8]]==28 || mask[d[8]]==3){hold8=C[k];}
}else{hold8=C[d[7]];}
    	
    	if(mask[d[8]]==28 || mask[d[8]]==3)
    	{hold9=C[d[7]]-2*dC;}
 if(mask[d[7]]==28 || mask[d[7]]==3){hold9=C[k];}
else{hold9=C[d[8]];}
    	
    	if(mask[d[9]]==28 || mask[d[9]]==3)
    	{hold10=C[d[6]]-2*dC;}
	 if(mask[d[6]]==28 || mask[d[6]]==3){hold10=C[k];}
else{hold10=C[d[9]];}
    	
    	if(mask[d[10]]==28 || mask[d[10]]==3)
    	{hold11=C[d[13]]-2*dC;}
 if(mask[d[13]]==28 || mask[d[13]]==3){hold11=C[k];}
else{hold11=C[d[10]];}
    	
    	if(mask[d[11]]==28 || mask[d[11]]==3)
    	{hold12=C[d[12]]-2*dC;
 if(mask[d[12]]==28 || mask[d[12]]==3){hold12=C[k];}
}else{hold12=C[d[11]];}
    	
    	if(mask[d[12]]==28 || mask[d[12]]==3)
    	{hold13=C[d[11]]-2*dC;
 if(mask[d[11]]==28 || mask[d[11]]==3){hold13=C[k];}
}else{hold13=C[d[12]];}
    	
    	if(mask[d[13]]==28 || mask[d[13]]==3)
    	{hold14=C[d[10]]-2*dC;
 if(mask[d[10]]==28 || mask[d[10]]==3){hold14=C[k];}
}else{hold14=C[d[13]];}
    	
    	if(mask[d[14]]==28 || mask[d[14]]==3)
    	{hold15=C[d[17]]-2*dC;
 if(mask[d[17]]==28 || mask[d[17]]==3){hold15=C[k];}
}else{hold15=C[d[14]];}
    	
    	if(mask[d[15]]==28 || mask[d[15]]==3)
    	{hold16=C[d[16]]-2*dC;
 if(mask[d[16]]==28 || mask[d[16]]==3){hold16=C[k];}
}else{hold16=C[d[15]];}
    	
    	if(mask[d[16]]==28 || mask[d[16]]==3)
    	{hold17=C[d[15]]-2*dC;
 if(mask[d[15]]==28 || mask[d[15]]==3){hold17=C[k];}
}else{hold17=C[d[16]];}
    	
    	if(mask[d[17]]==28 || mask[d[17]]==3)
    	{hold18=C[d[14]]-2*dC;
 if(mask[d[14]]==28 || mask[d[14]]==3){hold18=C[k];}
}else{hold18=C[d[17]];}
			
			if(dimensions==3)
            {
            d2C=(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*C[k])/(6.0*dt*dt);
			}
			if(dimensions==2)
			{
            d2C=(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*C[k])/(6.0*dt*dt);
			}
			
			}
			//Computing Laplacian of C on the surface 	   
	else if (mask[k]==1)
	      {
			
				dC=Wc[k]*(C[k]-C[k]*C[k]);
				if(mask[d[0]]==28)
    	{hold1=C[d[1]]-2*dC;}else{hold1=C[d[0]];}
    	
    	if(mask[d[1]]==28)
    	{hold2=C[d[0]]-2*dC;}else{hold2=C[d[1]];}
    	
    	if(mask[d[2]]==28)
    	{hold3=C[d[3]]-2*dC;}else{hold3=C[d[2]];}
    	
    	if(mask[d[3]]==28)
    	{hold4=C[d[2]]-2*dC;}else{hold4=C[d[3]];}
    	
    	if(mask[d[4]]==28)
    	{hold5=C[d[5]]-2*dC;}else{hold5=C[d[4]];}
    	
    	if(mask[d[5]]==28)
    	{hold6=C[d[4]]-2*dC;}else{hold6=C[d[5]];}
    	
    	if(mask[d[6]]==28)
    	{hold7=C[d[9]]-2*dC;
	  if(mask[d[9]]==28){hold7=C[k];}
}else{hold7=C[d[6]];}
    	
    	if(mask[d[7]]==28)
    	{hold8=C[d[8]]-2*dC;
	  if(mask[d[8]]==28){hold8=C[k];}
}else{hold8=C[d[7]];}
    	
    	if(mask[d[8]]==28)
    	{hold9=C[d[7]]-2*dC;
	  if(mask[d[7]]==28){hold9=C[k];}
}else{hold9=C[d[8]];}
    	
    	if(mask[d[9]]==28)
    	{hold10=C[d[6]]-2*dC;
	  if(mask[d[6]]==28){hold10=C[k];}
}else{hold10=C[d[9]];}
    	
    	if(mask[d[10]]==28)
    	{hold11=C[d[13]]-2*dC;
	  if(mask[d[13]]==28){hold11=C[k];}
}else{hold11=C[d[10]];}
    	
    	if(mask[d[11]]==28)
    	{hold12=C[d[12]]-2*dC;
	  if(mask[d[12]]==28){hold12=C[k];}
}else{hold12=C[d[11]];}
    	
    	if(mask[d[12]]==28)
    	{hold13=C[d[11]]-2*dC;
	  if(mask[d[11]]==28){hold13=C[k];}
}else{hold13=C[d[12]];}
    	
    	if(mask[d[13]]==28)
    	{hold14=C[d[10]]-2*dC;
	  if(mask[d[10]]==28){hold14=C[k];}
}else{hold14=C[d[13]];}
    	
    	if(mask[d[14]]==28)
    	{hold15=C[d[17]]-2*dC;
	  if(mask[d[17]]==28){hold15=C[k];}
}else{hold15=C[d[14]];}
    	
    	if(mask[d[15]]==28)
    	{hold16=C[d[16]]-2*dC;
	  if(mask[d[16]]==28){hold16=C[k];}
}else{hold16=C[d[15]];}
    	
    	if(mask[d[16]]==28)
    	{hold17=C[d[15]]-2*dC;
	  if(mask[d[15]]==28){hold17=C[k];}
	}else{hold17=C[d[16]];}
    	
    	if(mask[d[17]]==28)
    	{hold18=C[d[14]]-2*dC;
	  if(mask[d[14]]==28){hold18=C[k];}
}else{hold18=C[d[17]];}
			
			if(dimensions==3)
            {
            d2C=(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*C[k])/(6.0*dt*dt);
			}
			if(dimensions==2)
			{
            d2C=(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*C[k])/(6.0*dt*dt);
			}
			
			}
	    
		
			
		
	
			
			
			mu[k]=2*B*( C[k]*pow(C[k]-1.0,2) + pow(C[k],2)*(C[k]-1.0) ) - kappa*d2C;
			
			//pc[k]=-kappa*C[k]*d2C;//Computing Laplace pressure

		}
	}
if(size>1)
{	
exchangemu();
}


//Compute Macroscopic velocity
for(k=k1;k<k2;k++)
{
neibour(k);
if(mask[k]!=28)

{			
			//Compute the central gradient of C in the bulk
			if(mask[k]==0 || mask[k]==2)
			{
            gradCC1=0.5*(C[d[0]]-C[d[1]])/dt;
			gradCC2=0.5*(C[d[1]]-C[d[0]])/dt;
    		gradCC3=0.5*(C[d[2]]-C[d[3]])/dt;
    		gradCC4=0.5*(C[d[3]]-C[d[2]])/dt;
    		gradCC7=0.5*(C[d[6]]-C[d[9]])/dt;
    		gradCC8=0.5*(C[d[7]]-C[d[8]])/dt;
    		gradCC9=0.5*(C[d[8]]-C[d[7]])/dt;
    		gradCC10=0.5*(C[d[9]]-C[d[6]])/dt;
    		
    		gradCC5=0.5*(C[d[4]]-C[d[5]])/dt;
    		gradCC6=0.5*(C[d[5]]-C[d[4]])/dt;
    		gradCC11=0.5*(C[d[10]]-C[d[13]])/dt;
    		gradCC12=0.5*(C[d[11]]-C[d[12]])/dt;
    		gradCC13=0.5*(C[d[12]]-C[d[11]])/dt;
    		gradCC14=0.5*(C[d[13]]-C[d[10]])/dt;
    		gradCC15=0.5*(C[d[14]]-C[d[17]])/dt;
    		gradCC16=0.5*(C[d[15]]-C[d[16]])/dt;
   			 gradCC17=0.5*(C[d[16]]-C[d[15]])/dt;
    		gradCC18=0.5*(C[d[17]]-C[d[14]])/dt;
			}
		//Compute central gradient of C on the surface
	else if(mask[k]==1)
			{
				if(mask[d[0]]==28 || mask[d[1]]==28)
    	{gradCC1=0.0;gradCC2=0.0;}
    	else
	        {			
                gradCC1=0.5*(C[d[0]]-C[d[1]])/dt;
    	        gradCC2=0.5*(C[d[1]]-C[d[0]])/dt;
    	    	}
    
    	
		if(mask[d[2]]==28 || mask[d[3]]==28)
    	{gradCC3=0.0;gradCC4=0.0;}
    	else
    	{			
    		
    		gradCC3=0.5*(C[d[2]]-C[d[3]])/dt;
    		
    		
    		
    		gradCC4=0.5*(C[d[3]]-C[d[2]])/dt;
    		

		}
		
		
		
		if(mask[d[4]]==28 || mask[d[5]]==28)
    	{gradCC5=0.0;gradCC6=0.0;}
    	else
    	{			
    		gradCC5=0.5*(C[d[4]]-C[d[5]])/dt;
    		
    		
    		gradCC6=0.5*(C[d[5]]-C[d[4]])/dt;
    		

		}
		
		
    
    	if(mask[d[6]]==28 || mask[d[9]]==28)
    	{gradCC7=0.0;gradCC10=0.0;}
    	else
    	{			
    		gradCC7=0.5*(C[d[6]]-C[d[9]])/dt;
    		
    		
    		gradCC10=0.5*(C[d[9]]-C[d[6]])/dt;
    		

		}
		
		if(mask[d[7]]==28 || mask[d[8]]==28)
    	{gradCC8=0.0;
    	gradCC9=0.0;}
    	else
    	{			
    		gradCC8=0.5*(C[d[7]]-C[d[8]])/dt;
    		
    		
    		gradCC9=0.5*(C[d[8]]-C[d[7]])/dt;
    		

		}
		
		
		if(mask[d[10]]==28 || mask[d[13]]==28)
    	{gradCC11=0.0;
    	gradCC14=0.0;}
    	else
    	{			
    		gradCC11=0.5*(C[d[10]]-C[d[13]])/dt;
    		
    		
    		gradCC14=0.5*(C[d[13]]-C[d[10]])/dt;
    		

		}
		
		if(mask[d[11]]==28 || mask[d[12]]==28)
    	{gradCC12=0.0;
    	gradCC13=0.0;}
    	else
    	{			
    		gradCC12=0.5*(C[d[11]]-C[d[12]])/dt;
    		
    		
    		gradCC13=0.5*(C[d[12]]-C[d[11]])/dt;
    		

		}
		
		if(mask[d[14]]==28 || mask[d[17]]==28)
    	{gradCC15=0.0;
    	gradCC18=0.0;}
    	else
    	{			
    		gradCC15=0.5*(C[d[14]]-C[d[17]])/dt;
    		
    		
    		gradCC18=0.5*(C[d[17]]-C[d[14]])/dt;
    		

		}
		
		if(mask[d[15]]==28 || mask[d[16]]==28)
    	{gradCC16=0.0;
    	gradCC17=0.0;}
    	else
    	{			
    		gradCC16=0.5*(C[d[15]]-C[d[16]])/dt;
    		
    		
    		gradCC17=0.5*(C[d[16]]-C[d[15]])/dt;
    		

		}
		
		
    
			}
				//Compute central gradient of C at corners
	else if(mask[k]==3)
			{
				if(mask[d[0]]==28 || mask[d[1]]==28 ||  mask[d[0]]==3 || mask[d[1]]==3 )
    	{gradCC1=0.0;gradCC2=0.0;}
    	else
	        {			
                gradCC1=0.5*(C[d[0]]-C[d[1]])/dt;
    	        gradCC2=0.5*(C[d[1]]-C[d[0]])/dt;
    	    	}
    
    	
		if(mask[d[2]]==28 || mask[d[3]]==28 ||  mask[d[2]]==3 || mask[d[3]]==3 )
    	{gradCC3=0.0;gradCC4=0.0;}
    	else
    	{			
    		
    		gradCC3=0.5*(C[d[2]]-C[d[3]])/dt;
    		
    		
    		
    		gradCC4=0.5*(C[d[3]]-C[d[2]])/dt;
    		

		}
		
		
		
		if(mask[d[4]]==28 || mask[d[5]]==28 ||  mask[d[4]]==3 || mask[d[5]]==3 )
    	{gradCC5=0.0;gradCC6=0.0;}
    	else
    	{			
    		gradCC5=0.5*(C[d[4]]-C[d[5]])/dt;
    		
    		
    		gradCC6=0.5*(C[d[5]]-C[d[4]])/dt;
    		

		}
		
		
    
    	if(mask[d[6]]==28 || mask[d[9]]==28 ||  mask[d[6]]==3 || mask[d[9]]==3 )
    	{gradCC7=0.0;gradCC10=0.0;}
    	else
    	{			
    		gradCC7=0.5*(C[d[6]]-C[d[9]])/dt;
    		
    		
    		gradCC10=0.5*(C[d[9]]-C[d[6]])/dt;
    		

		}
		
		if(mask[d[7]]==28 || mask[d[8]]==28 ||  mask[d[7]]==3 || mask[d[8]]==3 )
    	{gradCC8=0.0;
    	gradCC9=0.0;}
    	else
    	{			
    		gradCC8=0.5*(C[d[7]]-C[d[8]])/dt;
    		
    		
    		gradCC9=0.5*(C[d[8]]-C[d[7]])/dt;
    		

		}
		
		
		if(mask[d[10]]==28 || mask[d[13]]==28 ||  mask[d[10]]==3 || mask[d[13]]==3 )
    	{gradCC11=0.0;
    	gradCC14=0.0;}
    	else
    	{			
    		gradCC11=0.5*(C[d[10]]-C[d[13]])/dt;
    		
    		
    		gradCC14=0.5*(C[d[13]]-C[d[10]])/dt;
    		

		}
		
		if(mask[d[11]]==28 || mask[d[12]]==28 ||  mask[d[11]]==3 || mask[d[12]]==3 )
    	{gradCC12=0.0;
    	gradCC13=0.0;}
    	else
    	{			
    		gradCC12=0.5*(C[d[11]]-C[d[12]])/dt;
    		
    		
    		gradCC13=0.5*(C[d[12]]-C[d[11]])/dt;
    		

		}
		
		if(mask[d[14]]==28 || mask[d[17]]==28 ||  mask[d[14]]==3 || mask[d[17]]==3 )
    	{gradCC15=0.0;
    	gradCC18=0.0;}
    	else
    	{			
    		gradCC15=0.5*(C[d[14]]-C[d[17]])/dt;
    		
    		
    		gradCC18=0.5*(C[d[17]]-C[d[14]])/dt;
    		

		}
		
		if(mask[d[15]]==28 || mask[d[16]]==28 || mask[d[15]]==3 || mask[d[16]]==3 )
    	{gradCC16=0.0;
    	gradCC17=0.0;}
    	else
    	{			
    		gradCC16=0.5*(C[d[15]]-C[d[16]])/dt;
    		
    		
    		gradCC17=0.5*(C[d[16]]-C[d[15]])/dt;
    		

		}
		
		
    
			}
			//Compute cartesian finite differance
			if(dimensions==2)
			{
    		gradCCx=1.0/3.0*(gradCC1-gradCC2)+1.0/12.0*(gradCC7-gradCC8+gradCC9-gradCC10);
    		gradCCy=1.0/3.0*(gradCC3-gradCC4)+1.0/12.0*(gradCC7+gradCC8-gradCC9-gradCC10);
    		}
    		if(dimensions==3)
    		{
    		gradCCx=1.0/6.0*(gradCC1-gradCC2)+1.0/12.0*(gradCC7-gradCC8+gradCC9-gradCC10+gradCC15+gradCC17-gradCC16-gradCC18);
    		gradCCy=1.0/6.0*(gradCC3-gradCC4)+1.0/12.0*(gradCC7+gradCC8-gradCC9-gradCC10+gradCC11+gradCC13-gradCC12-gradCC14);
    		gradCCz=1.0/6.0*(gradCC5-gradCC6)+1.0/12.0*(gradCC11+gradCC12-gradCC13-gradCC14+gradCC16+gradCC15-gradCC17-gradCC18);
    		}
			
			
			 //compute macroscopic velocity
			 if(dimensions==3)
			 {
			   ux[k]=(3.0*(g1[k]-g2[k]+g7[k]-g10[k]+g9[k]-g8[k]+g15[k]+g17[k]-g18[k]-g16[k])+0.5*dt*mu[k]*gradCCx)/rho[k];
			   uy[k]=(3.0*(g3[k]-g4[k]+g7[k]-g10[k]+g8[k]-g9[k]+g11[k]+g13[k]-g12[k]-g14[k])+0.5*dt*mu[k]*gradCCy)/rho[k];
			   uz[k]=(3.0*(g5[k]-g6[k]+g11[k]-g14[k]+g12[k]-g13[k]+g15[k]+g16[k]-g17[k]-g18[k])+0.5*dt*mu[k]*gradCCz)/rho[k];
			   
			   //pc[k]+=kappa/2*(gradCCx*gradCCx+gradCCy*gradCCy+gradCCz*gradCCz);//Compute laplacian pressure
			   //pt[k]=2*B*( C[k]*pow(C[k]-1.0,2) + pow(C[k],2)*(C[k]-1.0) )-B*C[k]*C[k]*(C[k]-1)*(C[k]-1);//compute total preesure
			  

			 
 


	}
			//compute macroscopic velocity
			if(dimensions==2)
			{
			   ux[k]=(3.0*(g1[k]-g2[k]+g7[k]-g10[k]+g9[k]-g8[k])+0.5*dt*mu[k]*gradCCx)/rho[k];
			   uy[k]=(3.0*(g3[k]-g4[k]+g7[k]-g10[k]+g8[k]-g9[k])+0.5*dt*mu[k]*gradCCy)/rho[k];
			  	uz[k]=0.0;
				
			}
}
}
if(size>1)
{
exchangevel();
}
//Compute macroscopic pressure

for(k=k1;k<k2;k++)
{neibour(k);
if(mask[k]!=28)
{
			//compute gradient of density in the bulk
			if(mask[k]==0 || mask[k]==2)
			{
            gradrhoC1=0.5*(rho[d[0]]-rho[d[1]])/dt;
			gradrhoC2=0.5*(rho[d[1]]-rho[d[0]])/dt;
    		gradrhoC3=0.5*(rho[d[2]]-rho[d[3]])/dt;
    		gradrhoC4=0.5*(rho[d[3]]-rho[d[2]])/dt;
    		gradrhoC7=0.5*(rho[d[6]]-rho[d[9]])/dt;
    		gradrhoC8=0.5*(rho[d[7]]-rho[d[8]])/dt;
    		gradrhoC9=0.5*(rho[d[8]]-rho[d[7]])/dt;
    		gradrhoC10=0.5*(rho[d[9]]-rho[d[6]])/dt;
    		
    		gradrhoC5=0.5*(rho[d[4]]-rho[d[5]])/dt;
    gradrhoC6=0.5*(rho[d[5]]-rho[d[4]])/dt;
    gradrhoC11=0.5*(rho[d[10]]-rho[d[13]])/dt;
    gradrhoC12=0.5*(rho[d[11]]-rho[d[12]])/dt;
    gradrhoC13=0.5*(rho[d[12]]-rho[d[11]])/dt;
    gradrhoC14=0.5*(rho[d[13]]-rho[d[10]])/dt;
    gradrhoC15=0.5*(rho[d[14]]-rho[d[17]])/dt;
    gradrhoC16=0.5*(rho[d[15]]-rho[d[16]])/dt;
    gradrhoC17=0.5*(rho[d[16]]-rho[d[15]])/dt;
    gradrhoC18=0.5*(rho[d[17]]-rho[d[14]])/dt;
    }
			//compute gradient of density on the surface
    else if(mask[k]==1)
			{
				if(mask[d[0]]==28 || mask[d[1]]==28)
    	{gradrhoC1=0.0;gradrhoC2=0.0;}
    	else
    	{			
    		
    		gradrhoC1=0.5*(C[d[0]]-C[d[1]])/dt;
    		
    		
    		
    		gradrhoC2=0.5*(C[d[1]]-C[d[0]])/dt;
    		

		}
    
    	
		if(mask[d[2]]==28 || mask[d[3]]==28)
    	{gradrhoC3=0.0;gradrhoC4=0.0;}
    	else
    	{			
    		
    		gradrhoC3=0.5*(C[d[2]]-C[d[3]])/dt;
    		
    		
    		
    		gradrhoC4=0.5*(C[d[3]]-C[d[2]])/dt;
    		

		}
		
		
		
		if(mask[d[4]]==28 || mask[d[5]]==28)
    	{gradrhoC5=0.0;gradrhoC6=0.0;}
    	else
    	{			
    		gradrhoC5=0.5*(C[d[4]]-C[d[5]])/dt;
    		
    		
    		gradrhoC6=0.5*(C[d[5]]-C[d[4]])/dt;
    		

		}
		
		
    
    	if(mask[d[6]]==28 || mask[d[9]]==28)
    	{gradrhoC7=0.0;gradrhoC10=0.0;}
    	else
    	{			
    		gradrhoC7=0.5*(C[d[6]]-C[d[9]])/dt;
    		
    		
    		gradrhoC10=0.5*(C[d[9]]-C[d[6]])/dt;
    		

		}
		
		if(mask[d[7]]==28 || mask[d[8]]==28)
    	{gradrhoC8=0.0;
    	gradrhoC9=0.0;}
    	else
    	{			
    		gradrhoC8=0.5*(C[d[7]]-C[d[8]])/dt;
    		
    		
    		gradrhoC9=0.5*(C[d[8]]-C[d[7]])/dt;
    		

		}
		
		
		if(mask[d[10]]==28 || mask[d[13]]==28)
    	{gradrhoC11=0.0;
    	gradrhoC14=0.0;}
    	else
    	{			
    		gradrhoC11=0.5*(C[d[10]]-C[d[13]])/dt;
    		
    		
    		gradrhoC14=0.5*(C[d[13]]-C[d[10]])/dt;
    		

		}
		
		if(mask[d[11]]==28 || mask[d[12]]==28)
    	{gradrhoC12=0.0;
    	gradrhoC13=0.0;}
    	else
    	{			
    		gradrhoC12=0.5*(C[d[11]]-C[d[12]])/dt;
    		
    		
    		gradrhoC13=0.5*(C[d[12]]-C[d[11]])/dt;
    		

		}
		
		if(mask[d[14]]==28 || mask[d[17]]==28)
    	{gradrhoC15=0.0;
    	gradrhoC18=0.0;}
    	else
    	{			
    		gradrhoC15=0.5*(C[d[14]]-C[d[17]])/dt;
    		
    		
    		gradrhoC18=0.5*(C[d[17]]-C[d[14]])/dt;
    		

		}
		
		if(mask[d[15]]==28 || mask[d[16]]==28)
    	{gradrhoC16=0.0;
    	gradrhoC17=0.0;}
    	else
    	{			
    		gradrhoC16=0.5*(C[d[15]]-C[d[16]])/dt;
    		
    		
    		gradrhoC17=0.5*(C[d[16]]-C[d[15]])/dt;
    		

		}
		
		
    
			}
	//compute gradient of density at a corner
    else if(mask[k]==3)
			{
				if(mask[d[0]]==28 || mask[d[1]]==28 ||  mask[d[0]]==3 || mask[d[1]]==3 )
    	{gradrhoC1=0.0;gradrhoC2=0.0;}
    	else
    	{			
    		
    		gradrhoC1=0.5*(C[d[0]]-C[d[1]])/dt;
    		
    		
    		
    		gradrhoC2=0.5*(C[d[1]]-C[d[0]])/dt;
    		

		}
    
    	
		if(mask[d[2]]==28 || mask[d[3]]==28 ||  mask[d[2]]==3 || mask[d[3]]==3 )
    	{gradrhoC3=0.0;gradrhoC4=0.0;}
    	else
    	{			
    		
    		gradrhoC3=0.5*(C[d[2]]-C[d[3]])/dt;
    		
    		
    		
    		gradrhoC4=0.5*(C[d[3]]-C[d[2]])/dt;
    		

		}
		
		
		
		if(mask[d[4]]==28 || mask[d[5]]==28 ||  mask[d[4]]==3 || mask[d[5]]==3 )
    	{gradrhoC5=0.0;gradrhoC6=0.0;}
    	else
    	{			
    		gradrhoC5=0.5*(C[d[4]]-C[d[5]])/dt;
    		
    		
    		gradrhoC6=0.5*(C[d[5]]-C[d[4]])/dt;
    		

		}
		
		
    
    	if(mask[d[6]]==28 || mask[d[9]]==28 ||  mask[d[6]]==3 || mask[d[9]]==3 )
    	{gradrhoC7=0.0;gradrhoC10=0.0;}
    	else
    	{			
    		gradrhoC7=0.5*(C[d[6]]-C[d[9]])/dt;
    		
    		
    		gradrhoC10=0.5*(C[d[9]]-C[d[6]])/dt;
    		

		}
		
		if(mask[d[7]]==28 || mask[d[8]]==28 ||  mask[d[7]]==3 || mask[d[8]]==3 )
    	{gradrhoC8=0.0;
    	gradrhoC9=0.0;}
    	else
    	{			
    		gradrhoC8=0.5*(C[d[7]]-C[d[8]])/dt;
    		
    		
    		gradrhoC9=0.5*(C[d[8]]-C[d[7]])/dt;
    		

		}
		
		
		if(mask[d[10]]==28 || mask[d[13]]==28 ||  mask[d[10]]==3 || mask[d[13]]==3 )
    	{gradrhoC11=0.0;
    	gradrhoC14=0.0;}
    	else
    	{			
    		gradrhoC11=0.5*(C[d[10]]-C[d[13]])/dt;
    		
    		
    		gradrhoC14=0.5*(C[d[13]]-C[d[10]])/dt;
    		

		}
		
		if(mask[d[11]]==28 || mask[d[12]]==28 ||  mask[d[11]]==3 || mask[d[12]]==3 )
    	{gradrhoC12=0.0;
    	gradrhoC13=0.0;}
    	else
    	{			
    		gradrhoC12=0.5*(C[d[11]]-C[d[12]])/dt;
    		
    		
    		gradrhoC13=0.5*(C[d[12]]-C[d[11]])/dt;
    		

		}
		
		if(mask[d[14]]==28 || mask[d[17]]==28 || mask[d[14]]==3 || mask[d[17]]==3 )
    	{gradrhoC15=0.0;
    	gradrhoC18=0.0;}
    	else
    	{			
    		gradrhoC15=0.5*(C[d[14]]-C[d[17]])/dt;
    		
    		
    		gradrhoC18=0.5*(C[d[17]]-C[d[14]])/dt;
    		

		}
		
		if(mask[d[15]]==28 || mask[d[16]]==28 || mask[d[15]]==3 || mask[d[16]]==3 )
    	{gradrhoC16=0.0;
    	gradrhoC17=0.0;}
    	else
    	{			
    		gradrhoC16=0.5*(C[d[15]]-C[d[16]])/dt;
    		
    		
    		gradrhoC17=0.5*(C[d[16]]-C[d[15]])/dt;
    		

		}
		
		
    
			}

    
    		//compute cartesian gradients of rho
    		if(dimensions==3)
    		{
    		gradrhoCx=1.0/6.0*(gradrhoC1-gradrhoC2)+1.0/12.0*(gradrhoC7-gradrhoC8+gradrhoC9-gradrhoC10+gradrhoC15+gradrhoC17-gradrhoC16-gradrhoC18);
    		gradrhoCy=1.0/6.0*(gradrhoC3-gradrhoC4)+1.0/12.0*(gradrhoC7+gradrhoC8-gradrhoC9-gradrhoC10+gradrhoC11+gradrhoC13-gradrhoC12-gradrhoC14);
    		gradrhoCz=1.0/6.0*(gradrhoC5-gradrhoC6)+1.0/12.0*(gradrhoC11+gradrhoC12-gradrhoC13-gradrhoC14+gradrhoC16+gradrhoC15-gradrhoC17-gradrhoC18);
    		}
    		if (dimensions==2)
    		{
            gradrhoCx=1.0/3.0*(gradrhoC1-gradrhoC2)+1.0/12.0*(gradrhoC7-gradrhoC8+gradrhoC9-gradrhoC10);
    		gradrhoCy=1.0/3.0*(gradrhoC3-gradrhoC4)+1.0/12.0*(gradrhoC7+gradrhoC8-gradrhoC9-gradrhoC10);
			}
			
			
	//compute pressure
    if (dimensions==3)
    {
      p[k]=g0[k]+g1[k]+g2[k]+g3[k]+g4[k]+g7[k]+g8[k]+g9[k]+g10[k]+g11[k]+g12[k]+g13[k]+g14[k]+g15[k]+g16[k]+g17[k]+g18[k]+g5[k]+g6[k]+dt*ux[k]*gradrhoCx/6.0+dt*gradrhoCy*uy[k]/6.0+dt*gradrhoCz*uz[k]/6.0;//compute pressure
	}
	if(dimensions==2)
	{
	    p[k]=g0[k]+g1[k]+g2[k]+g3[k]+g4[k]+g7[k]+g8[k]+g9[k]+g10[k]+dt*ux[k]*gradrhoCx/6.0+dt*gradrhoCy*uy[k]/6.0;//compute pressure

	}
}
}
if(size>1)
{
exchangep();
}



}



