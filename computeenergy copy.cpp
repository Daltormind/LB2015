// Calculate Kinetic energy

#include"wet.h"

void wet::computeenergy()

{
	
	
	Ekin=0.0;
	for(k=0;k<Lx*Ly*Lz;k++)
	{
		Ekin+=muGlobal(k);
		
	}
	
	cout << "At t=" << st << " Efree=" << Ekin << endl;
}