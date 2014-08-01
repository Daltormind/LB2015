// Calculate Kinetic energy

#include"wet.h"

void wet::computeenergy()

{
	
  if(st%(infost) == 0){
    if(mask[k]!=28)
      {
    double en;
    //Compute the surface energy Portion
		en=B*C[k]*C[k]*(C[k]-1.0)*(C[k]-1.0)+(kappa/2.0)*(gradCCx*gradCCx+gradCCy*gradCCy+gradCCz*gradCCz);
		
		
		
		
		if(C[k]<0.1 or C[k]>0.9 )
		{
		Ebulk+=en;
		}
		else
		{
		Eint+=en;
		}
		
		
		if(mask[k]!=0 and mask[k]!=2)
		{
		  Esurf+=Wc*kappa*(C[k]*C[k]/2.0 - C[k]*C[k]*C[k]/3.0);
		}
     





      
	
    //Compute the Total Local Kinetic Energy

		KEx+=rho[k]*ux[k]*ux[k]/2.0;
		KEy+=rho[k]*uy[k]*uy[k]/2.0;
		KEz+=rho[k]*uz[k]*uz[k]/2.0;
		
		//Compute Total pressure energy dU=-pdV

		dU+=-p[k];

		//Compute total fluid Volume
		
		if(C[k]>=0.5)
		  {
		    vol+=1;
		  }

		//Compute Total composition

		Ctot+=C[k];
		rhotot+=rho[k];

		//Compute Drop COM motion and KE

		COMx+=rho[k]*ux[k];
		COMy+=rho[k]*uy[k];
		COMz+=rho[k]*uz[k];

		

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
			

			reducedEnergy = 0.0;
			MPI_Reduce(&KEx,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			KEx = reducedEnergy;
			
		       
			reducedEnergy = 0.0;
			MPI_Reduce(&KEy,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			KEy = reducedEnergy;
			
			
			reducedEnergy = 0.0;
			MPI_Reduce(&KEz,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			KEz = reducedEnergy;
			
			
			reducedEnergy = 0.0;
			MPI_Reduce(&COMx,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			COMx = reducedEnergy;
			
			
			reducedEnergy = 0.0;
			MPI_Reduce(&COMy,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			COMy = reducedEnergy;
			
			
			reducedEnergy = 0.0;
			MPI_Reduce(&COMz,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			COMz = reducedEnergy;
			
			
			reducedEnergy = 0.0;
			MPI_Reduce(&Ctot,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			Ctot = reducedEnergy;
			
			
			reducedEnergy = 0.0;
			MPI_Reduce(&rhotot,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			rhotot = reducedEnergy;
			

			reducedEnergy = 0.0;
			MPI_Reduce(&vol,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			vol = reducedEnergy;
			
		if (rank == ROOT) {
			
			energy = Ebulk + Eint + Esurf;
		}
	}
	}	
	
	
	
}
