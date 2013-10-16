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
	
	
	
	
	
	int x,y,z; //Intigers which give the offset of each point
	
	
	if(boundtype==0)
	{
	for(k=k1;k<k2;k++)
	{
	
	computecoordinates(k);
	
	for(a=0;a<Q-1;a++)
	{
	
	
	
	x=xk+geo[a][0];
	y=yk+geo[a][1];
	z=zk+geo[a][2];
	
	
	x=mod(x,Lx);
	y=mod(y,Ly);
	z=mod(z,Lz);
	
	
	
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

	









} 