//creates a file to use as the input to another simulation


#include "wet.h"

void wet::writeinput()
{

	//genCglobal();
	int i, j, h;
	ofstream file;
	char filename1[20];
		string filename;
       
        //------------------------- Write the composition File------------------------
        
        snprintf(filename1,20,"/C.txt");			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < Lx*Ly*Lz ; h++) 
		{   
		file << CGlobal[h] << endl ;
	      	}
		 
	file.close();		



        //------------------------- Write pressure------------------------
        
        snprintf(filename1,20,"/p.txt");			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < Lx*Ly*Lz ; h++) 
		{   
		file << pGlobal[h] << endl ;
	      	}
		 
	file.close();	

        //------------------------- Write the chempot------------------------
        
        snprintf(filename1,20,"/mu.txt");			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < Lx*Ly*Lz ; h++) 
		{   
		file << muGlobal[h] << endl ;
	      	}
		 
	file.close();		


        //------------------------- Write xvel------------------------
        
        snprintf(filename1,20,"/ux.txt");			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < Lx*Ly*Lz ; h++) 
		{   
		file << uxGlobal[h] << endl ;
	      	}
		 
	file.close();		

        //------------------------- Write xvel------------------------
        
        snprintf(filename1,20,"/uy.txt");			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < Lx*Ly*Lz ; h++) 
		{   
		file << uyGlobal[h] << endl ;
	      	}
		 
	file.close();		
	


        //-------------------------Write uz vel------------------------
        
        snprintf(filename1,20,"/uz.txt");			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < Lx*Ly*Lz ; h++) 
		{   
		file << uzGlobal[h] << endl ;
	      	}
		 
	file.close();		



		
}		
		
			

	
	
		


       
