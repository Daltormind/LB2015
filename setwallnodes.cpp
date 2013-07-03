

#include "wet.h"

void wet::setwallnodes()
{
	
	double Chold;	
	if(mask[k]==1)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][1]][1]]+4*C[d[k][1]]);
		
		h[k][2]=h[k][1];
		h[k][10]=h[k][7];
		h[k][8]=h[k][9];
		h[k][0]+=h[d[k][0]][1]+h[d[k][6]][7]+h[d[k][8]][9]-h[k][2]-h[k][8]-h[k][10];
		
		g[k][2]=g[k][1];
		g[k][10]=g[k][7];
		g[k][8]=g[k][9];
		g[k][0]+=g[d[k][0]][1]+g[d[k][6]][7]+g[d[k][8]][9]-g[k][2]-g[k][8]-g[k][10];
	}
	
	if(mask[k]==2)
	{
		//Chold=1.0/3.0*(-2*dC-C[d[d[k][0]][0]]+4*C[d[k][0]]);
		
		h[k][1]=h[k][2];
		h[k][7]=h[k][10];
		h[k][9]=h[k][8];
		h[k][0]+=h[d[k][1]][2]+h[d[k][7]][8]+h[d[k][9]][10]-h[k][1]-h[k][7]-h[k][9];

		
		g[k][1]=g[k][2];
		g[k][7]=g[k][10];
		g[k][9]=g[k][8];
		g[k][0]+=g[d[k][1]][2]+g[d[k][7]][8]+g[d[k][9]][10]-g[k][1]-g[k][7]-g[k][9];

		
	}



}