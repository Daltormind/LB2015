//writevelocity outputs the velocity

#include "wet.h"

void wet::writevelocity(int in)

{
	int q, j, n;
	ofstream file;
	char filename1[20];
		string filename;
        

// Write x velocity
        
        snprintf(filename1,20,"/sux%dZ1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < 1 ; n++) 
		{   
			file  << "ux"   << in << "Z1(:,:," << n+1 << ")=[" << endl;
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
		file << "ux" << in << "Z1=squeeze(ux" << in << "Z1);" << endl;
		file.close();
		

		        
        snprintf(filename1,20,"/sux%dY1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file  << "ux"   << in << "Y1(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < Lx ; q++) 
			{
				for( j = 0 ; j < 1 ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << uxGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "ux" << in << "Y1=squeeze(ux" << in << "Y1);" << endl;
		file.close();
		/*	        
        snprintf(filename1,20,"/sux%dX95.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file  << "ux"   << in << "X95(:,:," << n+1 << ")=[" << endl;
			for( q = 94 ; q < 95 ; q++) 
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
		file << "ux" << in << "X95=squeeze(ux" << in << "X95);" << endl;
		file.close();
		*/
		// Write y velocity
        
        snprintf(filename1,20,"/suy%dZ1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < 1 ; n++) 
		{   
			file << "uy"   << in << "Z1(:,:," << n+1 << ")=[" << endl;
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
		file << "uy" << in << "Z1=squeeze(uy" << in << "Z1);" << endl;
		file.close();
		
		
        snprintf(filename1,20,"/suy%dY1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file << "uy"   << in << "Y1(:,:," << n+1 << ")=[" << endl;
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
		file << "uy" << in << "Y1=squeeze(uy" << in << "Y1);" << endl;
		file.close();

		/*
        snprintf(filename1,20,"/suy%dX95.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file << "uy"   << in << "X95(:,:," << n+1 << ")=[" << endl;
			for( q = 94 ; q < 95 ; q++) 
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
		file << "uy" << in << "X95=squeeze(uy" << in << "X95);" << endl;
		file.close();
		*/
	
		if( dimensions==3)
		  {		// Write z velocity
        
        snprintf(filename1,20,"/suz%dZ1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < 1 ; n++) 
		{   
			file << "uz"   << in << "Z1(:,:," << n+1 << ")=[" << endl;
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
		file << "uz" << in << "Z1=squeeze(uz" << in << "Z1);" << endl;
		file.close();
		 
		
        snprintf(filename1,20,"/suz%dY1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file << "uz"   << in << "Y1(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < Lx ; q++) 
			{
				for( j = 0 ; j < 1 ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << uzGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "uz" << in << "Y1=squeeze(uz" << in << "Y1);" << endl;
		file.close();
		
		/*
        snprintf(filename1,20,"/suz%dX95.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file << "uz"   << in << "X95(:,:," << n+1 << ")=[" << endl;
			for( q = 94 ; q < 95 ; q++) 
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
		file << "uz" << in << "X95=squeeze(uz" << in << "X95);" << endl;
		file.close();
		*/
		 
		  }
		
}
