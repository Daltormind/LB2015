
#include"wet.h"

void wet::computesurfarea()

{

  if(mask[k]==1 || mask[k]==3)
    {  
      if(C[k]>0.15){surfarea+=1;}
    }
 
  computecoordinates(k);
  if((mask[k]==1 || mask[k]==3) && zk==0)
    {

     
      if(C[k]>0.15){
	if(xk>xhold){xhold=xk+ys-Lx-xs;}
	if(yk>yhold){yhold=yk;}
	
      
      }
    }

  if((mask[k]==1 || mask[k]==3) && yk==0)
    {
      if(C[k]>0.15)
	{
	  if(zk>zhold){zhold=zk;}
	}
    }
  

	if (k==(k2-1)){
		double reducedEnergy;
				
			
			reducedEnergy = 0.0;
			MPI_Reduce(&surfarea,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			surfarea = reducedEnergy;
						
				
	}
	
	
	if (k==(k2-1)){
		double reducedEnergy;
				
			
			reducedEnergy = 0.0;
			MPI_Reduce(&xhold,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			xhold = reducedEnergy;
						
				
	}

	
	if (k==(k2-1)){
		double reducedEnergy;
				
			
			reducedEnergy = 0.0;
			MPI_Reduce(&yhold,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			yhold = reducedEnergy;
						
				
	}

	
	if (k==(k2-1)){
		double reducedEnergy;
				
			
			reducedEnergy = 0.0;
			MPI_Reduce(&zhold,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			zhold = reducedEnergy;
						
				
	}

		
	
	

}
