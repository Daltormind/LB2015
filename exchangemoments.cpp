#include "wet.h"

void wet::exchangevel(void)
{

	//if(t%infoStep==0)
	//	cout << "Process " << rank << ": exchanging phi density..." << endl;
	
	// exchange ux
	MPI_Status statusuxLeft, statusuxRight;
	
	MPI_Request requestOutuxLeft, requestOutuxRight, requestInuxLeft, requestInuxRight;
	
	MPI_Isend(&(ux[k1]),   k1, MPI_DOUBLE, leftProcess,  rank*100 ,   MPI_COMM_WORLD, &requestOutuxLeft);
	MPI_Isend(&(ux[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+1 , MPI_COMM_WORLD, &requestOutuxRight);
		
	MPI_Irecv(&(ux[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100, MPI_COMM_WORLD, &requestInuxLeft);
	MPI_Irecv(ux,        k1, MPI_DOUBLE, leftProcess, leftProcess*100+1, MPI_COMM_WORLD, &requestInuxRight);
	
	//Waiting until ux are saved in the recieving buffer
	MPI_Wait(&requestInuxLeft,  &statusuxLeft);
	MPI_Wait(&requestInuxRight, &statusuxRight);
		
	//Waiting until sending buffer is relased
	MPI_Wait(&requestOutuxLeft, &statusuxLeft);
	MPI_Wait(&requestOutuxRight,&statusuxRight);
	
	
	
	//Exchange uy
	
	MPI_Status statusuyLeft, statusuyRight;
	
	MPI_Request requestOutuyLeft, requestOutuyRight, requestInuyLeft, requestInuyRight;
	
	MPI_Isend(&(uy[k1]),   k1, MPI_DOUBLE, leftProcess,  rank*100 ,   MPI_COMM_WORLD, &requestOutuyLeft);
	MPI_Isend(&(uy[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+1 , MPI_COMM_WORLD, &requestOutuyRight);
		
	MPI_Irecv(&(uy[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100, MPI_COMM_WORLD, &requestInuyLeft);
	MPI_Irecv(uy,        k1, MPI_DOUBLE, leftProcess, leftProcess*100+1, MPI_COMM_WORLD, &requestInuyRight);
	
	//Waiting until uy are saved in the recieving buffer
	MPI_Wait(&requestInuyLeft,  &statusuyLeft);
	MPI_Wait(&requestInuyRight, &statusuyRight);
		
	//Waiting until sending buffer is relased
	MPI_Wait(&requestOutuyLeft, &statusuyLeft);
	MPI_Wait(&requestOutuyRight,&statusuyRight);
	
	//Exchange uz
	
	MPI_Status statusuzLeft, statusuzRight;
	
	MPI_Request requestOutuzLeft, requestOutuzRight, requestInuzLeft, requestInuzRight;
	
	MPI_Isend(&(uz[k1]),   k1, MPI_DOUBLE, leftProcess,  rank*100 ,   MPI_COMM_WORLD, &requestOutuzLeft);
	MPI_Isend(&(uz[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+1 , MPI_COMM_WORLD, &requestOutuzRight);
		
	MPI_Irecv(&(uz[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100, MPI_COMM_WORLD, &requestInuzLeft);
	MPI_Irecv(uz,        k1, MPI_DOUBLE, leftProcess, leftProcess*100+1, MPI_COMM_WORLD, &requestInuzRight);
	
	//Waiting until uz are saved in the recieving buffer
	MPI_Wait(&requestInuzLeft,  &statusuzLeft);
	MPI_Wait(&requestInuzRight, &statusuzRight);
		
	//Waiting until sending buffer is relased
	MPI_Wait(&requestOutuzLeft, &statusuzLeft);
	MPI_Wait(&requestOutuzRight,&statusuzRight);
	
	

}