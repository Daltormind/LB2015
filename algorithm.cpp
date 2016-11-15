//Algorithm.cpp This file executes the major loop which steps the code forward through time. 


#include "wet.h"


void wet::algorithm()

{





		for(st=1;st<=Neqst;st++)
		{
		  
		  
            computemoments(); //Compute values of moments from current density function variables.
	    
	    if(st%infost==0) //Writes out values to energy.txt every infost timesteps
	      {

		  /*
	    if(dist==1)//Asking whether dissipation should be written still a work in progress.
	    {
	      disdtot=0.0;
	      disvtot=0.0;
	      dis();
	    }
	     */
		
		for(k=k1;k<k2;k++)
		  {
		  	neibour(k);
		    diffCD();
		    computeenergy();//computing outputs for compute energy.cpp
		    computesurfarea();//computing surface outputs
		  }
		
		if (rank==ROOT)//i.e. only do this for core process.
		  {
		writeenergy(st);//write out the energy and other variables.
		if(dist==1)
		  {
		writedisin(st);
		  }
		  }
		Ebulk=0.0;//setting values used in writeenergy to zero so they can be computed next time.
		Eint=0.0;
		Esurf=0.0;
		COMx=0.0;
		COMy=0.0;
		COMz=0.0;
		COMn=0.0;
		COMt=0.0;
		KEx=0.0;
		vol=0.0;
		KEy=0.0;
		KEz=0.0;
		Ctot=0.0;
		rhotot=0.0;
		surfarea=0.0;
		xhold=0.0;
		yhold=0.0;
		zhold=0.0;
		dU=0.0;
		r=0.0;
		xc=0;
		yc=0;
		zc=0;
		xl=0;
		yl=0;
		zl=0;
		vsum=0.0;
		vn=0;
		xsum=0;
		psum=0;
		if(st%wrtst==0 and st>=stst)//wrtst step controls how often you want to write out the full data
		{
		
		//computeenergy();
		//cout << "t = " << st << " El=" << El << " Eg=" << Eg << " Ei=" << Ei  << " Et=" << Et << endl;
		
	 
	 
	 
	 
		
		//genCglobal();
		//genpglobal();
		//genmuglobal();
		//generateglobalmask();
		//genuxglobal();	
		//genuyglobal();
		//genuzglobal();
		/*
		if(dist==1)//Do you want to write dissipation ? Still a work in progress.
		  {
		    gendisvGlobal();
		    gendisdGlobal();
		  }
		  */
		//if(rank==ROOT)
		//{
		writemoments(st);//write out the momments i.e. C, p and mu
		//writevelocity(st);//write out ux, uy  and uz
		if(st==Neqst)
		  {
		    writeinput();
		  }
		  /*
		if(dist==1)
		  {
		    writedis(st);//write out dissipation if you want still a work in progress
		  }
		  */
		//writeenergy(st);
		//}
		
	
	
	
	
		
		}
		
	      }
		
		//cout << "Process " << rank << " :Got through writemoments"  << endl;

		for(k=k1;k<k2;k++)//looping through the array
		{
			neibour(k);
			if(mask[k]!=28)//i.e for nodes not on the surface
			{
			diffCD();//compute central differances
			
			 diffBD();//compute biased differances
			
			
			centralforce();//compute a load of common terms used in the following functions
			
			equiliberiumg();//compute geq
           
            equiliberiumh();//compute heq
            
           //equiliberiumf();
            
            
            
          //  propcolf();
            
           propcolh();//propogate and collide h
            
            propcolg();//propogate and collide g
            
            

			}
	
			//computeenergy();
	}
		if(size>1)
		{
		exchangedencol();//exchange node information between computing cores
		}

		for(k=k1;k<k2;k++)
		{	
		neibour(k);
		if(mask[k]!=28)
			{
			propset();//some more propogation stuff
			}
		}
		
		
		for(k=k1;k<k2;k++)
		{		
		neibour(k);
		if(mask[k]!=28)
			{
			setwallnodes();//det the value for nodes on the solid surface
			}
		}

		//cout << "Process " << rank << " :Got through third k loop" << endl;
		
		
		}
		
		/*
		if(rank==ROOT)
		{
			popen("plot.sh")
		}
	    */
	    MPI_Barrier(MPI_COMM_WORLD);
	    if(rank==ROOT)
	    {
	    	system("sh tran.sh");
	    }
	    
}
