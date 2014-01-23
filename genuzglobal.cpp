
#include "wet.h"

void wet::genuzglobal(void)
{

	//if(t%iuzfoStep==0)
	//	cout << "Process " << rauzk << ": geuzeratiuzg global uz..." << euzdl;

	int m, n;
	MPI_Status  status[size];
	
	MPI_Request request[size];


	//if(t%writeStep==0)
	{	
		if(rank!=ROOT)
			MPI_Isend(&(uz[k1]), k2-k1, MPI_DOUBLE, ROOT, rank, MPI_COMM_WORLD, &request[rank]);
		
	}		
		
		if(rank==ROOT)
		{
			for(m=0; m<size; m++)
			{
				if(m<ROOT)
					MPI_Irecv(&(uzGlobal[m*(k2-k1*(1+Lx%size))]), k2-k1*(1+Lx%size), MPI_DOUBLE, m, m, MPI_COMM_WORLD, &request[m]);
				if(m==ROOT)
				{
					for(n=0; n<k2-k1; n++)
						uzGlobal[m*(k2-k1*(1+Lx%size))+n]=uz[n+k1];
				}
				if(m>ROOT)
					MPI_Irecv(&(uzGlobal[m*(k2-k1-(Lx%size)*Ly*Lz)+(Lx%size)*Ly*Lz]), k2-k1-(Lx%size)*Ly*Lz, MPI_DOUBLE, m, m, 	MPI_COMM_WORLD, &request[m]);
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
