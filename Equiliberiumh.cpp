// Calculates the equilibrium value for the Composition function h 

#include "wet.h"

void wet ::equiliberiumh()
{







  heq0=gamma0*C[k]+0.5*dt*(ux[k]*FhCx+uy[k]*FhCy+uz[k]*FhCz)*gamma0;
  heq1=gamma1*C[k]-0.5*dt*(FhC1-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma1;
  heq2=gamma2*C[k]-0.5*dt*(FhC2-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma2;
  heq3=gamma3*C[k]-0.5*dt*(FhC3-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma3;
  heq4=gamma4*C[k]-0.5*dt*(FhC4-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma4;
  heq7=gamma7*C[k]-0.5*dt*(FhC7-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma7;
  heq8=gamma8*C[k]-0.5*dt*(FhC8-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma8;
  heq9=gamma9*C[k]-0.5*dt*(FhC9-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma9;
  heq10=gamma10*C[k]-0.5*dt*(FhC10-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma10;

  heq5=gamma5*C[k]-0.5*dt*(FhC5-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma5;
  heq6=gamma6*C[k]-0.5*dt*(FhC6-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma6;
  heq11=gamma11*C[k]-0.5*dt*(FhC11-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma11;
  heq12=gamma12*C[k]-0.5*dt*(FhC12-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma12;
  heq13=gamma13*C[k]-0.5*dt*(FhC13-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma13;
  heq14=gamma14*C[k]-0.5*dt*(FhC14-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma14;
  heq15=gamma15*C[k]-0.5*dt*(FhC15-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma15;
  heq16=gamma16*C[k]-0.5*dt*(FhC16-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma16;
  heq17=gamma17*C[k]-0.5*dt*(FhC17-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma17;
  heq18=gamma18*C[k]-0.5*dt*(FhC18-ux[k]*FhCx-uy[k]*FhCy-uz[k]*FhCz)*gamma18;
	

	


}
