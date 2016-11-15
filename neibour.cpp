//Computes the adjacents to every point

#include "wet.h"

void wet::neibour(int b)

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
	
	
	
	int x,y,z,x2,y2,z2;
	/*
	int start,stop;
	
	if(size>1)
	{
	start=Lz*Ly;
	stop=k2+Lz*Ly;
	}
	else
	{
	start=0;
	stop=k2;
	}
	*/
	if(boundtype==0)
	{
	
	
					
						
				
			
			
		
		
		
	
	//for(k=start;k<stop;k++)
	//{
	  
		xk=int (b/float(Lz*Ly));
		yk=int((b-xk*Lz*Ly)/float(Lz));
		zk=b-xk*Ly*Lz-yk*Lz;
	  
	  
//cout  << "Process "<< rank << " compute coordinates done" << endl;
	
	for(a=0;a<Q-1;a++)
	{
	
	
	
	x=xk+geo[a][0];
	y=yk+geo[a][1];
	z=zk+geo[a][2];
	
	x2=xk+2*geo[a][0];
	y2=yk+2*geo[a][1];
	z2=zk+2*geo[a][2];
	
	if(size==1)
	{
	x=mod(x,Lx);
	x2=mod(x2,Lx);
	}
	y=mod(y,Ly);
	z=mod(z,Lz);
	y2=mod(y2,Ly);
	z2=mod(z2,Lz);
	
	
	
	d[a]=z+y*Lz+x*Ly*Lz;
	d2[a]=z2+y2*Lz+x2*Ly*Lz;
	
	
	//}
	
	
	
	
	
	
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
	//cout  << "Process "<< rank << " Second k loop done" << endl;
	}
	
	if(boundtype==1)
	{
		//for(k=start;k<stop;k++)
	
		xk=int (b/float(Lz*Ly));
		yk=int((b-xk*Lz*Ly)/float(Lz));
		zk=b-xk*Ly*Lz-yk*Lz;
	for(a=0;a<Q-1;a++)
	{
	
	
	
	x=xk+geo[a][0];
	y=yk+geo[a][1];
	z=zk+geo[a][2];
	
	x2=xk+2*geo[a][0];
	y2=yk+2*geo[a][1];
	z2=zk+2*geo[a][2];
	
	
	//x=mod(x,Lx);
	//y=mod(y,Ly);
	if(dimensions==2)
	{
	z=mod(z,Lz);
	}
	
	
	d[a]=z+y*Lz+x*Ly*Lz;
		d2[a]=z2+y2*Lz+x2*Ly*Lz;

	
	}
	computecoordinates(b);
	if(xk==0)
	{
		d[1]=d[0];
		d[7]=d[6];
		d[9]=d[8];
		d[15]=d[14];
		d[17]=d[16];
		
		d2[1]=d2[0];
		d2[7]=d2[6];
		d2[9]=d2[8];
		d2[15]=d2[14];
		d2[17]=d2[16];
		//if(yk==0){d[9]=d[6];d[3]=d[2];d[8]=d[6];d[11]=d[10];d[13]=d[12];if(zk==0){d[5]=d[4];d[12]=d[10];d[13]=d[10];d[16]=d[14]}}
		//if(yk==Ly-1){d[7]=d[8];d[2]=d[3];}
	}
	
	if(xk==Lx-1)
	{
		d[0]=d[1];
		d[6]=d[7];
		d[8]=d[9];
		d[14]=d[15];
		d[16]=d[17];
		
		d2[0]=d2[1];
		d2[6]=d2[7];
		d2[8]=d2[9];
		d2[14]=d2[15];
		d2[16]=d2[17];
		
	}
	
	if(yk==0)
	{
		d[3]=d[2];
		d[9]=d[7];
		d[8]=d[6];
		d[11]=d[10];
		d[13]=d[12];
		
		d2[3]=d2[2];
		d2[9]=d2[7];
		d2[8]=d2[6];
		d2[11]=d2[10];
		d2[13]=d2[12];
	}
	
	if(yk==Ly-1)
	{
		d[2]=d[3];
		d[7]=d[9];
		d[6]=d[8];
		d[10]=d[11];
		d[12]=d[13];
		
		d2[2]=d2[3];
		d2[7]=d2[9];
		d2[6]=d2[8];
		d2[10]=d2[11];
		d2[12]=d2[13];
	}
	
	if(dimensions==3)
	{
	if(zk==0)
	{
		d2[5]=d2[4];
		d2[12]=d2[10];
		d2[13]=d2[11];
		d2[16]=d2[14];
		d2[17]=d2[15];
	}
	
	if(zk==Lz-1)
	{
		d2[4]=d2[5];
		d2[10]=d2[12];
		d2[11]=d2[13];
		d2[14]=d2[16];
		d2[15]=d2[17];
	}
	
	
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
	
	
	/*
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
	*/
	
	} 
	
	if(boundtype==2)
	{
		//for(k=start;k<stop;k++)
	
		xk=int (b/float(Lz*Ly));
		yk=int((b-xk*Lz*Ly)/float(Lz));
		zk=b-xk*Ly*Lz-yk*Lz;
	for(a=0;a<Q-1;a++)
	{
	
	
	
	x=xk+geo[a][0];
	y=yk+geo[a][1];
	z=zk+geo[a][2];
	
	
	//x=mod(x,Lx);
	//y=mod(y,Ly);
	if(dimensions==2)
	{
	z=mod(z,Lz);
	}
	
	
	d[a]=z+y*Lz+x*Ly*Lz;
	
	
	
	}
	computecoordinates(b);
	if(xk==0)
	{
		d[1]=b;
		d[7]=b;
		d[9]=b;
		d[15]=b;
		d[17]=b;
		//if(yk==0){d[9]=d[6];d[3]=d[2];d[8]=d[6];d[11]=d[10];d[13]=d[12];if(zk==0){d[5]=d[4];d[12]=d[10];d[13]=d[10];d[16]=d[14]}}
		//if(yk==Ly-1){d[7]=d[8];d[2]=d[3];}
	}
	
	if(xk==Lx-1)
	{
		d[0]=b;
		d[6]=b;
		d[8]=b;
		d[14]=b;
		d[16]=b;
		
	}
	
	if(yk==0)
	{
		d[3]=d[2];
		d[9]=d[7];
		d[8]=d[6];
		d[11]=d[10];
		d[13]=d[12];
	}
	
	if(yk==Ly-1)
	{
		d[2]=d[3];
		d[7]=d[9];
		d[6]=d[8];
		d[10]=d[11];
		d[12]=d[13];
	}
	
	if(dimensions==3)
	{
	if(zk==0)
	{
		d[5]=d[4];
		d[12]=d[10];
		d[13]=d[11];
		d[16]=d[14];
		d[17]=d[15];
	}
	
	if(zk==Lz-1)
	{
		d[4]=d[5];
		d[10]=d[12];
		d[11]=d[13];
		d[14]=d[16];
		d[15]=d[17];
	}
	
	
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
	
	
	/*
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
	*/
	
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
