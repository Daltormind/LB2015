//Equilibrium computes the equilibrium values of the pressure and momentum equations 

#include "wet.h"

void wet ::equilibriumg()

{



for(a=0,a<19;a++)
{
	dgamma[k][a]=((gamma[d[k][0]][a]-gamma[d[k][1]][a])/t1/2+(gamma[d[k][6]][a]
	+gamma[d[k][8]][a]+gamma[d[k][14]][a]+gamma[d[k][16]][a]-gamma[d[k][7]][a]
	-gamma[d[k][9]][a]-C[d[k][15]]-gamma[d[k][17]][a])/t2/2)*(e[0][a]-u[k][0]);
	
	dgamma[k][a]+=((gamma[d[k][2]][a]-gamma[d[k][3]][a])/t1/2+(gamma[d[k][6]][a]
	+gamma[d[k][7]][a]+gamma[d[k][10]][a]+gamma[d[k][12]][a]-gamma[d[k][8]][a]
	-gamma[d[k][9]][a]-gamma[d[k][11]][a]-gamma[d[k][13]][a])/t2/2)*(e[1][a]-u[k][1]);
	
	dgamma[k][a]+=(gamma[d[k][4]][a]-gamma[d[k][5]][a])/t1/2+(gamma[d[k][10]][a]
	+gamma[d[k][11]][a]+gamma[d[k][14]][a]+gamma[d[k][15]][a]-gamma[d[k][12]][a]
	-gamma[d[k][13]][a]-gamma[d[k][16]][a]-gamma[d[k][17]][a])/t2/2;


	
	geq[k][a]=rho[k]*gamma[k][a]*cs2+(p[k]-rho[k]*cs2)*t[a]*rho[k]+(C[k]*mu[k]/cs2-rho[k])*dgamma[k][a];
	
	
	
	
	
	
	
	
	for(i=0;i<3;i++)
		{	
		
			
		
			geq[k][a]+=(e[i][a]-u[k][i])*((gamma[k][a]-t[a])*drho[k][i]-C[k]*gamma[k]/cs2*dmu[k][i];
		
		}
	}
	}