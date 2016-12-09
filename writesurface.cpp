//write surface points out for visualisation

#include "wet.h"

void wet::writesurface()
{

int i, j, h;
	ofstream file;
	char filename1[20];
		string filename;
		
		
		//Writing out interface position
		
		snprintf(filename1,20,"/%dsurf.csv",rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		if(rank==ROOT)
		{
		file << "xpos, ypos, zpos" << endl;
		}
		for(k=k1 ; k<k2 ; k++)
		
		{
		if(mask[k]==1 || mask[k]==3)
		{
		computecoordinates(k);
		
		file << xk << ", " << yk << ", " << zk << endl;
		}
		}
		file.close();
		
		MPI_Barrier(MPI_COMM_WORLD);
		
		if(rank==ROOT)
		{
		file.open("cat.sh");
		
		file << "cat ";
		
		for (int asize=0 ; asize<size ; asize++)
		{
		file << folder << "/" << asize << "surf.csv ";
		}
		file << ">" << folder << "/surf.csv" << endl;
		
		for(int asize=0; asize<size ; asize++)
		{
		file << "rm " << folder << "/" << asize << "surf.csv" << endl;
		}
		file.close();
		system("sh cat.sh");
		} 

}
