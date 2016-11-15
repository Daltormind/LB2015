//Propagates the fields before collision 

#include "wet.h"

void wet ::Propogation()
{
	//g propogation
	
	g0[k]=g0[k];
	h0[k]=h0[k];
	
	for(a=1;a<19;a++)
		{
			g[k][a]=g[d[com[a]]][a];
			f[k][a]=f[d[com[a]]][a];
		
		
		}
	
	g1[k]=g[d[2]][1];
	g2[k]=g[d[1]][2];
	
	





}