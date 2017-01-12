// Calculate Kinetic energy
//Calculates the various outputs which are output in write energy. 

#include"wet.h"

void wet::computeenergy()

{
	
  if(st%(infost) == 0){
    if(mask[k]!=28)
      {
	computecoordinates(k);
    double en;
    //Compute the surface energy Portion
		en=B*C[k]*C[k]*(C[k]-1.0)*(C[k]-1.0)+(kappa/2.0)*(gradCCx*gradCCx+gradCCy*gradCCy+gradCCz*gradCCz);
		
		
		
		
		if(C[k]<0.1 or C[k]>0.9 )
		{
		Ebulk+=en;//Calculating bulk energy
		}
		else
		{
		Eint+=en;//Calculating interface energy
		}
		
		
		if(mask[k]!=0 and mask[k]!=2)
		{
		  Esurf+=Wc[k]*kappa*(C[k]*C[k]/2.0 - C[k]*C[k]*C[k]/3.0);//Calculating solid surface energy
		}
		

			if(yk==0 and zk==0)
			  {
		   	if(C[k]>0.2 and C[k]<0.8)
		   	{
			vsum+=ux[k];//Calculating the summation of velocity in the interface.
			vn+=1;//Calculating the number of nodes in the interface. 
			xsum+=xk;//Calculating the summation of positions in the interface.
			psum+=p[k];//Summation of pressure within the interface.
				}
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
		double th;
		th=atan(double(yk)/(double(Lx-xk+xs)));
		COMx+=rho[k]*ux[k];
		COMy+=rho[k]*uy[k];
		COMz+=rho[k]*uz[k];
		COMt+=rho[k]*uy[k]*rho[k]*uy[k];//rho[k]*(uy[k]*cos(th)+ux[k]*sin(th));
		COMn+=rho[k]*rho[k]*uz[k]*uz[k];//rho[k]*(-ux[k]*cos(th)+uy[k]*sin(th));
		
		
		if(mask[k]==1 || mask[k]==3)
		  {
		    if(C[k]>0.5)
		      {
			if(zk>zc){zc=zk;}//Computing maximum spread in the z direction on the surface
			if(yk>yc){yc=yk;xc=xk;}//Computing mavimum spread in the y direction on the surface
		      }
		  }

		if(C[k]>0.5)
		  {
		    if(zk>zl){zl=zk;}//Computing maximum spread in the z direction 
		    if(yk>yl){yl=yk;xl=xk;}//Computing maximum spread in the y direction
		  }

      }







//MPI_Reduce is used to create single values from the values on all of the computing nodes.
	if (k==(k2-1)){
		double reducedEnergy;
		int redEn;
		
		
				
		
			reducedEnergy = 0.0;
			MPI_Reduce(&vsum,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			vsum = reducedEnergy;
		
			reducedEnergy = 0.0;
			MPI_Reduce(&psum,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			psum = reducedEnergy;
			
			redEn=0;
			reducedEnergy = 0.0;
			MPI_Reduce(&xsum,&redEn,1,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);
			xsum = redEn;
			
			reducedEnergy = 0.0;
			redEn=0;
			MPI_Reduce(&vn,&redEn,1,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);
			vn = redEn;
						
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
			MPI_Reduce(&COMn,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			COMn = reducedEnergy;


			reducedEnergy = 0.0;
			MPI_Reduce(&COMt,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			COMt = reducedEnergy;
			
			
			
			reducedEnergy = 0.0;
			MPI_Reduce(&Ctot,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			Ctot = reducedEnergy;
			
			
			reducedEnergy = 0.0;
			MPI_Reduce(&rhotot,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			rhotot = reducedEnergy;
			
                       
			reducedEnergy = 0.0;
			MPI_Reduce(&vol,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			vol = reducedEnergy;
		
				
			//redEn = 0;
			MPI_Reduce(&xc,&redEn,1,MPI_INT,MPI_MAX,0,MPI_COMM_WORLD);
				xc = redEn;
		
			
			//redEn = 0;
			MPI_Reduce(&yc,&redEn,1,MPI_INT,MPI_MAX,0,MPI_COMM_WORLD);
				yc = redEn;

			
			//redEn = 0;
			MPI_Reduce(&zc,&redEn,1,MPI_INT,MPI_MAX,0,MPI_COMM_WORLD);
				zc = redEn;
			
				
			//redEn = 0;
			MPI_Reduce(&xl,&redEn,1,MPI_INT,MPI_MAX,0,MPI_COMM_WORLD);
				xl = redEn;
			

			//redEn = 0;
			MPI_Reduce(&yl,&redEn,1,MPI_INT,MPI_MAX,0,MPI_COMM_WORLD);
				yl = redEn;
			
			//redEn = 0;
			MPI_Reduce(&zl,&redEn,1,MPI_INT,MPI_MAX,0,MPI_COMM_WORLD);
				zl = redEn;
			
		
		if (rank == ROOT) {
			
			energy = Ebulk + Eint + Esurf;//compute total energy
		}
	}
	
	}	
	
	
	
}
