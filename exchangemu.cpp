#include "wet.h"

void wet::exchangemu(void)
{

	//if(t%infoStep==0)
	//	cout << "Process " << rank << ": exchanging phi density..." << endl;
	
	// exchange mu
	MPI_Status statusmuLeft, statusmuRight;
	
	MPI_Request requestOutmuLeft, requestOutmuRight, requestInmuLeft, requestInmuRight;
	
	MPI_Isend(&(mu[k1]),   k1, MPI_DOUBLE, leftProcess,  rank*100 ,   MPI_COMM_WORLD, &requestOutmuLeft);
	MPI_Isend(&(mu[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+1 , MPI_COMM_WORLD, &requestOutmuRight);
		
	MPI_Irecv(&(mu[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100, MPI_COMM_WORLD, &requestInmuLeft);
	MPI_Irecv(mu,        k1, MPI_DOUBLE, leftProcess, leftProcess*100+1, MPI_COMM_WORLD, &requestInmuRight);
	
	//Waiting until mu are saved in the recieving buffer
	MPI_Wait(&requestInmuLeft,  &statusmuLeft);
	MPI_Wait(&requestInmuRight, &statusmuRight);
		
	//Waiting until sending buffer is relased
	MPI_Wait(&requestOutmuLeft, &statusmuLeft);
	MPI_Wait(&requestOutmuRight,&statusmuRight);
	

}