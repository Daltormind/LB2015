
#include "wet.h" 

void wet::generateglobalmask(void)
{
	//cout << "Process " << rank << ": generate global mask..." << endl;

	int n, m, g;

	MPI_Status status[size];
	MPI_Request request[size];

	
		if(rank!=ROOT)
			MPI_Isend(&(mask[k1]), k2-k1, MPI_INT, ROOT, rank, MPI_COMM_WORLD, &request[rank]);
		if(rank==ROOT)
		{
			for(m=0; m<size; m++)
			{
				if(m<ROOT)
					MPI_Irecv(&(maskGlobal[m*(k2-k1*(1+Lx%size))]), k2-k1*(1+Lx%size), MPI_INT, m, m, MPI_COMM_WORLD, &request[m]);
				if(m==ROOT)
				{
					for(g=0; g<k2-k1; g++)
						maskGlobal[m*(k2-k1*(1+Lx%size))+g]=mask[g+k1];
				}
				if(m>ROOT)
					MPI_Irecv(&(maskGlobal[m*(k2-k1*(1+Lx%size))+(Lx%size)*k1]), k2-k1*(1+Lx%size), MPI_INT, m, m, MPI_COMM_WORLD, &request[m]);
			}
		}
	
	
	if(rank==ROOT)				
	{
		for(n=0; n<size; n++)
		{
			if(n!=ROOT)
				MPI_Wait(&request[n], &status[n]);
		}
	}

	//cout << "Process " << rank << ": global mask generated." << endl;
}
