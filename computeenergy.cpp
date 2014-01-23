// Calculate Kinetic energy

#include"wet.h"

void wet::computeenergy()

{
	
  if(st%(infost) == 0){
    if(mask[k]!=28)
      {
    double en;
	
		en=B*C[k]*C[k]*(C[k]-1.0)*(C[k]-1.0)+(kappa/2.0)*(gradCCx*gradCCx+gradCCy*gradCCy+gradCCz*gradCCz);
		
		
		
		
		if(C[k]<0.1 or C[k]>0.9 )
		{
		Ebulk+=en;
		}
		else
		{
		Eint+=en;
		}
		
		
		if(mask[k]==1)
		{
		  Esurf+=Wc*kappa*(C[k]*C[k]/2.0 - C[k]*C[k]*C[k]/3.0);
		}
      }
		if (k==(k2-1)){
		double reducedEnergy;
		
		
			
			reducedEnergy = 0.0;
			MPI_Reduce(&Ebulk,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			Ebulk = reducedEnergy;
						
			reducedEnergy = 0.0;
			MPI_Reduce(&Eint,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			Eint = reducedEnergy;
			
			reducedEnergy = 0.0;
			MPI_Reduce(&Esurf,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			Esurf = reducedEnergy;
			
		       
			
			
		
		
		if (rank == ROOT) {
			
			energy = Ebulk + Eint + Esurf;
		}
	}
	}	
	
	
	
}
