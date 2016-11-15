//Mach.cpp computes the mach number and the laplace operator terms for h propogation

#include "wet.h"

void wet::mach()
{
	
		
		
		
	
	for(a=0;a<Q;a++)
	{
	
	if(C[k]<0)
	{
		mu[k]=(mu[k]+2*BA*C[k]);
		
		
		
	}
	
	
	
	
	
	for(a=0;a<Q;a++)
	{
	
	//for(int b=1;b<Q;b++)
		//{
			//gamhold[a]+=t[b]*(gamma[d[b-1]][a]-2*gamma[k][a]+gamma[d[com[b]-1]][a])/dt/cs2;
			if(dimensions==1)
			{
				gamhold[a]=gamma[d[0]][a]-2*gamma[k][a]+gamma[d[1]][a];
			}
			
		//}

		
	
	}
	}
	
	for(k=k1;k<k2;k++)
	{
		for(a=0;a<Q;a++)
		{
			if(a==0)
			{
				hc[k][a]+=M/2*(gamhold[a]+gamhold[a]);
				ht[k][a]+=M/2*(gamhold[a]+gamhold[a]);
			}
			else
			{	
				hc[k][a]+=M/2*(gamhold[d[com[a]-1]][a]+gamhold[a]);
				ht[k][a]+=M/2*(gamhold[d[com[a]-1]][a]+gamhold[a]);
			}
		
			h[k][a]=hc[k][a];
			g[k][a]=gc[k][a];
		
		}
	
		
	}
	
	
} 