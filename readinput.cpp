//Read input takes input to set up initial conditions

#include "wet.h"


void wet::readinput()
{
	ifstream inputfile;
	
	//------------------------------Get inputs from wet.par-----------------------------
	
	inputfile.open("wet.par");
	
	if (!inputfile) {
		cout << "Can't open the input file wet.par " << endl;
	}
	
	inputfile >> Neqst;
    inputfile.ignore(250,'\n');
    cout << "Neqst " << Neqst << endl;
    
    inputfile >> wrtst;
    inputfile.ignore(250,'\n');
    cout << "wrtst " << wrtst << endl;
    
    inputfile >> stst;
    inputfile.ignore(250,'\n');
    cout << "stst " << stst << endl;
	
    inputfile >> infost;
      inputfile.ignore(250,'\n');
    cout << "infost " << infost << endl; 
	inputfile >> dimensions;
    inputfile.ignore(250,'\n');
    cout << "dimensions " << dimensions << endl;
    
    inputfile >> boundtype;
    inputfile.ignore(250,'\n');
    cout << "boundtype " << boundtype << endl;
    
    inputfile >> Lx >> Ly >> Lz;
    inputfile.ignore(250,'\n');
    cout << "Simulation Box Size " << Lx << " " << Ly << " "<< Lz << endl;
    
    inputfile >> rho1 >> rho2 ;
    inputfile.ignore(250,'\n');
    cout << "rho1 rho2 are " << rho1 << " " << rho2 << endl;
    
    inputfile >> ep ;
    inputfile.ignore(250,'\n');
    cout << "epsilon is " << ep << endl;
    
    inputfile >> B >> BA ;
    inputfile.ignore(250,'\n');
    cout << "B and BA are " << B << " " << BA << endl;
    
    inputfile >> M ;
    inputfile.ignore(250,'\n');
    cout << "M is " << M  << endl;
    
    inputfile >> theta1 >> theta2 ;
    inputfile.ignore(250,'\n');
    cout << "theta1 and theta2 " << theta1 << " " << theta2  << endl;
    
    inputfile >> tau1 >> tau2 ;
    inputfile.ignore(250,'\n');
    cout << "tau1 and tau2 are " << tau1 << " " << tau2 << endl;
    
    inputfile >> G[0] >> G[1] ;
    inputfile.ignore(250,'\n');
    cout << "G0 and G1 are " << G[0] << " " << G[1] << endl;
    
    inputfile >> folder;
    inputfile.ignore(250,'\n');
    cout << "Folder is " << folder << endl;
    
    inputfile >> dist;
    inputfile.ignore(250,'\n');
    cout << "Dis=" << dist << endl;
   
    
    
    inputfile >> rt;
    inputfile.ignore(250,'\n');
    cout << "rt=" << rt << endl;
   
    
    
    inputfile >> input;
    inputfile.ignore(250,'\n');
    cout << "input=" << input << endl;
    
    inputfile >> surftype;
    inputfile.ignore(250,'\n');
    cout << "surftype=" << surftype << endl;


    inputfile.close();

    
    
    //-------------------------------Get inputs from LGconfig.par-----------------------
    
    inputfile.open("LGconfig.par");
    
    if (!inputfile) {
		cout << "Can't open the input file LGconfig.par " << endl;
	}
	
	inputfile >> xcentre >> ycentre >> zcentre ;
    inputfile.ignore(250,'\n');
    cout << "Drop centre " << xcentre << " " << ycentre << " " << zcentre << endl;
    
    inputfile >> R;
    inputfile.ignore(250,'\n');
    cout << "Droplet Radius " << R << endl;
    
    inputfile >> xcentre1 >> ycentre1 >> zcentre1 ;
    inputfile.ignore(250,'\n');
    cout << "Drop centre " << xcentre << " " << ycentre << " " << zcentre << endl;
    
    inputfile >> R1;
    inputfile.ignore(250,'\n');
    cout << "Droplet Radius " << R << endl;
    
    inputfile >> uxi >> uyi >> uzi;
    inputfile.ignore(250,'\n');
    cout << "Initial Drop velocity " << uxi << " " << uyi << " " << uzi << endl;

    
    inputfile >> ell;
    inputfile.ignore(250,'\n');
    cout << "Drop anisotropy " << ell << endl;
    
    inputfile >> xe >> ye >> ze;
    inputfile.ignore(250,'\n');
    cout << "Initial Drop velocity " << xe << " " << ye << " " << ze << endl;

    
    inputfile >> Nd;
    inputfile.ignore(250,'\n');
    cout << "Drop respawn time " << Nd << endl;
    
    inputfile.close();
    
	//-------------------------------Get inputs from surf.par-----------------------
    
    inputfile.open("surf.par");
    
    if (!inputfile) {
		cout << "Can't open the input file surf.par " << endl;
	}
	 
	inputfile >> xs >> ys >> zs ;
    inputfile.ignore(250,'\n');
    cout << "Surface position " << xs << " " << ys << " " << zs << endl;
    
    inputfile >> wx >> wy >> wz;
    inputfile.ignore(250,'\n');
    cout << "surface width " << wx << " " << wy << " " << wz << endl;
    
    inputfile >> xs2 >> ys2 >> zs2;
    inputfile.ignore(250,'\n');
    cout << "Surface position 2" << xs2 << " " << ys2 << " " << zs2 << endl;

    inputfile >> wx2 >> wy2 >> wz2 ;
    inputfile.ignore(250,'\n');
    cout << "Surface width 2 " << wx2 << " " << wy2 << " " << wz2 << endl;
    
    inputfile >> xs3 >> ys3 >> zs3;
    inputfile.ignore(250,'\n');
    cout << "Surface position 2" << xs2 << " " << ys2 << " " << zs2 << endl;

    inputfile >> wx3 >> wy3 >> wz3 ;
    inputfile.ignore(250,'\n');
    cout << "Surface width 2 " << wx2 << " " << wy2 << " " << wz2 << endl;

    inputfile >> h >> P >> Pz >> pw >> zw >> Ps >> Pe ;
    inputfile.ignore(250,'\n');
    cout << "Posts " << h << " " << P << " " << Pz << " " << pw << " " << zw << " " << Ps << " " << Pe << endl;

    inputfile >> str ;
    inputfile.ignore(250,'\n');
    cout << "Strip width " << str << endl;
    
    inputfile.close();

        
    inputfile.open("sweep.par");
    
    if (!inputfile) {
		cout << "Can't open the input file surf.par " << endl;
	}
    
	inputfile >> rad ;
    inputfile.ignore(250,'\n');
    cout << "rad " << rad << endl;


	inputfile >> fol1 ;
    inputfile.ignore(250,'\n');
    cout << "Folder " << fol1 << endl;
    
    inputfile.close();

/*
    if(input==1)
      {

	
	cout << "Have entered input=1" << endl;
	Chold=new double[Lx*Ly*Lz];
	uxhold=new double[Lx*Ly*Lz];
	uyhold=new double[Lx*Ly*Lz];
	uzhold=new double[Lx*Ly*Lz];
	phold=new double[Lx*Ly*Lz];

	
	inputfile.open("C.txt");
	  for(int i=0;i<Lx*Ly*Lz;i++)
	    {
	      inputfile >> Chold[i];
	    }
	  inputfile.close();
	  
	  
	  inputfile.open("ux.txt");
	  for(int i=0;i<Lx*Ly*Lz;i++)
	    {
	      inputfile >> uxhold[i];
	    }
	  inputfile.close();
	  
	  
	inputfile.open("uy.txt");
	  for(int i=0;i<Lx*Ly*Lz;i++)
	    {
	      inputfile >> uyhold[i];
	    }
	  inputfile.close();
	  
	  
	inputfile.open("uz.txt");
	  for(int i=0;i<Lx*Ly*Lz;i++)
	    {
	      inputfile >> uzhold[i];
	    }
	  inputfile.close();
	
	    
	inputfile.open("p.txt");
	  for(int i=0;i<Lx*Ly*Lz;i++)
	    {
	      inputfile >> phold[i];
	    }
	  inputfile.close();
	
	  
  
      }
*/


}
