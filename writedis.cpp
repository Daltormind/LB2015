//write moments prints out the moments C p rho and mu into Matlab friendly formats


#include "wet.h"

void wet::writedis(long int in)
{

	//genCglobal();
	int i, j, h;
	ofstream file;
	char filename1[20];
		string filename;
        
        //------------------------- Write the disd File------------------------
        
        snprintf(filename1,20,"/sdisd%d.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < 1 ; h++) 
		{   
			file  << "disd" << in << "(:,:," << h+1 << ")=[" << endl;
		
			for( i = 0 ; i < Lx ; i++) 
			{
			  for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					
					
					
					file << disdGlobal[k] << " " ;
					
					
						
				}
				file << endl;
		
}
			file <<"];" << endl;
		
			
}
		
		file.close();
		
		
		//--------------------------- Write disv file---------------------------
		
		snprintf(filename1,20,"/sdisv%d.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < 1 ; h++) 
		{   
			file  << "disv" << in << "(:,:," << h+1 << ")=[" << endl;
		
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					file << disvGlobal[k] << " " ;
				
						
				}
				file << endl;
			
			}
			file <<"];" << endl;
		
		}
		
		file.close();
		
}
