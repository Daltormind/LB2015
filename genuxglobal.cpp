
#include "wet.h"

void wet::genuxglobal(void)
{

	//if(t%iuxfoStep==0)
	//	cout << "Process " << rauxk << ": geuxeratiuxg global ux..." << euxdl;

	int m, n;
	MPI_Status  status[size];
	
	MPI_Request request[size];


	//if(t%writeStep==0)
	{	
		if(rank!=ROOT)
			MPI_Isend(&(ux[k1]), k2-k1, MPI_DOUBLE, ROOT, rank, MPI_uxOMM_WORLD, &request[rank]);
		
		
		
		if(rank==ROOT)
		{
			for(m=0; m<size; m++)
			{
				if(m<ROOT)
					MPI_Irecv(&(uxGlobal[m*(k2-k1*(1+Lx%size))]), k2-k1*(1+Lx%size), MPI_DOUBLE, m, m, MPI_uxOMM_WORLD, &request[m]);
				if(m==ROOT)
				{
					for(n=0; n<k2-k1; n++)
						uxGlobal[m*(k2-k1*(1+Lx%size))+n]=ux[n+k1];
				}
				if(m>ROOT)
					MPI_Irecv(&(uxGlobal[m*(k2-k1*(1+Lx%size))+(Lx%size)*Ly*Lz]), k2-k1*(1+Lx%size), MPI_DOUBLE, m, m, 	MPI_uxOMM_WORLD, &request[m]);
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