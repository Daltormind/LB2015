//algorithm


#include "wet.h"


void wet::algorithm()

{





		for(st=1;st<=Neqst;st++)
		{
			
            computemoments();
            
            
            
            writemoments(100+st);
            /*
            exchangeC();
            exchangep();
            exchangevel();
            exchangemu();
            exchangerho();
            exchangemuh();
            */
            
            
            //momentsbound();
		
		if(st%wrtst==0 and st>=stst)
		{
		//computefreeenergy();
		//computeenergy();
		//cout << "t = " << st << " El=" << El << " Eg=" << Eg << " Ei=" << Ei  << " Et=" << Et << endl;
		writemoments(st);
		
		cout << st <<  " " << "Process " << rank << " :Computed and exchanged" << endl;

		//writevelocity(st);
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
			
			diffBD();
			
			
			centralforce();
			
			equiliberiumg();
           
            equiliberiumh();
            
           //equiliberiumf();
            
            
            
          //  propcolf();
            
           propcolh();
            
            propcolg();
            
            

			}
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

}
