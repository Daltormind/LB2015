//Constructor for class wet

#include "wet.h"


wet::wet(void) 
	
{

	
	
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);		//rank = id number of process (see mpi.h library)
	MPI_Comm_size(MPI_COMM_WORLD, &size);		//size = total number of processes (see mpi.h library)
	
	
	readinput();
	
    if(input==4)
      {
	folder=fol1;
	xcentre1=100+rad;
	R1=rad;
      }

    if(input==12)
      {
	folder=fol1;
	R=cbrt(R*R*R+rad*rad*rad);
	xcentre=198-R;
	xcentre1=198-2*R+2+rad;
	  R1=rad;
	  
      }
    
    if(input==5)
      {
	folder=fol1;
	ye=rad;
	ze=rad;
      }

    if(input==7)
      {
	
	
	folder=fol1;
	uyi=uxi*sin(rad);
	uxi=uxi*cos(rad);
	ycentre1=ycentre1-(xcentre-xcentre1)*sin(rad);
	xcentre1=xcentre-(xcentre-xcentre1)*cos(rad);
	G[1]=G[0]*sin(rad);
	G[0]=G[0]*cos(rad);
      }
    
    if(input==8)
    {
      folder=fol1;
      	ycentre1=ycentre1-(xcentre-xcentre1)*sin(rad);
xcentre1=xcentre-(xcentre-xcentre1)*cos(rad);
    }

    if(input==9)
      {
	R=-1;
	folder=fol1;
	xcentre1=100+rad;
      }

	string command0="rm -r" + folder;
	string command="mkdir " + folder;
    cout <<"String command is equal to " << command << endl;
    system(command0.c_str());
    system(command.c_str());
	


	initialise();

	


}
