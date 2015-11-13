
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
			MPI_Isend(&(ux[k1]), k2-k1, MPI_DOUBLE, ROOT, rank, MPI_COMM_WORLD, &request[rank]);
		
	}		
		
		if(rank==ROOT)
		{
			for(m=0; m<size; m++)
			{
				if(m<ROOT)
					MPI_Irecv(&(uxGlobal[m*(k2-k1*(1+Lx%size))]), k2-k1*(1+Lx%size), MPI_DOUBLE, m, m, MPI_COMM_WORLD, &request[m]);
				if(m==ROOT)
				{
					for(n=0; n<k2-k1; n++)
						uxGlobal[m*(k2-k1*(1+Lx%size))+n]=ux[n+k1];
				}
				if(m>ROOT)
					MPI_Irecv(&(uxGlobal[m*(k2-k1-(Lx%size)*Ly*Lz)+(Lx%size)*Ly*Lz]), k2-k1-(Lx%size)*Ly*Lz, MPI_DOUBLE, m, m, 	MPI_COMM_WORLD, &request[m]);
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
		
	if(rank==ROOT)
	  {
	for(k=0;k<Ly*Lz;k++)
	  {
	    planux[k]=0.0;
	    planC[k]=0.0;
	    for(int n=0;n<Lx;n++)
	      {
		planux[k]+=uxGlobal[k+n*Ly*Lz]*(CGlobal[k+n*Ly*Lz]);
		planC[k]+=CGlobal[k+n*Ly*Lz];
		av=planux[k]/planC[k];
		stan[k]=(uxGlobal[k+n*Ly*Lz]*(CGlobal[k+n*Ly*Lz])-av)*(uxGlobal[k+n*Ly*Lz]*(CGlobal[k+n*Ly*Lz])-av);
		
	      }
	  }
	  }

	
	
}
