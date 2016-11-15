
#include "wet.h"

void wet::dis()
{
  //First need to work out the velocity gradients at each k.
  
  for(k=k1;k<k2;k++)
    {
if(mask[k]!=28)
	{
	  
	  
			// First calculate Directional derivatives 
  if(mask[k]==0 || mask[k]==2)
			{

		
    		gradmuC1=0.5*(mu[d[0]]-mu[d[1]])/dt;
			gradmuC2=0.5*(mu[d[1]]-mu[d[0]])/dt;
    		gradmuC3=0.5*(mu[d[2]]-mu[d[3]])/dt;
    		gradmuC4=0.5*(mu[d[3]]-mu[d[2]])/dt;
    		gradmuC7=0.5*(mu[d[6]]-mu[d[9]])/dt;
    		gradmuC8=0.5*(mu[d[7]]-mu[d[8]])/dt;
    		gradmuC9=0.5*(mu[d[8]]-mu[d[7]])/dt;
    		gradmuC10=0.5*(mu[d[9]]-mu[d[6]])/dt;
    		 gradmuC5=0.5*(mu[d[4]]-mu[d[5]])/dt;
    gradmuC6=0.5*(mu[d[5]]-mu[d[4]])/dt;
    gradmuC11=0.5*(mu[d[10]]-mu[d[13]])/dt;
    gradmuC12=0.5*(mu[d[11]]-mu[d[12]])/dt;
    gradmuC13=0.5*(mu[d[12]]-mu[d[11]])/dt;
    gradmuC14=0.5*(mu[d[13]]-mu[d[10]])/dt;
    gradmuC15=0.5*(mu[d[14]]-mu[d[17]])/dt;
    gradmuC16=0.5*(mu[d[15]]-mu[d[16]])/dt;
    gradmuC17=0.5*(mu[d[16]]-mu[d[15]])/dt;
    gradmuC18=0.5*(mu[d[17]]-mu[d[14]])/dt;
    
    
    		graduxC1=0.5*(ux[d[0]]-ux[d[1]])/dt;
			graduxC2=0.5*(ux[d[1]]-ux[d[0]])/dt;
    		graduxC3=0.5*(ux[d[2]]-ux[d[3]])/dt;
    		graduxC4=0.5*(ux[d[3]]-ux[d[2]])/dt;
    		graduxC7=0.5*(ux[d[6]]-ux[d[9]])/dt;
    		graduxC8=0.5*(ux[d[7]]-ux[d[8]])/dt;
    		graduxC9=0.5*(ux[d[8]]-ux[d[7]])/dt;
    		graduxC10=0.5*(ux[d[9]]-ux[d[6]])/dt;
    		 graduxC5=0.5*(ux[d[4]]-ux[d[5]])/dt;
    graduxC6=0.5*(ux[d[5]]-ux[d[4]])/dt;
    graduxC11=0.5*(ux[d[10]]-ux[d[13]])/dt;
    graduxC12=0.5*(ux[d[11]]-ux[d[12]])/dt;
    graduxC13=0.5*(ux[d[12]]-ux[d[11]])/dt;
    graduxC14=0.5*(ux[d[13]]-ux[d[10]])/dt;
    graduxC15=0.5*(ux[d[14]]-ux[d[17]])/dt;
    graduxC16=0.5*(ux[d[15]]-ux[d[16]])/dt;
    graduxC17=0.5*(ux[d[16]]-ux[d[15]])/dt;
    graduxC18=0.5*(ux[d[17]]-ux[d[14]])/dt;
    
    
    		graduyC1=0.5*(uy[d[0]]-uy[d[1]])/dt;
			graduyC2=0.5*(uy[d[1]]-uy[d[0]])/dt;
    		graduyC3=0.5*(uy[d[2]]-uy[d[3]])/dt;
    		graduyC4=0.5*(uy[d[3]]-uy[d[2]])/dt;
    		graduyC7=0.5*(uy[d[6]]-uy[d[9]])/dt;
    		graduyC8=0.5*(uy[d[7]]-uy[d[8]])/dt;
    		graduyC9=0.5*(uy[d[8]]-uy[d[7]])/dt;
    		graduyC10=0.5*(uy[d[9]]-uy[d[6]])/dt;
    		 graduyC5=0.5*(uy[d[4]]-uy[d[5]])/dt;
    graduyC6=0.5*(uy[d[5]]-uy[d[4]])/dt;
    graduyC11=0.5*(uy[d[10]]-uy[d[13]])/dt;
    graduyC12=0.5*(uy[d[11]]-uy[d[12]])/dt;
    graduyC13=0.5*(uy[d[12]]-uy[d[11]])/dt;
    graduyC14=0.5*(uy[d[13]]-uy[d[10]])/dt;
    graduyC15=0.5*(uy[d[14]]-uy[d[17]])/dt;
    graduyC16=0.5*(uy[d[15]]-uy[d[16]])/dt;
    graduyC17=0.5*(uy[d[16]]-uy[d[15]])/dt;
    graduyC18=0.5*(uy[d[17]]-uy[d[14]])/dt;
    
    
    		graduzC1=0.5*(uz[d[0]]-uz[d[1]])/dt;
			graduzC2=0.5*(uz[d[1]]-uz[d[0]])/dt;
    		graduzC3=0.5*(uz[d[2]]-uz[d[3]])/dt;
    		graduzC4=0.5*(uz[d[3]]-uz[d[2]])/dt;
    		graduzC7=0.5*(uz[d[6]]-uz[d[9]])/dt;
    		graduzC8=0.5*(uz[d[7]]-uz[d[8]])/dt;
    		graduzC9=0.5*(uz[d[8]]-uz[d[7]])/dt;
    		graduzC10=0.5*(uz[d[9]]-uz[d[6]])/dt;
    		 graduzC5=0.5*(uz[d[4]]-uz[d[5]])/dt;
    graduzC6=0.5*(uz[d[5]]-uz[d[4]])/dt;
    graduzC11=0.5*(uz[d[10]]-uz[d[13]])/dt;
    graduzC12=0.5*(uz[d[11]]-uz[d[12]])/dt;
    graduzC13=0.5*(uz[d[12]]-uz[d[11]])/dt;
    graduzC14=0.5*(uz[d[13]]-uz[d[10]])/dt;
    graduzC15=0.5*(uz[d[14]]-uz[d[17]])/dt;
    graduzC16=0.5*(uz[d[15]]-uz[d[16]])/dt;
    graduzC17=0.5*(uz[d[16]]-uz[d[15]])/dt;
    graduzC18=0.5*(uz[d[17]]-uz[d[14]])/dt;
    

      

      
			}

    else if (mask[k]==1)
    {
    	if(mask[d[0]]==28 || mask[d[1]]==28)
	  {graduxC1=0.0;graduyC1=0.0;gradmuC1=0.0;graduzC1=0.0;graduxC2=0.0;graduyC2=0.0;gradmuC2=0.0;graduzC2=0.0;}
    	else
    	{			
    		
    		
    		gradmuC1=0.5*(mu[d[0]]-mu[d[1]])/dt;
		graduxC1=0.5*(ux[d[0]]-ux[d[1]])/dt;
    		graduyC1=0.5*(uy[d[0]]-uy[d[1]])/dt;
		graduzC1=0.5*(uz[d[0]]-uz[d[1]])/dt;
    		
    		
    		
    		gradmuC2=0.5*(mu[d[1]]-mu[d[0]])/dt;
		graduxC2=0.5*(ux[d[1]]-ux[d[0]])/dt;
    		graduyC2=0.5*(uy[d[1]]-uy[d[0]])/dt;
		graduzC2=0.5*(uz[d[1]]-uz[d[0]])/dt;
		}
   
		if(mask[d[2]]==28 || mask[d[3]]==28)
		  {graduxC3=0.0;graduyC3=0.0;gradmuC3=0.0;graduzC3=0.0;graduxC4=0.0;graduyC4=0.0;gradmuC4=0.0;graduzC4=0.0;}
    	else
    	{			
    		
    		
    		gradmuC3=0.5*(mu[d[2]]-mu[d[3]])/dt;
		graduxC3=0.5*(ux[d[2]]-ux[d[3]])/dt;
    		graduyC3=0.5*(uy[d[2]]-uy[d[3]])/dt;
		graduzC3=0.5*(uy[d[2]]-uy[d[3]])/dt;
    		
    		
    		
    		gradmuC4=0.5*(mu[d[3]]-mu[d[2]])/dt;
		graduxC4=0.5*(ux[d[3]]-ux[d[2]])/dt;
		graduyC4=0.5*(uy[d[3]]-uy[d[2]])/dt;
		graduzC4=0.5*(uz[d[3]]-uz[d[2]])/dt;
    		

		}
		
		if(mask[d[4]]==28 || mask[d[5]]==28)
		  {graduxC5=0.0;graduyC5=0.0;gradmuC5=0.0;graduzC5;graduxC6=0.0;graduyC6=0.0;gradmuC6=0.0;graduzC6;}
    	else
    	{			
    		
    		
    		gradmuC5=0.5*(mu[d[4]]-mu[d[5]])/dt;
graduxC5=0.5*(ux[d[4]]-ux[d[5]])/dt;
    	graduyC5=0.5*(uy[d[4]]-uy[d[5]])/dt;	
	graduzC5=0.5*(uz[d[4]]-uz[d[5]])/dt;	
    		
    		
    		
    		gradmuC6=0.5*(mu[d[5]]-mu[d[4]])/dt;
		graduxC6=0.5*(ux[d[5]]-ux[d[4]])/dt;
    		graduyC6=0.5*(uy[d[5]]-uy[d[4]])/dt;
		graduzC6=0.5*(uz[d[5]]-uz[d[4]])/dt;
		}
		
    	if(mask[d[6]]==28 || mask[d[d[6]][6]]==2 || mask[d[9]]==28 || mask[d[d[9]][9]]==2)
	  {graduxC7=0.0;graduyC7=0.0;gradmuC7=0.0;graduzC7=0.0;graduxC10=0.0;graduyC10=0.0;gradmuC10=0.0;graduzC10=0.0;}
    	else
    	{			
    		
    		
    		gradmuC7=0.5*(mu[d[6]]-mu[d[9]])/dt;
		graduxC7=0.5*(ux[d[6]]-ux[d[9]])/dt;
    		graduyC7=0.5*(uy[d[6]]-uy[d[9]])/dt;
		graduzC7=0.5*(uz[d[6]]-uz[d[9]])/dt;
    		
    		
    		
    		gradmuC10=0.5*(mu[d[9]]-mu[d[6]])/dt;
		graduxC10=0.5*(ux[d[9]]-ux[d[6]])/dt;
    		graduyC10=0.5*(uy[d[9]]-uy[d[6]])/dt;
		graduzC10=0.5*(uz[d[9]]-uz[d[6]])/dt;

		}
		
		if(mask[d[7]]==28 || mask[d[d[7]][7]]==2 || mask[d[8]]==28 || mask[d[d[8]][8]]==2)
		  {graduxC8=0.0;graduyC8=0.0;gradmuC8=0.0;graduzC8=0.0;
		    graduxC9=0.0;graduyC9=0.0;gradmuC9=0.0;graduzC9=0.0;}
    	else
    	{			
    		
    		
    		gradmuC8=0.5*(mu[d[7]]-mu[d[8]])/dt;
		graduxC8=0.5*(ux[d[7]]-ux[d[8]])/dt;
		graduyC8=0.5*(uy[d[7]]-uy[d[8]])/dt;
		graduzC8=0.5*(uz[d[7]]-uz[d[8]])/dt;
    		
    		
    		
    		
    		gradmuC9=0.5*(mu[d[8]]-mu[d[7]])/dt;
		graduxC9=0.5*(ux[d[8]]-ux[d[7]])/dt;
		graduyC9=0.5*(uy[d[8]]-uy[d[7]])/dt;
		graduzC9=0.5*(uz[d[8]]-uz[d[7]])/dt;
    		

		}
		
		if(mask[d[10]]==28 || mask[d[d[10]][10]]==2 || mask[d[13]]==28 || mask[d[d[13]][13]]==2)
		  {graduxC11=0.0;graduyC11=0.0;gradmuC11=0.0;graduzC11=0.0;
		    graduxC14=0.0;graduyC14=0.0;gradmuC14=0.0;graduzC11=0.0;}
    	else
    	{			
    		
    		
    		gradmuC11=0.5*(mu[d[10]]-mu[d[13]])/dt;
		graduxC11=0.5*(ux[d[10]]-ux[d[13]])/dt;
    		graduyC11=0.5*(uy[d[10]]-uy[d[13]])/dt;
		graduzC11=0.5*(uz[d[10]]-uz[d[13]])/dt;
    		
    		
    		
    		gradmuC14=0.5*(mu[d[13]]-mu[d[10]])/dt;
		graduxC14=0.5*(ux[d[13]]-ux[d[10]])/dt;
    		graduyC14=0.5*(uy[d[13]]-uy[d[10]])/dt;
		graduzC14=0.5*(uz[d[13]]-uz[d[10]])/dt;

		}
		
		if(mask[d[11]]==28 || mask[d[d[11]][11]]==2 || mask[d[12]]==28 || mask[d[d[12]][12]]==2)
		  {graduxC12=0.0;graduyC12=0.0;gradmuC12=0.0;graduzC12=0.0;
		    graduxC13=0.0;graduyC13=0.0;gradmuC13=0.0;graduzC13=0.0;}
    	else
    	{			
    		
    		
    		gradmuC12=0.5*(mu[d[11]]-mu[d[12]])/dt;
		graduxC12=0.5*(ux[d[11]]-ux[d[12]])/dt;
    		graduyC12=0.5*(uy[d[11]]-uy[d[12]])/dt;
		graduzC12=0.5*(uz[d[11]]-uz[d[12]])/dt;
    		
    		
    		
    		gradmuC13=0.5*(mu[d[12]]-mu[d[11]])/dt;
		graduxC13=0.5*(ux[d[12]]-ux[d[11]])/dt;
		graduyC13=0.5*(uy[d[12]]-uy[d[11]])/dt;
		graduzC13=0.5*(uz[d[12]]-uz[d[11]])/dt;
    		

		}
		
		if(mask[d[14]]==28 || mask[d[d[14]][14]]==2 || mask[d[17]]==28 || mask[d[d[17]][17]]==2)
		  {graduxC15=0.0;graduyC15=0.0;gradmuC15=0.0;graduzC15=0.0;
		    graduxC18=0.0;graduyC18=0.0;gradmuC18=0.0;graduzC18=0.0;}
    	else
    	{			
    		
    		
    		gradmuC15=0.5*(mu[d[14]]-mu[d[17]])/dt;
		graduxC15=0.5*(ux[d[14]]-ux[d[17]])/dt;
    		graduyC15=0.5*(uy[d[14]]-uy[d[17]])/dt;
		graduzC15=0.5*(uz[d[14]]-uz[d[17]])/dt;
    		
    		
    		
    		gradmuC18=0.5*(mu[d[17]]-mu[d[14]])/dt;
		graduxC18=0.5*(ux[d[17]]-ux[d[14]])/dt;
    		graduyC18=0.5*(uy[d[17]]-uy[d[14]])/dt;
		graduzC18=0.5*(uz[d[17]]-uz[d[14]])/dt;

		}
		
		if(mask[d[15]]==28 || mask[d[d[15]][15]]==2 || mask[d[16]]==28 || mask[d[d[16]][16]]==2)
		  {graduxC16=0.0;graduyC16=0.0;gradmuC16=0.0;graduzC16=0.0;
		    graduxC17=0.0;graduyC17=0.0;gradmuC17=0.0;graduzC17=0.0;}
    	else
    	{			
    		
    		
    		gradmuC16=0.5*(mu[d[15]]-mu[d[16]])/dt;
		graduxC16=0.5*(ux[d[15]]-ux[d[16]])/dt;
    		graduyC16=0.5*(uy[d[15]]-uy[d[16]])/dt;
		graduzC16=0.5*(uz[d[15]]-uz[d[16]])/dt;
    		
    		
    		
    		gradmuC17=0.5*(mu[d[16]]-mu[d[15]])/dt;
		graduxC17=0.5*(ux[d[16]]-ux[d[15]])/dt;
    		graduyC17=0.5*(uy[d[16]]-uy[d[15]])/dt;
		graduzC17=0.5*(uz[d[16]]-uz[d[15]])/dt;
		}

    }
 
    else if (mask[k]==3
 )
    {
    	if(mask[d[0]]==28 || mask[d[1]]==28)
	  {graduxC1=0.0;graduyC1=0.0;graduzC1=0.0;gradmuC1=0.0;graduxC2=0.0;graduyC2=0.0;gradmuC2=0.0;graduzC2=0.0;}
    	else
    	{			
    		
    		
    		gradmuC1=0.5*(mu[d[0]]-mu[d[1]])/dt;
		graduxC1=0.5*(ux[d[0]]-ux[d[1]])/dt;
    		graduyC1=0.5*(uy[d[0]]-uy[d[1]])/dt;
		graduzC1=0.5*(uz[d[0]]-uz[d[1]])/dt;
    		
    		
    		
    		gradmuC2=0.5*(mu[d[1]]-mu[d[0]])/dt;
		graduxC2=0.5*(ux[d[1]]-ux[d[0]])/dt;
    		graduyC2=0.5*(uy[d[1]]-uy[d[0]])/dt;
		graduzC2=0.5*(uz[d[1]]-uz[d[0]])/dt;

		}
   
		if(mask[d[2]]==28 || mask[d[3]]==28)
		  {graduxC3=0.0;graduyC3=0.0;gradmuC3=0.0;graduzC3;graduxC4=0.0;graduyC4=0.0;gradmuC4=0.0;graduzC4;}
    	else
    	{			
    		
    		
    		gradmuC3=0.5*(mu[d[2]]-mu[d[3]])/dt;
		graduxC3=0.5*(ux[d[2]]-ux[d[3]])/dt;
    		graduyC3=0.5*(uy[d[2]]-uy[d[3]])/dt;
    		graduzC3=0.5*(uz[d[2]]-uz[d[3]])/dt;
    		
    		
    		gradmuC4=0.5*(mu[d[3]]-mu[d[2]])/dt;
		graduxC4=0.5*(ux[d[3]]-ux[d[2]])/dt;
		graduyC4=0.5*(uy[d[3]]-uy[d[2]])/dt;
		graduzC4=0.5*(uz[d[3]]-uz[d[2]])/dt;
    		

		}
		
		if(mask[d[4]]==28 || mask[d[5]]==28)
		  {graduxC5=0.0;graduyC5=0.0;gradmuC5=0.0;graduzC5;graduxC6=0.0;graduyC6=0.0;gradmuC6=0.0;graduzC6=0.0;}
    	else
    	{			
    		
    		
    		gradmuC5=0.5*(mu[d[4]]-mu[d[5]])/dt;
graduxC5=0.5*(ux[d[4]]-ux[d[5]])/dt;
    	graduyC5=0.5*(uy[d[4]]-uy[d[5]])/dt;	
	graduzC5=0.5*(uz[d[4]]-uz[d[5]])/dt;	
    		
    		
    		
    		gradmuC6=0.5*(mu[d[5]]-mu[d[4]])/dt;
		graduxC6=0.5*(ux[d[5]]-ux[d[4]])/dt;
    		graduyC6=0.5*(uy[d[5]]-uy[d[4]])/dt;
		graduzC6=0.5*(uz[d[5]]-uz[d[4]])/dt;

		}
		
    	if(mask[d[6]]==28 || mask[d[6]]==3 || mask[d[9]]==28 || mask[d[9]]==3)
	  {graduxC7=0.0;graduyC7=0.0;gradmuC7=0.0;graduzC7;graduxC10=0.0;graduyC10=0.0;gradmuC10=0.0;graduzC10;}
    	else
    	{			
    		
    		
    		gradmuC7=0.5*(mu[d[6]]-mu[d[9]])/dt;
		graduxC7=0.5*(ux[d[6]]-ux[d[9]])/dt;
    		graduyC7=0.5*(uy[d[6]]-uy[d[9]])/dt;
		graduzC7=0.5*(uz[d[6]]-uz[d[9]])/dt;
    	       
    		
    		
    		gradmuC10=0.5*(mu[d[9]]-mu[d[6]])/dt;
		graduxC10=0.5*(ux[d[9]]-ux[d[6]])/dt;
    		graduyC10=0.5*(uy[d[9]]-uy[d[6]])/dt;
		graduzC10=0.5*(uz[d[9]]-uz[d[6]])/dt;

		}
		
		if(mask[d[7]]==28 || mask[d[7]]==3 || mask[d[8]]==28 || mask[d[8]]==3)
		  {graduxC8=0.0;graduyC8=0.0;gradmuC8=0.0;graduzC8=0.0;
		    graduxC9=0.0;graduyC9=0.0;gradmuC9=0.0;graduzC9=0.0;}
    	else
    	{			
    		
    		
    		gradmuC8=0.5*(mu[d[7]]-mu[d[8]])/dt;
		graduxC8=0.5*(ux[d[7]]-ux[d[8]])/dt;
		graduyC8=0.5*(uy[d[7]]-uy[d[8]])/dt;
		graduzC8=0.5*(uz[d[7]]-uz[d[8]])/dt;
    		
    		
    		
    		
    		gradmuC9=0.5*(mu[d[8]]-mu[d[7]])/dt;
		graduxC9=0.5*(ux[d[8]]-ux[d[7]])/dt;
		graduyC9=0.5*(uy[d[8]]-uy[d[7]])/dt;
		graduzC9=0.5*(uz[d[8]]-uz[d[7]])/dt;
    		

		}
		
		if(mask[d[10]]==28 || mask[d[10]]==3 || mask[d[13]]==28 || mask[d[13]]==3)
		  {graduxC11=0.0;graduyC11=0.0;gradmuC11=0.0;graduzC11=0.0;
		    graduxC14=0.0;graduyC14=0.0;gradmuC14=0.0;graduzC14=0.0;}
    	else
    	{			
    		
    		
    		gradmuC11=0.5*(mu[d[10]]-mu[d[13]])/dt;
		graduxC11=0.5*(ux[d[10]]-ux[d[13]])/dt;
    		graduyC11=0.5*(uy[d[10]]-uy[d[13]])/dt;
		graduzC11=0.5*(uz[d[10]]-uz[d[13]])/dt;
		
    		
    		
    		
    		gradmuC14=0.5*(mu[d[13]]-mu[d[10]])/dt;
		graduxC14=0.5*(ux[d[13]]-ux[d[10]])/dt;
    		graduyC14=0.5*(uy[d[13]]-uy[d[10]])/dt;
		graduzC14=0.5*(uz[d[13]]-uz[d[10]])/dt;

		}
		
		if(mask[d[11]]==28 || mask[d[11]]==3 || mask[d[12]]==28 || mask[d[12]]==3)
		  {graduxC12=0.0;graduyC12=0.0;gradmuC12=0.0;graduzC12=0.0;
		    graduxC13=0.0;graduyC13=0.0;gradmuC13=0.0;graduzC13=0.0;}
    	else
    	{			
    		
    		
    		gradmuC12=0.5*(mu[d[11]]-mu[d[12]])/dt;
		graduxC12=0.5*(ux[d[11]]-ux[d[12]])/dt;
    		graduyC12=0.5*(uy[d[11]]-uy[d[12]])/dt;
		graduzC12=0.5*(uz[d[11]]-uz[d[12]])/dt;
    		
    		
    		
    		gradmuC13=0.5*(mu[d[12]]-mu[d[11]])/dt;
		graduxC13=0.5*(ux[d[12]]-ux[d[11]])/dt;
		graduyC13=0.5*(uy[d[12]]-uy[d[11]])/dt;
		graduzC13=0.5*(uz[d[12]]-uz[d[11]])/dt;
    		

		}
		
		if(mask[d[14]]==28 || mask[d[14]]==3 || mask[d[17]]==28 || mask[d[17]]==3)
		  {graduxC15=0.0;graduyC15=0.0;gradmuC15=0.0;graduzC15=0.0;
		    graduxC18=0.0;graduyC18=0.0;gradmuC18=0.0;graduzC18=0.0;}
    	else
    	{			
    		
    		
    		gradmuC15=0.5*(mu[d[14]]-mu[d[17]])/dt;
		graduxC15=0.5*(ux[d[14]]-ux[d[17]])/dt;
    		graduyC15=0.5*(uy[d[14]]-uy[d[17]])/dt;
		graduzC15=0.5*(uz[d[14]]-uz[d[17]])/dt;
    		
    		
    		
    		gradmuC18=0.5*(mu[d[17]]-mu[d[14]])/dt;
		graduxC18=0.5*(ux[d[17]]-ux[d[14]])/dt;
    		graduyC18=0.5*(uy[d[17]]-uy[d[14]])/dt;
		graduzC18=0.5*(uz[d[17]]-uz[d[14]])/dt;

		}
		
		if(mask[d[15]]==28 || mask[d[15]]==3 || mask[d[16]]==28 || mask[d[16]]==3)
		  {graduxC16=0.0;graduyC16=0.0;gradmuC16=0.0;graduzC16=0.0;
		    graduxC17=0.0;graduyC17=0.0;gradmuC17=0.0;graduzC17=0.0;}
    	else
    	{			
    		
    		
    		gradmuC16=0.5*(mu[d[15]]-mu[d[16]])/dt;
		graduxC16=0.5*(ux[d[15]]-ux[d[16]])/dt;
    		graduyC16=0.5*(uy[d[15]]-uy[d[16]])/dt;
		graduzC16=0.5*(uz[d[15]]-uz[d[16]])/dt;

    		
    		
    		
    		gradmuC17=0.5*(mu[d[16]]-mu[d[15]])/dt;
		graduxC17=0.5*(ux[d[16]]-ux[d[15]])/dt;
    		graduyC17=0.5*(uy[d[16]]-uy[d[15]])/dt;
		graduzC17=0.5*(uz[d[16]]-uz[d[15]])/dt;

		}

    }
  
    
    			
			
			
			
    		// Work out x and y derivatives
    		if(dimensions==2)
    		{
    		
    		
    		
    		
    		
    		
    		
    		gradmuCx=1.0/3.0*(gradmuC1-gradmuC2)+1.0/12.0*(gradmuC7-gradmuC8+gradmuC9-gradmuC10);
    		gradmuCy=1.0/3.0*(gradmuC3-gradmuC4)+1.0/12.0*(gradmuC7+gradmuC8-gradmuC9-gradmuC10);
   
 		
    		graduxCx=1.0/3.0*(graduxC1-graduxC2)+1.0/12.0*(graduxC7-graduxC8+graduxC9-graduxC10);
    		graduxCy=1.0/3.0*(graduxC3-graduxC4)+1.0/12.0*(graduxC7+graduxC8-graduxC9-graduxC10);

 		
    		graduyCx=1.0/3.0*(graduyC1-graduyC2)+1.0/12.0*(graduyC7-graduyC8+graduyC9-graduyC10);
    		graduyCy=1.0/3.0*(graduyC3-graduyC4)+1.0/12.0*(graduyC7+graduyC8-graduyC9-graduyC10);
   
    		
    		
    		
			}
			
			if (dimensions==3)
			{
		
    		
    		
    		
    		
    		
    		
		
			gradmuCx=1.0/6.0*(gradmuC1-gradmuC2)+1.0/12.0*(gradmuC7-gradmuC8+gradmuC9-gradmuC10+gradmuC15+gradmuC17-gradmuC16-gradmuC18);
    		gradmuCy=1.0/6.0*(gradmuC3-gradmuC4)+1.0/12.0*(gradmuC7+gradmuC8-gradmuC9-gradmuC10+gradmuC11+gradmuC13-gradmuC12-gradmuC14);
    		gradmuCz=1.0/6.0*(gradmuC5-gradmuC6)+1.0/12.0*(gradmuC11+gradmuC12-gradmuC13-gradmuC14+gradmuC16+gradmuC15-gradmuC17-gradmuC18);
		
			graduxCx=1.0/6.0*(graduxC1-graduxC2)+1.0/12.0*(graduxC7-graduxC8+graduxC9-graduxC10+graduxC15+graduxC17-graduxC16-graduxC18);
    		graduxCy=1.0/6.0*(graduxC3-graduxC4)+1.0/12.0*(graduxC7+graduxC8-graduxC9-graduxC10+graduxC11+graduxC13-graduxC12-graduxC14);
    		graduxCz=1.0/6.0*(graduxC5-graduxC6)+1.0/12.0*(graduxC11+graduxC12-graduxC13-graduxC14+graduxC16+graduxC15-graduxC17-graduxC18);


			graduyCx=1.0/6.0*(graduyC1-graduyC2)+1.0/12.0*(graduyC7-graduyC8+graduyC9-graduyC10+graduyC15+graduyC17-graduyC16-graduyC18);
    		graduyCy=1.0/6.0*(graduyC3-graduyC4)+1.0/12.0*(graduyC7+graduyC8-graduyC9-graduyC10+graduyC11+graduyC13-graduyC12-graduyC14);
    		graduyCz=1.0/6.0*(graduyC5-graduyC6)+1.0/12.0*(graduyC11+graduyC12-graduyC13-graduyC14+graduyC16+graduyC15-graduyC17-graduyC18);


			graduzCx=1.0/6.0*(graduzC1-graduzC2)+1.0/12.0*(graduzC7-graduzC8+graduzC9-graduzC10+graduzC15+graduzC17-graduzC16-graduzC18);
    		graduzCy=1.0/6.0*(graduzC3-graduzC4)+1.0/12.0*(graduzC7+graduzC8-graduzC9-graduzC10+graduzC11+graduzC13-graduzC12-graduzC14);
    		graduzCz=1.0/6.0*(graduzC5-graduzC6)+1.0/12.0*(graduzC11+graduzC12-graduzC13-graduzC14+graduzC16+graduzC15-graduzC17-graduzC18);
		
		
		
    		
    		
			}


	 
//2D derivatives
	  /*
			graduxC1=0.5*(ux[d[0]]-ux[d[1]])/dt;
			graduxC2=0.5*(ux[d[1]]-ux[d[0]])/dt;
    		graduxC3=0.5*(ux[d[2]]-ux[d[3]])/dt;
    		graduxC4=0.5*(ux[d[3]]-ux[d[2]])/dt;
    		graduxC7=0.5*(ux[d[6]]-ux[d[9]])/dt;
    		graduxC8=0.5*(ux[d[7]]-ux[d[8]])/dt;
    		graduxC9=0.5*(ux[d[8]]-ux[d[7]])/dt;
    		graduxC10=0.5*(ux[d[9]]-ux[d[6]])/dt;

		
    		graduxCx=1.0/3.0*(graduxC1-graduxC2)+1.0/12.0*(graduxC7-graduxC8+graduxC9-graduxC10);
    		graduxCy=1.0/3.0*(graduxC3-graduxC4)+1.0/12.0*(graduxC7+graduxC8-graduxC9-graduxC10);
  

		graduyC1=0.5*(uy[d[0]]-uy[d[1]])/dt;
		graduyC2=0.5*(uy[d[1]]-uy[d[0]])/dt;
    		graduyC3=0.5*(uy[d[2]]-uy[d[3]])/dt;
    		graduyC4=0.5*(uy[d[3]]-uy[d[2]])/dt;
    		graduyC7=0.5*(uy[d[6]]-uy[d[9]])/dt;
    		graduyC8=0.5*(uy[d[7]]-uy[d[8]])/dt;
    		graduyC9=0.5*(uy[d[8]]-uy[d[7]])/dt;
    		graduyC10=0.5*(uy[d[9]]-uy[d[6]])/dt;

		
    		graduyCx=1.0/3.0*(graduyC1-graduyC2)+1.0/12.0*(graduyC7-graduyC8+graduyC9-graduyC10);
    		graduyCy=1.0/3.0*(graduyC3-graduyC4)+1.0/12.0*(graduyC7+graduyC8-graduyC9-graduyC10);
	  */
		//Now work out local viscous dissipation
			if(dimensions==2)
			  {
			    disv[k]=tau[k]*cs2*rho[k]*((graduxCy+graduyCx)*(graduxCy+graduyCx)+2*(graduxCx*graduxCx+graduyCy*graduyCy));
			  }
			if(dimensions==3)
			  {
			    disv[k]=tau[k]*cs2*rho[k]*((graduxCy+graduyCx)*(graduxCy+graduyCx)+(graduxCz+graduzCx)*(graduxCz+graduzCx)+(graduzCy+graduyCz)*(graduzCy+graduyCz)+2*(graduxCx*graduxCx+graduyCy*graduyCy+graduzCz*graduzCz));
			  }
		//Work out Diffusion dissipation
		/*
			gradmuC1=0.5*(mu[d[0]]-mu[d[1]])/dt;
			gradmuC2=0.5*(mu[d[1]]-mu[d[0]])/dt;
    		gradmuC3=0.5*(mu[d[2]]-mu[d[3]])/dt;
    		gradmuC4=0.5*(mu[d[3]]-mu[d[2]])/dt;
    		gradmuC7=0.5*(mu[d[6]]-mu[d[9]])/dt;
    		gradmuC8=0.5*(mu[d[7]]-mu[d[8]])/dt;
    		gradmuC9=0.5*(mu[d[8]]-mu[d[7]])/dt;
    		gradmuC10=0.5*(mu[d[9]]-mu[d[6]])/dt;

		
    		gradmuCx=1.0/3.0*(gradmuC1-gradmuC2)+1.0/12.0*(gradmuC7-gradmuC8+gradmuC9-gradmuC10);
    		gradmuCy=1.0/3.0*(gradmuC3-gradmuC4)+1.0/12.0*(gradmuC7+gradmuC8-gradmuC9-gradmuC10);
		*/

			if(dimensions==2)
			  {
		disd=M*(gradmuCx*gradmuCx+gradmuCy*gradmuCy);
			  }
			else if(dimensions==3)
			  {
			    disd=M*(gradmuCx*gradmuCx+gradmuCy*gradmuCy+gradmuCz*gradmuCz);
			  }
		disdtot+=disd;
		disvtot+=disv[k];

	}
	}


	if (k==(k2-1)){
		double reducedEnergy;
		
		
			
			reducedEnergy = 0.0;
			MPI_Reduce(&disdtot,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			disdtot = reducedEnergy;
			
       
			reducedEnergy = 0.0;
			MPI_Reduce(&disvtot,&reducedEnergy,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);
			disvtot = reducedEnergy;
			
	}


}
