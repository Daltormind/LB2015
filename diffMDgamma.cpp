#include "wet.h"

void wet::diffMDgamma()
{
	if(dimensions==1)
	{
		
			dgammat[0]=1/4*(5*gamma[d[0]][a]-gamma[d[1]][a]-3*gamma[k][a]-gamma[d2[0]][a]);
			dgammat[1]=0.0;
			dgammat[2]=0.0;
		
	}
}

