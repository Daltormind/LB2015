//creates a file to use as the input to another simulation


#include "wet.h"

void wet::writeinput()
{


	computecoordinates(k1);
		int istart=xk;
		computecoordinates(k2);
		int iend=xk;
	//genCglobal();
	int i, j, h;
	ofstream file;
	char filename1[20];
		string filename;
       
        //------------------------- Write the composition File------------------------
        
        snprintf(filename1,20,"/C%d.txt",rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < ProcessN ; h++) 
		{   
		if(mask[h]!=28)
		{
		file << C[h] << endl ;
		}
		else
		{
		file << -2 << endl;
		}
	      	}
		 
	file.close();		



        //------------------------- Write pressure------------------------
        
        snprintf(filename1,20,"/p%d.txt",rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for(h = 0 ; h < ProcessN ; h++) 
		{   
		file << p[h] << endl ;
	      	}
		 
	file.close();	

        //------------------------- Write the chempot------------------------
        
        snprintf(filename1,20,"/mu%d.txt",rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for(h = 0 ; h < ProcessN ; h++) 
		{   
		file << mu[h] << endl ;
	      	}
		 
	file.close();		


        //------------------------- Write ux------------------------
        
        snprintf(filename1,20,"/ux%d.txt",rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for(h = 0 ; h < ProcessN ; h++) 
		{   
		file << ux[h] << endl ;
	      	}
		 
	file.close();		

        //------------------------- Write uy------------------------
        
        snprintf(filename1,20,"/uy%d.txt",rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for(h = 0 ; h < ProcessN ; h++) 
		{   
		file << uy[h] << endl ;
	      	}
		 
	file.close();		
	


        //-------------------------Write uz vel------------------------
        
        snprintf(filename1,20,"/uz%d.txt",rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for(h = 0 ; h < ProcessN ; h++) 
		{   
		file << uz[h] << endl ;
	      	}
		 
	file.close();		



		
}		
		
			

	
	
		


       
