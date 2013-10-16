//algorithm


#include "wet.h"


void wet::algorithm()

{





		for(st=1;st<=Neqst;st++)
		{
			
            computemoments();
            
            //momentsbound();
		
		if(st%wrtst==0 and st>=stst)
		{
		//computefreeenergy();
		computeenergy();
		//cout << "t = " << st << " El=" << El << " Eg=" << Eg << " Ei=" << Ei  << " Et=" << Et << endl;
		writemoments(st);

		writevelocity(st);
		}



		for(k=k1;k<k2;k++)
		{
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
            
            
            
            if(k==3169)
            {
            //cout << "Stop oh la" << endl; 
			}

			}
		}

		for(k=k1;k<k2;k++)
		{	
		
		if(mask[k]!=28)
			{
			propset();
			}
		}
		
		for(k=k1;k<k2;k++)
		{		
		
		if(mask[k]!=28)
			{
			setwallnodes();
			}
		}


		
		
		}

}
