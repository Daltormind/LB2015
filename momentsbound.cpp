
#include "wet.h"

void wet ::momentsbound()
{
	
	// Calculate values of C in boundry such that derivatives are satisfied.
	for(k=k1;k<k2;k++)
		{
		neibour(k);
		if(mask[k]!=28)
		{
			
			
			if(mask[k]==1)
			{
				//dC=Wc*(C[k]-C[k]*C[k]);
				C[d[0]]=C[d[1]];//-2*dC;
				C[d2[0]]=C[d2[1]];//+2*dC;
			}
			
			if(mask[k]==2)
			{
				//dC=Wc*(C[k]-C[k]*C[k]);
				C[d[1]]=C[d[0]];//-2*dC;
				C[d2[1]]=C[d2[0]];//+2*dC;
			}
		}
		}
		
	

	//calculate values of moments in boundary 
	
	for(k=k1;k<k2;k++)
	{
		neibour(k);
		if(mask[k]!=28)
		{
			
			
			if(mask[k]==1)
			{
				
				
				mu[d[0]]=mu[d[1]];
				mu[d2[0]]=mu[d2[1]];
				
				muh[d[0]]=muh[d[1]];
				muh[d2[0]]=muh[d2[1]];;
				
				rho[d[0]]=rho[d[1]];
				rho[d2[0]]=muh[d2[1]];
				
				p[d[0]]=p[d[1]];
				p[d2[0]]=p[d2[1]];
			}
			
			if(mask[k]==2)
			{
				
				mu[d[1]]=mu[d[0]];
				mu[d2[1]]=mu[d2[0]];
				
				muh[d[1]]=muh[d[0]];
				muh[d2[1]]=muh[d2[0]];
				
				rho[d[1]]=rho[d[0]];
				rho[d2[1]]=rho[d2[0]];
				
				p[d[1]]=p[d[0]];
				p[d2[1]]=p[d2[0]];
			}
		}
	}

}