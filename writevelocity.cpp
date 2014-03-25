//writevelocity outputs the velocity

#include "wet.h"

void wet::writevelocity(int in)

{
	int q, j, n;
	ofstream file;
	char filename1[20];
		string filename;
        

// Write x velocity
        
        snprintf(filename1,20,"/sux%d.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < 1 ; n++) 
		{   
			file  << "ux"   << in << "(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < Lx ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << uxGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		
		file.close();
		
		// Write y velocity
        
        snprintf(filename1,20,"/suy%d.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < 1 ; n++) 
		{   
			file << "uy"   << in << "(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < Lx ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << uyGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		
		file.close();
		
		if( dimensions==3)
		  {		// Write z velocity
        
        snprintf(filename1,20,"/suz%d.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < 1 ; n++) 
		{   
			file << "uz"   << in << "(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < Lx ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << uzGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		
		file.close();
		  }
		
}
