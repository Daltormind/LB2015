
#include "wet.h"

void wet::exchangerho(void)
{

	//if(t%infoStep==0)
	//	cout << "Process " << rank << ": exchanging phi density..." << endl;
	
	// exchange rho
	MPI_Status statusrhoLeft, statusrhoRight;
	
	MPI_Request requestOutrhoLeft, requestOutrhoRight, requestInrhoLeft, requestInrhoRight;
	
	MPI_Isend(&(rho[k1]),   k1, MPI_DOUBLE, leftProcess,  rank*100 ,   MPI_COMM_WORLD, &requestOutrhoLeft);
	MPI_Isend(&(rho[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+1 , MPI_COMM_WORLD, &requestOutrhoRight);
		
	MPI_Irecv(&(rho[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100, MPI_COMM_WORLD, &requestInrhoLeft);
	MPI_Irecv(rho,        k1, MPI_DOUBLE, leftProcess, leftProcess*100+1, MPI_COMM_WORLD, &requestInrhoRight);
	
	//Waiting until rho are saved in the recieving buffer
	MPI_Wait(&requestInrhoLeft,  &statusrhoLeft);
	MPI_Wait(&requestInrhoRight, &statusrhoRight);
		
	//Waiting until sending buffer is relased
	MPI_Wait(&requestOutrhoLeft, &statusrhoLeft);
	MPI_Wait(&requestOutrhoRight,&statusrhoRight);
	

}