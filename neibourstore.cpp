//Computes the adjacents to every point

#include "wet.h"

void wet::neibour()

{
	
	
	
	const int geo[18][3]={{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1}
							,{0,0,-1},{1,1,0},{-1,1,0},{1,-1,0},{-1,-1,0}
							,{0,1,1},{0,-1,1},{0,1,-1},{0,-1,-1},{1,0,1},
							{-1,0,1},{1,0,-1},{-1,0,-1}};
							
	/*
	
	const int geo[8][3]={{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},
						{1,1,0},{-1,1,0},{1,-1,0},{-1,-1,0}
							};						
	*/
	
	
	
	int x,y,z;
	
	
	
	if(boundtype==0)
	{
	
	
					
						
				
			
			
		
		
		
	
	for(k=Lz*Ly;k<k2+Lz*Ly;k++)
	{
	
		xk=int (k/float(Lz*Ly));
		yk=int((k-xk*Lz*Ly)/float(Lz));
		zk=k-xk*Ly*Lz-yk*Lz;
	
	//cout  << "Process "<< rank << " compute coordinates done" << endl;
	
	for(a=0;a<Q-1;a++)
	{
	
	
	
	x=xk+geo[a][0];
	y=yk+geo[a][1];
	z=zk+geo[a][2];
	
	
	//x=mod(x,Lx);
	y=mod(y,Ly);
	z=mod(z,Lz);
	
	
	
	d[a]=z+y*Lz+x*Ly*Lz;
	
	
	
	}
	
	
	
	
	
	
	}
	
	
	
	
	
	
	
	/*
	for(k=k1;k<k2;k++)
	{
	
	if(k<k1+Ly*Lz or k>=k2-Ly*Lz)
	{
	
		computecoordinates(k);
		for(a=0;a<Q-1;a++)
	{
		x=xk+2*geo[a][0];
		
		//cout << " process k xk x a diff = " << rank << " " << k << " " << xk << " " << x << " " << a << " " << geo[a][0] << endl;
		
		y=yk+2*geo[a][1];
		z=zk+2*geo[a][2];
	
	
	//x=mod(x,Lx);
	y=mod(y,Ly);
	z=mod(z,Lz);
	
	
	
	d[d[a]][a]=z+y*Lz+(x+2)*Ly*Lz;
	}
	}
	
	}
	*/
	cout  << "Process "<< rank << " Second k loop done" << endl;
	}
	
	if(boundtype==1)
	{
		for(k=k1;k<k2;k++)
	{
	
	computecoordinates(k);
	
	for(a=0;a<Q-1;a++)
	{
	
	
	
	x=xk+geo[a][0];
	y=yk+geo[a][1];
	z=zk+geo[a][2];
	
	
	//x=mod(x,Lx);
	//y=mod(y,Ly);
	//z=mod(z,Lz);
	
	
	
	d[a]=z+y*Lz+x*Ly*Lz;
	
	
	}
	
	
	
	/*
	if(k<k1+Ly*Lz or k>=k2-Ly*Lz)
	{
		for(a=0;a<Q-1;a++)
	{
		x=xk+2*geo[a][0];
		y=yk+2*geo[a][1];
		z=zk+2*geo[a][2];
	
	
	//x=mod(x,Lx);
	y=mod(y,Ly);
	z=mod(z,Lz);
	
	
	
	d[d[a]][a]=z+y*Lz+x*Ly*Lz;
	}
	}
	*/
	
	}
	
	for(k=k1;k<k2;k++)
	{
		if(d[0]>=k2)
		{
			d[6]=d[2];
			d[8]=d[3];
			d[14]=d[4];
			d[16]=d[5];

			
		}
		if(d[1]>=k2)
		{
			d[7]=d[2];
			d[9]=d[3];
			d[15]=d[4];
			d[17]=d[5];

			
		}
		if(d[2]>=k2)
		{
			d[6]=d[0];
			d[7]=d[1];
			d[10]=d[4];
			d[12]=d[5];

			
		}
		if(d[3]>=k2)
		{
			d[8]=d[0];
			d[9]=d[1];
			d[11]=d[4];
			d[13]=d[5];

			
		}
		if(d[4]>=k2)
		{
			d[10]=d[2];
			d[11]=d[3];
			d[14]=d[0];
			d[15]=d[1];

			
		}
		if(d[5]>=k2)
		{
			d[12]=d[2];
			d[13]=d[3];
			d[16]=d[0];
			d[17]=d[1];

			
		}
		if(d[6]>=k2)
		{
			d[6]=k;
			

			
		}
		if(d[7]>=k2)
		{
			d[7]=k;
			

			
		}
		if(d[8]>=k2)
		{
			d[8]=k;
		}
		if(d[9]>=k2)
		{
			d[9]=k;
		}
		if(d[10]>=k2)
		{
			d[10]=k;
		}
		if(d[11]>=k2)
		{
			d[11]=k;
		}
		if(d[12]>=k2)
		{
			d[12]=k;
		}
		if(d[13]>=k2)
		{
			d[13]=k;
		}
		if(d[14]>=k2)
		{
			d[14]=k;
		}
		if(d[15]>=k2)
		{
			d[15]=k;
		}
		if(d[16]>=k2)
		{
			d[16]=k;
		}
		if(d[17]>=k2)
		{
			d[17]=k;
		}
		if(d[0]>=k2)
		{
			d[0]=k;
		}
		if(d[1]>=k2)
		{
			d[1]=k;
		}
		if(d[2]>=k2)
		{
			d[2]=k;
		}
		if(d[3]>=k2)
		{
			d[3]=k;
		}
		if(d[4]>=k2)
		{
			d[4]=k;
		}
		if(d[5]>=k2)
		{
			d[5]=k;
		}
	}
	
	
	} 

	/*
int i, j, h;
	ofstream file;
	char filename1[20];
		string filename;
	
snprintf(filename1,20,"/sd%ld.m",rank);			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		for( h = 0 ; h < Lz ; h++) 
		{   
			file << "d" << rank  << "=[" << endl;
			for( i = 0 ; i < Lx/size +4 ; i++) 
			{
				for( j = 0 ; j < Ly ; j++) 
				{
					k = h + j*Lz + i*Ly*Lz;
					
					
					file << d[1] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		
		file.close();
	*/







} 
