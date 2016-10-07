
#include "wet.h"

void wet::writeinfofile(void)
{
	int i, j, h;
	ofstream file;
	char filename1[20];
		string filename;
		
		snprintf(filename1,20,"/infofile.txt");			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		file << "=====System parameters from wet.par=====" << endl << endl;
		
		file << "Neqst " << Neqst << endl;
		file << "wrtst " << wrtst << endl;
		file << "stst "  << stst  << endl;
		file << "dimensions " << dimensions << endl;
		file << "boundtype " << boundtype << endl;
		file << "Simulation Box size " << Lx << " " << Ly << " " << Lz << endl;
		file << "rho1 rho2 " << rho1 << " " << rho2 << endl;
		file << "epsilon " << ep << endl;
		file << "B BA " << B << " " << BA << endl;
		file << "M " << M << endl;
		file << "theta " << theta << endl;
		file << "tau1 tau2 " << tau1 << " " << tau2 << endl;
		file << "G0 G1 G2 "  << G[0] << " " << G[1] << " " << G[2] << endl;
		file << "Folder " << folder << endl;	
		file << "Dis type " << dist << endl;
		file << "relaxtype " << rt << endl;
		file << "Input type" << input << endl << endl;
		
		  file << "=====Parameters from LGconfig.par=====" << endl << endl;
		
		file << "Drop position " << xcentre << " " << ycentre << " " << zcentre << endl;
		file << "Drop radius " << R << endl;
		file << "Initial drop velocity " << uxi << " " << uyi << " " << uzi << endl << endl;
		
		file  << "=====Parameters from surf.par=====" << endl << endl;
		
		file <<  "Surface position " << xs << " " << ys << " " << zs << endl;
		file <<  "Surface width " << wx << " " << wy << " " << wz << endl;
		file <<  "Posts " << h << " " << P << endl << endl;
		
		double We;
		double Oh;
		double v1;
		double vtot;
		double s;
		vtot=uxi*uxi+uyi*uyi+uzi*uzi;
		s=B*ep/12;
		v1=tau1/3;
		We=rho1*vtot*R/s;
		Oh=v1*sqrt(rho1/(s*R));
		
		file << "We=" << We << endl;
		file << "Oh=" << Oh << endl;
		
		file.close();
		
		snprintf(filename1,20,"/p.m");			//Create a name for file that contain data
		filename=folder+filename1;
        file.open(filename.c_str());
		file.precision(16);
		
		file << "Neqst=" << Neqst << ";" << endl;
		file << "wrtst=" << wrtst << ";" << endl;
		file << "ranktot=" << size << ";" << endl;
		
		file.close();
		
		 
		
		
		 
		
		
}
