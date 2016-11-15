//Initialise surface

#include "wet.h"

void wet::initialisesurface()
{
	
	for(k=k1;k<k2;k++)
	{
	neibour(k)
	computecoordinates(k);
	
	mask[k]=0;
	if(surftype==0)
	  {
	//Surface One
	     
	if(xk>=xs and xk<xs+wx and zk>=zs and zk<zs+wz  and yk>=ys and yk<ys+wy)
	{
		mask[k]=28;
		
	}
	
	if(xk>=xs2 and xk<xs2+wx2 and zk>=zs2 and zk<zs2+wz2  and yk>=ys2 and yk<ys2+wy2)
	  {
	    mask[k]=28;
	  }
	
	/*
	if(yk>=ys2 and yk<ys2+wy2 and zk>=zs2 and zk<zs2+wz2)
	  {
	    mask[k]=28;
	  }

	if(yk>=ys and yk<ys+wy and zk>=zs and zk<zs+wz)
	  {
	    mask[k]=28;
	  }
	*/
	//Initialise Posts
	int yt=yk+(pw-1)/2;
	int zt=zk+(zw-1)/2;
	if(xk>=h and xk<xs and mod(yt,P)<pw and yk>=Ps and yk<Pe and mod(zt,Pz)<zw)
	{
		mask[k]=28;
		
	}
	  }
	
	else if (surftype==1)
	  {
	//Initialise Cylinder
	    if((Lx-double(xk)+double(xs))*(Lx-double(xk)+double(xs))/(double(wx)*double(wx))+(double(yk)-double(zs))*(double(yk)-double(zs))/(double(wy)*double(wy))<1.0)
	  {	

  mask[k]=28;

	  }

	     
	if(xk>=xs2 and xk<xs2+wx2 and zk>=zs2 and zk<zs2+wz2  and yk>=ys2 and yk<ys2+wy2)
	{
		mask[k]=28;
		
	}

	     
	if(xk>=xs3 and xk<xs3+wx3 and zk>=zs3 and zk<zs3+wz3  and yk>=ys3 and yk<ys3+wy3)
	{
		mask[k]=28;
		
	}

	  }
	
	else if (surftype==2)
	  {
	//Initialise sphere
	    // if((Lx-double(xk)+double(xs))*(Lx-double(xk)+double(xs))+double(yk)*double(yk)+double(zk)*double(zk)/*/(xs2*xs2)*/<double(ys)*double(ys))
	 
 if((Lx-double(xk)+double(xs))*(Lx-double(xk)+double(xs))/(double(wx)*double(wx))+(double(yk)-double(ys))*(double(yk)-double(ys))/(double(wy)*double(wy))+(double(zk)-double(zs))*(double(zk)-double(zs))/(double(wz)*double(wz))<1.0){mask[k]=28;}
 
 if(xk>198)
 {	
		mask[k]=28;
 

  }
	  }

	else if (surftype==3)
	  {
	//Initialise Cylinder pillar
	    if((Lx-double(xk)+double(xs))*(Lx-double(xk)+double(xs))+double(yk)*double(yk)<double(ys)*double(ys))
	  {	
	    if(mod(yk,P)<pw){
  mask[k]=28;
	    }
	  }
	  }

	else if (surftype==4)
	  {
	//Initialise Concave surface
	    if(xk>xs2)
	     {	
	    
	     mask[k]=28;
	    
	     }
	  
	    //   if((Lx-double(xk)+double(xs))*(Lx-double(xk)+double(xs))/(double(wx)*double(wx))+(double(yk)-double(ys))*(double(yk)-double(ys))/(double(wy)*double(wy))-(double(zk)-double(zs))*(double(zk)-double(zs))/(double(wz)*double(wz))<1.0){mask[k]=28;}

		       if((double(xk)-double(xs))*(double(xk)-double(xs))+double(yk)*double(yk)<double(ys)*double(ys)){mask[k]=0;}

		      }


	else if (surftype==5)
	  {
	//Initialise step surface
	    if((double(zs)-double(xk))/double(xs)+double(yk)/double(ys)<1.0)
	      {
		mask[k]=28;
	      }
	    if(xk>xs2){mask[k]=28;}
	  }
	else if (surftype==6)
	  {//initialise saddle point
	    
	    if(Lx-double(xk)-double(xs)<double(yk)*double(yk)/(double(wy)*double(wy))-double(zk)*double(zk)/(double(wz)*double(wz))){mask[k]=28;}

	  }
	
	
	
	if(input==1)
	  {
	  
	      
	    ifstream inputfile;
        char filename1[20];
		string filename;
	
		//cout << "Have entered input=1" << endl;
	
	
    snprintf(filename1,20,"/C%d.txt",rank);	
	filename=filename1;
	inputfile.open(filename.c_str());
	  for(int i=0;i<ProcessN;i++)
	    {
	      inputfile >> C[i];
	    }
	  inputfile.close();
	    //if(rank==ROOT){ktot=k+rank*(k2-(Lx%size+1)*k1)-k1;}
	    //if(rank >ROOT){ktot=k+rank*(k2-k1)+(Lx%size)*Ly*Lz-k1;}
	    
	    if(C[k]==-2){mask[k]=28;}
	    
	 
	 
	  }
	}
	if(size>1)
	{
	exchangemask();
	 }
	 
	 
	 cout  << "Process "<< rank << " past exchangmask 1" << endl;
	
	
	
	
	
	
	
	
	 
	for(k=k1;k<k2;k++)
	{	
		neibour(k);
		// Four Cardinal directions
		if(mask[d[0]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[1]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[2]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[3]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[6]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[7]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[8]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[9]]==28 and mask[k]!=28){mask[k]=1;}
		
		if(mask[d[4]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[5]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[10]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[11]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[12]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[13]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[14]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[15]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[16]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[17]]==28 and mask[k]!=28){mask[k]=1;}
		
	}
	 
	
	 
	     
	 if(size>1)
	 {
	exchangemask();
	}
	//	cout  << "Process "<< rank << " First in initsurf k loop done" << endl;
	/*
	for(k=k1;k<k2;k++)
	{	
		// Four Cardinal directions
		if(mask[d[d[0]][0]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[1]][1]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[2]][2]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[3]][3]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[6]][6]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[7]][7]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[8]][8]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[9]][9]]==28 and mask[k]==0){mask[k]=2;}
		
		if(mask[d[d[4]][4]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[5]][5]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[10]][10]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[11]][11]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[12]][12]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[13]][13]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[14]][14]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[15]][15]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[16]][16]]==28 and mask[k]==0){mask[k]=2;}
		if(mask[d[d[17]][17]]==28 and mask[k]==0){mask[k]=2;}
		
	}
	*/
	for(k=k1;k<k2;k++)
	  {
	  	neibour(k);
	    if(mask[d[0]]==1 and mask[k]==0){mask[k]=2;}
	    if(mask[d[1]]==1 and mask[k]==0){mask[k]=2;}
	     if(mask[d[2]]==1 and mask[k]==0){mask[k]=2;}
	      if(mask[d[3]]==1 and mask[k]==0){mask[k]=2;}
	      if(mask[d[4]]==1 and mask[k]==0){mask[k]=2;}
	       if(mask[d[5]]==1 and mask[k]==0){mask[k]=2;}
	      if(mask[d[6]]==1 and mask[k]==0){mask[k]=2;}
	     if(mask[d[7]]==1 and mask[k]==0){mask[k]=2;}
	      if(mask[d[8]]==1 and mask[k]==0){mask[k]=2;}
	      if(mask[d[9]]==1 and mask[k]==0){mask[k]=2;}
	       if(mask[d[10]]==1 and mask[k]==0){mask[k]=2;}
	       if(mask[d[11]]==1 and mask[k]==0){mask[k]=2;}
	       if(mask[d[12]]==1 and mask[k]==0){mask[k]=2;}
	       if(mask[d[13]]==1 and mask[k]==0){mask[k]=2;}
	        if(mask[d[14]]==1 and mask[k]==0){mask[k]=2;}
	 if(mask[d[15]]==1 and mask[k]==0){mask[k]=2;}	
	 if(mask[d[16]]==1 and mask[k]==0){mask[k]=2;}
      if(mask[d[17]]==1 and mask[k]==0){mask[k]=2;}
      // cout << " Got past k= " << k << " process" << rank << endl;

}
	//	cout  << "Process "<< rank << " before exchangemask 2" << endl;
	if(size>1)
	{
	exchangemask();
	}

	for(k=k1;k<k2;k++)
	  {
	  neibour(k);
	    if(mask[k]==1)
	      {
		
		if(mask[d[0]]==28)
		  {
		   

		    if( mask[d[6]]==1 || mask[d[8]]==1 || mask[d[14]]==1 || mask[d[16]]==1)
		      {
			p[k]=-5;
		      }
		 
		   
		  }
		

		if(mask[d[1]]==28)
		  {
		   

		    if( mask[d[7]]==1 || mask[d[9]]==1 || mask[d[15]]==1 || mask[d[17]]==1)
		      {
			p[k]=-5;
		      }
		 
		   
		  }
		  
		if(mask[d[2]]==28)
		  {
		   

		    if( mask[d[6]]==1 || mask[d[7]]==1 || mask[d[10]]==1 || mask[d[12]]==1)
		      {
			p[k]=-5;
		      }
		 
		   
		  }
		
		   
		if(mask[d[3]]==28)
		  {
		   

		    if( mask[d[8]]==1 || mask[d[9]]==1 || mask[d[11]]==1 || mask[d[13]]==1)
		      {
			p[k]=-5;
		      }
		 
		   
		  }
		
		if(mask[d[4]]==28)
		  {
		   

		    if( mask[d[10]]==1 || mask[d[11]]==1 || mask[d[14]]==1 || mask[d[15]]==1)
		      {
			p[k]=-5;
		      }
		 
		   
		  }
		
		  
		if(mask[d[5]]==28)
		  {
		   

		    if( mask[d[12]]==1 || mask[d[13]]==1 || mask[d[16]]==1 || mask[d[17]]==1)
		      {
			p[k]=-5;
		      }
		 
		   
		  }
		
	      

	      }
	  
	  }

	for(k=k1;k<k2;k++)
	  {
	  neibour(k);
	    if(p[k]==-5)
	      {
		mask[k]=3;
		//cout << "Something has been set as 3" << endl;
	      }
	    
	  }

	if(size>1)
	{
	exchangemask();
	}
	/*
	//Set concave corner specials.

	  
	for(k=k1;k<k2;k++)
	  {

	    	if(mask[k]==1)
		  {
	    if(mask[d[6]]==28 && mask[d[9]]==1)
	      {
		p[k]=4;
	      }
	    
	    if(mask[d[9]]==28 && mask[d[6]]==1)
	      {
		p[k]=4;
	      }
	    
	    if(mask[d[7]]==28 && mask[d[8]]==1)
	      {
		p[k]=4;
	      }
	    
	    
	    if(mask[d[8]]==28 && mask[d[7]]==1)
	      {
		p[k]=4;
	      }
	    
	     
	    if(mask[d[10]]==28 && mask[d[13]]==1)
	      {
		p[k]=4;
	      }

	    
	    if(mask[d[13]]==28 && mask[d[10]]==1)
	      {
		p[k]=4;
	      }
	    
	    
	    if(mask[d[11]]==28 && mask[d[12]]==1)
	      {
		p[k]=4;
	      }
	    
	    
	    if(mask[d[12]]==28 && mask[d[11]]==1)
	      {
		p[k]=4;
	      }
	    
	    
	    if(mask[d[14]]==28 && mask[d[17]]==1)
	      {
		p[k]=4;
	      }
	    
	    
	    if(mask[d[17]]==28 && mask[d[14]]==1)
	      {
		p[k]=4;
	      }
	    
	    
	    if(mask[d[15]]==28 && mask[d[16]]==1)
	      {
		p[k]=4;
	      }
	    
	    
	    if(mask[d[16]]==28 && mask[d[15]]==1)
	      {
		p[k]=4;
	      }
	    
	    
	    
	    
 }
	  }

	for(k=k1;k<k2;k++)
	  {
	    if(p[k]==4)
	      {
		mask[k]=4;
	      }
	  }

	exchangemask();
	
	for (k=k1;k<k2;k++)
	  {
	    if(mask[k]==1)
	      {
		if(mask[d[6]]==28 && mask[d[9]]==28){mask[k]=5;}
		if(mask[d[7]]==28 && mask[d[8]]==28){mask[k]=5;}
		if(mask[d[10]]==28 && mask[d[13]]==28){mask[k]=5;}
		if(mask[d[11]]==28 && mask[d[12]]==28){mask[k]=5;}
		if(mask[d[14]]==28 && mask[d[17]]==28){mask[k]=5;}
		if(mask[d[15]]==28 && mask[d[16]]==28){mask[k]=5;}
	      }
	  }
*/
	if(size>1)
	{
	exchangemask();
	}
//	cout  << "Process "<< rank << " Past exchangemask 2" << endl;
	
	/*
	for(k=k1;k<k2;k++)
	{	
		// Four Cardinal directions
		if(mask[d[0]]==28 and mask[k]!=28){mask[k]=1;}
		if(mask[d[1]]==28 and mask[k]!=28){mask[k]=2;}
		if(mask[d[2]]==28 and mask[k]!=28){mask[k]=3;}
		if(mask[d[3]]==28 and mask[k]!=28){mask[k]=4;}
	}
	
	for(k=k1;k<k2;k++)
	{		
		// four possible convex corner types
		if(mask[k]==0 and mask[d[6]]==28){mask[k]=7;}
		if(mask[k]==0 and mask[d[8]]==28){mask[k]=9;}
		if(mask[k]==0 and mask[d[7]]==28){mask[k]=8;}
		if(mask[k]==0 and mask[d[9]]==28){mask[k]=10;}
		
		//Four possible concave corner types
		if(mask[d[0]]==28 and mask[d[2]]==28 and mask[k]==0){mask[k]=31;}
		if(mask[d[0]]==28 and mask[d[3]]==28 and mask[k]==0){mask[k]=41;}
		if(mask[d[1]]==28 and mask[d[2]]==28 and mask[k]==0){mask[k]=32;}
		if(mask[d[1]]==28 and mask[d[3]]==28 and mask[k]==0){mask[k]=42;}
	
	}
	/*
	for(k=k1;k<k2;k++)
	{		
		// four possible corner types
		if(mask[k]==1 and mask[d[2]]==9){mask[k]=29;}
		if(mask[k]==1 and mask[d[3]]==7){mask[k]=27;}
		if(mask[k]==2 and mask[d[2]]==10){mask[k]=40;}
		if(mask[k]==2 and mask[d[3]]==8){mask[k]=38;}
		if(mask[k]==3 and mask[d[0]]==8){mask[k]=48;}
		if(mask[k]==3 and mask[d[1]]==7){mask[k]=47;}
		if(mask[k]==4 and mask[d[0]]==10){mask[k]=60;}
		if(mask[k]==4 and mask[d[1]]==9){mask[k]=59;}
		
		
	
	}
	
	
	for(k=k1;k<k2;k++)
	{
		if(mask[d[1]]==2 and mask[d[7]]==2 and mask[d[9]]==2){mask[k]=-2;}
		if(mask[d[0]]==1 and mask[d[6]]==1 and mask[d[8]]==1){mask[k]=-1;}
		if(mask[d[2]]==3 and mask[d[6]]==3 and mask[d[7]]==3){mask[k]=-3;}
		if(mask[d[3]]==4 and mask[d[8]]==4 and mask[d[9]]==4){mask[k]=-4;}
	
		if(mask[d[1]]==2 and mask[d[7]]==10){mask[k]=-210;}
		if(mask[d[1]]==2 and mask[d[9]]==8){mask[k]=-208;}
		if(mask[d[0]]==1 and mask[d[6]]==9 ){mask[k]=-109;}
		if(mask[d[0]]==1 and mask[d[8]]==7 ){mask[k]=-107;}
		if(mask[d[2]]==3 and mask[d[6]]==8 ){mask[k]=-308;}
		if(mask[d[2]]==3 and mask[d[7]]==7 ){mask[k]=-307;}
		if(mask[d[3]]==4 and mask[d[8]]==10 ){mask[k]=-410;}
		if(mask[d[3]]==4 and mask[d[9]]==9 ){mask[k]=-409;}
		
		if(mask[d[6]]==31){mask[k]=317;}
		if(mask[d[0]]==31){mask[k]=311;}
		if(mask[d[2]]==31){mask[k]=313;}
		
		if(mask[d[7]]==32){mask[k]=318;}
		if(mask[d[1]]==32){mask[k]=322;}
		if(mask[d[2]]==32){mask[k]=323;}
		
		if(mask[d[6]]==41){mask[k]=417;}
		if(mask[d[0]]==41){mask[k]=411;}
		if(mask[d[3]]==41){mask[k]=414;}
		
		if(mask[d[9]]==42){mask[k]=430;}
		if(mask[d[1]]==42){mask[k]=422;}
		if(mask[d[3]]==42){mask[k]=424;}
		



		


	}
	*/
	
}
