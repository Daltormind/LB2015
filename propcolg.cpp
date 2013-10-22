//Propogation and collision of g

#include "wet.h"

void wet::propcolg()
{
	double gforce0,gforce1,gforce2,gforce3,gforce4,gforce7,gforce8,gforce9,gforce10,gforce6,gforce5,gforce11,gforce12,gforce13,gforce14,gforce15,gforce16,gforce17,gforce18;

  gforce0=-ux[k]*(FgrMx*gammar0+FgMx*gamma0)-uy[k]*(FgrMy*gammar0+FgMy*gamma0) -uz[k]*(FgrMz*gammar0+FgMz*gamma0);
  gforce1=-ux[k]*(FgrMx*gammar1+FgMx*gamma1)-uy[k]*(FgrMy*gammar1+FgMy*gamma1) -uz[k]*(FgrMz*gammar1+FgMz*gamma1)+FgM1*gamma1+FgrM1*gammar1;
  gforce2=-ux[k]*(FgrMx*gammar2+FgMx*gamma2)-uy[k]*(FgrMy*gammar2+FgMy*gamma2)-uz[k]*(FgrMz*gammar2+FgMz*gamma2)+FgM2*gamma2+FgrM2*gammar2;
  gforce3=-ux[k]*(FgrMx*gammar3+FgMx*gamma3)-uy[k]*(FgrMy*gammar3+FgMy*gamma3)-uz[k]*(FgrMz*gammar3+FgMz*gamma3)+FgM3*gamma3+FgrM3*gammar3;
  gforce4=-ux[k]*(FgrMx*gammar4+FgMx*gamma4)-uy[k]*(FgrMy*gammar4+FgMy*gamma4)-uz[k]*(FgrMz*gammar4+FgMz*gamma4)+FgM4*gamma4+FgrM4*gammar4;
  gforce7=-ux[k]*(FgrMx*gammar7+FgMx*gamma7)-uy[k]*(FgrMy*gammar7+FgMy*gamma7)-uz[k]*(FgrMz*gammar7+FgMz*gamma7)+FgM7*gamma7+FgrM7*gammar7;
  gforce8=-ux[k]*(FgrMx*gammar8+FgMx*gamma8)-uy[k]*(FgrMy*gammar8+FgMy*gamma8)-uz[k]*(FgrMz*gammar8+FgMz*gamma8)+FgM8*gamma8+FgrM8*gammar8;
  gforce9=-ux[k]*(FgrMx*gammar9+FgMx*gamma9)-uy[k]*(FgrMy*gammar9+FgMy*gamma9)-uz[k]*(FgrMz*gammar9+FgMz*gamma9)+FgM9*gamma9+FgrM9*gammar9;
  gforce10=-ux[k]*(FgrMx*gammar10+FgMx*gamma10)-uy[k]*(FgrMy*gammar10+FgMy*gamma10)-uz[k]*(FgrMz*gammar10+FgMz*gamma10)+FgM10*gamma10+FgrM10*gammar10;
  
  gforce5=-ux[k]*(FgrMx*gammar5+FgMx*gamma5)-uy[k]*(FgrMy*gammar5+FgMy*gamma5)-uz[k]*(FgrMz*gammar5+FgMz*gamma5)+FgM5*gamma5+FgrM5*gammar5;
  gforce6=-ux[k]*(FgrMx*gammar6+FgMx*gamma6)-uy[k]*(FgrMy*gammar6+FgMy*gamma6)-uz[k]*(FgrMz*gammar6+FgMz*gamma6)+FgM6*gamma6+FgrM6*gammar6;
  gforce11=-ux[k]*(FgrMx*gammar11+FgMx*gamma11)-uy[k]*(FgrMy*gammar11+FgMy*gamma11)-uz[k]*(FgrMz*gammar11+FgMz*gamma11)+FgM11*gamma11+FgrM11*gammar11;
  gforce12=-ux[k]*(FgrMx*gammar12+FgMx*gamma12)-uy[k]*(FgrMy*gammar12+FgMy*gamma12)-uz[k]*(FgrMz*gammar12+FgMz*gamma12)+FgM12*gamma12+FgrM12*gammar12;
  gforce13=-ux[k]*(FgrMx*gammar13+FgMx*gamma13)-uy[k]*(FgrMy*gammar13+FgMy*gamma13)-uz[k]*(FgrMz*gammar13+FgMz*gamma13)+FgM13*gamma13+FgrM13*gammar13;
  gforce14=-ux[k]*(FgrMx*gammar14+FgMx*gamma14)-uy[k]*(FgrMy*gammar14+FgMy*gamma14)-uz[k]*(FgrMz*gammar14+FgMz*gamma14)+FgM14*gamma14+FgrM14*gammar14;
  gforce15=-ux[k]*(FgrMx*gammar15+FgMx*gamma15)-uy[k]*(FgrMy*gammar15+FgMy*gamma15)-uz[k]*(FgrMz*gammar15+FgMz*gamma15)+FgM15*gamma15+FgrM15*gammar15;
  gforce16=-ux[k]*(FgrMx*gammar16+FgMx*gamma16)-uy[k]*(FgrMy*gammar16+FgMy*gamma16)-uz[k]*(FgrMz*gammar16+FgMz*gamma16)+FgM16*gamma16+FgrM16*gammar16;
  gforce17=-ux[k]*(FgrMx*gammar17+FgMx*gamma17)-uy[k]*(FgrMy*gammar17+FgMy*gamma17)-uz[k]*(FgrMz*gammar17+FgMz*gamma17)+FgM17*gamma17+FgrM17*gammar17;
  gforce18=-ux[k]*(FgrMx*gammar18+FgMx*gamma18)-uy[k]*(FgrMy*gammar18+FgMy*gamma18)-uz[k]*(FgrMz*gammar18+FgMz*gamma18)+FgM18*gamma18+FgrM18*gammar18;

  
  gc0[k]=g0[k]-1.0/(tau[k]+0.5)*(g0[k]-geq0)+dt*gforce0;
  gc1[k]=g1[k]-1.0/(tau[k]+0.5)*(g1[k]-geq1)+dt*gforce1;
  gc2[k]=g2[k]-1.0/(tau[k]+0.5)*(g2[k]-geq2)+dt*gforce2;
  gc3[k]=g3[k]-1.0/(tau[k]+0.5)*(g3[k]-geq3)+dt*gforce3;
  gc4[k]=g4[k]-1.0/(tau[k]+0.5)*(g4[k]-geq4)+dt*gforce4;
    
  gc7[k]=g7[k]-1.0/(tau[k]+0.5)*(g7[k]-geq7)+dt*gforce7;
  gc8[k]=g8[k]-1.0/(tau[k]+0.5)*(g8[k]-geq8)+dt*gforce8;
  gc9[k]=g9[k]-1.0/(tau[k]+0.5)*(g9[k]-geq9)+dt*gforce9;
  gc10[k]=g10[k]-1.0/(tau[k]+0.5)*(g10[k]-geq10)+dt*gforce10;
  
  gc5[k]=g5[k]-1.0/(tau[k]+0.5)*(g5[k]-geq5)+dt*gforce5;
  gc6[k]=g6[k]-1.0/(tau[k]+0.5)*(g6[k]-geq6)+dt*gforce6;
  gc11[k]=g11[k]-1.0/(tau[k]+0.5)*(g11[k]-geq11)+dt*gforce11;
  gc12[k]=g12[k]-1.0/(tau[k]+0.5)*(g12[k]-geq12)+dt*gforce12;
  gc13[k]=g13[k]-1.0/(tau[k]+0.5)*(g13[k]-geq13)+dt*gforce13;
  gc14[k]=g14[k]-1.0/(tau[k]+0.5)*(g14[k]-geq14)+dt*gforce14;
  gc15[k]=g15[k]-1.0/(tau[k]+0.5)*(g15[k]-geq15)+dt*gforce15;
  gc16[k]=g16[k]-1.0/(tau[k]+0.5)*(g16[k]-geq16)+dt*gforce16;
  gc17[k]=g17[k]-1.0/(tau[k]+0.5)*(g17[k]-geq17)+dt*gforce17;
  gc18[k]=g18[k]-1.0/(tau[k]+0.5)*(g18[k]-geq18)+dt*gforce18;




}
