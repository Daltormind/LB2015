

#include "wet.h"

void wet::exchangemu(void)
{

	
	// exchange mu
	MPI_Status statusCLeft, statusCRight;
	
	MPI_Request requestOutCLeft, requestOutCRight, requestInCLeft, requestInCRight;
	
	MPI_Isend(&(C[k1]),   k1, MPI_DOUBLE, leftProcess,  rank*100 ,   MPI_COMM_WORLD, &requestOutCLeft);
	MPI_Isend(&(C[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+1 , MPI_COMM_WORLD, &requestOutCRight);
		
	MPI_Irecv(&(C[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100, MPI_COMM_WORLD, &requestInCLeft);
	MPI_Irecv(C,        k1, MPI_DOUBLE, leftProcess, leftProcess*100+1, MPI_COMM_WORLD, &requestInCRight);
	
	//Waiting until C are saved in the recieving buffer
	MPI_Wait(&requestInCLeft,  &statusCLeft);
	MPI_Wait(&requestInCRight, &statusCRight);
		
	//Waiting until sending buffer is relased
	MPI_Wait(&requestOutCLeft, &statusCLeft);
	MPI_Wait(&requestOutCRight,&statusCRight);
	

}