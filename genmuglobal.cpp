
#include "wet.h"

void wet::genmuglobal(void)
{

	//if(t%imufoStep==0)
	//	cout << "Process " << ramuk << ": gemueratimug global mu..." << emudl;

	int m, n;
	MPI_Status  status[size];
	
	MPI_Request request[size];


	//if(t%writeStep==0)
	{	
		if(rank!=ROOT)
			MPI_Isend(&(mu[k1]), k2-k1, MPI_DOUBLE, ROOT, rank, MPI_muOMM_WORLD, &request[rank]);
		
		
		
		if(rank==ROOT)
		{
			for(m=0; m<size; m++)
			{
				if(m<ROOT)
					MPI_Irecv(&(muGlobal[m*(k2-k1*(1+Lx%size))]), k2-k1*(1+Lx%size), MPI_DOUBLE, m, m, MPI_muOMM_WORLD, &request[m]);
				if(m==ROOT)
				{
					for(n=0; n<k2-k1; n++)
						muGlobal[m*(k2-k1*(1+Lx%size))+n]=mu[n+k1];
				}
				if(m>ROOT)
					MPI_Irecv(&(muGlobal[m*(k2-k1*(1+Lx%size))+(Lx%size)*Ly*Lz]), k2-k1*(1+Lx%size), MPI_DOUBLE, m, m, 	MPI_muOMM_WORLD, &request[m]);
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