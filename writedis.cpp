//write moments prints out the moments C p rho and mu into Matlab friendly formats


#include "wet.h"

void wet::writedis(long int in)
{

	//genCglobal();
	int i, j, h;
	ofstream file;
	char filename1[20];
		string filename;
        
        //------------------------- Write the disd[k] File------------------------
        
        snprintf(filename1,20,"/sdisd%dZ1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < 1 ; h++) 
		{   
			file  << "disd[k]" << in << "Z1(:,:," << h+1 << ")=[" << endl;
		
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
	
        snprintf(filename1,20,"/sdisd%dY1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < Lz ; h++) 
		{   
			file  << "disd[k]" << in << "Y1(:,:," << h+1 << ")=[" << endl;
		
			for( i = 0 ; i < Lx ; i++) 
			{
			  for( j = 0 ; j < 1 ; j++) 
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
		
		snprintf(filename1,20,"/sdisv%dZ1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < 1 ; h++) 
		{   
			file  << "disv" << in << "Z1(:,:," << h+1 << ")=[" << endl;
		
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
		
		snprintf(filename1,20,"/sdisv%dY1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
		{   
			file  << "disv" << in << "Y1(:,:," << h+1 << ")=[" << endl;
		
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < 1 ; j++) 
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
