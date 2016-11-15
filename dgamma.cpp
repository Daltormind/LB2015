//Alternative dgamma calculations

#include "wet.h"

void wet::diffgamma()
{
	double dgammai,diff,gammat;
	gammat=0.0;
	for(int c=0;c<19;c++)
	{
	dgamma1[k][c]=0;
	
	for(i=0;i<3;i++)
	{	
	
		dgammai=0.0;
		
		for(int b=1;b<19;b++)
		{
			dgammai+=t[b]*e[b][i]*(gamma[d[b-1]][c]-gamma[d[com[b]-1]][c])/2;
		}
		
		if(k==388)
		{
			cout << "At k=" << k << " a=" << c << " i=" << i << " dgammai= " << dgammai<< endl;
		}
		
		dgamma1[k][c]+=(e[c][i]-u[k][i])*dgammai;
		
		
		
	}
	
	if(k==388)
		{
			//cout << "At k=" << k << " a=" << c  << "dgamma1= " << dgamma1[k][c]<< endl;
		}
	
	
	
	//gammat+=dgamma1[k][c];
	
	}
	
	if(gammat!=0)
	{
	//	cout << "gammat!=0 " << gammat << endl;
	}
	
	
}