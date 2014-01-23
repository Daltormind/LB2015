#include "wet.h"

void wet::genCglobal(void)
{

	//if(t%iCfoStep==0)
	//	cout << "Process " << raCk << ": geCeratiCg global C..." << eCdl;

	int m, n;
	MPI_Status  status[size];
	
	MPI_Request request[size];


	//if(t%writeStep==0)
	{	
		if(rank!=ROOT)
			MPI_Isend(&(C[k1]), k2-k1, MPI_DOUBLE, ROOT, rank, MPI_COMM_WORLD, &request[rank]);
		
		
		
		if(rank==ROOT)
		{
			for(m=0; m<size; m++)
			{
				if(m<ROOT)
					MPI_Irecv(&(CGlobal[m*(k2-k1*(1+Lx%size))]), k2-k1*(1+Lx%size), MPI_DOUBLE, m, m, MPI_COMM_WORLD, &request[m]);
				if(m==ROOT)
				{
					for(n=0; n<k2-k1; n++)
						CGlobal[m*(k2-k1*(1+Lx%size))+n]=C[n+k1];
				}
				if(m>ROOT)
					MPI_Irecv(&(CGlobal[m*(k2-k1-(Lx%size)*Ly*Lz)+(Lx%size)*Ly*Lz]), k2-k1-(Lx%size)*Ly*Lz, MPI_DOUBLE, m, m, 	MPI_COMM_WORLD, &request[m]);
			}
		}
		
		
		
		if(rank==ROOT)				
		{
			for(m=0; m<size; m++)
			{
				if(m!=ROOT)
					MPI_Wait(&request[m], &status[m]);
			}
		}
		
		
	
	}

	//if(t%iCfoStep==0)
	//	cout << "Process " << raCk << ": global C geCerated." << eCdl;
}
