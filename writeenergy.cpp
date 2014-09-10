#include "wet.h"

void wet::writeenergy(long int in)
{
	
	
	
	ofstream file;
	char filename1[20];
		string filename;
        
        //------------------------- Write Energy------------------------
        
		r=double(ys)*atan(double(yhold)/double(Lx-xhold));

        snprintf(filename1,20,"/energy.txt",in);			//Create a name for file that contain data
		filename=folder+filename1;
		file.open(filename.c_str(),ios::app);
		file.precision(16);
		
		file << st << " " << energy << " " << Ebulk << " " << Eint << " " << Esurf << " ";
		cout << st << " " << energy << " " << Ebulk << " " << Eint << " " << Esurf << " " << KEx << " " << KEy << " " << KEz << " "  << surfarea  <<   endl;
		
		file << KEx << " " << KEy <<  " " << KEz << " " << COMx << " " << COMy << " " << COMz << " " << vol << " " << Ctot << " " << rhotot << " " << dU << " " << surfarea << " " << xhold << " " << yhold << " " << zhold << " " << r  << endl;

		file.close();
}
