//computesurfarea.cpp
//Computes the contact area between liquid and solid in the simulation as well as other useful variables.
//Used in algorithm.cpp
#include"wet.h"

void wet::computesurfarea()

{

  if(mask[k]==1 || mask[k]==3)
    {  
      if(C[k]>0.15){surfarea+=1;}//computes surface area of contact between liquid and solid
    }
 
  computecoordinates(k);
  if((mask[k]==1 || mask[k]==3) && zk==0)
    {

     
      if(C[k]>0.15){
	
	if(yk>yhold){yhold=yk;}//Computes maximal spread on the surface in the y direction in the z=0 plane. 
	
      
      }
    }

  if((mask[k]==1 || mask[k]==3) && yk==0)
    {
      if(C[k]>0.15)
	{
	  if(zk>zhold){zhold=zk;}//Computes maximal spread on the surface in the z direction in the y=0 plane.
	}
    }
    
    
      if(C[k]>0.15)
	{
	  if((xs-xk)>xhold){xhold=(xs-xk);}//Computes the maximal height of the drop in the x axis 
	}
    
  
//Transferring Data back to root computing node.
	if (k==(k2-1)){
		double reducedEnergy;
				
			
			reducedEnergy = 0.0;
			MPI_Reduce(&surfarea,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			surfarea = reducedEnergy;
						
				
	}
	
	
	if (k==(k2-1)){
		double reducedEnergy;
				
			
			reducedEnergy = 0.0;
			MPI_Reduce(&xhold,&reducedEnergy,1,MPI_DOUBLE,MPI_MAX,0,MPI_COMM_WORLD);
			xhold = reducedEnergy;
						
				
	}

	
	if (k==(k2-1)){
		double reducedEnergy;
				
			
			reducedEnergy = 0.0;
			MPI_Reduce(&yhold,&reducedEnergy,1,MPI_DOUBLE,MPI_MAX,0,MPI_COMM_WORLD);
			yhold = reducedEnergy;
						
				
	}

	
	if (k==(k2-1)){
		double reducedEnergy;
				
			
			reducedEnergy = 0.0;
			MPI_Reduce(&zhold,&reducedEnergy,1,MPI_DOUBLE,MPI_MAX,0,MPI_COMM_WORLD);
			zhold = reducedEnergy;
						
				
	}

		
	
	

}
