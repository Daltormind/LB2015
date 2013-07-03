//Computes the force terms for g and h

#include "wet.h"

void wet ::centralforce()
{

		//compute gamma
		 gamma0 = 4.0/9.0*(1.0-1.5*(u[k][0]*u[k][0]+u[k][1]*u[k][1]));
         gamma1 = 1.0/9.0*(1.0+3.0*u[k][0]+3.0*u[k][0]*u[k][0]-1.5*u[k][1]*u[k][1]);
         gamma3 = 1.0/9.0*(1.0+3.0*u[k][1]+3.0*u[k][1]*u[k][1]-1.5*u[k][0]*u[k][0]);
         gamma2 = 1.0/9.0*(1.0-3.0*u[k][0]+3.0*u[k][0]*u[k][0]-1.5*u[k][1]*u[k][1]);
         gamma4 = 1.0/9.0*(1.0-3.0*u[k][1]+3.0*u[k][1]*u[k][1]-1.5*u[k][0]*u[k][0]);
         gamma7 = 1.0/36.0*(1.0+3.0*(u[k][0]+u[k][1]+u[k][0]*u[k][0]+u[k][1]*u[k][1])+9.0*u[k][0]*u[k][1]);
         gamma8 = 1.0/36.0*(1.0+3.0*(-u[k][0]+u[k][1]+u[k][0]*u[k][0]+u[k][1]*u[k][1])-9.0*u[k][0]*u[k][1]);
         gamma10 = 1.0/36.0*(1.0+3.0*(-u[k][0]-u[k][1]+u[k][0]*u[k][0]+u[k][1]*u[k][1])+9.0*u[k][0]*u[k][1]);
         gamma9 = 1.0/36.0*(1.0+3.0*(u[k][0]-u[k][1]+u[k][0]*u[k][0]+u[k][1]*u[k][1])-9.0*u[k][0]*u[k][1]);
			
		 gammar0 = gamma0-4.0/9.0;
         gammar1 = gamma1-1.0/9.0;
         gammar3 = gamma3-1.0/9.0;
         gammar2 = gamma2-1.0/9.0;
         gammar4 = gamma4-1.0/9.0;
         gammar7 = gamma7-1.0/36.0;
         gammar8 = gamma8-1.0/36.0;
         gammar10 = gamma10-1.0/36.0;
         gammar9 = gamma9-1.0/36.0;
			
			gammat=gamma0+gamma1+gamma2+gamma3+gamma4+gamma7+gamma8+gamma9+gamma10;
			//if(gammat!=1){cout << gammat << endl;}
			
		
		
		 FhC1=(gradCC1-3.0*C[k]/rho[k]*(gradpC1+C[k]*gradmuC1-G[0]));
    	 FhC2=(gradCC2-3.0*C[k]/rho[k]*(gradpC2+C[k]*gradmuC2+G[0]));
    	 FhC3=(gradCC3-3.0*C[k]/rho[k]*(gradpC3+C[k]*gradmuC3-G[1]));
    	 FhC4=(gradCC4-3.0*C[k]/rho[k]*(gradpC4+C[k]*gradmuC4+G[1]));
      	 FhC7=(gradCC7-3.0*C[k]/rho[k]*(gradpC7+C[k]*gradmuC7-G[0]-G[1]));
     	 FhC8=(gradCC8-3.0*C[k]/rho[k]*(gradpC8+C[k]*gradmuC8+G[0]-G[1]));
   		 FhC9=(gradCC9-3.0*C[k]/rho[k]*(gradpC9+C[k]*gradmuC9-G[0]+G[1]));
  	     FhC10=(gradCC10-3.0*C[k]/rho[k]*(gradpC10+C[k]*gradmuC10+G[0]+G[1]));

  	     FhCx=(gradCCx-3.0*C[k]/rho[k]*(gradpCx+C[k]*gradmuCx-G[0]));
  	     FhCy=(gradCCy-3.0*C[k]/rho[k]*(gradpCy+C[k]*gradmuCy-G[1]));
		

  	     FgC1=-C[k]*gradmuC1+G[0];
    	 FgC2=-C[k]*gradmuC2-G[0];
    	 FgC3=-C[k]*gradmuC3+G[1];
    	 FgC4=-C[k]*gradmuC4-G[1];
      	 FgC7=-C[k]*gradmuC7+G[0]+G[1];
		 FgC8=-C[k]*gradmuC8-G[0]+G[1];
		 FgC9=-C[k]*gradmuC9+G[0]-G[1];
		 FgC10=-C[k]*gradmuC10-G[0]-G[1];

		 FgCx=-C[k]*gradmuCx+G[0];
		 FgCy=-C[k]*gradmuCy+G[1];
		 
		 FgrC1=gradrhoC1/3.0;
    	 FgrC2=gradrhoC2/3.0;
    	 FgrC3=gradrhoC3/3.0;
    	 FgrC4=gradrhoC4/3.0;
      	 FgrC7=gradrhoC7/3.0;
		 FgrC8=gradrhoC8/3.0;
		 FgrC9=gradrhoC9/3.0;
		 FgrC10=gradrhoC10/3.0;

		 FgrCx=gradrhoCx/3.0;
		 FgrCy=gradrhoCy/3.0;
		 
		 
		 
		 FfC1=(gradrhoC1/3.0-rho[k]*gradmuC1)*3.0;
    	 FfC2=(gradrhoC2/3.0-rho[k]*gradmuC2)*3.0;
    	 FfC3=(gradrhoC3/3.0-rho[k]*gradmuC3)*3.0;
    	 FfC4=(gradrhoC4/3.0-rho[k]*gradmuC4)*3.0;
      	 FfC7=(gradrhoC7/3.0-rho[k]*gradmuC7)*3.0;
		 FfC8=(gradrhoC8/3.0-rho[k]*gradmuC8)*3.0;
		 FfC9=(gradrhoC9/3.0-rho[k]*gradmuC9)*3.0;
		 FfC10=(gradrhoC10/3.0-rho[k]*gradmuC10)*3.0;

		 FfCx=(gradrhoCx/3.0-rho[k]*gradmuCx)*3.0;
		 FfCy=(gradrhoCy/3.0-rho[k]*gradmuCy)*3.0;
		
		
		 FhU1=(gradCU1-3.0*C[k]/rho[k]*(gradpU1+C[k]*gradmuU1-G[0]));
    	 FhU2=(gradCU2-3.0*C[k]/rho[k]*(gradpU2+C[k]*gradmuU2+G[0]));
    	 FhU3=(gradCU3-3.0*C[k]/rho[k]*(gradpU3+C[k]*gradmuU3-G[1]));
    	 FhU4=(gradCU4-3.0*C[k]/rho[k]*(gradpU4+C[k]*gradmuU4+G[1]));
      	 FhU7=(gradCU7-3.0*C[k]/rho[k]*(gradpU7+C[k]*gradmuU7-G[0]-G[1]));
     	 FhU8=(gradCU8-3.0*C[k]/rho[k]*(gradpU8+C[k]*gradmuU8+G[0]-G[1]));
   		 FhU9=(gradCU9-3.0*C[k]/rho[k]*(gradpU9+C[k]*gradmuU9-G[0]+G[1]));
  	     FhU10=(gradCU10-3.0*C[k]/rho[k]*(gradpU10+C[k]*gradmuU10+G[0]+G[1]));

  	     FhUx=(gradCUx-3.0*C[k]/rho[k]*(gradpUx+C[k]*gradmuUx-G[0]));
  	     FhUy=(gradCUy-3.0*C[k]/rho[k]*(gradpUy+C[k]*gradmuUy-G[1]));
		
  	     FgU1=-C[k]*gradmuU1+G[0];
    	 FgU2=-C[k]*gradmuU2-G[0];
    	 FgU3=-C[k]*gradmuU3+G[1];
    	 FgU4=-C[k]*gradmuU4-G[1];
      	 FgU7=-C[k]*gradmuU7+G[0]+G[1];
		 FgU8=-C[k]*gradmuU8-G[0]+G[1];
		 FgU9=-C[k]*gradmuU9+G[0]-G[1];
		 FgU10=-C[k]*gradmuU10-G[0]-G[1];

		 FgUx=-C[k]*gradmuUx+G[0];
		 FgUy=-C[k]*gradmuUy+G[1];
		 
		 FgrU1=gradrhoU1/3.0;
    	 FgrU2=gradrhoU2/3.0;
    	 FgrU3=gradrhoU3/3.0;
    	 FgrU4=gradrhoU4/3.0;
      	 FgrU7=gradrhoU7/3.0;
		 FgrU8=gradrhoU8/3.0;
		 FgrU9=gradrhoU9/3.0;
		 FgrU10=gradrhoU10/3.0;

		 FgrUx=gradrhoUx/3.0;
		 FgrUy=gradrhoUy/3.0;
		 
		 FfU1=(gradrhoU1/3.0-rho[k]*gradmuU1)*3.0;
    	 FfU2=(gradrhoU2/3.0-rho[k]*gradmuU2)*3.0;
    	 FfU3=(gradrhoU3/3.0-rho[k]*gradmuU3)*3.0;
    	 FfU4=(gradrhoU4/3.0-rho[k]*gradmuU4)*3.0;
      	 FfU7=(gradrhoU7/3.0-rho[k]*gradmuU7)*3.0;
		 FfU8=(gradrhoU8/3.0-rho[k]*gradmuU8)*3.0;
		 FfU9=(gradrhoU9/3.0-rho[k]*gradmuU9)*3.0;
		 FfU10=(gradrhoU10/3.0-rho[k]*gradmuU10)*3.0;

		 FfUx=(gradrhoUx/3.0-rho[k]*gradmuUx)*3.0;
		 FfUy=(gradrhoUy/3.0-rho[k]*gradmuUy)*3.0;

		 FgM1=0.5*(FgU1+FgC1);
		 FgM2=0.5*(FgU2+FgC2);
		 FgM3=0.5*(FgU3+FgC3);
		 FgM4=0.5*(FgU4+FgC4);
		 FgM7=0.5*(FgU7+FgC7);
		 FgM8=0.5*(FgU8+FgC8);
		 FgM9=0.5*(FgU9+FgC9);
		 FgM10=0.5*(FgU10+FgC10);
		 FgMx=0.5*(FgUx+FgCx);
		 FgMy=0.5*(FgUy+FgCy);
		 
		 FgrM1=0.5*(FgrU1+FgrC1);
		 FgrM2=0.5*(FgrU2+FgrC2);
		 FgrM3=0.5*(FgrU3+FgrC3);
		 FgrM4=0.5*(FgrU4+FgrC4);
		 FgrM7=0.5*(FgrU7+FgrC7);
		 FgrM8=0.5*(FgrU8+FgrC8);
		 FgrM9=0.5*(FgrU9+FgrC9);
		 FgrM10=0.5*(FgrU10+FgrC10);
		 FgrMx=0.5*(FgrUx+FgrCx);
		 FgrMy=0.5*(FgrUy+FgrCy);



         FhM1=0.5*(FhU1+FhC1);
		 FhM2=0.5*(FhU2+FhC2);
		 FhM3=0.5*(FhU3+FhC3);
		 FhM4=0.5*(FhU4+FhC4);
		 FhM7=0.5*(FhU7+FhC7);
		 FhM8=0.5*(FhU8+FhC8);
		 FhM9=0.5*(FhU9+FhC9);
		 FhM10=0.5*(FhU10+FhC10);
         FhMx=0.5*(FhUx+FhCx);
		 FhMy=0.5*(FhUy+FhCy);
		 
		 FfM1=0.5*(FfU1+FfC1);
		 FfM2=0.5*(FfU2+FfC2);
		 FfM3=0.5*(FfU3+FfC3);
		 FfM4=0.5*(FfU4+FfC4);
		 FfM7=0.5*(FfU7+FfC7);
		 FfM8=0.5*(FfU8+FfC8);
		 FfM9=0.5*(FfU9+FfC9);
		 FfM10=0.5*(FfU10+FfC10);
         FfMx=0.5*(FfUx+FfCx);
		 FfMy=0.5*(FfUy+FfCy);

		 gradrhoM1=0.5*(gradrhoC1+gradrhoU1);
		 gradrhoM2=0.5*(gradrhoC2+gradrhoU2);
		 gradrhoM3=0.5*(gradrhoC3+gradrhoU3);
		 gradrhoM4=0.5*(gradrhoC4+gradrhoU4);
		 gradrhoM7=0.5*(gradrhoC7+gradrhoU7);
		 gradrhoM8=0.5*(gradrhoC8+gradrhoU8);
		 gradrhoM9=0.5*(gradrhoC9+gradrhoU9);
		 gradrhoM10=0.5*(gradrhoC10+gradrhoU10);

		 gradrhoMx=0.5*(gradrhoCx+gradrhoUx);
		 gradrhoMy=0.5*(gradrhoCy+gradrhoUy);


}
