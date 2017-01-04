//Computecoordinate

#include "wet.h"

void wet::computecoordinates(int k)
	{
		
		/*
		xk=int (k/float(Lz*Ly));
		yk=int((k-xk*Lz*Ly)/float(Lz));
		zk=k-xk*Ly*Lz-yk*Lz;
		*/
	
	  long int kTot;

	if(rank<ROOT)
	{
		kTot=k+rank*(k2-k1)-k1;
		xk=int(kTot/(float) (Lz*Ly));		//Index node of x coordinate 
		yk=int((kTot-xk*Lz*Ly)/(float) Lz);	//Index node of y coordinate
		zk=kTot-xk*Lz*Ly-yk*Lz;			//Index node of z coordinate
	}
	if(rank==ROOT)
	{
		kTot=k+rank*(k2-(Lx%size+1)*k1)-k1;
		xk=kTot/(Lz*Ly);		//Index node of x coordinate 
		yk=(kTot-xk*Lz*Ly)/Lz;	//Index node of y coordinate
		zk=kTot-xk*Lz*Ly-yk*Lz;			//Index node of z coordinate
	}
	if(rank>ROOT)
	{
		kTot=k+rank*(k2-k1)+Lx%size*Ly*Lz-1*k1;
		//xk=int(kTot/(float) (Lz*Ly));		//Index node of x coordinate 
		xk=kTot/(Lz*Ly);
		//yk=int((kTot-xk*Lz*Ly)/(float) Lz);	//Index node of y coordinate
		yk=(kTot-xk*Lz*Ly)/Lz;
		zk=kTot-xk*Lz*Ly-yk*Lz;			//Index node of z coordinate
	}
	
	
	
	
	}
