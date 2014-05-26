//write moments prints out the moments C p rho and mu into Matlab friendly formats


#include "wet.h"

void wet::writemoments(long int in)
{

	//genCglobal();
	int i, j, h;
	ofstream file;
	char filename1[20];
		string filename;
        
        //------------------------- Write the composition File------------------------
        
        snprintf(filename1,20,"/sC%d.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < 1 ; h++) 
		{   
			file  << "C" << in << "(:,:," << h+1 << ")=[" << endl;
		
			for( i = 0 ; i < Lx ; i++) 
			{
			  for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					
					if(maskGlobal[k]==28){file << -2 << " " ;}
					
					else{file << CGlobal[k] << " " ;}
					
					
						
				}
				file << endl;
		
}
			file <<"];" << endl;
		
			
}
		
		file.close();
		
		
		//--------------------------- Write free energy file---------------------------
		
		snprintf(filename1,20,"/smu%d.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < 1 ; h++) 
		{   
			file  << "mu" << in << "(:,:," << h+1 << ")=[" << endl;
		
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					file << muGlobal[k] << " " ;
				
						
				}
				file << endl;
			
			}
			file <<"];" << endl;
		
		}
		
		file.close();
		
		/*
		//-------------------------- Write Density File -------------------------------
		
		snprintf(filename1,20,"/s%ldrho%ld.m",rank,in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
		{   
			file << "n" << rank << "rho" << in << "(:,:," << h+1 << ")=[" << endl;
			for( i = 2 ; i < xend ; i++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					file << rho[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		
		file.close();
		*/
		//------------------------- Write pressure File----------------------------------
		
		snprintf(filename1,20,"/sp%d.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < 1 ; h++) 
		{   
			file  << "p" << in << "(:,:," << h+1 << ")=[" << endl;
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					file << pGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		
		file.close();
		
		/*
		//------------------------ Write f File -----------------------------------------
		
		snprintf(filename1,20,"/sf%ld.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
		{   
			file << "f" << in << "(:,:," << h+1 << ")=[" << endl;
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					file << f[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		
		file.close();
		
		*/
		/*	
		//--------------------------- Write mask ---------------------------------------
		
		snprintf(filename1,20,"/smask%ld.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < 1 ; h++) 
		{   
			file << "mask" << in << "(:,:," << h+1 << ")=[" << endl;
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					file << maskGlobal[k]<< " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		
		file.close();
		*/
	/*
		//--------------------------- Write Ctest ---------------------------------------
		
		snprintf(filename1,20,"/sCt%ld.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
		{   
			file << "Ct" << in << "(:,:," << h+1 << ")=[" << endl;
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					file << Ct[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		
		file.close();
		*/
}
