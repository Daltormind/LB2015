//Constructor for class wet

#include "wet.h"


wet::wet(void) 
	
{

	
	
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);		//rank = id number of process (see mpi.h library)
	MPI_Comm_size(MPI_COMM_WORLD, &size);		//size = total number of processes (see mpi.h library)
	
	
	readinput();
	string command0="rm -r" + folder;
	string command="mkdir " + folder;
    cout <<"String command is equal to " << command << endl;
    system(command0.c_str());
    system(command.c_str());
	
	initialise();

	


}