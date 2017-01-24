
#include "wet.h"

void wet::exchangep(void)
{

	//if(t%infoStep==0)
	//	cout << "Process " << rank << ": exchanging phi density..." << endl;
	
	// exchange mu
	MPI_Status statuspLeft, statuspRight;
	
	MPI_Request requestOutpLeft, requestOutpRight, requestInpLeft, requestInpRight;
	
	MPI_Isend(&(p[k1]),   k1, MPI_DOUBLE, leftProcess,  rank*100 ,   MPI_COMM_WORLD, &requestOutpLeft);
	MPI_Isend(&(p[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+1 , MPI_COMM_WORLD, &requestOutpRight);
		
	MPI_Irecv(&(p[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100, MPI_COMM_WORLD, &requestInpLeft);
	MPI_Irecv(p,        k1, MPI_DOUBLE, leftProcess, leftProcess*100+1, MPI_COMM_WORLD, &requestInpRight);
	
	//Waiting until p are saved in the recieving buffer
	MPI_Wait(&requestInpLeft,  &statuspLeft);
	MPI_Wait(&requestInpRight, &statuspRight);
		
	//Waiting until sending buffer is relased
	MPI_Wait(&requestOutpLeft, &statuspLeft);
	MPI_Wait(&requestOutpRight,&statuspRight);
	

}