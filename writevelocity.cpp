//writevelocity outputs the velocity

#include "wet.h"

void wet::writevelocity(int in)

{
	int q, j, n;
	ofstream file;
	char filename1[20];
		string filename;
        

// Write x velocity
        
        snprintf(filename1,20,"/sux%drank%dZ1.m",in,rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		computecoordinates(k1);
		int istart=xk;
		computecoordinates(k2);
		int iend=xk;
		
		
		for( n = 0 ; n < 1 ; n++) 
		{   
			file  << "ux"   << in << "rank" << rank << "Z1(:,:," << n+1 << ")=[" << endl;
			for( q = 2 ; q < 2+iend-istart ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << ux[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "ux" << in << "rank" << rank << "Z1=squeeze(ux" << in << "Z1);" << endl;
		file.close();
		

		        /*
        snprintf(filename1,20,"/sux%drank%dY1.m",in,rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file  << "ux"   << in << "rank" << rank << "Y1(:,:," << n+1 << ")=[" << endl;
			for( q = 2 ; q < 2+iend-istart ; q++) 
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
		*/
		/*
        snprintf(filename1,20,"/sux%dX95.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file  << "ux"   << in << "X95(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < 1 ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << planux[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "ux" << in << "X95=squeeze(ux" << in << "X95);" << endl;
		file.close();
		/*
		snprintf(filename1,20,"/sC%dX95.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file  << "C"   << in << "X95(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < 1 ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << planC[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "ux" << in << "X95=squeeze(C" << in << "X95);" << endl;
		file.close();
		*/
		/*
		snprintf(filename1,20,"/sstan%dX95.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file  << "stan"   << in << "X95(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < 1 ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << stan[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "stan" << in << "X95=squeeze(ux" << in << "X95);" << endl;
		file.close();
		*/
		// Write y velocity
        
        snprintf(filename1,20,"/suy%drank%dZ1.m",in,rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < 1 ; n++) 
		{   
			file << "uy"   << in << "Z1(:,:," << n+1 << ")=[" << endl;
			for( q = 2 ; q < 2+iend-istart ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << uy[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "uy" << in << "rank" << rank << "Z1=squeeze(uy" << in << "Z1);" << endl;
		file.close();
		
		/*
        snprintf(filename1,20,"/suy%dY1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file << "uy"   << in << "Y1(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < Lx ; q++) 
			{
				for( j = 0 ; j < 1 ; j++) 
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

		
        snprintf(filename1,20,"/suy%dX95.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file << "uy"   << in << "X95(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < 1 ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << planuy[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "uy" << in << "X95=squeeze(uy" << in << "X95);" << endl;
		file.close();
		
		/*
        snprintf(filename1,20,"/suy%dslice.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file << "uy"   << in << "slice(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < 6 ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
				  k = n + j*Lz + (120+5*q)*Ly*Lz;
					file << uyGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "uy" << in << "slice=squeeze(uy" << in << "slice);" << endl;
		file.close();
		*/
	/*
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
		
		
        snprintf(filename1,20,"/suz%dX95.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file << "uz"   << in << "X95(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < 1 ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = n + j*Lz + q*Ly*Lz;
					file << planuz[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "uz" << in << "X95=squeeze(uz" << in << "X95);" << endl;
		file.close();
		/*
        snprintf(filename1,20,"/suz%dslice.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( n = 0 ; n < Lz ; n++) 
		{   
			file << "uz"   << in << "slice(:,:," << n+1 << ")=[" << endl;
			for( q = 0 ; q < 6 ; q++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
				  k = n + j*Lz + (120+5*q)*Ly*Lz;
					file << uzGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "uz" << in << "slice=squeeze(uz" << in << "slice);" << endl;
		file.close();
		*/
		 
		//  }
		
}
