
#include "wet.h"

void wet::generateglobalmask(void)
{

	//if(t%imaskfoStep==0)
	//	cout << "Process " << ramaskk << ": gemaskeratimaskg global mask..." << emaskdl;

	int m, n;
	MPI_Status  status[size];
	
	MPI_Request request[size];


	//if(t%writeStep==0)
	{	
		if(rank!=ROOT)
		  {
		  MPI_Isend(&(mask[k1]), k2-k1, MPI_INT, ROOT, rank, MPI_COMM_WORLD, &request[rank]);
		  // cout << "Process " << rank << " Buffer size " << k2-k1 << endl;
		  }
		
		
		if(rank==ROOT)
		{
			for(m=0; m<size; m++)
			{
				if(m<ROOT)
					MPI_Irecv(&(maskGlobal[m*(k2-k1*(1+Lx%size))]), k2-k1*(1+Lx%size), MPI_INT, m, m, MPI_COMM_WORLD, &request[m]);
				if(m==ROOT)
				{
					for(n=0; n<k2-k1; n++)
						maskGlobal[m*(k2-k1*(1+Lx%size))+n]=mask[n+k1];
				}
				if(m>ROOT)
				  {
					MPI_Irecv(&(maskGlobal[m*(k2-k1-(Lx%size)*Ly*Lz)+(Lx%size)*Ly*Lz]), k2-k1-(Lx%size)*Ly*Lz, MPI_INT, m, m, 	MPI_COMM_WORLD, &request[m]);
				  
					//	cout << "Process " << rank << " Buffer " << k2-k1-(Lx%size)*Ly*Lz << endl;
}
}
		}
		
	}		
		
	//	cout << "Process " << rank << " got past first bit of exchange" << endl;	

	if(rank==ROOT)				
		{
			for(m=0; m<size; m++)
			{
				if(m!=ROOT)
					MPI_Wait(&request[m], &status[m]);
			}
		}
		
		
	
	}
