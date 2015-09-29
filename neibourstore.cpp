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
	
	
	
	d[k][a]=z+y*Lz+x*Ly*Lz;
	
	
	
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
	
	
	
	d[d[k][a]][a]=z+y*Lz+(x+2)*Ly*Lz;
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
	
	
	
	d[k][a]=z+y*Lz+x*Ly*Lz;
	
	
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
	
	
	
	d[d[k][a]][a]=z+y*Lz+x*Ly*Lz;
	}
	}
	*/
	
	}
	
	for(k=k1;k<k2;k++)
	{
		if(d[k][0]>=k2)
		{
			d[k][6]=d[k][2];
			d[k][8]=d[k][3];
			d[k][14]=d[k][4];
			d[k][16]=d[k][5];

			
		}
		if(d[k][1]>=k2)
		{
			d[k][7]=d[k][2];
			d[k][9]=d[k][3];
			d[k][15]=d[k][4];
			d[k][17]=d[k][5];

			
		}
		if(d[k][2]>=k2)
		{
			d[k][6]=d[k][0];
			d[k][7]=d[k][1];
			d[k][10]=d[k][4];
			d[k][12]=d[k][5];

			
		}
		if(d[k][3]>=k2)
		{
			d[k][8]=d[k][0];
			d[k][9]=d[k][1];
			d[k][11]=d[k][4];
			d[k][13]=d[k][5];

			
		}
		if(d[k][4]>=k2)
		{
			d[k][10]=d[k][2];
			d[k][11]=d[k][3];
			d[k][14]=d[k][0];
			d[k][15]=d[k][1];

			
		}
		if(d[k][5]>=k2)
		{
			d[k][12]=d[k][2];
			d[k][13]=d[k][3];
			d[k][16]=d[k][0];
			d[k][17]=d[k][1];

			
		}
		if(d[k][6]>=k2)
		{
			d[k][6]=k;
			

			
		}
		if(d[k][7]>=k2)
		{
			d[k][7]=k;
			

			
		}
		if(d[k][8]>=k2)
		{
			d[k][8]=k;
		}
		if(d[k][9]>=k2)
		{
			d[k][9]=k;
		}
		if(d[k][10]>=k2)
		{
			d[k][10]=k;
		}
		if(d[k][11]>=k2)
		{
			d[k][11]=k;
		}
		if(d[k][12]>=k2)
		{
			d[k][12]=k;
		}
		if(d[k][13]>=k2)
		{
			d[k][13]=k;
		}
		if(d[k][14]>=k2)
		{
			d[k][14]=k;
		}
		if(d[k][15]>=k2)
		{
			d[k][15]=k;
		}
		if(d[k][16]>=k2)
		{
			d[k][16]=k;
		}
		if(d[k][17]>=k2)
		{
			d[k][17]=k;
		}
		if(d[k][0]>=k2)
		{
			d[k][0]=k;
		}
		if(d[k][1]>=k2)
		{
			d[k][1]=k;
		}
		if(d[k][2]>=k2)
		{
			d[k][2]=k;
		}
		if(d[k][3]>=k2)
		{
			d[k][3]=k;
		}
		if(d[k][4]>=k2)
		{
			d[k][4]=k;
		}
		if(d[k][5]>=k2)
		{
			d[k][5]=k;
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
					
					
					file << d[k][1] << " " ;
						
				}
				file << endl;
			}
			file <<"];" << endl;
		}
		
		file.close();
	*/







} 
