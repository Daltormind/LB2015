//Computes the force terms for g and h

#include "wet.h"

void wet ::centralforce()
{

		//compute gamma
  gamma0 = t0*(1.0 - 1.5*(ux[k]*ux[k] + uy[k]*uy[k] + uz[k]*uz[k]));
  
  gamma1 = t1*(1.0 + 3.0*ux[k] + 3.0*ux[k]*ux[k] - 1.5*uy[k]*uy[k] - 1.5*uz[k]*uz[k]);
  
  gamma3 = t1*(1.0+3.0*uy[k]+3.0*uy[k]*uy[k]-1.5*ux[k]*ux[k] - 1.5*uz[k]*uz[k]);
  
  gamma2 = t1*(1.0-3.0*ux[k]+3.0*ux[k]*ux[k]-1.5*uy[k]*uy[k] - 1.5*uz[k]*uz[k]);
  
  gamma4 = t1*(1.0-3.0*uy[k]+3.0*uy[k]*uy[k]-1.5*ux[k]*ux[k] - 1.5*uz[k]*uz[k]);
  
  gamma5 = t1*(1.0 + 3.0*uz[k] + 3.0*uz[k]*uz[k] - 1.5*uy[k]*uy[k] - 1.5*ux[k]*ux[k]);
  
  gamma6 = t1*(1.0 - 3.0*uz[k] + 3.0*uz[k]*uz[k] - 1.5*uy[k]*uy[k] - 1.5*ux[k]*ux[k]);
  
  gamma7 = t2*(1.0+3.0*(ux[k]+uy[k]+ux[k]*ux[k]+uy[k]*uy[k])+9.0*ux[k]*uy[k] - 1.5*uz[k]*uz[k]);
  
  gamma8 = t2*(1.0+3.0*(-ux[k]+uy[k]+ux[k]*ux[k]+uy[k]*uy[k])-9.0*ux[k]*uy[k] - 1.5*uz[k]*uz[k]);
  
  gamma10 = t2*(1.0+3.0*(-ux[k]-uy[k]+ux[k]*ux[k]+uy[k]*uy[k])+9.0*ux[k]*uy[k] - 1.5*uz[k]*uz[k]);
  
  gamma9 = t2*(1.0+3.0*(ux[k]-uy[k]+ux[k]*ux[k]+uy[k]*uy[k])-9.0*ux[k]*uy[k] - 1.5*uz[k]*uz[k]);
	
  gamma11 = t2*(1.0+3.0*(uy[k]+uz[k]+uy[k]*uy[k]+uz[k]*uz[k])+9.0*uy[k]*uz[k] - 1.5*ux[k]*ux[k]);

  gamma12 = t2*(1.0+3.0*(-uy[k]+uz[k]+uy[k]*uy[k]+uz[k]*uz[k])-9.0*uy[k]*uz[k] - 1.5*ux[k]*ux[k]);

  gamma13 = t2*(1.0+3.0*(uy[k]-uz[k]+uy[k]*uy[k]+uz[k]*uz[k])-9.0*uy[k]*uz[k] - 1.5*ux[k]*ux[k]);

  gamma14 = t2*(1.0+3.0*(-uy[k]-uz[k]+uy[k]*uy[k]+uz[k]*uz[k])+9.0*uy[k]*uz[k] - 1.5*ux[k]*ux[k]);

  gamma15 = t2*(1.0+3.0*(ux[k]+uz[k]+ux[k]*ux[k]+uz[k]*uz[k])+9.0*ux[k]*uz[k] - 1.5*uy[k]*uy[k]);
	
  gamma16 = t2*(1.0+3.0*(-ux[k]+uz[k]+ux[k]*ux[k]+uz[k]*uz[k])-9.0*ux[k]*uz[k] - 1.5*uy[k]*uy[k]);

  gamma17 = t2*(1.0+3.0*(ux[k]-uz[k]+ux[k]*ux[k]+uz[k]*uz[k])-9.0*ux[k]*uz[k] - 1.5*uy[k]*uy[k]);

  gamma18 = t2*(1.0+3.0*(-ux[k]-uz[k]+ux[k]*ux[k]+uz[k]*uz[k])+9.0*ux[k]*uz[k] - 1.5*uy[k]*uy[k]);
			
		 gammar0 =  gamma0-t0;
         gammar1 = gamma1-t1;
         gammar3 = gamma3-t1;
         gammar2 = gamma2-t1;
         gammar4 = gamma4-t1;
         gammar7 = gamma7-t2;
         gammar8 = gamma8-t2;
         gammar10 = gamma10-t2;
         gammar9 = gamma9-t2;
         
         gammar5=gamma5-t1;
         gammar6=gamma6-t1;
         gammar11=gamma11-t2;
         gammar12=gamma12-t2;
         gammar13=gamma13-t2;
         gammar14=gamma14-t2;
         gammar15=gamma15-t2;
         gammar16=gamma16-t2;
         gammar17=gamma17-t2;
         gammar18=gamma18-t2;
			
			//gammat=gamma0+gamma1+gamma2+gamma3+gamma4+gamma7+gamma8+gamma9+gamma10;
			//	if(gammat!=1){cout << "At k=" << k << " t="<< st << " gammat=" << gammat << endl;}
			
		
		
			FhC1=(gradCC1-3.0*C[k]/rho[k]*(gradpC1-mu[k]*gradCC1-rho[k]*G[0]));
			FhC2=(gradCC2-3.0*C[k]/rho[k]*(gradpC2-mu[k]*gradCC2+rho[k]*G[0]));
			FhC3=(gradCC3-3.0*C[k]/rho[k]*(gradpC3-mu[k]*gradCC3-rho[k]*G[1]));
			FhC4=(gradCC4-3.0*C[k]/rho[k]*(gradpC4-mu[k]*gradCC4+rho[k]*G[1]));
			FhC7=(gradCC7-3.0*C[k]/rho[k]*(gradpC7-mu[k]*gradCC7-rho[k]*(G[0]+G[1])));
			FhC8=(gradCC8-3.0*C[k]/rho[k]*(gradpC8-mu[k]*gradCC8+rho[k]*(G[0]-G[1])));
			FhC9=(gradCC9-3.0*C[k]/rho[k]*(gradpC9-mu[k]*gradCC9+rho[k]*(-G[0]+G[1])));
			FhC10=(gradCC10-3.0*C[k]/rho[k]*(gradpC10-mu[k]*gradCC10+rho[k]*(G[0]+G[1])));
			
			FhC5=(gradCC5-3.0*C[k]/rho[k]*(gradpC5-mu[k]*gradCC5-rho[k]*G[2]));
			FhC6=(gradCC6-3.0*C[k]/rho[k]*(gradpC6-mu[k]*gradCC6+rho[k]*G[2]));
			FhC11=(gradCC11-3.0*C[k]/rho[k]*(gradpC11-mu[k]*gradCC11+rho[k]*(-G[1]-G[2])));
			FhC12=(gradCC12-3.0*C[k]/rho[k]*(gradpC12-mu[k]*gradCC12+rho[k]*(G[1]-G[2])));
			FhC13=(gradCC13-3.0*C[k]/rho[k]*(gradpC13-mu[k]*gradCC13+rho[k]*(-G[1]+G[2])));
			FhC14=(gradCC14-3.0*C[k]/rho[k]*(gradpC14-mu[k]*gradCC14+rho[k]*(G[1]+G[2])));
			FhC15=(gradCC15-3.0*C[k]/rho[k]*(gradpC15-mu[k]*gradCC15+rho[k]*(-G[0]-G[2])));
			FhC16=(gradCC16-3.0*C[k]/rho[k]*(gradpC16-mu[k]*gradCC16+rho[k]*(G[0]-G[2])));
			FhC17=(gradCC17-3.0*C[k]/rho[k]*(gradpC17-mu[k]*gradCC17-rho[k]*(-G[0]+G[2])));
			FhC18=(gradCC18-3.0*C[k]/rho[k]*(gradpC18-mu[k]*gradCC18+rho[k]*(G[0]+G[2])));

  	     FhCx=(gradCCx-3.0*C[k]/rho[k]*(gradpCx-mu[k]*gradCCx-rho[k]*G[0]));
  	     FhCy=(gradCCy-3.0*C[k]/rho[k]*(gradpCy-mu[k]*gradCCy-rho[k]*G[1]));
		 FhCz=(gradCCz-3.0*C[k]/rho[k]*(gradpCz-mu[k]*gradCCz-rho[k]*G[2]));

  	     FgC1=mu[k]*gradCC1-rho[k]*G[0];
    	 FgC2=mu[k]*gradCC2+rho[k]*G[0];
    	 FgC3=mu[k]*gradCC3-rho[k]*G[1];
    	 FgC4=mu[k]*gradCC4+rho[k]*G[1];
      	 FgC7=mu[k]*gradCC7+rho[k]*(-G[1]-G[0]);
		 FgC8=mu[k]*gradCC8+rho[k]*(G[0]-G[1]);
		 FgC9=mu[k]*gradCC9+rho[k]*(-G[0]+G[1]);
		 FgC10=mu[k]*gradCC10+rho[k]*(G[0]+G[1]);
		 
		 FgC5=mu[k]*gradCC5+rho[k]*G[2];
		 FgC6=mu[k]*gradCC6-rho[k]*G[2];
		 FgC11=mu[k]*gradCC11-rho[k]*(-G[1]-G[2]);
		 FgC12=mu[k]*gradCC12-rho[k]*(G[1]-G[2]);
		 FgC13=mu[k]*gradCC13-rho[k]*(-G[1]+G[2]);
		 FgC14=mu[k]*gradCC14-rho[k]*(G[1]+G[2]);
		 FgC15=mu[k]*gradCC15-rho[k]*(-G[0]-G[2]);
		 FgC16=mu[k]*gradCC16-rho[k]*(G[0]-G[2]);
		 FgC17=mu[k]*gradCC17-rho[k]*(-G[0]+G[2]);
		 FgC18=mu[k]*gradCC18-rho[k]*(G[0]+G[2]);

		 FgCx=mu[k]*gradCCx+rho[k]*G[0];
		 FgCy=mu[k]*gradCCy+rho[k]*G[1];
		 FgCz=mu[k]*gradCCz+rho[k]*G[2];
		 
		 FgrC1=gradrhoC1/3.0;
    	 FgrC2=gradrhoC2/3.0;
    	 FgrC3=gradrhoC3/3.0;
    	 FgrC4=gradrhoC4/3.0;
      	 FgrC7=gradrhoC7/3.0;
		 FgrC8=gradrhoC8/3.0;
		 FgrC9=gradrhoC9/3.0;
		 FgrC10=gradrhoC10/3.0;
		 
		 FgrC5=gradrhoC5/3.0;
		 FgrC6=gradrhoC6/3.0;
		 FgrC11=gradrhoC11/3.0;
		 FgrC12=gradrhoC12/3.0;
		 FgrC13=gradrhoC13/3.0;
		 FgrC14=gradrhoC14/3.0;
		 FgrC15=gradrhoC15/3.0;
		 FgrC16=gradrhoC16/3.0;
		 FgrC17=gradrhoC17/3.0;
		 FgrC18=gradrhoC18/3.0;

		 FgrCx=gradrhoCx/3.0;
		 FgrCy=gradrhoCy/3.0;
		 FgrCz=gradrhoCz/3.0;
		 
		 
		 /*
		 FfC1=(gradrhoC1/3.0 -rho[k]*gradmuC1)*3.0;
    	 FfC2=(gradrhoC2/3.0 -rho[k]*gradmuC2)*3.0;
    	 FfC3=(gradrhoC3/3.0 -rho[k]*gradmuC3)*3.0;
    	 FfC4=(gradrhoC4/3.0 -rho[k]*gradmuC4)*3.0;
      	 FfC7=(gradrhoC7/3.0 -rho[k]*gradmuC7)*3.0;
		 FfC8=(gradrhoC8/3.0 -rho[k]*gradmuC8)*3.0;
		 FfC9=(gradrhoC9/3.0 -rho[k]*gradmuC9)*3.0;
		 FfC10=(gradrhoC10/3.0 -rho[k]*gradmuC10)*3.0;

		 FfCx=(gradrhoCx/3.0 -rho[k]*gradmuCx)*3.0;
		 FfCy=(gradrhoCy/3.0 -rho[k]*gradmuCy)*3.0;
		*/
		
		 FhU1=(gradCU1-3.0*C[k]/rho[k]*(gradpU1-mu[k]*gradCU1-G[0]));
		 FhU2=(gradCU2-3.0*C[k]/rho[k]*(gradpU2-mu[k]*gradCU2+G[0]));
		 FhU3=(gradCU3-3.0*C[k]/rho[k]*(gradpU3-mu[k]*gradCU3-G[1]));
		 FhU4=(gradCU4-3.0*C[k]/rho[k]*(gradpU4-mu[k]*gradCU4+G[1]));
		 FhU7=(gradCU7-3.0*C[k]/rho[k]*(gradpU7-mu[k]*gradCU7-G[0]-G[1]));
		 FhU8=(gradCU8-3.0*C[k]/rho[k]*(gradpU8-mu[k]*gradCU8+G[0]-G[1]));
   		 FhU9=(gradCU9-3.0*C[k]/rho[k]*(gradpU9-mu[k]*gradCU9-G[0]+G[1]));
		 FhU10=(gradCU10-3.0*C[k]/rho[k]*(gradpU10-mu[k]*gradCU10+G[0]+G[1]));
		 
		 FhU5=(gradCU5-3.0*C[k]/rho[k]*(gradpU5-mu[k]*gradCU5+G[0]+G[1]));
		 FhU6=(gradCU6-3.0*C[k]/rho[k]*(gradpU6-mu[k]*gradCU6+G[0]+G[1]));
		 FhU11=(gradCU11-3.0*C[k]/rho[k]*(gradpU11-mu[k]*gradCU11+G[0]+G[1]));
		 FhU12=(gradCU12-3.0*C[k]/rho[k]*(gradpU12-mu[k]*gradCU12+G[0]+G[1]));
		 FhU13=(gradCU13-3.0*C[k]/rho[k]*(gradpU13-mu[k]*gradCU13+G[0]+G[1]));
		 FhU14=(gradCU14-3.0*C[k]/rho[k]*(gradpU14-mu[k]*gradCU14+G[0]+G[1]));
		 FhU15=(gradCU15-3.0*C[k]/rho[k]*(gradpU15-mu[k]*gradCU15+G[0]+G[1]));
		 FhU16=(gradCU16-3.0*C[k]/rho[k]*(gradpU16-mu[k]*gradCU16+G[0]+G[1]));
		 FhU17=(gradCU17-3.0*C[k]/rho[k]*(gradpU17-mu[k]*gradCU17+G[0]+G[1]));
		 FhU18=(gradCU18-3.0*C[k]/rho[k]*(gradpU18-mu[k]*gradCU18+G[0]+G[1]));

  	     FhUx=(gradCUx-3.0*C[k]/rho[k]*(gradpUx-mu[k]*gradCUx-G[0]));
  	     FhUy=(gradCUy-3.0*C[k]/rho[k]*(gradpUy-mu[k]*gradCUy-G[1]));
  	     FhUz=(gradCUz-3.0*C[k]/rho[k]*(gradpUz-mu[k]*gradCUz-G[1]));
		
  	     FgU1=mu[k]*gradCU1+G[0];
    	 FgU2=mu[k]*gradCU2-G[0];
    	 FgU3=mu[k]*gradCU3+G[1];
    	 FgU4=mu[k]*gradCU4-G[1];
      	 FgU7=mu[k]*gradCU7+G[1];
		 FgU8=mu[k]*gradCU8+G[1];
		 FgU9=mu[k]*gradCU9-G[1];
		 FgU10=mu[k]*gradCU10-G[1];
		 
		 FgU5=mu[k]*gradCU5-G[1];
		 FgU6=mu[k]*gradCU6-G[1];
		 FgU11=mu[k]*gradCU11-G[1];
		 FgU12=mu[k]*gradCU12-G[1];
		 FgU13=mu[k]*gradCU13-G[1];
		 FgU14=mu[k]*gradCU14-G[1];
		 FgU15=mu[k]*gradCU15-G[1];
		 FgU16=mu[k]*gradCU16-G[1];
		 FgU17=mu[k]*gradCU17-G[1];
		 FgU18=mu[k]*gradCU18-G[1];

		 FgUx=mu[k]*gradCUx+G[0];
		 FgUy=mu[k]*gradCUy+G[1];
		 FgUz=mu[k]*gradCUz+G[2];
		 
		 FgrU1=gradrhoU1/3.0;
    	 FgrU2=gradrhoU2/3.0;
    	 FgrU3=gradrhoU3/3.0;
    	 FgrU4=gradrhoU4/3.0;
      	 FgrU7=gradrhoU7/3.0;
		 FgrU8=gradrhoU8/3.0;
		 FgrU9=gradrhoU9/3.0;
		 FgrU10=gradrhoU10/3.0;
		 
		 FgrU5=gradrhoU5/3.0;
		 FgrU6=gradrhoU6/3.0;
		 FgrU11=gradrhoU11/3.0;
		 FgrU12=gradrhoU12/3.0;
		 FgrU13=gradrhoU13/3.0;
		 FgrU14=gradrhoU14/3.0;
		 FgrU15=gradrhoU15/3.0;
		 FgrU16=gradrhoU16/3.0;
		 FgrU17=gradrhoU17/3.0;
		 FgrU18=gradrhoU18/3.0;

		 FgrUx=gradrhoUx/3.0;
		 FgrUy=gradrhoUy/3.0;
		 FgrUz=gradrhoUz/3.0;
		 
		 /*
		 FfU1=(gradrhoU1/3.0 -rho[k]*gradmuU1)*3.0;
    	 FfU2=(gradrhoU2/3.0 -rho[k]*gradmuU2)*3.0;
    	 FfU3=(gradrhoU3/3.0 -rho[k]*gradmuU3)*3.0;
    	 FfU4=(gradrhoU4/3.0 -rho[k]*gradmuU4)*3.0;
      	 FfU7=(gradrhoU7/3.0 -rho[k]*gradmuU7)*3.0;
		 FfU8=(gradrhoU8/3.0 -rho[k]*gradmuU8)*3.0;
		 FfU9=(gradrhoU9/3.0 -rho[k]*gradmuU9)*3.0;
		 FfU10=(gradrhoU10/3.0 -rho[k]*gradmuU10)*3.0;

		 FfUx=(gradrhoUx/3.0 -rho[k]*gradmuUx)*3.0;
		 FfUy=(gradrhoUy/3.0 -rho[k]*gradmuUy)*3.0;
		*/
		 FgM1=0.5*(FgU1+FgC1);
		 FgM2=0.5*(FgU2+FgC2);
		 FgM3=0.5*(FgU3+FgC3);
		 FgM4=0.5*(FgU4+FgC4);
		 FgM7=0.5*(FgU7+FgC7);
		 FgM8=0.5*(FgU8+FgC8);
		 FgM9=0.5*(FgU9+FgC9);
		 FgM10=0.5*(FgU10+FgC10);
		 
		 FgM5=0.5*(FgU5+FgC5);
		 FgM6=0.5*(FgU6+FgC6);
		 FgM11=0.5*(FgU11+FgC11);
		 FgM12=0.5*(FgU12+FgC12);
		 FgM13=0.5*(FgU13+FgC13);
		 FgM14=0.5*(FgU14+FgC14);
		 FgM15=0.5*(FgU15+FgC15);
		 FgM16=0.5*(FgU16+FgC16);
		 FgM17=0.5*(FgU17+FgC17);
		 FgM18=0.5*(FgU18+FgC18);
		 
		 FgMx=0.5*(FgUx+FgCx);
		 FgMy=0.5*(FgUy+FgCy);
		 FgMz=0.5*(FgUz+FgCz);
		 
		 FgrM1=0.5*(FgrU1+FgrC1);
		 FgrM2=0.5*(FgrU2+FgrC2);
		 FgrM3=0.5*(FgrU3+FgrC3);
		 FgrM4=0.5*(FgrU4+FgrC4);
		 FgrM7=0.5*(FgrU7+FgrC7);
		 FgrM8=0.5*(FgrU8+FgrC8);
		 FgrM9=0.5*(FgrU9+FgrC9);
		 FgrM10=0.5*(FgrU10+FgrC10);
		 
		 FgrM5=0.5*(FgrU5+FgrC5);
		 FgrM6=0.5*(FgrU6+FgrC6);
		 FgrM11=0.5*(FgrU11+FgrC11);
		 FgrM12=0.5*(FgrU12+FgrC12);
		 FgrM13=0.5*(FgrU13+FgrC13);
		 FgrM14=0.5*(FgrU14+FgrC14);
		 FgrM15=0.5*(FgrU15+FgrC15);
		 FgrM16=0.5*(FgrU16+FgrC16);
		 FgrM17=0.5*(FgrU17+FgrC17);
		 FgrM18=0.5*(FgrU18+FgrC18);
		 
		 FgrMx=0.5*(FgrUx+FgrCx);
		 FgrMy=0.5*(FgrUy+FgrCy);
		 FgrMz=0.5*(FgrUz+FgrCz);


         FhM1=0.5*(FhU1+FhC1);
		 FhM2=0.5*(FhU2+FhC2);
		 FhM3=0.5*(FhU3+FhC3);
		 FhM4=0.5*(FhU4+FhC4);
		 FhM7=0.5*(FhU7+FhC7);
		 FhM8=0.5*(FhU8+FhC8);
		 FhM9=0.5*(FhU9+FhC9);
		 FhM10=0.5*(FhU10+FhC10);
		 
		 FhM5=0.5*(FhU5+FhC5);
		 FhM6=0.5*(FhU6+FhC6);
		 FhM11=0.5*(FhU11+FhC11);
		 FhM12=0.5*(FhU12+FhC12);
		 FhM13=0.5*(FhU13+FhC13);
		 FhM14=0.5*(FhU14+FhC14);
		 FhM15=0.5*(FhU15+FhC15);
		 FhM16=0.5*(FhU16+FhC16);
		 FhM17=0.5*(FhU17+FhC17);
		 FhM18=0.5*(FhU18+FhC18);
         
         FhMx=0.5*(FhUx+FhCx);
		 FhMy=0.5*(FhUy+FhCy);
		 FhMz=0.5*(FhUz+FhCz);
		 
		 /*
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
			*/
		 
		

}
