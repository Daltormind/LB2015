//Initialise surface

#include "wet.h"

void wet::initialisesurface()
{
	
	for(k=k1;k<k2;k++)
	{
	
	computecoordinates(k);
	
	mask[k]=0;
	
	
	if(xk>=xs and xk<xs+wx and zk>=zs and zk<zs+wz and yk>=ys and yk<ys+wy)
	{
		mask[k]=28;
		
	}

	if(xk>=xs2 and xk<xs2+wx2 and zk>=zs2 and zk<zs2+wz2 and yk>=ys2 and yk<ys2+wy2)
	  {
	    mask[k]=28;
	  }
	/*
	if(yk>=ys2 and yk<ys2+wy2 and zk>=zs and zk<zs+wz)
	  {
	    mask[k]=28;
	  }

	if(yk>=ys and yk<ys+wy and zk>=zs and zk<zs+wz)
	  {
	    mask[k]=28;
	  }
	*/
	if(xk>=h and xk<xs and mod(yk,P)<pw)
	{
		mask[k]=28;
		
	}
	
	
	
	}
	
	
	
	
	exchangemask();
	 
	 
	 
	 cout  << "Process "<< rank << " past exchangmask 1" << endl;
	
	
	
	
	
	
	
	
	 
	for(k=k1;k<k2;k++)
	{	
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
	 
	
	 
	     
	 
	exchangemask();
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
	
	exchangemask();
	

	for(k=k1;k<k2;k++)
	  {
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
	    if(p[k]==-5)
	      {
		mask[k]=3;
		//cout << "Something has been set as 3" << endl;
	      }
	    
	  }

	exchangemask();
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
