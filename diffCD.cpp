//Computes differentials using second order central difference scheme

#include "wet.h"

void wet::diffCD()
{
		//dC=Wc*(C[k]-C[k]*C[k]);
		


			// First calculate Directional derivatives 
  if(mask[k]==0 || mask[k]==2)
			{


			//2D derivatives
			gradrhoC1=0.5*(rho[d[0]]-rho[d[1]])/dt;
			gradrhoC2=0.5*(rho[d[1]]-rho[d[0]])/dt;
    		gradrhoC3=0.5*(rho[d[2]]-rho[d[3]])/dt;
    		gradrhoC4=0.5*(rho[d[3]]-rho[d[2]])/dt;
    		gradrhoC7=0.5*(rho[d[6]]-rho[d[9]])/dt;
    		gradrhoC8=0.5*(rho[d[7]]-rho[d[8]])/dt;
    		gradrhoC9=0.5*(rho[d[8]]-rho[d[7]])/dt;
    		gradrhoC10=0.5*(rho[d[9]]-rho[d[6]])/dt;

    		gradCC1=0.5*(C[d[0]]-C[d[1]])/dt;
			gradCC2=0.5*(C[d[1]]-C[d[0]])/dt;
    		gradCC3=0.5*(C[d[2]]-C[d[3]])/dt;
    		gradCC4=0.5*(C[d[3]]-C[d[2]])/dt;
    		gradCC7=0.5*(C[d[6]]-C[d[9]])/dt;
    		gradCC8=0.5*(C[d[7]]-C[d[8]])/dt;
    		gradCC9=0.5*(C[d[8]]-C[d[7]])/dt;
    		gradCC10=0.5*(C[d[9]]-C[d[6]])/dt;
    	
    		gradmuC1=0.5*(mu[d[0]]-mu[d[1]])/dt;
			gradmuC2=0.5*(mu[d[1]]-mu[d[0]])/dt;
    		gradmuC3=0.5*(mu[d[2]]-mu[d[3]])/dt;
    		gradmuC4=0.5*(mu[d[3]]-mu[d[2]])/dt;
    		gradmuC7=0.5*(mu[d[6]]-mu[d[9]])/dt;
    		gradmuC8=0.5*(mu[d[7]]-mu[d[8]])/dt;
    		gradmuC9=0.5*(mu[d[8]]-mu[d[7]])/dt;
    		gradmuC10=0.5*(mu[d[9]]-mu[d[6]])/dt;
    	
    		gradpC1=0.5*(p[d[0]]-p[d[1]])/dt;
			gradpC2=0.5*(p[d[1]]-p[d[0]])/dt;
    		gradpC3=0.5*(p[d[2]]-p[d[3]])/dt;
    		gradpC4=0.5*(p[d[3]]-p[d[2]])/dt;
    		gradpC7=0.5*(p[d[6]]-p[d[9]])/dt;
    		gradpC8=0.5*(p[d[7]]-p[d[8]])/dt;
    		gradpC9=0.5*(p[d[8]]-p[d[7]])/dt;
    		gradpC10=0.5*(p[d[9]]-p[d[6]])/dt;
    		
	

    		//3D differentials
    gradrhoC5=0.5*(rho[d[4]]-rho[d[5]])/dt;
    gradrhoC6=0.5*(rho[d[5]]-rho[d[4]])/dt;
    gradrhoC11=0.5*(rho[d[10]]-rho[d[13]])/dt;
    gradrhoC12=0.5*(rho[d[11]]-rho[d[12]])/dt;
    gradrhoC13=0.5*(rho[d[12]]-rho[d[11]])/dt;
    gradrhoC14=0.5*(rho[d[13]]-rho[d[10]])/dt;
    gradrhoC15=0.5*(rho[d[14]]-rho[d[17]])/dt;
    gradrhoC16=0.5*(rho[d[15]]-rho[d[16]])/dt;
    gradrhoC17=0.5*(rho[d[16]]-rho[d[15]])/dt;
    gradrhoC18=0.5*(rho[d[17]]-rho[d[14]])/dt;
    
    gradCC5=0.5*(C[d[4]]-C[d[5]])/dt;
    gradCC6=0.5*(C[d[5]]-C[d[4]])/dt;
    gradCC11=0.5*(C[d[10]]-C[d[13]])/dt;
    gradCC12=0.5*(C[d[11]]-C[d[12]])/dt;
    gradCC13=0.5*(C[d[12]]-C[d[11]])/dt;
    gradCC14=0.5*(C[d[13]]-C[d[10]])/dt;
    gradCC15=0.5*(C[d[14]]-C[d[17]])/dt;
    gradCC16=0.5*(C[d[15]]-C[d[16]])/dt;
    gradCC17=0.5*(C[d[16]]-C[d[15]])/dt;
    gradCC18=0.5*(C[d[17]]-C[d[14]])/dt;
    
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
    
    gradpC5=0.5*(p[d[4]]-p[d[5]])/dt;
    gradpC6=0.5*(p[d[5]]-p[d[4]])/dt;
    gradpC11=0.5*(p[d[10]]-p[d[13]])/dt;
    gradpC12=0.5*(p[d[11]]-p[d[12]])/dt;
    gradpC13=0.5*(p[d[12]]-p[d[11]])/dt;
    gradpC14=0.5*(p[d[13]]-p[d[10]])/dt;
    gradpC15=0.5*(p[d[14]]-p[d[17]])/dt;
    gradpC16=0.5*(p[d[15]]-p[d[16]])/dt;
    gradpC17=0.5*(p[d[16]]-p[d[15]])/dt;
    gradpC18=0.5*(p[d[17]]-p[d[14]])/dt;
    

      

      
			}
    else if (mask[k]==1)
    {
    	if(mask[d[0]]==28 || mask[d[1]]==28)
    	{gradrhoC1=0.0;gradCC1=0.0;gradmuC1=0.0;gradpC1=0.0;gradrhoC2=0.0;gradCC2=0.0;gradmuC2=0.0;gradpC2=0.0;}
    	else
    	{			
    		gradrhoC1=0.5*(rho[d[0]]-rho[d[1]])/dt;
    		gradCC1=0.5*(C[d[0]]-C[d[1]])/dt;
    		gradmuC1=0.5*(mu[d[0]]-mu[d[1]])/dt;
    		gradpC1=0.5*(p[d[0]]-p[d[1]])/dt;
    		
    		gradrhoC2=0.5*(rho[d[1]]-rho[d[0]])/dt;
    		gradCC2=0.5*(C[d[1]]-C[d[0]])/dt;
    		gradmuC2=0.5*(mu[d[1]]-mu[d[0]])/dt;
    		gradpC2=0.5*(p[d[1]]-p[d[0]])/dt;

		}
    
    	/*
    	if(mask[d[1]]==28)
    	{gradrhoC2=0.0;gradCC2=0.0;gradmuC2=0.0;gradpC2=0.0;gradrhoC1=0.0;gradCC1=0.0;gradmuC1=0.0;gradpC1=0.0;}
    	else
    	{			
    		gradrhoC2=0.5*(rho[d[1]]-rho[d[0]])/dt;
    		gradCC2=0.5*(C[d[1]]-C[d[0]])/dt;
    		gradmuC2=0.5*(mu[d[1]]-mu[d[0]])/dt;
    		gradpC2=0.5*(p[d[1]]-p[d[0]])/dt;
    		
    		gradrhoC1=0.5*(rho[d[0]]-rho[d[1]])/dt;
    		gradCC1=0.5*(C[d[0]]-C[d[1]])/dt;
    		gradmuC1=0.5*(mu[d[0]]-mu[d[1]])/dt;
    		gradpC1=0.5*(p[d[0]]-p[d[1]])/dt;

		}
		*/
		if(mask[d[2]]==28 || mask[d[3]]==28)
    	{gradrhoC3=0.0;gradCC3=0.0;gradmuC3=0.0;gradpC3=0.0;gradrhoC4=0.0;gradCC4=0.0;gradmuC4=0.0;gradpC4=0.0;}
    	else
    	{			
    		gradrhoC3=0.5*(rho[d[2]]-rho[d[3]])/dt;
    		gradCC3=0.5*(C[d[2]]-C[d[3]])/dt;
    		gradmuC3=0.5*(mu[d[2]]-mu[d[3]])/dt;
    		gradpC3=0.5*(p[d[2]]-p[d[3]])/dt;
    		
    		gradrhoC4=0.5*(rho[d[3]]-rho[d[2]])/dt;
    		gradCC4=0.5*(C[d[3]]-C[d[2]])/dt;
    		gradmuC4=0.5*(mu[d[3]]-mu[d[2]])/dt;
    		gradpC4=0.5*(p[d[3]]-p[d[2]])/dt;

		}
		
		/*
		if(mask[d[3]]==28)
    	{gradrhoC4=0.0;gradCC4=0.0;gradmuC4=0.0;gradpC4=0.0;gradrhoC3=0.0;gradCC3=0.0;gradmuC3=0.0;gradpC3=0.0;}
    	else
    	{			
    		gradrhoC4=0.5*(rho[d[3]]-rho[d[2]])/dt;
    		gradCC4=0.5*(C[d[3]]-C[d[2]])/dt;
    		gradmuC4=0.5*(mu[d[3]]-mu[d[2]])/dt;
    		gradpC4=0.5*(p[d[3]]-p[d[2]])/dt;
    		
    		gradrhoC3=0.5*(rho[d[2]]-rho[d[3]])/dt;
    		gradCC3=0.5*(C[d[2]]-C[d[3]])/dt;
    		gradmuC3=0.5*(mu[d[2]]-mu[d[3]])/dt;
    		gradpC3=0.5*(p[d[2]]-p[d[3]])/dt;
    		

		}
		*/
		
		if(mask[d[4]]==28 || mask[d[5]]==28)
    	{gradrhoC5=0.0;gradCC5=0.0;gradmuC5=0.0;gradpC5=0.0;gradrhoC6=0.0;gradCC6=0.0;gradmuC6=0.0;gradpC6=0.0;}
    	else
    	{			
    		gradrhoC5=0.5*(rho[d[4]]-rho[d[5]])/dt;
    		gradCC5=0.5*(C[d[4]]-C[d[5]])/dt;
    		gradmuC5=0.5*(mu[d[4]]-mu[d[5]])/dt;
    		gradpC5=0.5*(p[d[4]]-p[d[5]])/dt;
    		
    		gradrhoC6=0.5*(rho[d[5]]-rho[d[4]])/dt;
    		gradCC6=0.5*(C[d[5]]-C[d[4]])/dt;
    		gradmuC6=0.5*(mu[d[5]]-mu[d[4]])/dt;
    		gradpC6=0.5*(p[d[5]]-p[d[4]])/dt;

		}
		
		/*
		if(mask[d[5]]==28)
    	{gradrhoC6=0.0;gradCC6=0.0;gradmuC6=0.0;gradpC6=0.0;gradrhoC5=0.0;gradCC5=0.0;gradmuC5=0.0;gradpC5=0.0;}
    	else
    	{			
    		gradrhoC6=0.5*(rho[d[5]]-rho[d[4]])/dt;
    		gradCC6=0.5*(C[d[5]]-C[d[4]])/dt;
    		gradmuC6=0.5*(mu[d[5]]-mu[d[4]])/dt;
    		gradpC6=0.5*(p[d[5]]-p[d[4]])/dt;
    		
    		gradrhoC5=0.5*(rho[d[4]]-rho[d[5]])/dt;
    		gradCC5=0.5*(C[d[4]]-C[d[5]])/dt;
    		gradmuC5=0.5*(mu[d[4]]-mu[d[5]])/dt;
    		gradpC5=0.5*(p[d[4]]-p[d[5]])/dt;

		}
    	*/
    
    	if(mask[d[6]]==28 || mask[d[9]]==28)
    	{gradrhoC7=0.0;gradCC7=0.0;gradmuC7=0.0;gradpC7=0.0;gradrhoC10=0.0;gradCC10=0.0;gradmuC10=0.0;gradpC10=0.0;}
    	else
    	{			
    		gradrhoC7=0.5*(rho[d[6]]-rho[d[9]])/dt;
    		gradCC7=0.5*(C[d[6]]-C[d[9]])/dt;
    		gradmuC7=0.5*(mu[d[6]]-mu[d[9]])/dt;
    		gradpC7=0.5*(p[d[6]]-p[d[9]])/dt;
    		
    		gradrhoC10=0.5*(rho[d[9]]-rho[d[6]])/dt;
    		gradCC10=0.5*(C[d[9]]-C[d[6]])/dt;
    		gradmuC10=0.5*(mu[d[9]]-mu[d[6]])/dt;
    		gradpC10=0.5*(p[d[9]]-p[d[6]])/dt;

		}
		
		if(mask[d[7]]==28 || mask[d[8]]==28)
    	{gradrhoC8=0.0;gradCC8=0.0;gradmuC8=0.0;gradpC8=0.0;
    	gradrhoC9=0.0;gradCC9=0.0;gradmuC9=0.0;gradpC9=0.0;}
    	else
    	{			
    		gradrhoC8=0.5*(rho[d[7]]-rho[d[8]])/dt;
    		gradCC8=0.5*(C[d[7]]-C[d[8]])/dt;
    		gradmuC8=0.5*(mu[d[7]]-mu[d[8]])/dt;
    		gradpC8=0.5*(p[d[7]]-p[d[8]])/dt;
    		
    		gradrhoC9=0.5*(rho[d[8]]-rho[d[7]])/dt;
    		gradCC9=0.5*(C[d[8]]-C[d[7]])/dt;
    		gradmuC9=0.5*(mu[d[8]]-mu[d[7]])/dt;
    		gradpC9=0.5*(p[d[8]]-p[d[7]])/dt;

		}
		
		/*
		if(mask[d[8]]==28 || mask[d2[8]]==2)
    	{gradrhoC9=0.0;gradCC9=0.0;gradmuC9=0.0;gradpC9=0.0;gradrhoC8=0.0;gradCC8=0.0;gradmuC8=0.0;gradpC8=0.0;}
    	else
    	{			
    		gradrhoC9=0.5*(rho[d[8]]-rho[d[7]])/dt;
    		gradCC9=0.5*(C[d[8]]-C[d[7]])/dt;
    		gradmuC9=0.5*(mu[d[8]]-mu[d[7]])/dt;
    		gradpC9=0.5*(p[d[8]]-p[d[7]])/dt;
    		
    		gradrhoC8=0.5*(rho[d[7]]-rho[d[8]])/dt;
    		gradCC8=0.5*(C[d[7]]-C[d[8]])/dt;
    		gradmuC8=0.5*(mu[d[7]]-mu[d[8]])/dt;
    		gradpC8=0.5*(p[d[7]]-p[d[8]])/dt;

		}
		*/
		/*
		if(mask[d[9]]==28 || mask[d2[9]]==2)
    	{gradrhoC10=0.0;gradCC10=0.0;gradmuC10=0.0;gradpC10=0.0;gradrhoC7=0.0;gradCC7=0.0;gradmuC7=0.0;gradpC7=0.0;}
    	else
    	{			
    		gradrhoC10=0.5*(rho[d[9]]-rho[d[6]])/dt;
    		gradCC10=0.5*(C[d[9]]-C[d[6]])/dt;
    		gradmuC10=0.5*(mu[d[9]]-mu[d[6]])/dt;
    		gradpC10=0.5*(p[d[9]]-p[d[6]])/dt;
    		
    		gradrhoC7=0.5*(rho[d[6]]-rho[d[9]])/dt;
    		gradCC7=0.5*(C[d[6]]-C[d[9]])/dt;
    		gradmuC7=0.5*(mu[d[6]]-mu[d[9]])/dt;
    		gradpC7=0.5*(p[d[6]]-p[d[9]])/dt;

		}
		*/
		if(mask[d[10]]==28 || mask[d[13]]==28)
    	{gradrhoC11=0.0;gradCC11=0.0;gradmuC11=0.0;gradpC11=0.0;
    	gradrhoC14=0.0;gradCC14=0.0;gradmuC14=0.0;gradpC14=0.0;}
    	else
    	{			
    		gradrhoC11=0.5*(rho[d[10]]-rho[d[13]])/dt;
    		gradCC11=0.5*(C[d[10]]-C[d[13]])/dt;
    		gradmuC11=0.5*(mu[d[10]]-mu[d[13]])/dt;
    		gradpC11=0.5*(p[d[10]]-p[d[13]])/dt;
    		
    		gradrhoC14=0.5*(rho[d[13]]-rho[d[10]])/dt;
    		gradCC14=0.5*(C[d[13]]-C[d[10]])/dt;
    		gradmuC14=0.5*(mu[d[13]]-mu[d[10]])/dt;
    		gradpC14=0.5*(p[d[13]]-p[d[10]])/dt;

		}
		
		if(mask[d[11]]==28 || mask[d[12]]==28)
    	{gradrhoC12=0.0;gradCC12=0.0;gradmuC12=0.0;gradpC12=0.0;
    	gradrhoC13=0.0;gradCC13=0.0;gradmuC13=0.0;gradpC13=0.0;}
    	else
    	{			
    		gradrhoC12=0.5*(rho[d[11]]-rho[d[12]])/dt;
    		gradCC12=0.5*(C[d[11]]-C[d[12]])/dt;
    		gradmuC12=0.5*(mu[d[11]]-mu[d[12]])/dt;
    		gradpC12=0.5*(p[d[11]]-p[d[12]])/dt;
    		
    		gradrhoC13=0.5*(rho[d[12]]-rho[d[11]])/dt;
    		gradCC13=0.5*(C[d[12]]-C[d[11]])/dt;
    		gradmuC13=0.5*(mu[d[12]]-mu[d[11]])/dt;
    		gradpC13=0.5*(p[d[12]]-p[d[11]])/dt;

		}
		/*
		if(mask[d[12]]==28 || mask[d2[12]]==2)
    	{gradrhoC13=0.0;gradCC13=0.0;gradmuC13=0.0;gradpC13=0.0;}
    	else
    	{			
    		gradrhoC13=0.5*(rho[d[12]]-rho[d[11]])/dt;
    		gradCC13=0.5*(C[d[12]]-C[d[11]])/dt;
    		gradmuC13=0.5*(mu[d[12]]-mu[d[11]])/dt;
    		gradpC13=0.5*(p[d[12]]-p[d[11]])/dt;

		}
		*/
		/*
		if(mask[d[13]]==28 || mask[d2[13]]==2)
    	{gradrhoC14=0.0;gradCC14=0.0;gradmuC14=0.0;gradpC14=0.0;}
    	else
    	{			
    		gradrhoC14=0.5*(rho[d[13]]-rho[d[10]])/dt;
    		gradCC14=0.5*(C[d[13]]-C[d[10]])/dt;
    		gradmuC14=0.5*(mu[d[13]]-mu[d[10]])/dt;
    		gradpC14=0.5*(p[d[13]]-p[d[10]])/dt;

		}
		*/
		if(mask[d[14]]==28 || mask[d[17]]==28)
    	{gradrhoC15=0.0;gradCC15=0.0;gradmuC15=0.0;gradpC15=0.0;
    	gradrhoC18=0.0;gradCC18=0.0;gradmuC18=0.0;gradpC18=0.0;}
    	else
    	{			
    		gradrhoC15=0.5*(rho[d[14]]-rho[d[17]])/dt;
    		gradCC15=0.5*(C[d[14]]-C[d[17]])/dt;
    		gradmuC15=0.5*(mu[d[14]]-mu[d[17]])/dt;
    		gradpC15=0.5*(p[d[14]]-p[d[17]])/dt;
    		
    		gradrhoC18=0.5*(rho[d[17]]-rho[d[14]])/dt;
    		gradCC18=0.5*(C[d[17]]-C[d[14]])/dt;
    		gradmuC18=0.5*(mu[d[17]]-mu[d[14]])/dt;
    		gradpC18=0.5*(p[d[17]]-p[d[14]])/dt;

		}
		
		if(mask[d[15]]==28 || mask[d[16]]==28)
    	{gradrhoC16=0.0;gradCC16=0.0;gradmuC16=0.0;gradpC16=0.0;
    	gradrhoC17=0.0;gradCC17=0.0;gradmuC17=0.0;gradpC17=0.0;}
    	else
    	{			
    		gradrhoC16=0.5*(rho[d[15]]-rho[d[16]])/dt;
    		gradCC16=0.5*(C[d[15]]-C[d[16]])/dt;
    		gradmuC16=0.5*(mu[d[15]]-mu[d[16]])/dt;
    		gradpC16=0.5*(p[d[15]]-p[d[16]])/dt;
    		
    		gradrhoC17=0.5*(rho[d[16]]-rho[d[15]])/dt;
    		gradCC17=0.5*(C[d[16]]-C[d[15]])/dt;
    		gradmuC17=0.5*(mu[d[16]]-mu[d[15]])/dt;
    		gradpC17=0.5*(p[d[16]]-p[d[15]])/dt;

		}
		/*
		if(mask[d[16]]==28 || mask[d2[16]]==2 )
    	{gradrhoC17=0.0;gradCC17=0.0;gradmuC17=0.0;gradpC17=0.0;}
    	else
    	{			
    		gradrhoC17=0.5*(rho[d[16]]-rho[d[15]])/dt;
    		gradCC17=0.5*(C[d[16]]-C[d[15]])/dt;
    		gradmuC17=0.5*(mu[d[16]]-mu[d[15]])/dt;
    		gradpC17=0.5*(p[d[16]]-p[d[15]])/dt;

		}
		*/
		/*
		if(mask[d[17]]==28 || mask[d2[17]]==2)
    	{gradrhoC18=0.0;gradCC18=0.0;gradmuC18=0.0;gradpC18=0.0;}
    	else
    	{			
    		gradrhoC18=0.5*(rho[d[17]]-rho[d[14]])/dt;
    		gradCC18=0.5*(C[d[17]]-C[d[14]])/dt;
    		gradmuC18=0.5*(mu[d[17]]-mu[d[14]])/dt;
    		gradpC18=0.5*(p[d[17]]-p[d[14]])/dt;

		}
		*/
		/*
		if(mask[d[3]]==28 && mask[d[8]]==28)
		{gradrhoC10=0.0;gradCC10=0.0;gradmuC10=0.0;gradpC10=0.0;}
		
		if(mask[d[3]]==28 && mask[d[9]]==28)
		{gradrhoC9=0.0;gradCC9=0.0;gradmuC9=0.0;gradpC9=0.0;}
		
		if(mask[d[2]]==28 && mask[d[6]]==28)
		{gradrhoC8=0.0;gradCC8=0.0;gradmuC8=0.0;gradpC8=0.0;}
		
		if(mask[d[2]]==28 && mask[d[7]]==28)
		{gradrhoC7=0.0;gradCC7=0.0;gradmuC7=0.0;gradpC7=0.0;}
		
		if(mask[d[1]]==28 && mask[d[7]]==28)
		{gradrhoC10=0.0;gradCC10=0.0;gradmuC10=0.0;gradpC10=0.0;}
		
		if(mask[d[1]]==28 && mask[d[9]]==28)
		{gradrhoC8=0.0;gradCC8=0.0;gradmuC8=0.0;gradpC8=0.0;}
		
		if(mask[d[0]]==28 && mask[d[6]]==28)
		{gradrhoC9=0.0;gradCC9=0.0;gradmuC9=0.0;gradpC9=0.0;}
		
		if(mask[d[3]]==28 && mask[d[8]]==28)
		{gradrhoC7=0.0;gradCC7=0.0;gradmuC7=0.0;gradpC7=0.0;}
		*/
    
    }
    
    	else if (mask[k]==3 )
    {
    	if(mask[d[0]]==28 || mask[d[1]]==28)
    	{gradrhoC1=0.0;gradCC1=0.0;gradmuC1=0.0;gradpC1=0.0;gradrhoC2=0.0;gradCC2=0.0;gradmuC2=0.0;gradpC2=0.0;}
    	else
    	{			
    		gradrhoC1=0.5*(rho[d[0]]-rho[d[1]])/dt;
    		gradCC1=0.5*(C[d[0]]-C[d[1]])/dt;
    		gradmuC1=0.5*(mu[d[0]]-mu[d[1]])/dt;
    		gradpC1=0.5*(p[d[0]]-p[d[1]])/dt;
    		
    		gradrhoC2=0.5*(rho[d[1]]-rho[d[0]])/dt;
    		gradCC2=0.5*(C[d[1]]-C[d[0]])/dt;
    		gradmuC2=0.5*(mu[d[1]]-mu[d[0]])/dt;
    		gradpC2=0.5*(p[d[1]]-p[d[0]])/dt;

		}
    
    	
		if(mask[d[2]]==28 || mask[d[3]]==28)
    	{gradrhoC3=0.0;gradCC3=0.0;gradmuC3=0.0;gradpC3=0.0;gradrhoC4=0.0;gradCC4=0.0;gradmuC4=0.0;gradpC4=0.0;}
    	else
    	{			
    		gradrhoC3=0.5*(rho[d[2]]-rho[d[3]])/dt;
    		gradCC3=0.5*(C[d[2]]-C[d[3]])/dt;
    		gradmuC3=0.5*(mu[d[2]]-mu[d[3]])/dt;
    		gradpC3=0.5*(p[d[2]]-p[d[3]])/dt;
    		
    		gradrhoC4=0.5*(rho[d[3]]-rho[d[2]])/dt;
    		gradCC4=0.5*(C[d[3]]-C[d[2]])/dt;
    		gradmuC4=0.5*(mu[d[3]]-mu[d[2]])/dt;
    		gradpC4=0.5*(p[d[3]]-p[d[2]])/dt;

		}
		
		
		
		if(mask[d[4]]==28 || mask[d[5]]==28)
    	{gradrhoC5=0.0;gradCC5=0.0;gradmuC5=0.0;gradpC5=0.0;gradrhoC6=0.0;gradCC6=0.0;gradmuC6=0.0;gradpC6=0.0;}
    	else
    	{			
    		gradrhoC5=0.5*(rho[d[4]]-rho[d[5]])/dt;
    		gradCC5=0.5*(C[d[4]]-C[d[5]])/dt;
    		gradmuC5=0.5*(mu[d[4]]-mu[d[5]])/dt;
    		gradpC5=0.5*(p[d[4]]-p[d[5]])/dt;
    		
    		gradrhoC6=0.5*(rho[d[5]]-rho[d[4]])/dt;
    		gradCC6=0.5*(C[d[5]]-C[d[4]])/dt;
    		gradmuC6=0.5*(mu[d[5]]-mu[d[4]])/dt;
    		gradpC6=0.5*(p[d[5]]-p[d[4]])/dt;

		}
		
    
    	if(mask[d[6]]==28 || mask[d[6]]==3 || mask[d[9]]==28 || mask[d[9]]==3)
    	{gradrhoC7=0.0;gradCC7=0.0;gradmuC7=0.0;gradpC7=0.0;gradrhoC10=0.0;gradCC10=0.0;gradmuC10=0.0;gradpC10=0.0;}
    	else
    	{			
    		gradrhoC7=0.5*(rho[d[6]]-rho[d[9]])/dt;
    		gradCC7=0.5*(C[d[6]]-C[d[9]])/dt;
    		gradmuC7=0.5*(mu[d[6]]-mu[d[9]])/dt;
    		gradpC7=0.5*(p[d[6]]-p[d[9]])/dt;
    		
    		gradrhoC10=0.5*(rho[d[9]]-rho[d[6]])/dt;
    		gradCC10=0.5*(C[d[9]]-C[d[6]])/dt;
    		gradmuC10=0.5*(mu[d[9]]-mu[d[6]])/dt;
    		gradpC10=0.5*(p[d[9]]-p[d[6]])/dt;

		}
		
		if(mask[d[7]]==28 || mask[d[7]]==3 || mask[d[8]]==28 || mask[d[8]]==3)
    	{gradrhoC8=0.0;gradCC8=0.0;gradmuC8=0.0;gradpC8=0.0;
    	gradrhoC9=0.0;gradCC9=0.0;gradmuC9=0.0;gradpC9=0.0;}
    	else
    	{			
    		gradrhoC8=0.5*(rho[d[7]]-rho[d[8]])/dt;
    		gradCC8=0.5*(C[d[7]]-C[d[8]])/dt;
    		gradmuC8=0.5*(mu[d[7]]-mu[d[8]])/dt;
    		gradpC8=0.5*(p[d[7]]-p[d[8]])/dt;
    		
    		gradrhoC9=0.5*(rho[d[8]]-rho[d[7]])/dt;
    		gradCC9=0.5*(C[d[8]]-C[d[7]])/dt;
    		gradmuC9=0.5*(mu[d[8]]-mu[d[7]])/dt;
    		gradpC9=0.5*(p[d[8]]-p[d[7]])/dt;

		}
		
		/*
		if(mask[d[8]]==28 || mask[d2[8]]==2)
    	{gradrhoC9=0.0;gradCC9=0.0;gradmuC9=0.0;gradpC9=0.0;gradrhoC8=0.0;gradCC8=0.0;gradmuC8=0.0;gradpC8=0.0;}
    	else
    	{			
    		gradrhoC9=0.5*(rho[d[8]]-rho[d[7]])/dt;
    		gradCC9=0.5*(C[d[8]]-C[d[7]])/dt;
    		gradmuC9=0.5*(mu[d[8]]-mu[d[7]])/dt;
    		gradpC9=0.5*(p[d[8]]-p[d[7]])/dt;
    		
    		gradrhoC8=0.5*(rho[d[7]]-rho[d[8]])/dt;
    		gradCC8=0.5*(C[d[7]]-C[d[8]])/dt;
    		gradmuC8=0.5*(mu[d[7]]-mu[d[8]])/dt;
    		gradpC8=0.5*(p[d[7]]-p[d[8]])/dt;

		}
		*/
		/*
		if(mask[d[9]]==28 || mask[d2[9]]==2)
    	{gradrhoC10=0.0;gradCC10=0.0;gradmuC10=0.0;gradpC10=0.0;gradrhoC7=0.0;gradCC7=0.0;gradmuC7=0.0;gradpC7=0.0;}
    	else
    	{			
    		gradrhoC10=0.5*(rho[d[9]]-rho[d[6]])/dt;
    		gradCC10=0.5*(C[d[9]]-C[d[6]])/dt;
    		gradmuC10=0.5*(mu[d[9]]-mu[d[6]])/dt;
    		gradpC10=0.5*(p[d[9]]-p[d[6]])/dt;
    		
    		gradrhoC7=0.5*(rho[d[6]]-rho[d[9]])/dt;
    		gradCC7=0.5*(C[d[6]]-C[d[9]])/dt;
    		gradmuC7=0.5*(mu[d[6]]-mu[d[9]])/dt;
    		gradpC7=0.5*(p[d[6]]-p[d[9]])/dt;

		}
		*/
		if(mask[d[10]]==28 || mask[d[10]]==3 || mask[d[13]]==28 || mask[d[13]]==3)
    	{gradrhoC11=0.0;gradCC11=0.0;gradmuC11=0.0;gradpC11=0.0;
    	gradrhoC14=0.0;gradCC14=0.0;gradmuC14=0.0;gradpC14=0.0;}
    	else
    	{			
    		gradrhoC11=0.5*(rho[d[10]]-rho[d[13]])/dt;
    		gradCC11=0.5*(C[d[10]]-C[d[13]])/dt;
    		gradmuC11=0.5*(mu[d[10]]-mu[d[13]])/dt;
    		gradpC11=0.5*(p[d[10]]-p[d[13]])/dt;
    		
    		gradrhoC14=0.5*(rho[d[13]]-rho[d[10]])/dt;
    		gradCC14=0.5*(C[d[13]]-C[d[10]])/dt;
    		gradmuC14=0.5*(mu[d[13]]-mu[d[10]])/dt;
    		gradpC14=0.5*(p[d[13]]-p[d[10]])/dt;

		}
		
		if(mask[d[11]]==28 || mask[d[11]]==3 || mask[d[12]]==28 || mask[d[12]]==3)
    	{gradrhoC12=0.0;gradCC12=0.0;gradmuC12=0.0;gradpC12=0.0;
    	gradrhoC13=0.0;gradCC13=0.0;gradmuC13=0.0;gradpC13=0.0;}
    	else
    	{			
    		gradrhoC12=0.5*(rho[d[11]]-rho[d[12]])/dt;
    		gradCC12=0.5*(C[d[11]]-C[d[12]])/dt;
    		gradmuC12=0.5*(mu[d[11]]-mu[d[12]])/dt;
    		gradpC12=0.5*(p[d[11]]-p[d[12]])/dt;
    		
    		gradrhoC13=0.5*(rho[d[12]]-rho[d[11]])/dt;
    		gradCC13=0.5*(C[d[12]]-C[d[11]])/dt;
    		gradmuC13=0.5*(mu[d[12]]-mu[d[11]])/dt;
    		gradpC13=0.5*(p[d[12]]-p[d[11]])/dt;

		}
		
		if(mask[d[14]]==28 || mask[d[14]]==3 || mask[d[17]]==28 || mask[d[17]]==3)
    	{gradrhoC15=0.0;gradCC15=0.0;gradmuC15=0.0;gradpC15=0.0;
    	gradrhoC18=0.0;gradCC18=0.0;gradmuC18=0.0;gradpC18=0.0;}
    	else
    	{			
    		gradrhoC15=0.5*(rho[d[14]]-rho[d[17]])/dt;
    		gradCC15=0.5*(C[d[14]]-C[d[17]])/dt;
    		gradmuC15=0.5*(mu[d[14]]-mu[d[17]])/dt;
    		gradpC15=0.5*(p[d[14]]-p[d[17]])/dt;
    		
    		gradrhoC18=0.5*(rho[d[17]]-rho[d[14]])/dt;
    		gradCC18=0.5*(C[d[17]]-C[d[14]])/dt;
    		gradmuC18=0.5*(mu[d[17]]-mu[d[14]])/dt;
    		gradpC18=0.5*(p[d[17]]-p[d[14]])/dt;

		}
		
		if(mask[d[15]]==28 || mask[d[15]]==3 || mask[d[16]]==28 || mask[d[16]]==3)
    	{gradrhoC16=0.0;gradCC16=0.0;gradmuC16=0.0;gradpC16=0.0;
    	gradrhoC17=0.0;gradCC17=0.0;gradmuC17=0.0;gradpC17=0.0;}
    	else
    	{			
    		gradrhoC16=0.5*(rho[d[15]]-rho[d[16]])/dt;
    		gradCC16=0.5*(C[d[15]]-C[d[16]])/dt;
    		gradmuC16=0.5*(mu[d[15]]-mu[d[16]])/dt;
    		gradpC16=0.5*(p[d[15]]-p[d[16]])/dt;
    		
    		gradrhoC17=0.5*(rho[d[16]]-rho[d[15]])/dt;
    		gradCC17=0.5*(C[d[16]]-C[d[15]])/dt;
    		gradmuC17=0.5*(mu[d[16]]-mu[d[15]])/dt;
    		gradpC17=0.5*(p[d[16]]-p[d[15]])/dt;

		}
		
    
    }	
    		 
    		
    		/*
    			else if(mask[k]==1 or mask[k]==2)
			{
				gradrhoC1=0.0;
				gradrhoC2=0.0;
				gradrhoC7=0.0;
				gradrhoC8=0.0;
				gradrhoC9=0.0;
				gradrhoC10=0.0;
				gradrhoC3=0.5*(rho[d[2]]-rho[d[3]])/dt;
    			gradrhoC4=0.5*(rho[d[3]]-rho[d[2]])/dt;
    			
    			gradCC1=0.0;
				gradCC2=0.0;
				gradCC7=0.0;
				gradCC8=0.0;
				gradCC9=0.0;
				gradCC10=0.0;
				gradCC3=0.5*(C[d[2]]-C[d[3]])/dt;
    			gradCC4=0.5*(C[d[3]]-C[d[2]])/dt;
    			
    			gradmuC1=0.0;
				gradmuC2=0.0;
				gradmuC7=0.0;
				gradmuC8=0.0;
				gradmuC9=0.0;
				gradmuC10=0.0;
				gradmuC3=0.5*(mu[d[2]]-mu[d[3]])/dt;
    			gradmuC4=0.5*(mu[d[3]]-mu[d[2]])/dt;
    			
    			gradpC1=0.0;
				gradpC2=0.0;
				gradpC7=0.0;
				gradpC8=0.0;
				gradpC9=0.0;
				gradpC10=0.0;
				gradpC3=0.5*(p[d[2]]-p[d[3]])/dt;
    			gradpC4=0.5*(p[d[3]]-p[d[2]])/dt;
				
				
				
				
				
			}
			
			else if(mask[k]==3 or mask[k]==4)
			{
				
				
				gradrhoC3=0.0;
				gradrhoC4=0.0;
				gradrhoC7=0.0;
				gradrhoC8=0.0;
				gradrhoC9=0.0;
				gradrhoC10=0.0;
				gradrhoC1=0.5*(rho[d[0]]-rho[d[1]])/dt;
				gradrhoC2=0.5*(rho[d[1]]-rho[d[0]])/dt;
				
				gradCC3=0.0;
				gradCC4=0.0;
				gradCC7=0.0;
				gradCC8=0.0;
				gradCC9=0.0;
				gradCC10=0.0;
				gradCC1=0.5*(C[d[0]]-C[d[1]])/dt;
				gradCC2=0.5*(C[d[1]]-C[d[0]])/dt;
				
				gradmuC3=0.0;
				gradmuC4=0.0;
				gradmuC7=0.0;
				gradmuC8=0.0;
				gradmuC9=0.0;
				gradmuC10=0.0;
				gradmuC1=0.5*(mu[d[0]]-mu[d[1]])/dt;
				gradmuC2=0.5*(mu[d[1]]-mu[d[0]])/dt;
				
				gradpC3=0.0;
				gradpC4=0.0;
				gradpC7=0.0;
				gradpC8=0.0;
				gradpC9=0.0;
				gradpC10=0.0;
				gradpC1=0.5*(p[d[0]]-p[d[1]])/dt;
				gradpC2=0.5*(p[d[1]]-p[d[0]])/dt;
				
				
				
				
				
			}
			
			else if(mask[k]==7 or mask[k]==10)
			{
			gradrhoC1=0.5*(rho[d[0]]-rho[d[1]])/dt;
			gradrhoC2=0.5*(rho[d[1]]-rho[d[0]])/dt;
    		gradrhoC3=0.5*(rho[d[2]]-rho[d[3]])/dt;
    		gradrhoC4=0.5*(rho[d[3]]-rho[d[2]])/dt;
    		gradrhoC7=0.0;
    		gradrhoC8=0.5*(rho[d[7]]-rho[d[8]])/dt;
    		gradrhoC9=0.5*(rho[d[8]]-rho[d[7]])/dt;
    		gradrhoC10=0.0;

    		gradCC1=0.5*(C[d[0]]-C[d[1]])/dt;
			gradCC2=0.5*(C[d[1]]-C[d[0]])/dt;
    		gradCC3=0.5*(C[d[2]]-C[d[3]])/dt;
    		gradCC4=0.5*(C[d[3]]-C[d[2]])/dt;
    		gradCC7=0.0;
    		gradCC8=0.5*(C[d[7]]-C[d[8]])/dt;
    		gradCC9=0.5*(C[d[8]]-C[d[7]])/dt;
    		gradCC10=0.0;
    		
    		gradmuC1=0.5*(mu[d[0]]-mu[d[1]])/dt;
			gradmuC2=0.5*(mu[d[1]]-mu[d[0]])/dt;
    		gradmuC3=0.5*(mu[d[2]]-mu[d[3]])/dt;
    		gradmuC4=0.5*(mu[d[3]]-mu[d[2]])/dt;
    		gradmuC7=0.0;
    		gradmuC8=0.5*(mu[d[7]]-mu[d[8]])/dt;
    		gradmuC9=0.5*(mu[d[8]]-mu[d[7]])/dt;
    		gradmuC10=0.0;
    		
    		gradpC1=0.5*(p[d[0]]-p[d[1]])/dt;
			gradpC2=0.5*(p[d[1]]-p[d[0]])/dt;
    		gradpC3=0.5*(p[d[2]]-p[d[3]])/dt;
    		gradpC4=0.5*(p[d[3]]-p[d[2]])/dt;
    		gradpC7=0.0;
    		gradpC8=0.5*(p[d[7]]-p[d[8]])/dt;
    		gradpC9=0.5*(p[d[8]]-p[d[7]])/dt;
    		gradpC10=0.0;
    		}
    		
    		else if(mask[k]==8 or mask[k]==9)
			{
			gradrhoC1=0.5*(rho[d[0]]-rho[d[1]])/dt;
			gradrhoC2=0.5*(rho[d[1]]-rho[d[0]])/dt;
    		gradrhoC3=0.5*(rho[d[2]]-rho[d[3]])/dt;
    		gradrhoC4=0.5*(rho[d[3]]-rho[d[2]])/dt;
    		gradrhoC7=0.5*(rho[d[6]]-rho[d[9]])/dt;
    		gradrhoC8=0.0;
    		gradrhoC9=0.0;
    		gradrhoC10=0.5*(rho[d[9]]-rho[d[6]])/dt;

    		gradCC1=0.5*(C[d[0]]-C[d[1]])/dt;
			gradCC2=0.5*(C[d[1]]-C[d[0]])/dt;
    		gradCC3=0.5*(C[d[2]]-C[d[3]])/dt;
    		gradCC4=0.5*(C[d[3]]-C[d[2]])/dt;
    		gradCC7=0.5*(C[d[6]]-C[d[9]])/dt;
    		gradCC8=0.0;
    		gradCC9=0.0;
    		gradCC10=0.5*(C[d[9]]-C[d[6]])/dt;
    		
    		gradmuC1=0.5*(mu[d[0]]-mu[d[1]])/dt;
			gradmuC2=0.5*(mu[d[1]]-mu[d[0]])/dt;
    		gradmuC3=0.5*(mu[d[2]]-mu[d[3]])/dt;
    		gradmuC4=0.5*(mu[d[3]]-mu[d[2]])/dt;
    		gradmuC7=0.5*(mu[d[6]]-mu[d[9]])/dt;
    		gradmuC8=0.0;
    		gradmuC9=0.0;
    		gradmuC10=0.5*(mu[d[9]]-mu[d[6]])/dt;
    		
    		gradpC1=0.5*(p[d[0]]-p[d[1]])/dt;
			gradpC2=0.5*(p[d[1]]-p[d[0]])/dt;
    		gradpC3=0.5*(p[d[2]]-p[d[3]])/dt;
    		gradpC4=0.5*(p[d[3]]-p[d[2]])/dt;
    		gradpC7=0.5*(p[d[6]]-p[d[9]])/dt;
    		gradpC8=0.0;
    		gradpC9=0.0;
    		gradpC10=0.5*(p[d[9]]-p[d[6]])/dt;
    		}
    		
    		else if(mask[k]==31 or mask[k]==31 or mask[k]==41 or mask[k]==42)
			{
			gradrhoC1=0.0;
			gradrhoC2=0.0;
    		gradrhoC3=0.0;
    		gradrhoC4=0.0;
    		gradrhoC7=0.0;
    		gradrhoC8=0.0;
    		gradrhoC9=0.0;
    		gradrhoC10=0.0;

    		gradCC1=0.0;
			gradCC2=0.0;
    		gradCC3=0.0;
    		gradCC4=0.0;
    		gradCC7=0.0;
    		gradCC8=0.0;
    		gradCC9=0.0;
    		gradCC10=0.0;
    		
    		gradmuC1=0.0;
			gradmuC2=0.0;
    		gradmuC3=0.0;
    		gradmuC4=0.0;
    		gradmuC7=0.0;
    		gradmuC8=0.0;
    		gradmuC9=0.0;
    		gradmuC10=0.0;
    		
    		gradpC1=0.0;
			gradpC2=0.0;
    		gradpC3=0.0;
    		gradpC4=0.0;
    		gradpC7=0.0;
    		gradpC8=0.0;
    		gradpC9=0.0;
    		gradpC10=0.0;
    		}
    		*/
			
			
			
			
    		// Work out x and y derivatives
    		if(dimensions==2)
    		{
    		gradrhoCx=1.0/3.0*(gradrhoC1-gradrhoC2)+1.0/12.0*(gradrhoC7-gradrhoC8+gradrhoC9-gradrhoC10);
    		gradrhoCy=1.0/3.0*(gradrhoC3-gradrhoC4)+1.0/12.0*(gradrhoC7+gradrhoC8-gradrhoC9-gradrhoC10);
    		gradrhoCz=0.0;
    		
    		gradCCx=1.0/3.0*(gradCC1-gradCC2)+1.0/12.0*(gradCC7-gradCC8+gradCC9-gradCC10);
    		gradCCy=1.0/3.0*(gradCC3-gradCC4)+1.0/12.0*(gradCC7+gradCC8-gradCC9-gradCC10);
    		gradCCz=0.0;
    		
    		gradmuCx=1.0/3.0*(gradmuC1-gradmuC2)+1.0/12.0*(gradmuC7-gradmuC8+gradmuC9-gradmuC10);
    		gradmuCy=1.0/3.0*(gradmuC3-gradmuC4)+1.0/12.0*(gradmuC7+gradmuC8-gradmuC9-gradmuC10);
    		gradmuCz=0.0;
    		
    		gradpCx=1.0/3.0*(gradpC1-gradpC2)+1.0/12.0*(gradpC7-gradpC8+gradpC9-gradpC10);
    		gradpCy=1.0/3.0*(gradpC3-gradpC4)+1.0/12.0*(gradpC7+gradpC8-gradpC9-gradpC10);
    		gradpCz=0.0;
			}
			
			if (dimensions==3)
			{
			gradrhoCx=1.0/6.0*(gradrhoC1-gradrhoC2)+1.0/12.0*(gradrhoC7-gradrhoC8+gradrhoC9-gradrhoC10+gradrhoC15+gradrhoC17-gradrhoC16-gradrhoC18);
    		gradrhoCy=1.0/6.0*(gradrhoC3-gradrhoC4)+1.0/12.0*(gradrhoC7+gradrhoC8-gradrhoC9-gradrhoC10+gradrhoC11+gradrhoC13-gradrhoC12-gradrhoC14);
    		gradrhoCz=1.0/6.0*(gradrhoC5-gradrhoC6)+1.0/12.0*(gradrhoC11+gradrhoC12-gradrhoC13-gradrhoC14+gradrhoC16+gradrhoC15-gradrhoC17-gradrhoC18);
    		
    		gradCCx=1.0/6.0*(gradCC1-gradCC2)+1.0/12.0*(gradCC7-gradCC8+gradCC9-gradCC10+gradCC15+gradCC17-gradCC16-gradCC18);
    		gradCCy=1.0/6.0*(gradCC3-gradCC4)+1.0/12.0*(gradCC7+gradCC8-gradCC9-gradCC10+gradCC11+gradCC13-gradCC12-gradCC14);
    		gradCCz=1.0/6.0*(gradCC5-gradCC6)+1.0/12.0*(gradCC11+gradCC12-gradCC13-gradCC14+gradCC16+gradCC15-gradCC17-gradCC18);
		
			gradmuCx=1.0/6.0*(gradmuC1-gradmuC2)+1.0/12.0*(gradmuC7-gradmuC8+gradmuC9-gradmuC10+gradmuC15+gradmuC17-gradmuC16-gradmuC18);
    		gradmuCy=1.0/6.0*(gradmuC3-gradmuC4)+1.0/12.0*(gradmuC7+gradmuC8-gradmuC9-gradmuC10+gradmuC11+gradmuC13-gradmuC12-gradmuC14);
    		gradmuCz=1.0/6.0*(gradmuC5-gradmuC6)+1.0/12.0*(gradmuC11+gradmuC12-gradmuC13-gradmuC14+gradmuC16+gradmuC15-gradmuC17-gradmuC18);
		
			gradpCx=1.0/6.0*(gradpC1-gradpC2)+1.0/12.0*(gradpC7-gradpC8+gradpC9-gradpC10+gradpC15+gradpC17-gradpC16-gradpC18);
    		gradpCy=1.0/6.0*(gradpC3-gradpC4)+1.0/12.0*(gradpC7+gradpC8-gradpC9-gradpC10+gradpC11+gradpC13-gradpC12-gradpC14);
    		gradpCz=1.0/6.0*(gradpC5-gradpC6)+1.0/12.0*(gradpC11+gradpC12-gradpC13-gradpC14+gradpC16+gradpC15-gradpC17-gradpC18);
			}
		
		


}
