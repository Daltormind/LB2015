//Computes biased differences

#include "wet.h"

void wet::diffBD()
{
	
	
	

	
	//2D differentials
	gradrhoU1=0.5*(-rho[d2[0]]+4*rho[d[0]]-3*rho[k])/dt;
	
    gradrhoU2=0.5*(-rho[d2[1]]+4*rho[d[1]]-3*rho[k])/dt;

 gradrhoU3=0.5*(-rho[d2[2]]+4*rho[d[2]]-3*rho[k])/dt;

   gradrhoU4=0.5*(-rho[d2[3]]+4*rho[d[3]]-3*rho[k])/dt;

 gradrhoU7=0.5*(-rho[d2[6]]+4*rho[d[6]]-3*rho[k])/dt;
 
gradrhoU8=0.5*(-rho[d2[7]]+4*rho[d[7]]-3*rho[k])/dt;
 
    gradrhoU9=0.5*(-rho[d2[8]]+4*rho[d[8]]-3*rho[k])/dt;
 
    gradrhoU10=0.5*(-rho[d2[9]]+4*rho[d[9]]-3*rho[k])/dt;
	
    



	gradmuU1=0.5*(-mu[d2[0]]+4*mu[d[0]]-3*mu[k])/dt;
    gradmuU2=0.5*(-mu[d2[1]]+4*mu[d[1]]-3*mu[k])/dt;
    gradmuU3=0.5*(-mu[d2[2]]+4*mu[d[2]]-3*mu[k])/dt;
    gradmuU4=0.5*(-mu[d2[3]]+4*mu[d[3]]-3*mu[k])/dt;
    gradmuU7=0.5*(-mu[d2[6]]+4*mu[d[6]]-3*mu[k])/dt;
    gradmuU8=0.5*(-mu[d2[7]]+4*mu[d[7]]-3*mu[k])/dt;
    gradmuU9=0.5*(-mu[d2[8]]+4*mu[d[8]]-3*mu[k])/dt;
    gradmuU10=0.5*(-mu[d2[9]]+4*mu[d[9]]-3*mu[k])/dt;

	gradCU1=0.5*(-C[d2[0]]+4*C[d[0]]-3*C[k])/dt;
    gradCU2=0.5*(-C[d2[1]]+4*C[d[1]]-3*C[k])/dt;
    gradCU3=0.5*(-C[d2[2]]+4*C[d[2]]-3*C[k])/dt;
    gradCU4=0.5*(-C[d2[3]]+4*C[d[3]]-3*C[k])/dt;
    gradCU7=0.5*(-C[d2[6]]+4*C[d[6]]-3*C[k])/dt;
    gradCU8=0.5*(-C[d2[7]]+4*C[d[7]]-3*C[k])/dt;
    gradCU9=0.5*(-C[d2[8]]+4*C[d[8]]-3*C[k])/dt;
    gradCU10=0.5*(-C[d2[9]]+4*C[d[9]]-3*C[k])/dt;
    
    gradpU1=0.5*(-p[d2[0]]+4*p[d[0]]-3*p[k])/dt;
    gradpU2=0.5*(-p[d2[1]]+4*p[d[1]]-3*p[k])/dt;
    gradpU3=0.5*(-p[d2[2]]+4*p[d[2]]-3*p[k])/dt;
    gradpU4=0.5*(-p[d2[3]]+4*p[d[3]]-3*p[k])/dt;
    gradpU7=0.5*(-p[d2[6]]+4*p[d[6]]-3*p[k])/dt;
    gradpU8=0.5*(-p[d2[7]]+4*p[d[7]]-3*p[k])/dt;
    gradpU9=0.5*(-p[d2[8]]+4*p[d[8]]-3*p[k])/dt;
    gradpU10=0.5*(-p[d2[9]]+4*p[d[9]]-3*p[k])/dt;
   
    //3D differentials
    gradrhoU5=0.5*(-rho[d2[4]]+4*rho[d[4]]-3*rho[k])/dt;
    gradrhoU6=0.5*(-rho[d2[5]]+4*rho[d[5]]-3*rho[k])/dt;
    gradrhoU11=0.5*(-rho[d2[10]]+4*rho[d[10]]-3*rho[k])/dt;
    gradrhoU12=0.5*(-rho[d2[11]]+4*rho[d[11]]-3*rho[k])/dt;
    gradrhoU13=0.5*(-rho[d2[12]]+4*rho[d[12]]-3*rho[k])/dt;
    gradrhoU14=0.5*(-rho[d2[13]]+4*rho[d[13]]-3*rho[k])/dt;
    gradrhoU15=0.5*(-rho[d2[14]]+4*rho[d[14]]-3*rho[k])/dt;
    gradrhoU16=0.5*(-rho[d2[15]]+4*rho[d[15]]-3*rho[k])/dt;
    gradrhoU17=0.5*(-rho[d2[16]]+4*rho[d[16]]-3*rho[k])/dt;
    gradrhoU18=0.5*(-rho[d2[17]]+4*rho[d[17]]-3*rho[k])/dt;
    
    gradCU5=0.5*(-C[d2[4]]+4*C[d[4]]-3*C[k])/dt;
    gradCU6=0.5*(-C[d2[5]]+4*C[d[5]]-3*C[k])/dt;
    gradCU11=0.5*(-C[d2[10]]+4*C[d[10]]-3*C[k])/dt;
    gradCU12=0.5*(-C[d2[11]]+4*C[d[11]]-3*C[k])/dt;
    gradCU13=0.5*(-C[d2[12]]+4*C[d[12]]-3*C[k])/dt;
    gradCU14=0.5*(-C[d2[13]]+4*C[d[13]]-3*C[k])/dt;
    gradCU15=0.5*(-C[d2[14]]+4*C[d[14]]-3*C[k])/dt;
    gradCU16=0.5*(-C[d2[15]]+4*C[d[15]]-3*C[k])/dt;
    gradCU17=0.5*(-C[d2[16]]+4*C[d[16]]-3*C[k])/dt;
    gradCU18=0.5*(-C[d2[17]]+4*C[d[17]]-3*C[k])/dt;
    
    gradmuU5=0.5*(-mu[d2[4]]+4*mu[d[4]]-3*mu[k])/dt;
    gradmuU6=0.5*(-mu[d2[5]]+4*mu[d[5]]-3*mu[k])/dt;
    gradmuU11=0.5*(-mu[d2[10]]+4*mu[d[10]]-3*mu[k])/dt;
    gradmuU12=0.5*(-mu[d2[11]]+4*mu[d[11]]-3*mu[k])/dt;
    gradmuU13=0.5*(-mu[d2[12]]+4*mu[d[12]]-3*mu[k])/dt;
    gradmuU14=0.5*(-mu[d2[13]]+4*mu[d[13]]-3*mu[k])/dt;
    gradmuU15=0.5*(-mu[d2[14]]+4*mu[d[14]]-3*mu[k])/dt;
    gradmuU16=0.5*(-mu[d2[15]]+4*mu[d[15]]-3*mu[k])/dt;
    gradmuU17=0.5*(-mu[d2[16]]+4*mu[d[16]]-3*mu[k])/dt;
    gradmuU18=0.5*(-mu[d2[17]]+4*mu[d[17]]-3*mu[k])/dt;
    
    gradpU5=0.5*(-p[d2[4]]+4*p[d[4]]-3*p[k])/dt;
    gradpU6=0.5*(-p[d2[5]]+4*p[d[5]]-3*p[k])/dt;
    gradpU11=0.5*(-p[d2[10]]+4*p[d[10]]-3*p[k])/dt;
    gradpU12=0.5*(-p[d2[11]]+4*p[d[11]]-3*p[k])/dt;
    gradpU13=0.5*(-p[d2[12]]+4*p[d[12]]-3*p[k])/dt;
    gradpU14=0.5*(-p[d2[13]]+4*p[d[13]]-3*p[k])/dt;
    gradpU15=0.5*(-p[d2[14]]+4*p[d[14]]-3*p[k])/dt;
    gradpU16=0.5*(-p[d2[15]]+4*p[d[15]]-3*p[k])/dt;
    gradpU17=0.5*(-p[d2[16]]+4*p[d[16]]-3*p[k])/dt;
    gradpU18=0.5*(-p[d2[17]]+4*p[d[17]]-3*p[k])/dt;
    

    
    if(mask[k]!=0)
      {
	 if(mask[k]==1)
    {

      
    	if(mask[d[0]]==28)
    	{gradrhoU1=gradrhoU2;gradCU1=gradCU2;gradmuU1=gradmuU2;gradpU1=gradpU2;
	  
}
    	
    	if(mask[d[1]]==28)
    	{gradrhoU2=gradrhoU1;gradCU2=gradCU1;gradmuU2=gradmuU1;gradpU2=gradpU1;
	  
}
    	
    	if(mask[d[2]]==28)
    	{gradrhoU3=gradrhoU4;gradCU3=gradCU4;gradmuU3=gradmuU4;gradpU3=gradpU4;
	  
}
    	
    	if(mask[d[3]]==28)
    	{gradrhoU4=gradrhoU3;gradCU4=gradCU3;gradmuU4=gradmuU3;gradpU4=gradpU3;
	  
}
    	
    	if(mask[d[4]]==28)
    	{gradrhoU5=gradrhoU6;gradCU5=gradCU6;gradmuU5=gradmuU6;gradpU5=gradpU6;
	  
	}
    	
    	if(mask[d[5]]==28)
    	{gradrhoU6=gradrhoU5;gradCU6=gradCU5;gradmuU6=gradmuU5;gradpU6=gradpU5;}
    	
    	if(mask[d[6]]==28 )
    	{gradrhoU7=gradrhoU10;gradCU7=gradCU10;gradmuU7=gradmuU10;gradpU7=gradpU10;
	  if(mask[d[9]]==28){gradrhoU7=0.0;gradCU7=0.0;gradmuU7=0.0;gradpU7=0.0;}
	}
    	
    	if(mask[d[7]]==28 )
    	{gradrhoU8=gradrhoU9;gradCU8=gradCU9;gradmuU8=gradmuU9;gradpU8=gradpU9;
	   if(mask[d[8]]==28){gradrhoU8=0.0;gradCU8=0.0;gradmuU8=0.0;gradpU8=0.0;}
}
    	
    	if(mask[d[8]]==28 )
    	{gradrhoU9=gradrhoU8;gradCU9=gradCU8;gradmuU9=gradmuU8;gradpU9=gradpU8;
	   if(mask[d[7]]==28){gradrhoU9=0.0;gradCU9=0.0;gradmuU9=0.0;gradpU9=0.0;}
}
    	
    	if(mask[d[9]]==28 )
    	{gradrhoU10=gradrhoU7;gradCU10=gradCU7;gradmuU10=gradmuU7;gradpU10=gradpU7;
	   if(mask[d[6]]==28){gradrhoU10=0.0;gradCU10=0.0;gradmuU10=0.0;gradpU10=0.0;}
}
    	
    	if(mask[d[10]]==28 )
    	{gradrhoU11=gradrhoU14;gradCU11=gradCU14;gradmuU11=gradmuU14;gradpU11=gradpU14;
	   if(mask[d[13]]==28){gradrhoU11=0.0;gradCU11=0.0;gradmuU11=0.0;gradpU11=0.0;}
}
    	
    	if(mask[d[11]]==28 )
    	{gradrhoU12=gradrhoU13;gradCU12=gradCU13;gradmuU12=gradmuU13;gradpU12=gradpU13;
	   if(mask[d[12]]==28){gradrhoU12=0.0;gradCU12=0.0;gradmuU12=0.0;gradpU12=0.0;}
}
    	
    	if(mask[d[12]]==28 )
    	{gradrhoU13=gradrhoU12;gradCU13=gradCU12;gradmuU13=gradmuU12;gradpU13=gradpU12;
	   if(mask[d[11]]==28){gradrhoU13=0.0;gradCU13=0.0;gradmuU13=0.0;gradpU13=0.0;}
}
    	
    	if(mask[d[13]]==28 )
    	{gradrhoU14=gradrhoU11;gradCU14=gradCU11;gradmuU14=gradmuU11;gradpU14=gradpU11;
	   if(mask[d[10]]==28){gradrhoU14=0.0;gradCU14=0.0;gradmuU14=0.0;gradpU14=0.0;}
}
    	
    	if(mask[d[14]]==28 )
    	{gradrhoU15=gradrhoU18;gradCU15=gradCU18;gradmuU15=gradmuU18;gradpU15=gradpU18;
	   if(mask[d[17]]==28){gradrhoU15=0.0;gradCU15=0.0;gradmuU15=0.0;gradpU15=0.0;}
}
    	
    	if(mask[d[15]]==28 )
    	{gradrhoU16=gradrhoU17;gradCU16=gradCU17;gradmuU16=gradmuU17;gradpU16=gradpU17;
	   if(mask[d[16]]==28){gradrhoU16=0.0;gradCU16=0.0;gradmuU16=0.0;gradpU16=0.0;}
}
    	
    	if(mask[d[16]]==28 )
    	{gradrhoU17=gradrhoU16;gradCU17=gradCU16;gradmuU17=gradmuU16;gradpU17=gradpU16;
	   if(mask[d[15]]==28){gradrhoU17=0.0;gradCU17=0.0;gradmuU17=0.0;gradpU17=0.0;}
}
    	
    	if(mask[d[17]]==28 )
    	{gradrhoU18=gradrhoU15;gradCU18=gradCU15;gradmuU18=gradmuU15;gradpU18=gradpU15;
	   if(mask[d[14]]==28){gradrhoU18=0.0;gradCU18=0.0;gradmuU18=0.0;gradpU18=0.0;}
	}
    
	
	
      if(mask[d2[0]]==28 && mask[d[0]]!=28)
    	{
    	gradrhoU1=0.5*(4*rho[d[0]]-4*rho[k])/dt;
    	gradCU1=0.5*(4*C[d[0]]-4*C[k])/dt;
    	gradmuU1=0.5*(4*mu[d[0]]-4*mu[k])/dt;
		gradpU1=0.5*(4*p[d[0]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU1=0.5*(-rho[d2[0]]+4*rho[d[0]]-3*rho[k])/dt;
		gradCU1=0.5*(-C[d2[0]]+4*C[d[0]]-3*C[k])/dt;
		gradmuU1=0.5*(-mu[d2[0]]+4*mu[d[0]]-3*mu[k])/dt;
		gradpU1=0.5*(-p[d2[0]]+4*p[d[0]]-3*p[k])/dt;
		}
		
	 if(mask[d2[1]]==28 && mask[d[1]]!=28)
    	{
    	gradrhoU2=0.5*(4*rho[d[1]]-4*rho[k])/dt;
    	gradCU2=0.5*(4*C[d[1]]-4*C[k])/dt;
    	gradmuU2=0.5*(4*mu[d[1]]-4*mu[k])/dt;
		gradpU2=0.5*(4*p[d[1]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU2=0.5*(-rho[d2[1]]+4*rho[d[1]]-3*rho[k])/dt;
		gradCU2=0.5*(-C[d2[1]]+4*C[d[1]]-3*C[k])/dt;
		gradmuU2=0.5*(-mu[d2[1]]+4*mu[d[1]]-3*mu[k])/dt;
		gradpU2=0.5*(-p[d2[1]]+4*p[d[1]]-3*p[k])/dt;
		}
		
	 if(mask[d2[2]]==28 && mask[d[2]]!=28)
    	{
    	gradrhoU3=0.5*(4*rho[d[2]]-4*rho[k])/dt;
    	gradCU3=0.5*(4*C[d[2]]-4*C[k])/dt;
    	gradmuU3=0.5*(4*mu[d[2]]-4*mu[k])/dt;
		gradpU3=0.5*(4*p[d[2]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU3=0.5*(-rho[d2[2]]+4*rho[d[2]]-3*rho[k])/dt;
		gradCU3=0.5*(-C[d2[2]]+4*C[d[2]]-3*C[k])/dt;
		gradmuU3=0.5*(-mu[d2[2]]+4*mu[d[2]]-3*mu[k])/dt;
		gradpU3=0.5*(-p[d2[2]]+4*p[d[2]]-3*p[k])/dt;
		}
		
	 if(mask[d2[3]]==28 && mask[d[3]]!=28)
    	{
    	gradrhoU4=0.5*(4*rho[d[3]]-4*rho[k])/dt;
    	gradCU4=0.5*(4*C[d[3]]-4*C[k])/dt;
    	gradmuU4=0.5*(4*mu[d[3]]-4*mu[k])/dt;
		gradpU4=0.5*(4*p[d[3]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU4=0.5*(-rho[d2[3]]+4*rho[d[3]]-3*rho[k])/dt;
		gradCU4=0.5*(-C[d2[3]]+4*C[d[3]]-3*C[k])/dt;
		gradmuU4=0.5*(-mu[d2[3]]+4*mu[d[3]]-3*mu[k])/dt;
		gradpU4=0.5*(-p[d2[3]]+4*p[d[3]]-3*p[k])/dt;
		}
		
	 if(mask[d2[4]]==28 && mask[d[4]]!=28)
    	{
    	gradrhoU5=0.5*(4*rho[d[4]]-4*rho[k])/dt;
    	gradCU5=0.5*(4*C[d[4]]-4*C[k])/dt;
    	gradmuU5=0.5*(4*mu[d[4]]-4*mu[k])/dt;
		gradpU5=0.5*(4*p[d[4]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU5=0.5*(-rho[d2[4]]+4*rho[d[4]]-3*rho[k])/dt;
		gradCU5=0.5*(-C[d2[4]]+4*C[d[4]]-3*C[k])/dt;
		gradmuU5=0.5*(-mu[d2[4]]+4*mu[d[4]]-3*mu[k])/dt;
		gradpU5=0.5*(-p[d2[4]]+4*p[d[4]]-3*p[k])/dt;
		}
		
	 if(mask[d2[5]]==28 && mask[d[5]]!=28)
    	{
    	gradrhoU6=0.5*(4*rho[d[5]]-4*rho[k])/dt;
    	gradCU6=0.5*(4*C[d[5]]-4*C[k])/dt;
    	gradmuU6=0.5*(4*mu[d[5]]-4*mu[k])/dt;
		gradpU6=0.5*(4*p[d[5]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU6=0.5*(-rho[d2[5]]+4*rho[d[5]]-3*rho[k])/dt;
		gradCU6=0.5*(-C[d2[5]]+4*C[d[5]]-3*C[k])/dt;
		gradmuU6=0.5*(-mu[d2[5]]+4*mu[d[5]]-3*mu[k])/dt;
		gradpU6=0.5*(-p[d2[5]]+4*p[d[5]]-3*p[k])/dt;
		}
		
	 if((mask[d2[6]]==28 && mask[d[6]]!=28) || (mask[d[6]]==3 && mask[d2[6]]==3) )
    	{
    	gradrhoU7=0.5*(4*rho[d[6]]-4*rho[k])/dt;
    	gradCU7=0.5*(4*C[d[6]]-4*C[k])/dt;
    	gradmuU7=0.5*(4*mu[d[6]]-4*mu[k])/dt;
		gradpU7=0.5*(4*p[d[6]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU7=0.5*(-rho[d2[6]]+4*rho[d[6]]-3*rho[k])/dt;
		gradCU7=0.5*(-C[d2[6]]+4*C[d[6]]-3*C[k])/dt;
		gradmuU7=0.5*(-mu[d2[6]]+4*mu[d[6]]-3*mu[k])/dt;
		gradpU7=0.5*(-p[d2[6]]+4*p[d[6]]-3*p[k])/dt;
		}
		
	 if((mask[d2[7]]==28 && mask[d[7]]!=28) || (mask[d[7]]==3 && mask[d2[7]]==3) )
    	{
    	gradrhoU8=0.5*(4*rho[d[7]]-4*rho[k])/dt;
    	gradCU8=0.5*(4*C[d[7]]-4*C[k])/dt;
    	gradmuU8=0.5*(4*mu[d[7]]-4*mu[k])/dt;
		gradpU8=0.5*(4*p[d[7]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU8=0.5*(-rho[d2[7]]+4*rho[d[7]]-3*rho[k])/dt;
		gradCU8=0.5*(-C[d2[7]]+4*C[d[7]]-3*C[k])/dt;
		gradmuU8=0.5*(-mu[d2[7]]+4*mu[d[7]]-3*mu[k])/dt;
		gradpU8=0.5*(-p[d2[7]]+4*p[d[7]]-3*p[k])/dt;
		}
		
	 if((mask[d2[8]]==28 && mask[d[8]]!=28) || (mask[d[8]]==3 && mask[d2[8]]==3) )
    	{
    	gradrhoU9=0.5*(4*rho[d[8]]-4*rho[k])/dt;
    	gradCU9=0.5*(4*C[d[8]]-4*C[k])/dt;
    	gradmuU9=0.5*(4*mu[d[8]]-4*mu[k])/dt;
		gradpU9=0.5*(4*p[d[8]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU9=0.5*(-rho[d2[8]]+4*rho[d[8]]-3*rho[k])/dt;
		gradCU9=0.5*(-C[d2[8]]+4*C[d[8]]-3*C[k])/dt;
		gradmuU9=0.5*(-mu[d2[8]]+4*mu[d[8]]-3*mu[k])/dt;
		gradpU9=0.5*(-p[d2[8]]+4*p[d[8]]-3*p[k])/dt;
		}
		
	 if((mask[d2[9]]==28 && mask[d[9]]!=28) || (mask[d[9]]==3 && mask[d2[9]]==3) )
    	{
    	gradrhoU10=0.5*(4*rho[d[9]]-4*rho[k])/dt;
    	gradCU10=0.5*(4*C[d[9]]-4*C[k])/dt;
    	gradmuU10=0.5*(4*mu[d[9]]-4*mu[k])/dt;
		gradpU10=0.5*(4*p[d[9]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU10=0.5*(-rho[d2[9]]+4*rho[d[9]]-3*rho[k])/dt;
		gradCU10=0.5*(-C[d2[9]]+4*C[d[9]]-3*C[k])/dt;
		gradmuU10=0.5*(-mu[d2[9]]+4*mu[d[9]]-3*mu[k])/dt;
		gradpU10=0.5*(-p[d2[9]]+4*p[d[9]]-3*p[k])/dt;
		}
		
	 if((mask[d2[10]]==28 && mask[d[10]]!=28) || (mask[d[10]]==3 && mask[d2[10]]==3) )
    	{
    	gradrhoU11=0.5*(4*rho[d[10]]-4*rho[k])/dt;
    	gradCU11=0.5*(4*C[d[10]]-4*C[k])/dt;
    	gradmuU11=0.5*(4*mu[d[10]]-4*mu[k])/dt;
		gradpU11=0.5*(4*p[d[10]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU11=0.5*(-rho[d2[10]]+4*rho[d[10]]-3*rho[k])/dt;
		gradCU11=0.5*(-C[d2[10]]+4*C[d[10]]-3*C[k])/dt;
		gradmuU11=0.5*(-mu[d2[10]]+4*mu[d[10]]-3*mu[k])/dt;
		gradpU11=0.5*(-p[d2[10]]+4*p[d[10]]-3*p[k])/dt;
		}
		
	 if((mask[d2[11]]==28 && mask[d[11]]!=28) || (mask[d[11]]==3 && mask[d2[11]]==3) )
    	{
    	gradrhoU12=0.5*(4*rho[d[11]]-4*rho[k])/dt;
    	gradCU12=0.5*(4*C[d[11]]-4*C[k])/dt;
    	gradmuU12=0.5*(4*mu[d[11]]-4*mu[k])/dt;
		gradpU12=0.5*(4*p[d[11]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU12=0.5*(-rho[d2[11]]+4*rho[d[11]]-3*rho[k])/dt;
		gradCU12=0.5*(-C[d2[11]]+4*C[d[11]]-3*C[k])/dt;
		gradmuU12=0.5*(-mu[d2[11]]+4*mu[d[11]]-3*mu[k])/dt;
		gradpU12=0.5*(-p[d2[11]]+4*p[d[11]]-3*p[k])/dt;
		}
		
	 if((mask[d2[12]]==28 && mask[d[12]]!=28) || (mask[d[12]]==3 && mask[d2[12]]==3) )
    	{
    	gradrhoU13=0.5*(4*rho[d[12]]-4*rho[k])/dt;
    	gradCU13=0.5*(4*C[d[12]]-4*C[k])/dt;
    	gradmuU13=0.5*(4*mu[d[12]]-4*mu[k])/dt;
		gradpU13=0.5*(4*p[d[12]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU13=0.5*(-rho[d2[12]]+4*rho[d[12]]-3*rho[k])/dt;
		gradCU13=0.5*(-C[d2[12]]+4*C[d[12]]-3*C[k])/dt;
		gradmuU13=0.5*(-mu[d2[12]]+4*mu[d[12]]-3*mu[k])/dt;
		gradpU13=0.5*(-p[d2[12]]+4*p[d[12]]-3*p[k])/dt;
		}
		
	 if((mask[d2[13]]==28 && mask[d[13]]!=28) || (mask[d[13]]==3 && mask[d2[13]]==3) )
    	{
    	gradrhoU14=0.5*(4*rho[d[13]]-4*rho[k])/dt;
    	gradCU14=0.5*(4*C[d[13]]-4*C[k])/dt;
    	gradmuU14=0.5*(4*mu[d[13]]-4*mu[k])/dt;
		gradpU14=0.5*(4*p[d[13]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU14=0.5*(-rho[d2[13]]+4*rho[d[13]]-3*rho[k])/dt;
		gradCU14=0.5*(-C[d2[13]]+4*C[d[13]]-3*C[k])/dt;
		gradmuU14=0.5*(-mu[d2[13]]+4*mu[d[13]]-3*mu[k])/dt;
		gradpU14=0.5*(-p[d2[13]]+4*p[d[13]]-3*p[k])/dt;
		}
		
	 if((mask[d2[14]]==28 && mask[d[14]]!=28) || (mask[d[14]]==3 && mask[d2[14]]==3) )
    	{
    	gradrhoU15=0.5*(4*rho[d[14]]-4*rho[k])/dt;
    	gradCU15=0.5*(4*C[d[14]]-4*C[k])/dt;
    	gradmuU15=0.5*(4*mu[d[14]]-4*mu[k])/dt;
		gradpU15=0.5*(4*p[d[14]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU15=0.5*(-rho[d2[14]]+4*rho[d[14]]-3*rho[k])/dt;
		gradCU15=0.5*(-C[d2[14]]+4*C[d[14]]-3*C[k])/dt;
		gradmuU15=0.5*(-mu[d2[14]]+4*mu[d[14]]-3*mu[k])/dt;
		gradpU15=0.5*(-p[d2[14]]+4*p[d[14]]-3*p[k])/dt;
		}
		
	 if((mask[d2[15]]==28 && mask[d[15]]!=28) || (mask[d[15]]==3 && mask[d2[15]]==3) )
    	{
    	gradrhoU16=0.5*(4*rho[d[15]]-4*rho[k])/dt;
    	gradCU16=0.5*(4*C[d[15]]-4*C[k])/dt;
    	gradmuU16=0.5*(4*mu[d[15]]-4*mu[k])/dt;
		gradpU16=0.5*(4*p[d[15]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU16=0.5*(-rho[d2[15]]+4*rho[d[15]]-3*rho[k])/dt;
		gradCU16=0.5*(-C[d2[15]]+4*C[d[15]]-3*C[k])/dt;
		gradmuU16=0.5*(-mu[d2[15]]+4*mu[d[15]]-3*mu[k])/dt;
		gradpU16=0.5*(-p[d2[15]]+4*p[d[15]]-3*p[k])/dt;
		}
		
	 if((mask[d2[16]]==28 && mask[d[16]]!=28) || (mask[d[16]]==3 && mask[d2[16]]==3))
    	{
    	gradrhoU17=0.5*(4*rho[d[16]]-4*rho[k])/dt;
    	gradCU17=0.5*(4*C[d[16]]-4*C[k])/dt;
    	gradmuU17=0.5*(4*mu[d[16]]-4*mu[k])/dt;
		gradpU17=0.5*(4*p[d[16]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU17=0.5*(-rho[d2[16]]+4*rho[d[16]]-3*rho[k])/dt;
		gradCU17=0.5*(-C[d2[16]]+4*C[d[16]]-3*C[k])/dt;
		gradmuU17=0.5*(-mu[d2[16]]+4*mu[d[16]]-3*mu[k])/dt;
		gradpU17=0.5*(-p[d2[16]]+4*p[d[16]]-3*p[k])/dt;
		}
		
	 if((mask[d2[17]]==28 && mask[d[17]]!=28) || (mask[d[17]]==3 && mask[d2[17]]==3))
    	{
    	gradrhoU18=0.5*(4*rho[d[17]]-4*rho[k])/dt;
    	gradCU18=0.5*(4*C[d[17]]-4*C[k])/dt;
    	gradmuU18=0.5*(4*mu[d[17]]-4*mu[k])/dt;
		gradpU18=0.5*(4*p[d[17]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU18=0.5*(-rho[d2[17]]+4*rho[d[17]]-3*rho[k])/dt;
		gradCU18=0.5*(-C[d2[17]]+4*C[d[17]]-3*C[k])/dt;
		gradmuU18=0.5*(-mu[d2[17]]+4*mu[d[17]]-3*mu[k])/dt;
		gradpU18=0.5*(-p[d2[17]]+4*p[d[17]]-3*p[k])/dt;
		}
	 

    
    	
		
    	
    	}

    	else if(mask[k]==3)
    	 {
	   
	
    	if(mask[d[0]]==28 || mask[d[0]]==3)
    	{gradrhoU1=gradrhoU2;gradCU1=gradCU2;gradmuU1=gradmuU2;gradpU1=gradpU2;
	  
}
    	
    	if(mask[d[1]]==28 || mask[d[1]]==3)
    	{gradrhoU2=gradrhoU1;gradCU2=gradCU1;gradmuU2=gradmuU1;gradpU2=gradpU1;
	  
}
    	
    	if(mask[d[2]]==28 || mask[d[2]]==3)
    	{gradrhoU3=gradrhoU4;gradCU3=gradCU4;gradmuU3=gradmuU4;gradpU3=gradpU4;
	  
}
    	
    	if(mask[d[3]]==28 || mask[d[3]]==3)
    	{gradrhoU4=gradrhoU3;gradCU4=gradCU3;gradmuU4=gradmuU3;gradpU4=gradpU3;
	  
}
    	
    	if(mask[d[4]]==28 || mask[d[4]]==3)
    	{gradrhoU5=gradrhoU6;gradCU5=gradCU6;gradmuU5=gradmuU6;gradpU5=gradpU6;
	  
	}
    	
    	if(mask[d[5]]==28 || mask[d[5]]==3)
    	{gradrhoU6=gradrhoU5;gradCU6=gradCU5;gradmuU6=gradmuU5;gradpU6=gradpU5;}
    	
    	if(mask[d[6]]==28 || mask[d[6]]==3 )
    	{gradrhoU7=gradrhoU10;gradCU7=gradCU10;gradmuU7=gradmuU10;gradpU7=gradpU10;
	  if(mask[d[9]]==28 || mask[d[9]]==3){gradrhoU7=0.0;gradCU7=0.0;gradmuU7=0.0;gradpU7=0.0;}
	}
    	
    	if(mask[d[7]]==28 || mask[d[7]]==3 )
    	{gradrhoU8=gradrhoU9;gradCU8=gradCU9;gradmuU8=gradmuU9;gradpU8=gradpU9;
	   if(mask[d[8]]==28 || mask[d[8]]==3){gradrhoU8=0.0;gradCU8=0.0;gradmuU8=0.0;gradpU8=0.0;}
}
    	
    	if(mask[d[8]]==28 || mask[d[8]]==3 )
    	{gradrhoU9=gradrhoU8;gradCU9=gradCU8;gradmuU9=gradmuU8;gradpU9=gradpU8;
	   if(mask[d[7]]==28 || mask[d[7]]==3){gradrhoU9=0.0;gradCU9=0.0;gradmuU9=0.0;gradpU9=0.0;}
}
    	
    	if(mask[d[9]]==28 || mask[d[9]]==3 )
    	{gradrhoU10=gradrhoU7;gradCU10=gradCU7;gradmuU10=gradmuU7;gradpU10=gradpU7;
	   if(mask[d[6]]==28 || mask[d[6]]==3){gradrhoU10=0.0;gradCU10=0.0;gradmuU10=0.0;gradpU10=0.0;}
}
    	
    	if(mask[d[10]]==28 || mask[d[10]]==3 )
    	{gradrhoU11=gradrhoU14;gradCU11=gradCU14;gradmuU11=gradmuU14;gradpU11=gradpU14;
	   if(mask[d[13]]==28 || mask[d[13]]==3){gradrhoU11=0.0;gradCU11=0.0;gradmuU11=0.0;gradpU11=0.0;}
}
    	
    	if(mask[d[11]]==28 || mask[d[11]]==3 )
    	{gradrhoU12=gradrhoU13;gradCU12=gradCU13;gradmuU12=gradmuU13;gradpU12=gradpU13;
	   if(mask[d[12]]==28 || mask[d[12]]==3){gradrhoU12=0.0;gradCU12=0.0;gradmuU12=0.0;gradpU12=0.0;}
}
    	
    	if(mask[d[12]]==28 || mask[d[12]]==3 )
    	{gradrhoU13=gradrhoU12;gradCU13=gradCU12;gradmuU13=gradmuU12;gradpU13=gradpU12;
	   if(mask[d[11]]==28 || mask[d[11]]==3){gradrhoU13=0.0;gradCU13=0.0;gradmuU13=0.0;gradpU13=0.0;}
}
    	
    	if(mask[d[13]]==28 && mask[d[13]]==3 )
    	{gradrhoU14=gradrhoU11;gradCU14=gradCU11;gradmuU14=gradmuU11;gradpU14=gradpU11;
	   if(mask[d[10]]==28 || mask[d[10]]==3){gradrhoU14=0.0;gradCU14=0.0;gradmuU14=0.0;gradpU14=0.0;}
}
    	
    	if(mask[d[14]]==28 || mask[d[14]]==3 )
    	{gradrhoU15=gradrhoU18;gradCU15=gradCU18;gradmuU15=gradmuU18;gradpU15=gradpU18;
	   if(mask[d[17]]==28 || mask[d[17]]==3){gradrhoU15=0.0;gradCU15=0.0;gradmuU15=0.0;gradpU15=0.0;}
}
    	
    	if(mask[d[15]]==28 || mask[d[15]]==3 )
    	{gradrhoU16=gradrhoU17;gradCU16=gradCU17;gradmuU16=gradmuU17;gradpU16=gradpU17;
	   if(mask[d[16]]==28 || mask[d[16]]==3){gradrhoU16=0.0;gradCU16=0.0;gradmuU16=0.0;gradpU16=0.0;}
}
    	
    	if(mask[d[16]]==28 || mask[d[16]]==3)
    	{gradrhoU17=gradrhoU16;gradCU17=gradCU16;gradmuU17=gradmuU16;gradpU17=gradpU16;
	   if(mask[d[15]]==28 || mask[d[15]]==3){gradrhoU17=0.0;gradCU17=0.0;gradmuU17=0.0;gradpU17=0.0;}
}
    	
    	if(mask[d[17]]==28 || mask[d[17]]==3 )
    	{gradrhoU18=gradrhoU15;gradCU18=gradCU15;gradmuU18=gradmuU15;gradpU18=gradpU15;
	   if(mask[d[14]]==28 || mask[d[14]]==3){gradrhoU18=0.0;gradCU18=0.0;gradmuU18=0.0;gradpU18=0.0;}
	}

	
      if(mask[d2[0]]==28 && mask[d[0]]!=28)
    	{
    	gradrhoU1=0.5*(4*rho[d[0]]-4*rho[k])/dt;
    	gradCU1=0.5*(4*C[d[0]]-4*C[k])/dt;
    	gradmuU1=0.5*(4*mu[d[0]]-4*mu[k])/dt;
		gradpU1=0.5*(4*p[d[0]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU1=0.5*(-rho[d2[0]]+4*rho[d[0]]-3*rho[k])/dt;
		gradCU1=0.5*(-C[d2[0]]+4*C[d[0]]-3*C[k])/dt;
		gradmuU1=0.5*(-mu[d2[0]]+4*mu[d[0]]-3*mu[k])/dt;
		gradpU1=0.5*(-p[d2[0]]+4*p[d[0]]-3*p[k])/dt;
		}
		
	 if(mask[d2[1]]==28 && mask[d[1]]!=28)
    	{
    	gradrhoU2=0.5*(4*rho[d[1]]-4*rho[k])/dt;
    	gradCU2=0.5*(4*C[d[1]]-4*C[k])/dt;
    	gradmuU2=0.5*(4*mu[d[1]]-4*mu[k])/dt;
		gradpU2=0.5*(4*p[d[1]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU2=0.5*(-rho[d2[1]]+4*rho[d[1]]-3*rho[k])/dt;
		gradCU2=0.5*(-C[d2[1]]+4*C[d[1]]-3*C[k])/dt;
		gradmuU2=0.5*(-mu[d2[1]]+4*mu[d[1]]-3*mu[k])/dt;
		gradpU2=0.5*(-p[d2[1]]+4*p[d[1]]-3*p[k])/dt;
		}
		
	 if(mask[d2[2]]==28 && mask[d[2]]!=28)
    	{
    	gradrhoU3=0.5*(4*rho[d[2]]-4*rho[k])/dt;
    	gradCU3=0.5*(4*C[d[2]]-4*C[k])/dt;
    	gradmuU3=0.5*(4*mu[d[2]]-4*mu[k])/dt;
		gradpU3=0.5*(4*p[d[2]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU3=0.5*(-rho[d2[2]]+4*rho[d[2]]-3*rho[k])/dt;
		gradCU3=0.5*(-C[d2[2]]+4*C[d[2]]-3*C[k])/dt;
		gradmuU3=0.5*(-mu[d2[2]]+4*mu[d[2]]-3*mu[k])/dt;
		gradpU3=0.5*(-p[d2[2]]+4*p[d[2]]-3*p[k])/dt;
		}
		
	 if(mask[d2[3]]==28 && mask[d[3]]!=28)
    	{
    	gradrhoU4=0.5*(4*rho[d[3]]-4*rho[k])/dt;
    	gradCU4=0.5*(4*C[d[3]]-4*C[k])/dt;
    	gradmuU4=0.5*(4*mu[d[3]]-4*mu[k])/dt;
		gradpU4=0.5*(4*p[d[3]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU4=0.5*(-rho[d2[3]]+4*rho[d[3]]-3*rho[k])/dt;
		gradCU4=0.5*(-C[d2[3]]+4*C[d[3]]-3*C[k])/dt;
		gradmuU4=0.5*(-mu[d2[3]]+4*mu[d[3]]-3*mu[k])/dt;
		gradpU4=0.5*(-p[d2[3]]+4*p[d[3]]-3*p[k])/dt;
		}
		
	 if(mask[d2[4]]==28 && mask[d[4]]!=28)
    	{
    	gradrhoU5=0.5*(4*rho[d[4]]-4*rho[k])/dt;
    	gradCU5=0.5*(4*C[d[4]]-4*C[k])/dt;
    	gradmuU5=0.5*(4*mu[d[4]]-4*mu[k])/dt;
		gradpU5=0.5*(4*p[d[4]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU5=0.5*(-rho[d2[4]]+4*rho[d[4]]-3*rho[k])/dt;
		gradCU5=0.5*(-C[d2[4]]+4*C[d[4]]-3*C[k])/dt;
		gradmuU5=0.5*(-mu[d2[4]]+4*mu[d[4]]-3*mu[k])/dt;
		gradpU5=0.5*(-p[d2[4]]+4*p[d[4]]-3*p[k])/dt;
		}
		
	 if(mask[d2[5]]==28 && mask[d[5]]!=28)
    	{
    	gradrhoU6=0.5*(4*rho[d[5]]-4*rho[k])/dt;
    	gradCU6=0.5*(4*C[d[5]]-4*C[k])/dt;
    	gradmuU6=0.5*(4*mu[d[5]]-4*mu[k])/dt;
		gradpU6=0.5*(4*p[d[5]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU6=0.5*(-rho[d2[5]]+4*rho[d[5]]-3*rho[k])/dt;
		gradCU6=0.5*(-C[d2[5]]+4*C[d[5]]-3*C[k])/dt;
		gradmuU6=0.5*(-mu[d2[5]]+4*mu[d[5]]-3*mu[k])/dt;
		gradpU6=0.5*(-p[d2[5]]+4*p[d[5]]-3*p[k])/dt;
		}
		
	 if((mask[d2[6]]==28) && mask[d[6]]!=28 )
    	{
    	gradrhoU7=0.5*(4*rho[d[6]]-4*rho[k])/dt;
    	gradCU7=0.5*(4*C[d[6]]-4*C[k])/dt;
    	gradmuU7=0.5*(4*mu[d[6]]-4*mu[k])/dt;
		gradpU7=0.5*(4*p[d[6]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU7=0.5*(-rho[d2[6]]+4*rho[d[6]]-3*rho[k])/dt;
		gradCU7=0.5*(-C[d2[6]]+4*C[d[6]]-3*C[k])/dt;
		gradmuU7=0.5*(-mu[d2[6]]+4*mu[d[6]]-3*mu[k])/dt;
		gradpU7=0.5*(-p[d2[6]]+4*p[d[6]]-3*p[k])/dt;
		}
		
	 if((mask[d2[7]]==28) && mask[d[7]]!=28 )
    	{
    	gradrhoU8=0.5*(4*rho[d[7]]-4*rho[k])/dt;
    	gradCU8=0.5*(4*C[d[7]]-4*C[k])/dt;
    	gradmuU8=0.5*(4*mu[d[7]]-4*mu[k])/dt;
		gradpU8=0.5*(4*p[d[7]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU8=0.5*(-rho[d2[7]]+4*rho[d[7]]-3*rho[k])/dt;
		gradCU8=0.5*(-C[d2[7]]+4*C[d[7]]-3*C[k])/dt;
		gradmuU8=0.5*(-mu[d2[7]]+4*mu[d[7]]-3*mu[k])/dt;
		gradpU8=0.5*(-p[d2[7]]+4*p[d[7]]-3*p[k])/dt;
		}
		
	 if((mask[d2[8]]==28) && mask[d[8]]!=28 )
    	{
    	gradrhoU9=0.5*(4*rho[d[8]]-4*rho[k])/dt;
    	gradCU9=0.5*(4*C[d[8]]-4*C[k])/dt;
    	gradmuU9=0.5*(4*mu[d[8]]-4*mu[k])/dt;
		gradpU9=0.5*(4*p[d[8]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU9=0.5*(-rho[d2[8]]+4*rho[d[8]]-3*rho[k])/dt;
		gradCU9=0.5*(-C[d2[8]]+4*C[d[8]]-3*C[k])/dt;
		gradmuU9=0.5*(-mu[d2[8]]+4*mu[d[8]]-3*mu[k])/dt;
		gradpU9=0.5*(-p[d2[8]]+4*p[d[8]]-3*p[k])/dt;
		}
		
	 if((mask[d2[9]]==28) && mask[d[9]]!=28 )
    	{
    	gradrhoU10=0.5*(4*rho[d[9]]-4*rho[k])/dt;
    	gradCU10=0.5*(4*C[d[9]]-4*C[k])/dt;
    	gradmuU10=0.5*(4*mu[d[9]]-4*mu[k])/dt;
		gradpU10=0.5*(4*p[d[9]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU10=0.5*(-rho[d2[9]]+4*rho[d[9]]-3*rho[k])/dt;
		gradCU10=0.5*(-C[d2[9]]+4*C[d[9]]-3*C[k])/dt;
		gradmuU10=0.5*(-mu[d2[9]]+4*mu[d[9]]-3*mu[k])/dt;
		gradpU10=0.5*(-p[d2[9]]+4*p[d[9]]-3*p[k])/dt;
		}
		
	 if((mask[d2[10]]==28) && mask[d[10]]!=28 )
    	{
    	gradrhoU11=0.5*(4*rho[d[10]]-4*rho[k])/dt;
    	gradCU11=0.5*(4*C[d[10]]-4*C[k])/dt;
    	gradmuU11=0.5*(4*mu[d[10]]-4*mu[k])/dt;
		gradpU11=0.5*(4*p[d[10]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU11=0.5*(-rho[d2[10]]+4*rho[d[10]]-3*rho[k])/dt;
		gradCU11=0.5*(-C[d2[10]]+4*C[d[10]]-3*C[k])/dt;
		gradmuU11=0.5*(-mu[d2[10]]+4*mu[d[10]]-3*mu[k])/dt;
		gradpU11=0.5*(-p[d2[10]]+4*p[d[10]]-3*p[k])/dt;
		}
		
	 if((mask[d2[11]]==28) && mask[d[11]]!=28 )
    	{
    	gradrhoU12=0.5*(4*rho[d[11]]-4*rho[k])/dt;
    	gradCU12=0.5*(4*C[d[11]]-4*C[k])/dt;
    	gradmuU12=0.5*(4*mu[d[11]]-4*mu[k])/dt;
		gradpU12=0.5*(4*p[d[11]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU12=0.5*(-rho[d2[11]]+4*rho[d[11]]-3*rho[k])/dt;
		gradCU12=0.5*(-C[d2[11]]+4*C[d[11]]-3*C[k])/dt;
		gradmuU12=0.5*(-mu[d2[11]]+4*mu[d[11]]-3*mu[k])/dt;
		gradpU12=0.5*(-p[d2[11]]+4*p[d[11]]-3*p[k])/dt;
		}
		
	 if((mask[d2[12]]==28) &&  mask[d[12]]!=28 )
    	{
    	gradrhoU13=0.5*(4*rho[d[12]]-4*rho[k])/dt;
    	gradCU13=0.5*(4*C[d[12]]-4*C[k])/dt;
    	gradmuU13=0.5*(4*mu[d[12]]-4*mu[k])/dt;
		gradpU13=0.5*(4*p[d[12]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU13=0.5*(-rho[d2[12]]+4*rho[d[12]]-3*rho[k])/dt;
		gradCU13=0.5*(-C[d2[12]]+4*C[d[12]]-3*C[k])/dt;
		gradmuU13=0.5*(-mu[d2[12]]+4*mu[d[12]]-3*mu[k])/dt;
		gradpU13=0.5*(-p[d2[12]]+4*p[d[12]]-3*p[k])/dt;
		}
		
	 if((mask[d2[13]]==28) && mask[d[13]]!=28 )
    	{
    	gradrhoU14=0.5*(4*rho[d[13]]-4*rho[k])/dt;
    	gradCU14=0.5*(4*C[d[13]]-4*C[k])/dt;
    	gradmuU14=0.5*(4*mu[d[13]]-4*mu[k])/dt;
		gradpU14=0.5*(4*p[d[13]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU14=0.5*(-rho[d2[13]]+4*rho[d[13]]-3*rho[k])/dt;
		gradCU14=0.5*(-C[d2[13]]+4*C[d[13]]-3*C[k])/dt;
		gradmuU14=0.5*(-mu[d2[13]]+4*mu[d[13]]-3*mu[k])/dt;
		gradpU14=0.5*(-p[d2[13]]+4*p[d[13]]-3*p[k])/dt;
		}
		
	 if((mask[d2[14]]==28) && mask[d[14]]!=28 )
    	{
    	gradrhoU15=0.5*(4*rho[d[14]]-4*rho[k])/dt;
    	gradCU15=0.5*(4*C[d[14]]-4*C[k])/dt;
    	gradmuU15=0.5*(4*mu[d[14]]-4*mu[k])/dt;
		gradpU15=0.5*(4*p[d[14]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU15=0.5*(-rho[d2[14]]+4*rho[d[14]]-3*rho[k])/dt;
		gradCU15=0.5*(-C[d2[14]]+4*C[d[14]]-3*C[k])/dt;
		gradmuU15=0.5*(-mu[d2[14]]+4*mu[d[14]]-3*mu[k])/dt;
		gradpU15=0.5*(-p[d2[14]]+4*p[d[14]]-3*p[k])/dt;
		}
		
	 if((mask[d2[15]]==28) && mask[d[15]]!=28 )
    	{
    	gradrhoU16=0.5*(4*rho[d[15]]-4*rho[k])/dt;
    	gradCU16=0.5*(4*C[d[15]]-4*C[k])/dt;
    	gradmuU16=0.5*(4*mu[d[15]]-4*mu[k])/dt;
		gradpU16=0.5*(4*p[d[15]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU16=0.5*(-rho[d2[15]]+4*rho[d[15]]-3*rho[k])/dt;
		gradCU16=0.5*(-C[d2[15]]+4*C[d[15]]-3*C[k])/dt;
		gradmuU16=0.5*(-mu[d2[15]]+4*mu[d[15]]-3*mu[k])/dt;
		gradpU16=0.5*(-p[d2[15]]+4*p[d[15]]-3*p[k])/dt;
		}
		
	 if((mask[d2[16]]==28) && mask[d[16]]!=28)
    	{
    	gradrhoU17=0.5*(4*rho[d[16]]-4*rho[k])/dt;
    	gradCU17=0.5*(4*C[d[16]]-4*C[k])/dt;
    	gradmuU17=0.5*(4*mu[d[16]]-4*mu[k])/dt;
		gradpU17=0.5*(4*p[d[16]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU17=0.5*(-rho[d2[16]]+4*rho[d[16]]-3*rho[k])/dt;
		gradCU17=0.5*(-C[d2[16]]+4*C[d[16]]-3*C[k])/dt;
		gradmuU17=0.5*(-mu[d2[16]]+4*mu[d[16]]-3*mu[k])/dt;
		gradpU17=0.5*(-p[d2[16]]+4*p[d[16]]-3*p[k])/dt;
		}
		
	 if((mask[d2[17]]==28) && mask[d[17]]!=28)
    	{
    	gradrhoU18=0.5*(4*rho[d[17]]-4*rho[k])/dt;
    	gradCU18=0.5*(4*C[d[17]]-4*C[k])/dt;
    	gradmuU18=0.5*(4*mu[d[17]]-4*mu[k])/dt;
		gradpU18=0.5*(4*p[d[17]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU18=0.5*(-rho[d2[17]]+4*rho[d[17]]-3*rho[k])/dt;
		gradCU18=0.5*(-C[d2[17]]+4*C[d[17]]-3*C[k])/dt;
		gradmuU18=0.5*(-mu[d2[17]]+4*mu[d[17]]-3*mu[k])/dt;
		gradpU18=0.5*(-p[d2[17]]+4*p[d[17]]-3*p[k])/dt;
		}
	 

    	
		
    	
    	}
	

    if(mask[k]==2)
    {

      
      if(mask[d2[0]]==28)
    	{
    	gradrhoU1=0.5*(4*rho[d[0]]-4*rho[k])/dt;
    	gradCU1=0.5*(4*C[d[0]]-4*C[k])/dt;
    	gradmuU1=0.5*(4*mu[d[0]]-4*mu[k])/dt;
		gradpU1=0.5*(4*p[d[0]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU1=0.5*(-rho[d2[0]]+4*rho[d[0]]-3*rho[k])/dt;
		gradCU1=0.5*(-C[d2[0]]+4*C[d[0]]-3*C[k])/dt;
		gradmuU1=0.5*(-mu[d2[0]]+4*mu[d[0]]-3*mu[k])/dt;
		gradpU1=0.5*(-p[d2[0]]+4*p[d[0]]-3*p[k])/dt;
		}
		
	 if(mask[d2[1]]==28)
    	{
    	gradrhoU2=0.5*(4*rho[d[1]]-4*rho[k])/dt;
    	gradCU2=0.5*(4*C[d[1]]-4*C[k])/dt;
    	gradmuU2=0.5*(4*mu[d[1]]-4*mu[k])/dt;
		gradpU2=0.5*(4*p[d[1]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU2=0.5*(-rho[d2[1]]+4*rho[d[1]]-3*rho[k])/dt;
		gradCU2=0.5*(-C[d2[1]]+4*C[d[1]]-3*C[k])/dt;
		gradmuU2=0.5*(-mu[d2[1]]+4*mu[d[1]]-3*mu[k])/dt;
		gradpU2=0.5*(-p[d2[1]]+4*p[d[1]]-3*p[k])/dt;
		}
		
	 if(mask[d2[2]]==28)
    	{
    	gradrhoU3=0.5*(4*rho[d[2]]-4*rho[k])/dt;
    	gradCU3=0.5*(4*C[d[2]]-4*C[k])/dt;
    	gradmuU3=0.5*(4*mu[d[2]]-4*mu[k])/dt;
		gradpU3=0.5*(4*p[d[2]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU3=0.5*(-rho[d2[2]]+4*rho[d[2]]-3*rho[k])/dt;
		gradCU3=0.5*(-C[d2[2]]+4*C[d[2]]-3*C[k])/dt;
		gradmuU3=0.5*(-mu[d2[2]]+4*mu[d[2]]-3*mu[k])/dt;
		gradpU3=0.5*(-p[d2[2]]+4*p[d[2]]-3*p[k])/dt;
		}
		
	 if(mask[d2[3]]==28)
    	{
    	gradrhoU4=0.5*(4*rho[d[3]]-4*rho[k])/dt;
    	gradCU4=0.5*(4*C[d[3]]-4*C[k])/dt;
    	gradmuU4=0.5*(4*mu[d[3]]-4*mu[k])/dt;
		gradpU4=0.5*(4*p[d[3]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU4=0.5*(-rho[d2[3]]+4*rho[d[3]]-3*rho[k])/dt;
		gradCU4=0.5*(-C[d2[3]]+4*C[d[3]]-3*C[k])/dt;
		gradmuU4=0.5*(-mu[d2[3]]+4*mu[d[3]]-3*mu[k])/dt;
		gradpU4=0.5*(-p[d2[3]]+4*p[d[3]]-3*p[k])/dt;
		}
		
	 if(mask[d2[4]]==28)
    	{
    	gradrhoU5=0.5*(4*rho[d[4]]-4*rho[k])/dt;
    	gradCU5=0.5*(4*C[d[4]]-4*C[k])/dt;
    	gradmuU5=0.5*(4*mu[d[4]]-4*mu[k])/dt;
		gradpU5=0.5*(4*p[d[4]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU5=0.5*(-rho[d2[4]]+4*rho[d[4]]-3*rho[k])/dt;
		gradCU5=0.5*(-C[d2[4]]+4*C[d[4]]-3*C[k])/dt;
		gradmuU5=0.5*(-mu[d2[4]]+4*mu[d[4]]-3*mu[k])/dt;
		gradpU5=0.5*(-p[d2[4]]+4*p[d[4]]-3*p[k])/dt;
		}
		
	 if(mask[d2[5]]==28)
    	{
    	gradrhoU6=0.5*(4*rho[d[5]]-4*rho[k])/dt;
    	gradCU6=0.5*(4*C[d[5]]-4*C[k])/dt;
    	gradmuU6=0.5*(4*mu[d[5]]-4*mu[k])/dt;
		gradpU6=0.5*(4*p[d[5]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU6=0.5*(-rho[d2[5]]+4*rho[d[5]]-3*rho[k])/dt;
		gradCU6=0.5*(-C[d2[5]]+4*C[d[5]]-3*C[k])/dt;
		gradmuU6=0.5*(-mu[d2[5]]+4*mu[d[5]]-3*mu[k])/dt;
		gradpU6=0.5*(-p[d2[5]]+4*p[d[5]]-3*p[k])/dt;
		}
		
	 if((mask[d2[6]]==28) || (mask[d[6]]==3 && mask[d2[6]]==3) )
    	{
    	gradrhoU7=0.5*(4*rho[d[6]]-4*rho[k])/dt;
    	gradCU7=0.5*(4*C[d[6]]-4*C[k])/dt;
    	gradmuU7=0.5*(4*mu[d[6]]-4*mu[k])/dt;
		gradpU7=0.5*(4*p[d[6]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU7=0.5*(-rho[d2[6]]+4*rho[d[6]]-3*rho[k])/dt;
		gradCU7=0.5*(-C[d2[6]]+4*C[d[6]]-3*C[k])/dt;
		gradmuU7=0.5*(-mu[d2[6]]+4*mu[d[6]]-3*mu[k])/dt;
		gradpU7=0.5*(-p[d2[6]]+4*p[d[6]]-3*p[k])/dt;
		}
		
	 if((mask[d2[7]]==28) || (mask[d[7]]==3 && mask[d2[7]]==3) )
    	{
    	gradrhoU8=0.5*(4*rho[d[7]]-4*rho[k])/dt;
    	gradCU8=0.5*(4*C[d[7]]-4*C[k])/dt;
    	gradmuU8=0.5*(4*mu[d[7]]-4*mu[k])/dt;
		gradpU8=0.5*(4*p[d[7]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU8=0.5*(-rho[d2[7]]+4*rho[d[7]]-3*rho[k])/dt;
		gradCU8=0.5*(-C[d2[7]]+4*C[d[7]]-3*C[k])/dt;
		gradmuU8=0.5*(-mu[d2[7]]+4*mu[d[7]]-3*mu[k])/dt;
		gradpU8=0.5*(-p[d2[7]]+4*p[d[7]]-3*p[k])/dt;
		}
		
	 if((mask[d2[8]]==28) || (mask[d[8]]==3 && mask[d2[8]]==3) )
    	{
    	gradrhoU9=0.5*(4*rho[d[8]]-4*rho[k])/dt;
    	gradCU9=0.5*(4*C[d[8]]-4*C[k])/dt;
    	gradmuU9=0.5*(4*mu[d[8]]-4*mu[k])/dt;
		gradpU9=0.5*(4*p[d[8]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU9=0.5*(-rho[d2[8]]+4*rho[d[8]]-3*rho[k])/dt;
		gradCU9=0.5*(-C[d2[8]]+4*C[d[8]]-3*C[k])/dt;
		gradmuU9=0.5*(-mu[d2[8]]+4*mu[d[8]]-3*mu[k])/dt;
		gradpU9=0.5*(-p[d2[8]]+4*p[d[8]]-3*p[k])/dt;
		}
		
	 if((mask[d2[9]]==28) || (mask[d[9]]==3 && mask[d2[9]]==3) )
    	{
    	gradrhoU10=0.5*(4*rho[d[9]]-4*rho[k])/dt;
    	gradCU10=0.5*(4*C[d[9]]-4*C[k])/dt;
    	gradmuU10=0.5*(4*mu[d[9]]-4*mu[k])/dt;
		gradpU10=0.5*(4*p[d[9]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU10=0.5*(-rho[d2[9]]+4*rho[d[9]]-3*rho[k])/dt;
		gradCU10=0.5*(-C[d2[9]]+4*C[d[9]]-3*C[k])/dt;
		gradmuU10=0.5*(-mu[d2[9]]+4*mu[d[9]]-3*mu[k])/dt;
		gradpU10=0.5*(-p[d2[9]]+4*p[d[9]]-3*p[k])/dt;
		}
		
	 if((mask[d2[10]]==28) || (mask[d[10]]==3 && mask[d2[10]]==3) )
    	{
    	gradrhoU11=0.5*(4*rho[d[10]]-4*rho[k])/dt;
    	gradCU11=0.5*(4*C[d[10]]-4*C[k])/dt;
    	gradmuU11=0.5*(4*mu[d[10]]-4*mu[k])/dt;
		gradpU11=0.5*(4*p[d[10]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU11=0.5*(-rho[d2[10]]+4*rho[d[10]]-3*rho[k])/dt;
		gradCU11=0.5*(-C[d2[10]]+4*C[d[10]]-3*C[k])/dt;
		gradmuU11=0.5*(-mu[d2[10]]+4*mu[d[10]]-3*mu[k])/dt;
		gradpU11=0.5*(-p[d2[10]]+4*p[d[10]]-3*p[k])/dt;
		}
		
	 if((mask[d2[11]]==28) || (mask[d[11]]==3 && mask[d2[11]]==3) )
    	{
    	gradrhoU12=0.5*(4*rho[d[11]]-4*rho[k])/dt;
    	gradCU12=0.5*(4*C[d[11]]-4*C[k])/dt;
    	gradmuU12=0.5*(4*mu[d[11]]-4*mu[k])/dt;
		gradpU12=0.5*(4*p[d[11]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU12=0.5*(-rho[d2[11]]+4*rho[d[11]]-3*rho[k])/dt;
		gradCU12=0.5*(-C[d2[11]]+4*C[d[11]]-3*C[k])/dt;
		gradmuU12=0.5*(-mu[d2[11]]+4*mu[d[11]]-3*mu[k])/dt;
		gradpU12=0.5*(-p[d2[11]]+4*p[d[11]]-3*p[k])/dt;
		}
		
	 if((mask[d2[12]]==28) || (mask[d[12]]==3 && mask[d2[12]]==3) )
    	{
    	gradrhoU13=0.5*(4*rho[d[12]]-4*rho[k])/dt;
    	gradCU13=0.5*(4*C[d[12]]-4*C[k])/dt;
    	gradmuU13=0.5*(4*mu[d[12]]-4*mu[k])/dt;
		gradpU13=0.5*(4*p[d[12]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU13=0.5*(-rho[d2[12]]+4*rho[d[12]]-3*rho[k])/dt;
		gradCU13=0.5*(-C[d2[12]]+4*C[d[12]]-3*C[k])/dt;
		gradmuU13=0.5*(-mu[d2[12]]+4*mu[d[12]]-3*mu[k])/dt;
		gradpU13=0.5*(-p[d2[12]]+4*p[d[12]]-3*p[k])/dt;
		}
		
	 if((mask[d2[13]]==28) || (mask[d[13]]==3 && mask[d2[13]]==3) )
    	{
    	gradrhoU14=0.5*(4*rho[d[13]]-4*rho[k])/dt;
    	gradCU14=0.5*(4*C[d[13]]-4*C[k])/dt;
    	gradmuU14=0.5*(4*mu[d[13]]-4*mu[k])/dt;
		gradpU14=0.5*(4*p[d[13]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU14=0.5*(-rho[d2[13]]+4*rho[d[13]]-3*rho[k])/dt;
		gradCU14=0.5*(-C[d2[13]]+4*C[d[13]]-3*C[k])/dt;
		gradmuU14=0.5*(-mu[d2[13]]+4*mu[d[13]]-3*mu[k])/dt;
		gradpU14=0.5*(-p[d2[13]]+4*p[d[13]]-3*p[k])/dt;
		}
		
	 if((mask[d2[14]]==28) || (mask[d[14]]==3 && mask[d2[14]]==3) )
    	{
    	gradrhoU15=0.5*(4*rho[d[14]]-4*rho[k])/dt;
    	gradCU15=0.5*(4*C[d[14]]-4*C[k])/dt;
    	gradmuU15=0.5*(4*mu[d[14]]-4*mu[k])/dt;
		gradpU15=0.5*(4*p[d[14]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU15=0.5*(-rho[d2[14]]+4*rho[d[14]]-3*rho[k])/dt;
		gradCU15=0.5*(-C[d2[14]]+4*C[d[14]]-3*C[k])/dt;
		gradmuU15=0.5*(-mu[d2[14]]+4*mu[d[14]]-3*mu[k])/dt;
		gradpU15=0.5*(-p[d2[14]]+4*p[d[14]]-3*p[k])/dt;
		}
		
	 if((mask[d2[15]]==28) || (mask[d[15]]==3 && mask[d2[15]]==3) )
    	{
    	gradrhoU16=0.5*(4*rho[d[15]]-4*rho[k])/dt;
    	gradCU16=0.5*(4*C[d[15]]-4*C[k])/dt;
    	gradmuU16=0.5*(4*mu[d[15]]-4*mu[k])/dt;
		gradpU16=0.5*(4*p[d[15]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU16=0.5*(-rho[d2[15]]+4*rho[d[15]]-3*rho[k])/dt;
		gradCU16=0.5*(-C[d2[15]]+4*C[d[15]]-3*C[k])/dt;
		gradmuU16=0.5*(-mu[d2[15]]+4*mu[d[15]]-3*mu[k])/dt;
		gradpU16=0.5*(-p[d2[15]]+4*p[d[15]]-3*p[k])/dt;
		}
		
	 if((mask[d2[16]]==28) || (mask[d[16]]==3 && mask[d2[16]]==3))
    	{
    	gradrhoU17=0.5*(4*rho[d[16]]-4*rho[k])/dt;
    	gradCU17=0.5*(4*C[d[16]]-4*C[k])/dt;
    	gradmuU17=0.5*(4*mu[d[16]]-4*mu[k])/dt;
		gradpU17=0.5*(4*p[d[16]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU17=0.5*(-rho[d2[16]]+4*rho[d[16]]-3*rho[k])/dt;
		gradCU17=0.5*(-C[d2[16]]+4*C[d[16]]-3*C[k])/dt;
		gradmuU17=0.5*(-mu[d2[16]]+4*mu[d[16]]-3*mu[k])/dt;
		gradpU17=0.5*(-p[d2[16]]+4*p[d[16]]-3*p[k])/dt;
		}
		
	 if((mask[d2[17]]==28) || (mask[d[17]]==3 && mask[d2[17]]==3))
    	{
    	gradrhoU18=0.5*(4*rho[d[17]]-4*rho[k])/dt;
    	gradCU18=0.5*(4*C[d[17]]-4*C[k])/dt;
    	gradmuU18=0.5*(4*mu[d[17]]-4*mu[k])/dt;
		gradpU18=0.5*(4*p[d[17]]-4*p[k])/dt;
		}
		else
		{
		gradrhoU18=0.5*(-rho[d2[17]]+4*rho[d[17]]-3*rho[k])/dt;
		gradCU18=0.5*(-C[d2[17]]+4*C[d[17]]-3*C[k])/dt;
		gradmuU18=0.5*(-mu[d2[17]]+4*mu[d[17]]-3*mu[k])/dt;
		gradpU18=0.5*(-p[d2[17]]+4*p[d[17]]-3*p[k])/dt;
		}
	 
    
    
    }
      }
    
    if(boundtype==1)
    {
    computecoordinates(k);




    if(xk==0 )
    {
    	gradrhoU2=gradrhoU1;
    	gradrhoU8=gradrhoU7;
    	gradrhoU10=gradrhoU9;
    	gradrhoU16=gradrhoU15;
    	gradrhoU18=gradrhoU17;
    	
    	gradCU2=gradCU1;
    	gradCU8=gradCU7;
    	gradCU10=gradCU9;
    	gradCU16=gradCU15;
    	gradCU18=gradCU17;
    	
    	gradpU2=gradpU1;
    	gradpU8=gradpU7;
    	gradpU10=gradpU9;
    	gradpU16=gradpU15;
    	gradpU18=gradpU17;
    	
    	gradmuU2=gradmuU1;
    	gradmuU8=gradmuU7;
    	gradmuU10=gradmuU9;
    	gradmuU16=gradmuU15;
    	gradmuU18=gradmuU17;
    	
   

    }
    
    if(xk==Lx-1 )
    {
    	gradrhoU1=gradrhoU2;
    	gradrhoU7=gradrhoU8;
    	gradrhoU9=gradrhoU10;
    	gradrhoU15=gradrhoU16;
    	gradrhoU17=gradrhoU18;
    	
    	gradCU1=gradCU2;
    	gradCU7=gradCU8;
    	gradCU9=gradCU10;
    	gradCU15=gradCU16;
    	gradCU17=gradCU18;
    	
    	gradpU1=gradpU2;
    	gradpU7=gradpU8;
    	gradpU9=gradpU10;
    	gradpU15=gradpU16;
    	gradpU17=gradpU18;
    	
    	gradmuU1=gradmuU2;
    	gradmuU7=gradmuU8;
    	gradmuU9=gradmuU10;
    	gradmuU15=gradmuU16;
    	gradmuU17=gradmuU18;

    }
    
    if(zk==0 )
    {
    	gradrhoU6=gradrhoU5;
    	gradrhoU13=gradrhoU11;
    	gradrhoU14=gradrhoU12;
    	gradrhoU17=gradrhoU15;
    	gradrhoU18=gradrhoU16;
    	
    	gradCU6=gradCU5;
    	gradCU13=gradCU11;
    	gradCU14=gradCU12;
    	gradCU17=gradCU15;
    	gradCU18=gradCU16;
    	
    	gradpU6=gradpU5;
    	gradpU13=gradpU11;
    	gradpU14=gradpU12;
    	gradpU17=gradpU15;
    	gradpU18=gradpU16;
    	
    	gradmuU6=gradmuU5;
    	gradmuU13=gradmuU11;
    	gradmuU14=gradmuU12;
    	gradmuU17=gradmuU15;
    	gradmuU18=gradmuU16;

    }
    
    if(zk==Lz-1 )
    {
    	gradrhoU5=gradrhoU6;
    	gradrhoU11=gradrhoU13;
    	gradrhoU12=gradrhoU14;
    	gradrhoU15=gradrhoU17;
    	gradrhoU16=gradrhoU18;
    	
    	gradCU5=gradCU6;
    	gradCU11=gradCU13;
    	gradCU12=gradCU14;
    	gradCU15=gradCU17;
    	gradCU16=gradCU18;
    	
    	gradpU5=gradpU6;
    	gradpU11=gradpU13;
    	gradpU12=gradpU14;
    	gradpU15=gradpU17;
    	gradpU16=gradpU18;
    	
    	gradmuU5=gradmuU6;
    	gradmuU11=gradmuU13;
    	gradmuU12=gradmuU14;
    	gradmuU15=gradmuU17;
    	gradmuU16=gradmuU18;

    }
    
    if(yk==0 )
    {
    	gradrhoU4=gradrhoU3;
    	gradrhoU9=gradrhoU7;
    	gradrhoU10=gradrhoU8;
    	gradrhoU12=gradrhoU11;
    	gradrhoU14=gradrhoU13;
    	
    	gradCU4=gradCU3;
    	gradCU9=gradCU7;
    	gradCU10=gradCU8;
    	gradCU12=gradCU11;
    	gradCU14=gradCU13;
    	
    	gradpU4=gradpU3;
    	gradpU9=gradpU7;
    	gradpU10=gradpU8;
    	gradpU12=gradpU11;
    	gradpU14=gradpU13;
    	
    	gradmuU4=gradmuU3;
    	gradmuU9=gradmuU7;
    	gradmuU10=gradmuU8;
    	gradmuU12=gradmuU11;
    	gradmuU14=gradmuU13;
    	
    	

    }
    
    if(yk==Ly-1 )
    {
    	gradrhoU3=gradrhoU4;
    	gradrhoU7=gradrhoU9;
    	gradrhoU8=gradrhoU10;
    	gradrhoU11=gradrhoU12;
    	gradrhoU13=gradrhoU14;
    	
    	gradCU3=gradCU4;
    	gradCU7=gradCU9;
    	gradCU8=gradCU10;
    	gradCU11=gradCU12;
    	gradCU13=gradCU14;
    	
    	gradpU3=gradpU4;
    	gradpU7=gradpU9;
    	gradpU8=gradpU10;
    	gradpU11=gradpU12;
    	gradpU13=gradpU14;
    	
    	gradmuU3=gradmuU4;
    	gradmuU7=gradmuU9;
    	gradmuU8=gradmuU10;
    	gradmuU11=gradmuU12;
    	gradmuU13=gradmuU14;
    	
    	

    }
    
    
    }
    
    if(boundtype==2)
    {
    computecoordinates(k);




    if(xk==0 )
    {
    	gradrhoU2=0.0;
    	gradrhoU8=0.0;
    	gradrhoU10=0.0;
    	gradrhoU16=0.0;
    	gradrhoU18=0.0;
    	
    	gradCU2=0.0;
    	gradCU8=0.0;
    	gradCU10=0.0;
    	gradCU16=0.0;
    	gradCU18=0.0;
    	
    	gradpU2=0.0;
    	gradpU8=0.0;
    	gradpU10=0.0;
    	gradpU16=0.0;
    	gradpU18=0.0;
    	
    	gradmuU2=0.0;
    	gradmuU8=0.0;
    	gradmuU10=0.0;
    	gradmuU16=0.0;
    	gradmuU18=0.0;
    	
   

    }
    
    if(xk==Lx-1 )
    {
    	gradrhoU1=0.0;
    	gradrhoU7=0.0;
    	gradrhoU9=0.0;
    	gradrhoU15=0.0;
    	gradrhoU17=0.0;
    	
    	gradCU1=0.0;
    	gradCU7=0.0;
    	gradCU9=0.0;
    	gradCU15=0.0;
    	gradCU17=0.0;
    	
    	gradpU1=0.0;
    	gradpU7=0.0;
    	gradpU9=0.0;
    	gradpU15=0.0;
    	gradpU17=0.0;
    	
    	gradmuU1=0.0;
    	gradmuU7=0.0;
    	gradmuU9=0.0;
    	gradmuU15=0.0;
    	gradmuU17=0.0;

    }
    
    if(zk==0 )
    {
    	gradrhoU6=gradrhoU5;
    	gradrhoU13=gradrhoU11;
    	gradrhoU14=gradrhoU12;
    	gradrhoU17=gradrhoU15;
    	gradrhoU18=gradrhoU16;
    	
    	gradCU6=gradCU5;
    	gradCU13=gradCU11;
    	gradCU14=gradCU12;
    	gradCU17=gradCU15;
    	gradCU18=gradCU16;
    	
    	gradpU6=gradpU5;
    	gradpU13=gradpU11;
    	gradpU14=gradpU12;
    	gradpU17=gradpU15;
    	gradpU18=gradpU16;
    	
    	gradmuU6=gradmuU5;
    	gradmuU13=gradmuU11;
    	gradmuU14=gradmuU12;
    	gradmuU17=gradmuU15;
    	gradmuU18=gradmuU16;

    }
    
    if(zk==Lz-1 )
    {
    	gradrhoU5=gradrhoU6;
    	gradrhoU11=gradrhoU13;
    	gradrhoU12=gradrhoU14;
    	gradrhoU15=gradrhoU17;
    	gradrhoU16=gradrhoU18;
    	
    	gradCU5=gradCU6;
    	gradCU11=gradCU13;
    	gradCU12=gradCU14;
    	gradCU15=gradCU17;
    	gradCU16=gradCU18;
    	
    	gradpU5=gradpU6;
    	gradpU11=gradpU13;
    	gradpU12=gradpU14;
    	gradpU15=gradpU17;
    	gradpU16=gradpU18;
    	
    	gradmuU5=gradmuU6;
    	gradmuU11=gradmuU13;
    	gradmuU12=gradmuU14;
    	gradmuU15=gradmuU17;
    	gradmuU16=gradmuU18;

    }
    
    if(yk==0 )
    {
    	gradrhoU4=gradrhoU3;
    	gradrhoU9=gradrhoU7;
    	gradrhoU10=gradrhoU8;
    	gradrhoU12=gradrhoU11;
    	gradrhoU14=gradrhoU13;
    	
    	gradCU4=gradCU3;
    	gradCU9=gradCU7;
    	gradCU10=gradCU8;
    	gradCU12=gradCU11;
    	gradCU14=gradCU13;
    	
    	gradpU4=gradpU3;
    	gradpU9=gradpU7;
    	gradpU10=gradpU8;
    	gradpU12=gradpU11;
    	gradpU14=gradpU13;
    	
    	gradmuU4=gradmuU3;
    	gradmuU9=gradmuU7;
    	gradmuU10=gradmuU8;
    	gradmuU12=gradmuU11;
    	gradmuU14=gradmuU13;
    	
    	

    }
    
    if(yk==Ly-1 )
    {
    	gradrhoU3=gradrhoU4;
    	gradrhoU7=gradrhoU9;
    	gradrhoU8=gradrhoU10;
    	gradrhoU11=gradrhoU12;
    	gradrhoU13=gradrhoU14;
    	
    	gradCU3=gradCU4;
    	gradCU7=gradCU9;
    	gradCU8=gradCU10;
    	gradCU11=gradCU12;
    	gradCU13=gradCU14;
    	
    	gradpU3=gradpU4;
    	gradpU7=gradpU9;
    	gradpU8=gradpU10;
    	gradpU11=gradpU12;
    	gradpU13=gradpU14;
    	
    	gradmuU3=gradmuU4;
    	gradmuU7=gradmuU9;
    	gradmuU8=gradmuU10;
    	gradmuU11=gradmuU12;
    	gradmuU13=gradmuU14;
    	
    	

    }
    
    
    }
  
   	
    // Work out x and y derivatives
    		if(dimensions==2)
    		{
    		gradrhoUx=1.0/3.0*(gradrhoU1-gradrhoU2)+1.0/12.0*(gradrhoU7-gradrhoU8+gradrhoU9-gradrhoU10);
    		gradrhoUy=1.0/3.0*(gradrhoU3-gradrhoU4)+1.0/12.0*(gradrhoU7+gradrhoU8-gradrhoU9-gradrhoU10);
    		gradrhoUz=0.0;
    		
    		
    		gradCUx=1.0/3.0*(gradCU1-gradCU2)+1.0/12.0*(gradCU7-gradCU8+gradCU9-gradCU10);
    		gradCUy=1.0/3.0*(gradCU3-gradCU4)+1.0/12.0*(gradCU7+gradCU8-gradCU9-gradCU10);
    		gradCUz=0.0;
    		

    		gradmuUx=1.0/3.0*(gradmuU1-gradmuU2)+1.0/12.0*(gradmuU7-gradmuU8+gradmuU9-gradmuU10);
    		gradmuUy=1.0/3.0*(gradmuU3-gradmuU4)+1.0/12.0*(gradmuU7+gradmuU8-gradmuU9-gradmuU10);
    		gradmuUz=0.0;
    		
    		gradpUx=1.0/3.0*(gradpU1-gradpU2)+1.0/12.0*(gradpU7-gradpU8+gradpU9-gradpU10);
    		gradpUy=1.0/3.0*(gradpU3-gradpU4)+1.0/12.0*(gradpU7+gradpU8-gradpU9-gradpU10);
    		gradpUz=0.0;
    		
    		}
    		
    		if (dimensions==3)
    		{
    		
    		gradrhoUx=1.0/6.0*(gradrhoU1-gradrhoU2)+1.0/12.0*(gradrhoU7-gradrhoU8+gradrhoU9-gradrhoU10+gradrhoU15+gradrhoU17-gradrhoU16-gradrhoU18);
    		gradrhoUy=1.0/6.0*(gradrhoU3-gradrhoU4)+1.0/12.0*(gradrhoU7+gradrhoU8-gradrhoU9-gradrhoU10+gradrhoU11+gradrhoU13-gradrhoU12-gradrhoU14);
    		gradrhoUz=1.0/6.0*(gradrhoU5-gradrhoU6)+1.0/12.0*(gradrhoU11+gradrhoU12-gradrhoU13-gradrhoU14+gradrhoU16+gradrhoU15-gradrhoU17-gradrhoU18);
    		
    		gradCUx=1.0/6.0*(gradCU1-gradCU2)+1.0/12.0*(gradCU7-gradCU8+gradCU9-gradCU10+gradCU15+gradCU17-gradCU16-gradCU18);
    		gradCUy=1.0/6.0*(gradCU3-gradCU4)+1.0/12.0*(gradCU7+gradCU8-gradCU9-gradCU10+gradCU11+gradCU13-gradCU12-gradCU14);
    		gradCUz=1.0/6.0*(gradCU5-gradCU6)+1.0/12.0*(gradCU11+gradCU12-gradCU13-gradCU14+gradCU16+gradCU15-gradCU17-gradCU18);
		
			gradmuUx=1.0/6.0*(gradmuU1-gradmuU2)+1.0/12.0*(gradmuU7-gradmuU8+gradmuU9-gradmuU10+gradmuU15+gradmuU17-gradmuU16-gradmuU18);
    		gradmuUy=1.0/6.0*(gradmuU3-gradmuU4)+1.0/12.0*(gradmuU7+gradmuU8-gradmuU9-gradmuU10+gradmuU11+gradmuU13-gradmuU12-gradmuU14);
    		gradmuUz=1.0/6.0*(gradmuU5-gradmuU6)+1.0/12.0*(gradmuU11+gradmuU12-gradmuU13-gradmuU14+gradmuU16+gradmuU15-gradmuU17-gradmuU18);
		
			gradpUx=1.0/6.0*(gradpU1-gradpU2)+1.0/12.0*(gradpU7-gradpU8+gradpU9-gradpU10+gradpU15+gradpU17-gradpU16-gradpU18);
    		gradpUy=1.0/6.0*(gradpU3-gradpU4)+1.0/12.0*(gradpU7+gradpU8-gradpU9-gradpU10+gradpU11+gradpU13-gradpU12-gradpU14);
    		gradpUz=1.0/6.0*(gradpU5-gradpU6)+1.0/12.0*(gradpU11+gradpU12-gradpU13-gradpU14+gradpU16+gradpU15-gradpU17-gradpU18);
    		
    		}
	
}
