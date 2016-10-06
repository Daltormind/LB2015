//write moments prints out the moments C p rho and mu into Matlab friendly formats


#include "wet.h"

void wet::writemoments(long int in)
{

	//genCglobal();
	int i, j, h;
	ofstream file;
	char filename1[20];
		string filename;
		//	cout << "Process:" << rank << " Entered writemoments" << endl; 
        //------------------------- Write the composition File------------------------
        
        snprintf(filename1,20,"/sC%drank%dZ1.m",in,rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		computecoordinates(k1);
		int istart=xk;
		computecoordinates(k2);
		int iend=k2;
		
	
	
		for( h = 0 ; h < 1 ; h++) 
		{   
			file << "C" << in  << "rank" << rank << "Z1(:,:," << h+1 << ")=[" << endl;
		
			for( i = istart ; i < iend ; i++) 
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
			
			/*
			file << "C" << in << "Z1=squeeze(C" << in << "Z1);" << endl;
		file.close();
		//	cout << "Process:" << rank << " past C write writemoments" << endl; 


        snprintf(filename1,20,"/sC%dX95.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < Lz ; h++) 
		{   
			file  << "C" << in << "X95(:,:," << h+1 << ")=[" << endl;
		
			for( i = 0 ; i < 1 ; i++) 
			{
			  for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					
				
					
					file << plan[k] << " " ;
					
					
						
				}
				file << endl;
		
}
			file <<"];" << endl;
			
			
		}
		file << "C" << in << "X95=squeeze(C" << in << "X95);" << endl;
		file.close();
		//	cout << "Process:" << rank << " pastwriteplan" << endl; 
	/*       
 snprintf(filename1,20,"/sC%dslice.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < Lz ; h++) 
		{   
			file  << "C" << in << "slice(:,:," << h+1 << ")=[" << endl;
		
			for( i = 0 ; i < 6 ; i++) 
			{
			  for( j = 0 ; j < Ly ; j++) 
				{
				  k = h + j*Lz + (120+5*i)*Ly*Lz;
					
				
				       	if(maskGlobal[k]==28){file << -2 << " " ;}
					file << CGlobal[k] << " " ;
					
					
						
				}
				file << endl;
		
}
			file <<"];" << endl;
			
			
		}
		file << "C" << in << "slice=squeeze(C" << in << "slice);" << endl;
		file.close();
	*/
	//	cout << "Process:" << rank << " pastwriteslice" << endl; 
/*
        snprintf(filename1,20,"/sC%dY1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
	
		for( h = 0 ; h < Lz ; h++) 
		{   
			file  << "C" << in << "Y1(:,:," << h+1 << ")=[" << endl;
		
			for( i = 0 ; i < Lx ; i++) 
			{
			  for( j = 0 ; j < 1 ; j++) 
				{
					k = h + (j)*Lz + i*Ly*Lz;
					
					if(maskGlobal[k]==28){file << -2 << " " ;}
					
					else{file << CGlobal[k] << " " ;}
					
					
						
				}
				file << endl;
		
}
			file <<"];" << endl;
		
			
}
		file << "C" << in << "Y1=squeeze(C" << in << "Y1);" << endl;
		file.close();
	
		//cout << "Process:" << rank << " PastCwriteall" << endl; 	
		//--------------------------- Write free energy file---------------------------
		/*		
		snprintf(filename1,20,"/smu%dZ1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < 1 ; h++) 
		{   
			file  << "mu" << in << "Z1(:,:," << h+1 << ")=[" << endl;
		
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
		file << "mu" << in << "Z1=squeeze(mu" << in << "Z1);" << endl;
		file.close();
		
		
		snprintf(filename1,20,"/smu%dX95.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
		{   
			file  << "mu" << in << "X95(:,:," << h+1 << ")=[" << endl;
		
			for( i = 94 ; i < 95 ; i++) 
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
		file << "mu" << in << "X95=squeeze(mu" << in << "X95);" << endl;
		file.close();
		
		
		snprintf(filename1,20,"/smu%dY1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
		{   
			file  << "mu" << in << "Y1(:,:," << h+1 << ")=[" << endl;
		
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < 1 ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					file << muGlobal[k] << " " ;
				
						
				}
				file << endl;
			
			}
			file <<"];" << endl;
		
		}
		file << "mu" << in << "Y1=squeeze(mu" << in << "Y1);" << endl;
		file.close();
		*/
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
		/*
		snprintf(filename1,20,"/sp%dZ1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < 1 ; h++) 
		{   
			file  << "p" << in << "Z1(:,:," << h+1 << ")=[" << endl;
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
		file << "p" << in << "Z1=squeeze(p" << in << "Z1);" << endl;
		file.close();
		/*		
		snprintf(filename1,20,"/spc%dZ1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < 1 ; h++) 
		{   
			file  << "pc" << in << "Z1(:,:," << h+1 << ")=[" << endl;
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = h + 50 + j*Lz + i*Ly*Lz;
					file << pcGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "pc" << in << "Z1=squeeze(pc" << in << "Z1);" << endl;
		file.close();
		
		snprintf(filename1,20,"/spt%dZ1.m",in);			//Create a name for file that contain data
		*/
		/*
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < 1 ; h++) 
		{   
			file  << "pt" << in << "Z1(:,:," << h+1 << ")=[" << endl;
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = h + 50 + j*Lz + i*Ly*Lz;
					file << ptGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "pt" << in << "Z1=squeeze(pt" << in << "Z1);" << endl;
		file.close();
		*/

		/*	
		snprintf(filename1,20,"/sp%dX95.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
		{   
			file  << "p" << in << "X95(:,:," << h+1 << ")=[" << endl;
			for( i = 94 ; i < 95 ; i++) 
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
		file << "p" << in << "X95=squeeze(p" << in << "X95);" << endl;
		file.close();
		*/
		/*
		snprintf(filename1,20,"/sp%dY1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
		{   
			file  << "p" << in << "(:,:," << h+1 << ")=[" << endl;
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < 1 ; j++) 
				{
					k = h + (j)*Lz + i*Ly*Lz;
					file << pGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "p" << in << "Y1=squeeze(p" << in << "Y1);" << endl;
		file.close();
		/*
		snprintf(filename1,20,"/spc%dY1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
		{   
			file  << "pc" << in << "(:,:," << h+1 << ")=[" << endl;
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < 1 ; j++) 
				{
					k = h + (j+50)*Lz + i*Ly*Lz;
					file << pcGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "pc" << in << "Y1=squeeze(pc" << in << "Y1);" << endl;
		file.close();
		*/
		/*
		snprintf(filename1,20,"/spt%dY1.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
		{   
			file  << "pt" << in << "(:,:," << h+1 << ")=[" << endl;
			for( i = 0 ; i < Lx ; i++) 
			{
				for( j = 0 ; j < 1 ; j++) 
				{
					k = h + (j+50)*Lz + i*Ly*Lz;
					file << ptGlobal[k] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		file << "pt" << in << "Y1=squeeze(pt" << in << "Y1);" << endl;
		file.close();
		*/
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
			
		//--------------------------- Write mask ---------------------------------------
		/*
		snprintf(filename1,20,"/smask%ld.m",in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
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

	//cout << "Process:" << rank << " Exited writemoments" << endl; 
}
