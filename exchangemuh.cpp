#include "wet.h"

void wet::exchangemuh(void)
{

	//if(t%infoStep==0)
	//	cout << "Process " << rank << ": exchanging phi density..." << endl;
	
	// exchange mu
	MPI_Status statusmuhLeft, statusmuhRight;
	
	MPI_Request requestOutmuhLeft, requestOutmuhRight, requestInmuhLeft, requestInmuhRight;
	
	MPI_Isend(&(muh[k1]),   k1, MPI_DOUBLE, leftProcess,  rank*100 ,   MPI_COMM_WORLD, &requestOutmuhLeft);
	MPI_Isend(&(muh[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+1 , MPI_COMM_WORLD, &requestOutmuhRight);
		
	MPI_Irecv(&(muh[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100, MPI_COMM_WORLD, &requestInmuhLeft);
	MPI_Irecv(muh,        k1, MPI_DOUBLE, leftProcess, leftProcess*100+1, MPI_COMM_WORLD, &requestInmuhRight);
	
	//Waiting until mu are saved in the recieving buffer
	MPI_Wait(&requestInmuhLeft,  &statusmuhLeft);
	MPI_Wait(&requestInmuhRight, &statusmuhRight);
		
	//Waiting until sending buffer is relased
	MPI_Wait(&requestOutmuhLeft, &statusmuhLeft);
	MPI_Wait(&requestOutmuhRight,&statusmuhRight);
	

}