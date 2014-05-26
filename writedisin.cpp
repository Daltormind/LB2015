#include "wet.h"

void wet::writedisin(long int in)
{
	
	
	
	ofstream file;
	char filename1[20];
		string filename;
        
        //------------------------- Write Energy------------------------
        
        snprintf(filename1,20,"/dis.txt",in);			//Create a name for file that contain data
		filename=folder+filename1;
		file.open(filename.c_str(),ios::app);
		file.precision(16);
		
		file << st << " " << disdtot << " " << disvtot << endl;
		
		
		

		file.close();
}
