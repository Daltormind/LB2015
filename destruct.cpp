//Destruct Deallocates memory space

#include "wet.h"


wet::~wet(void) 
	
{
	
	
	delete []p;
	delete []mu;
	delete []C;
	delete []rho;
	
	
	delete []ux; delete []uy; delete []uz;
	//delete []dC;
	//delete []dmu;
	//delete []drho;
	//delete []dp;
	
	delete []g0; delete[]g1; delete[]g2; delete[]g3; delete[]g4; delete[]g5; delete[]g6; delete[]g7; delete[]g8; delete[]g9; delete[]g10; delete[]g11; delete[]g12; delete[]g13; delete[]g14; delete[]g15; delete[]g16; delete[]g17; delete[]g18;
	delete []h0; delete[]h1; delete[]h2; delete[]h3; delete[]h4; delete[]h5; delete[]h6; delete[]h7; delete[]h8; delete[]h9; delete[]h10; delete[]h11; delete[]h12; delete[]h13; delete[]h14; delete[]h15; delete[]h16; delete[]h17; delete[]h18;
	delete []hc0; delete[]hc1; delete[]hc2; delete[]hc3; delete[]hc4; delete[]hc5; delete[]hc6; delete[]hc7; delete[]hc8; delete[]hc9; delete[]hc10; delete[]hc11; delete[]hc12; delete[]hc13; delete[]hc14; delete[]hc15; delete[]hc16; delete[]hc17; delete[]hc18;
	delete []gc0; delete[]gc1; delete[]gc2; delete[]gc3; delete[]gc4; delete[]gc5; delete[]gc6; delete[]gc7; delete[]gc8; delete[]gc9; delete[]gc10; delete[]gc11; delete[]gc12; delete[]gc13; delete[]gc14; delete[]gc15; delete[]gc16; delete[]gc17; delete[]gc18;

	//delete []geq;
	//delete []heq;
	//delete []dgamma;
	//delete []gamhold;
	//delete []gamma;
	//delete []Ct;
	//delete []ht;
	//delete []muh;
	//delete []f;

}
