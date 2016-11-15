//LBAlgorithm.cpp: lattice boltzmann algorithm
//Marco, 30 June 2011

#include "wet.h"

void wet::applyBoundaryConditions(void)
{	


	double r2=xc*xc+yc*yc+zc*zc;
	double a2,ee,ae;
  
	for(k = k1 ; k < k2 ; k++)
	{
		switch(mask[k]) 
		{ 
			case 0:
				break;
			case 1:
								// Bortolo's version Matthew Adjusted:
								
				computecoordinate(k);
				a2=xk*xk+yk*yk+zk*zk;
				
				if (mask[dd[0]] == 28)
				 {       
				 ee=1;
				 ae=xk-xc;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ff[k][2]=2*q*fn1[k]+(1-2*q)*fn1[dd2[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ff2[k]=fn1[k]/(2*q)+(2*q-1)/(2*q)*fn2[k];//check this line possible typo on paper
				 }
				 
				 }
				 
				 if (mask[dd2[k]] == 28)
				 {
				 ee=1;
				 ae=xc-xk;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ff1[k]=2*q*fn2[k]+(1-2*q)*fn2[dd1[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ff1[k]=fn2[k]/(2*q)+(2*q-1)/(2*q)*fn1[k];//check this line possible typo on paper
				 }
				 }
				 
				 if (mask[dd3[k]] == 28)
				 {
				 ee=1;
				 ae=yk-yc;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ff4[k]=2*q*fn3[k]+(1-2*q)*fn3[dd4[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ff4[k]=fn3[k]/(2*q)+(2*q-1)/(2*q)*fn4[k];//check this line possible typo on paper
				 }
				 }
				 if (mask[dd4[k]] == 28)
				 {
				 ee=1;
				 ae=yc-yk;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ff3[k]=2*q*fn4[k]+(1-2*q)*fn4[dd3[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ff3[k]=fn4[k]/(2*q)+(2*q-1)/(2*q)*fn3[k];//check this line possible typo on paper
				 }
				 }
				 if (mask[dd5[k]] == 28)
				 {
				 ee=1;
				 ae=zk-zc;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ff6[k]=2*q*fn5[k]+(1-2*q)*fn5[dd6[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ff6[k]=fn5[k]/(2*q)+(2*q-1)/(2*q)*fn6[k];//check this line possible typo on paper
				 }
				 }
				 if (mask[dd6[k]] == 28)
				 {
				 ee=1;
				 ae=zc-zk;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ff5[k]=2*q*fn6[k]+(1-2*q)*fn6[dd5[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ff5[k]=fn6[k]/(2*q)+(2*q-1)/(2*q)*fn5[k];//check this line possible typo on paper
				 }
				 }
				 
				 if (mask[dda[k]] == 28)
				 {
				 ee=2;
				 ae=xk-xc+yk-yc;
				 
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ffd=2*q*fna[k]+(1-2*q)*fna[ddd];
				 }
				 
				 if(q>=0.5)
				 {
				 	ffd=fna[k]/(2*q)+(2*q-1)/(2*q)*fnd;//check this line possible typo on paper
				 }
				 }
				 if (mask[ddb[k]] == 28)
				 {
				 
				 ee=2;
				 ae=xc-xk+yk-yc;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ffd=2*q*fna[k]+(1-2*q)*fna[ddd];
				 }
				 
				 if(q>=0.5)
				 {
				 	ffd=fna[k]/(2*q)+(2*q-1)/(2*q)*fnd;//check this line possible typo on paper
				 }
				 }
				 if (mask[ddc[k]] == 28)
				 {
				 ee=2;
				 ae=-xc+xk-yk+yc;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ffb[k]=2*q*fnc[k]+(1-2*q)*fna[ddb[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ffb[k]=fnc[k]/(2*q)+(2*q-1)/(2*q)*fnb[k];//check this line possible typo on paper
				 }
				 }
				 if (mask[ddd] == 28)
				 {	
				 
				 	
				 ee=2;
				 ae=-xc+xk-yk+yc;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ffa[k]=2*q*fnd+(1-2*q)*fnd[dda[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ffa[k]=fnd/(2*q)+(2*q-1)/(2*q)*fna[k];//check this line possible typo on paper
				 }
				 }
				 if (mask[dde[k]] == 28)
				 {
				 ee=2;
				 ae=-zc+zk+yk-yc;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ffh[k]=2*q*fne[k]+(1-2*q)*fne[ddh[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ffh[k]=fne[k]/(2*q)+(2*q-1)/(2*q)*fnh[k];//check this line possible typo on paper
				 }
				 }
				 
				 if (mask[ddf[k]] == 28)
				 {
				 ee=2;
				 ae=zk-zc-yk+yc;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ffg[k]=2*q*fnf[k]+(1-2*q)*fnf[ddg[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	fff[k]=fng[k]/(2*q)+(2*q-1)/(2*q)*fnf[k];//check this line possible typo on paper
				 }
				 }
				 if (mask[ddg[k]] == 28)
				 {
				 ee=2;
				 ae=yk-yc-zk+zc;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	fff[k]=2*q*fng[k]+(1-2*q)*fng[ddf[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	fff[k]=fng[k]/(2*q)+(2*q-1)/(2*q)*fnf[k];//check this line possible typo on paper
				 }
				 
				 }
				 if (mask[ddh[k]] == 28)
				 {
				 ee=2;
				 ae=zc-zk+yc-yk;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ffe[k]=2*q*fnh[k]+(1-2*q)*fnh[dde[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ffe[k]=fnh[k]/(2*q)+(2*q-1)/(2*q)*fne[k];//check this line possible typo on paper
				 } 
				 }
				 if (mask[ddi[k]] == 28)
				 {
				 ee=2;
				 ae=xk-xc+zk-zc;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ffl[k]=2*q*fni[k]+(1-2*q)*fni[ddl[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ffl[k]=fni[k]/(2*q)+(2*q-1)/(2*q)*fnl[k];//check this line possible typo on paper
				 }
				 }
				 if (mask[ddj[k]] == 28)
				 {
				 ee=2;
				 ae=xc-xk+zk-zc;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ffk[k]=2*q*fnj[k]+(1-2*q)*fnj[ddk[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ffk[k]=fnj[k]/(2*q)+(2*q-1)/(2*q)*fnk[k];//check this line possible typo on paper
				 }
				 }
				 if (mask[ddk[k]] == 28)
				 {
				 ee=2;
				 ae=xk-xc+zc-zk;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ffj[k]=2*q*fnk[k]+(1-2*q)*fnk[ddj[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ffj[k]=fnk[k]/(2*q)+(2*q-1)/(2*q)*fnj[k];//check this line possible typo on paper
				 }
				 }	
				 if (mask[ddl[k]] == 28)
				 {
				 ee=2;
				 ae=xc-xk+zc-zk;
				 
				 q=(-ae-sqrt(ae*ae+ee*(r2-a2)))/ee;
				 	
				 if(q<0.5)
				 {
				 	ffi[k]=2*q*fnl[k]+(1-2*q)*fnl[ddi[k]];
				 }
				 
				 if(q>=0.5)
				 {
				 	ffi[k]=fnl[k]/(2*q)+(2*q-1)/(2*q)*fni[k];//check this line possible typo on paper
				 }
				 }
				
				 
				
				
				 
				break;

			case 28:
				break;	

			default:
			{
				computeCoordinate(k);
				cout << "In applyBoundaryConditions: A case is not defined at k = (" << xk << "," << yk << "," << zk << "), (" << (int) (mask[k]) << ")." << endl;
			}
				break;
		}
	}
}