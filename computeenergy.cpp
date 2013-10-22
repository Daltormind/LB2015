// Calculate Kinetic energy

#include"wet.h"

void wet::computeenergy()

{
	double Ehold;
	
	Ekin=0.0;
	for(k=k1;k<k2;k++)
	{
		Ehold=0.5*rho[k]*(ux[k]*ux[k]+uy[k]*uy[k]);
		if(Ehold>Ekin){Ekin=Ehold;}
	}
	
	cout << "At t=" << st << " Ekin=" << Ekin << endl;
}