//algorithm


#include "wet.h"


void wet::algorithm()

{





		for(st=1;st<=Neqst;st++)
		{
		  
		  //  cout << "Process rank " << rank << "starting algorithm " <<endl;    
            computemoments();
	    
	    if(st%infost==0)
	      {

		  
	    if(dist==1)
	    {
	      disdtot=0.0;
	      disvtot=0.0;
	      dis();
	    }
	     
		
		for(k=k1;k<k2;k++)
		  {
		    diffCD();
		    computeenergy();
		    computesurfarea();
		  }
		
		if (rank==ROOT)
		  {
		writeenergy(st);
		if(dist==1)
		  {
		writedisin(st);
		  }
		  }
		Ebulk=0.0;
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
		if(st%wrtst==0 and st>=stst)
		{
		
		//computeenergy();
		//cout << "t = " << st << " El=" << El << " Eg=" << Eg << " Ei=" << Ei  << " Et=" << Et << endl;
		
	 
	 
	 
	 
		
		genCglobal();
		genpglobal();
		genmuglobal();
		generateglobalmask();
		genuxglobal();	
		genuyglobal();
		genuzglobal();
		if(dist==1)
		  {
		    gendisvGlobal();
		    gendisdGlobal();
		  }
		if(rank==ROOT)
		{
		writemoments(st);
		writevelocity(st);
		if(st==Neqst)
		  {
		    writeinput();
		  }
		if(dist==1)
		  {
		    writedis(st);
		  }
		//writeenergy(st);
		}
		
	
	
	
	
		
		}
		
	      }
		
		//cout << "Process " << rank << " :Got through writemoments"  << endl;

		for(k=k1;k<k2;k++)
		{
			/*
			if(rank==0 and k==5151)
            {
            cout << st << " " << h0[k] << " " << h1[k] << " " << h2[k] << " " << h3[k] << " " << h4[k] << " " << h7[k] << " " << h8[k] << " " << h9[k] << " " << h10[k] << " " << C[k] <<  endl;
            }
			*/
			if(mask[k]!=28)
			{
			diffCD();
			/*
			if(k==k1)
			  {cout << "just before computeenergy" << endl;}
			computeenergy();
			if(k==k1)
			  {cout << "just after compute energy" << endl;}
			*/
			 diffBD();
			
			
			centralforce();
			
			equiliberiumg();
           
            equiliberiumh();
            
           //equiliberiumf();
            
            
            
          //  propcolf();
            
           propcolh();
            
            propcolg();
            
            

			}
	
			//computeenergy();
	}
		
		exchangedencol();
		
		//cout << "Process " << rank << " :Got through first k loop"  << endl;

		for(k=k1;k<k2;k++)
		{	
		
		if(mask[k]!=28)
			{
			propset();
			}
		}
		
		//cout << "Process " << rank << " :Got through second k loop" << endl;
		
		for(k=k1;k<k2;k++)
		{		
		
		if(mask[k]!=28)
			{
			setwallnodes();
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
}
