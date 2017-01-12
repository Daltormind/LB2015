//Constructor for class wet, sets up the MPI computing environment as well as read in inputs and 
//initialise variables to allow batch runs.

#include "wet.h"


wet::wet(void) 
	
{

	
	
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);		//rank = id number of process (see mpi.h library)
	MPI_Comm_size(MPI_COMM_WORLD, &size);		//size = total number of processes (see mpi.h library)
	
	
	readinput();//Read inputs from .par files
	
	if(input==4)//Changing the size of the air bubble rad is the radius of the air bubble, volume of liquid changes
      {
	folder=fol1;
	xcentre1=100+rad;
	R1=rad;
      }

	if(input==12)//Changing the size of the air bubble whilsy keeping liquid volume constant
      {
	folder=fol1;
	R=cbrt(R*R*R+rad*rad*rad);
	xcentre=198-R;
	xcentre1=198-2*R+2+rad;
	  R1=rad;
	  
      }
    
	if(input==5)//Ellipse shaped air bubble whilst keeping volume constant
      {//ellipse shaped air bubble
	folder=fol1;
	ye=rad;
	ze=rad;
	R=cbrt(R*R*R+R1*R1*R1/(ye*ze));
	xcentre=198-R;
	xcentre1=198-2*R+2+R1;
	
      }

    if(input==13)
      {//elipse shaped drop
	folder=fol1;
	ell=rad;
	
	xcentre=198-R*ell*ell;
	xcentre1=198-2*R*ell*ell+2+R1;

      }

    if(input==7)//studying a drop impacting at an angle with gravity
      {
	
	
	folder=fol1;
	uyi=uxi*sin(rad);
	uxi=uxi*cos(rad);
	ycentre1=ycentre1-(xcentre-xcentre1)*sin(rad);
	xcentre1=xcentre-(xcentre-xcentre1)*cos(rad);
	G[1]=G[0]*sin(rad);
	G[0]=G[0]*cos(rad);
      }
    
    if(input==8)//Studying a drop impact with off-centre drop but not velocity
    {
      folder=fol1;
      	ycentre1=ycentre1-(xcentre-xcentre1)*sin(rad);
xcentre1=xcentre-(xcentre-xcentre1)*cos(rad);
    }

    if(input==9)//Initialising a water film
      {
	R=-1;
	folder=fol1;
	xcentre1=100+rad;
      }

    if(input==10)//Initialising a ridge of variable height
      {
	
	folder=fol1;
        wz=rad;
      }

    if(input==11)//Varying the height of the air bubble
      {
	folder=fol1;
	R=rad;
	xcentre=198-R;
	xcentre1=198-2*R+R1+2;
      }

    if(input==14)//Varying the size of the air bubble
      {
	uxi=rad;
	folder=fol1;
	
	
	R=cbrt(R*R*R+R1*R1*R1);
	xcentre=198-R;
	xcentre1=198-2*R+2+R1;
	  

      }

    
    if(input==15)//Varying position of the air bubble
      {
	
	folder=fol1;	
	xcentre1=198-2*R+rad+R1;
      }

    if(input==16)//Initialising ellipse shaped drops 
      {
	
	folder=fol1;	
	ell=rad;
      }

    if(input==17)//Varying the height of a ridge
      {
	folder=fol1;
	wx=rad;
	xcentre=xs2-wx-R;
      }
    
    if(input==18)//Varying the height and the width of the ridge
      {
	folder=fol1;
	wx=rad;
	wy=rad;
	xcentre=xs2-wx-R;
      }

	string command0="rm -r" + folder;
	string command="mkdir " + folder;
    cout <<"String command is equal to " << command << endl;
    system(command0.c_str());
    system(command.c_str());
	


	initialise();

	


}
