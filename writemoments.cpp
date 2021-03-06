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
		int offset;
		computecoordinates(k1);
		int istart=xk;
		computecoordinates(k2);
		int iend=xk;
		if(size>1)
		{
		offset=2;
		}
		else
		{
		offset=0;
		}
		
	    //cout << "rank=" << rank<< " istart=" << istart << " iend=" << iend << endl;
		//file << "Is anything being written" << endl;
		for( h = plane ; h <= plane ; h++) 
		{   
			if(rank==ROOT)
			{
			file << "C" << in << "Z1(:,:," << h+1 << ")=[" << endl;
			}
			for( i = offset ; i < offset+iend-istart ; i++) 
			{
			  for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					
					if(mask[k]==28){file << -2 << " " ;}
					
					else{file << C[k] << " " ;}
					
					
						
				}
				file << endl;
		
}			
			if(rank==size-1)
			{
			file <<"];" << endl;
			file << "C" << in << "Z1=squeeze(C" << in << "Z1);" << endl;
			}
			
			
}
			
			file.close();
			
			MPI_Barrier(MPI_COMM_WORLD);
			
			if(rank==ROOT)
			{
			file.open("catm.sh");
			
			file << "cat ";
			
			
			
			for(int asize=0; asize<size; asize++)
			{
				file << folder << "/" << "sC" << in << "rank" << asize << "Z1.m ";
			}
			
			file << "> " << folder << "/" << "sC" << in << "Z1.m" << endl; 
			
			for(int asize=0; asize<size ; asize++)
		{
		  	file << "rm " << folder << "/" << "sC" << in << "rank" << asize << "Z1.m" << endl;
		}
			file.close();
		    system("sh catm.sh");
			}
		
		
		snprintf(filename1,20,"/%ddata.csv.%d",rank,in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		if(rank==ROOT)
		{
		file << "xpos, ypos, zpos, C, p, ux, uy, uz, mu" << endl;
		}
		for(k=k1 ; k<k2 ; k++)
		
		{
		computecoordinates(k);
		/*
		if(k==k2-1)
		  {
		    cout << "For process rank=" << rank << " k2 point is equal to " << k2 << " " << xk << " " << yk << " " << zk << endl; 
		
		  }
		*/
		if(zk==plane)
		{
		file << xk << ", " << yk << ", " << zk << ", " << C[k] << ", " << p[k] << ", " << ux[k] << ", " << uy[k] << ", " << uz[k] << ", " <<  mu[k] << endl; 
		
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
		file << folder << "/" << asize << "data.csv." << in << " " ;
		}
		file << ">" << folder << "/data.csv." << in << endl;
		
		for(int asize=0; asize<size ; asize++)
		{
		file << "rm " << folder << "/" << asize << "data.csv." << in << endl;
		}
		file.close();
		system("sh cat.sh");
		} 
		
		
		if(OutputType==0)
		{
		//Writing out interface position
		
		snprintf(filename1,20,"/%dinter.csv.%d",rank,in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		if(rank==ROOT)
		{
		file << "xpos, ypos, zpos, C" << endl;
		}
		for(k=k1 ; k<k2 ; k++)
		
		{
		if(C[k]<0.9 && C[k]>0.1)
		{
		computecoordinates(k);
		
		file << xk << ", " << yk << ", " << zk << ", " << C[k] << endl;
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
		file << folder << "/" << asize << "inter.csv." << in << " " ;
		}
		file << ">" << folder << "/inter.csv." << in << endl;
		
		for(int asize=0; asize<size ; asize++)
		{
		file << "rm " << folder << "/" << asize << "inter.csv." << in << endl;
		}
		file.close();
		system("sh cat.sh");
		} 
		}
		else
		{
		//Writing out information inside drop
		
		snprintf(filename1,20,"/%ddrop.csv.%d",rank,in);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		if(rank==ROOT)
		{
		file << "xpos, ypos, zpos, C, ux, uy, uz" << endl;
		}
		for(k=k1 ; k<k2 ; k++)
		
		{
		if(C[k]<0.5)
		{
		computecoordinates(k);
		
		file << xk << ", " << yk << ", " << zk << ", " << C[k] << ", " << ux[k] << ", " << uy[k] << ", " << uz[k] << endl;
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
		file << folder << "/" << asize << "drop.csv." << in << " " ;
		}
		file << ">" << folder << "/drop.csv." << in << endl;
		
		for(int asize=0; asize<size ; asize++)
		{
		file << "rm " << folder << "/" << asize << "drop.csv." << in << endl;
		}
		file.close();
		system("sh cat.sh");
		} 
		
		}
		
}
