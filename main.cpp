//main.cpp


#include "wet.h"


int main(int argc, char *argv[])

{
	
	MPI_Init(&argc, &argv);
	wet drop;
	
	drop.algorithm();
	
	MPI_Finalize();
	
	return(0);
	
	
	
	
	





}