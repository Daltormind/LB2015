#include <cstring>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <mpi.h>
#include <string>
#include <sstream>
#include <stdio.h>


using namespace std;

#define ROOT 0				//definig root process

const double e[19][3]={{0,0,0},{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1},{1,1,0},{-1,1,0},{1,-1,0},{-1,-1,0},{0,1,1},{0,-1,1},{0,1,-1},{0,-1,-1},{1,0,1},{-1,0,1},{1,0,-1},{-1,0,-1}};

//const double t[19]={1.0/3.0,1.0/18.0,1.0/18.0,1.0/18.0,1.0/18.0,1.0/18.0,1.0/18.0,1.0/36.0,1.0/36.0,1.0/36.0,1.0/36.0,1.0/36.0,1.0/36.0,1.0/36.0,1.0/36.0,1.0/36.0,1.0/36.0,1.0/36.0,1.0/36.0};

//const double t[19]={4.0/9.0,1.0/9.0,1.0/9.0,1.0/9.0,1.0/9.0,0.0,0.0,1.0/36.0,1.0/36.0,1.0/36.0,1.0/36.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};

const double t[19]={2.0/3.0,1.0/6.0,1.0/6.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};


const int com[19]={0,2,1,4,3,6,5,10,9,8,7,14,13,12,11,18,17,16,15};

//const int com[9]={0,2,1,4,3,8,7,6,5};
class wet
{

  int ProcessN,dist; //Number of nodes the processor is dealing with
  
  int plane; //Controls which plane is written 

	double *C , *mu , *p, *rho;//,*pc,*pt;//, *muh; //Assigning memory space to the composition, free energy, pressure, density, interface curvature pressure, total pressure
	
	double *disv, *disd[k];//Variables to hold two types of dissipation

	int *mask;//mask stores which nodes are solid and which were not.

	//double (*u)[3];
	double rad,psum;//rad is a variable used by sweep.par to set multiple simulations running at once, psum is used as a sum of pressure in some specific instances.
	
	double G[3];//Holds the value of the bulk body force. Force acts in rho so gravity by defualt.

	int d[18],d2[18]; //Assigning memory for neibour arrays

	int k, k1,k2; //k is used to sweep though simulation grid. k1 nd k2 are Starting and finishing k values

	double t0,t1,t2; //Weightings used to ensure anisotropy,

	//double    (*drho)[3]; // Gradients of equiliberium variables

	double d2C,dC;//d2C holds the value of del^2(C), dC hold the value of grad C
	
	double theta, theta1,theta2;//contact angle, two more contact angles for varying the contact angle on the surface
	
	int str; //Width of theta2 strip
 
	//double *Chold, *uxhold,*uyhold,*uzhold,*phold,*plan,*planuz,*planuy,*planux,*planC,*stan;//Chold is used to make C.txt for writeinput, u*hold used to make u*.txt in writeinput. 
//plan* used in writemoments to store the values of the vertical sum of values.
	int input,ktot,surftype;//input 0/1 controls whether you use the .par file for input or the .txt files. ktot stores the maximum value of k, surftype stores what sort of surface to initialise

	int Lx,Ly,Lz,N; // Size of simulation box
	
	double *Wc; //Modified wetting constant.

	double *ux,*uy,*uz; // Drop velocity
	
	double uxi,uyi,uzi; //Initial Drop velocity

	int xk,yk,zk,xend,av,xsum; //Positions 

	int xs, ys ,zs,xs2,ys2,zs2,h,P,Ps,Pe,xc,yc,zc,xl,yl,zl,xs3,ys3,zs3; //Position and width of solid surface

	int xcentre,ycentre,zcentre,R,xcentre1,ycentre1,zcentre1,R1;// Position of the centre of drop 1. Radius of drop one. Position of drop 2. Radius of drop 2.

        double xe,ye,ze,ell; //ellipticity of drop

	int a,i ;//Discrete velocity index and cartesian index

	//double (*gamma)[19], (*dgamma)[19]; //Gamma

	double *g0,*g1,*g2,*g3,*g4,*g5,*g6,*g7,*g8,*g9,*g10,*g11,*g12,*g13,*g14,*g15,*g16,*g17,*g18 ; //The single particle probability functions
	
	double *h0,*h1,*h2,*h3,*h4,*h5,*h6,*h7,*h8,*h9,*h10,*h11,*h12,*h13,*h14,*h15,*h16,*h17,*h18 ; //The sinhle particle probability functions
	
	double *gc0,*gc1,*gc2,*gc3,*gc4,*gc5,*gc6,*gc7,*gc8,*gc9,*gc10,*gc11,*gc12,*gc13,*gc14,*gc15,*gc16,*gc17,*gc18 ; //The singcle particle probability functions

	double *hc0,*hc1,*hc2,*hc3,*hc4,*hc5,*hc6,*hc7,*hc8,*hc9,*hc10,*hc11,*hc12,*hc13,*hc14,*hc15,*hc16,*hc17,*hc18 ; //The sinhcle particle probability functions
	
	double vsum;//used to store velocity sums in calculation of velocity averages
	
	int vn;//Used to store number of values in calculation of velocity averages. 

	//double (*ge)[19], (*he)[19]; //Equiliberium functions

	//double (*gc)[19], (*hc)[19]; //post collision functions

	//double (*geq)[19], (*heq)[19]; //Equiliberium functions

	//double (*gamhold)[19];//Used to calculate the laplacian of gamma

	double *tau,tau1,tau2;//Relaxation times

	double M,BA;//Mobility and free energy variation

	//double (*f)[19];

	int wrtst,stst,infost,Nd;//step interval at which to write to file

	//double d2rho;

	int dimensions, boundtype,rt; //Number of dimensions the problem is being run in
	
	int rank,size,leftProcess,rightProcess; //MPI variables

	double B, kappa,ep; //Constants in free Energy and interface width

	double cs2;//cs squared in literature

	double dx , dt ; //Lattice spacing both set to one at the moment

	double rho1 ,rho2 ; // Liquid and gas densities
	
	double Ebulk,Eint,Esurf,energy,surfarea,xhold,yhold,zhold,r;//variables to calculate energy
	
	double KEx , KEy , KEz , COMx , COMy , COMz ,COMt,COMn, Ctot , rhotot , disdtot , disvtot, vol, dU; //Variables to calculate Kinetic energy

	string folder,fol1; //Holds the name of the folder to which inputs should be written

	long int st;//equation step

	long int Neqst; //Number of iteration steps

	int Q; // Number of velocity dicridations

	int wx ,wy ,wz ,wx2,wy2,wz2,pw,zw,Pz,wx3,wy3,wz3; //Width of surface

	double El,Eg,Ei,Et,Ekin;//Energy values

	//double *dCt , *dmut ,*drhot,*dpt,*dgammat;

    double gamma0,gamma1,gamma2,gamma3,gamma4,gamma5,gamma6,gamma7,gamma8,gamma9,gamma10,gamma11,gamma12,gamma13,gamma14,gamma15,gamma16,gamma17,gamma18,gammat;
        double gammar0,gammar1,gammar2,gammar3,gammar4,gammar5,gammar6,gammar7,gammar8,gammar9,gammar10,gammar11,gammar12,gammar13,gammar14,gammar15,gammar16,gammar17,gammar18,gammart;

   
 double gammap1,gammap2,gammap3,gammap4,gammap7,gammap8,gammap9,gammap10;
 double graduxC1,graduxC2,graduxC3,graduxC4,graduxC5,graduxC6,graduxC7,graduxC8,graduxC9,graduxC10,graduxC11,graduxC12,graduxC13,graduxC14,graduxC15,graduxC16,graduxC17,graduxC18,graduxCx,graduxCy,graduxCz;
 double graduyC1,graduyC2,graduyC3,graduyC4,graduyC5,graduyC6,graduyC7,graduyC8,graduyC9,graduyC10,graduyC11,graduyC12,graduyC13,graduyC14,graduyC15,graduyC16,graduyC17,graduyC18,graduyCx,graduyCy,graduyCz;
 double graduzC1,graduzC2,graduzC3,graduzC4,graduzC5,graduzC6,graduzC7,graduzC8,graduzC9,graduzC10,graduzC11,graduzC12,graduzC13,graduzC14,graduzC15,graduzC16,graduzC17,graduzC18,graduzCx,graduzCy,graduzCz;
   
   
    double gradrhoC1,gradrhoC2,gradrhoC3,gradrhoC4,gradrhoC5,gradrhoC6,gradrhoC7,gradrhoC8,gradrhoC9,gradrhoC10,gradrhoC11,gradrhoC12,gradrhoC13,gradrhoC14,gradrhoC15,gradrhoC16,gradrhoC17,gradrhoC18,gradrhoCx,gradrhoCy,gradrhoCz;
    double gradmuC1,gradmuC2,gradmuC3,gradmuC4,gradmuC5,gradmuC6,gradmuC7,gradmuC8,gradmuC9,gradmuC10,gradmuC11,gradmuC12,gradmuC13,gradmuC14,gradmuC15,gradmuC16,gradmuC17,gradmuC18,gradmuCx,gradmuCy,gradmuCz;
    double gradpC1,gradpC2,gradpC3,gradpC4,gradpC5,gradpC6,gradpC7,gradpC8,gradpC9,gradpC10,gradpC11,gradpC12,gradpC13,gradpC14,gradpC15,gradpC16,gradpC17,gradpC18,gradpCx,gradpCy,gradpCz;
    double gradCC1,gradCC2,gradCC3,gradCC4,gradCC5,gradCC6,gradCC7,gradCC8,gradCC9,gradCC10,gradCC11,gradCC12,gradCC13,gradCC14,gradCC15,gradCC16,gradCC17,gradCC18,gradCCx,gradCCy,gradCCz;

    double gradrhoU1,gradrhoU2,gradrhoU3,gradrhoU4,gradrhoU5,gradrhoU6,gradrhoU7,gradrhoU8,gradrhoU9,gradrhoU10,gradrhoU11,gradrhoU12,gradrhoU13,gradrhoU14,gradrhoU15,gradrhoU16,gradrhoU17,gradrhoU18,gradrhoUx,gradrhoUy,gradrhoUz;
    double gradmuU1,gradmuU2,gradmuU3,gradmuU4,gradmuU5,gradmuU6,gradmuU7,gradmuU8,gradmuU9,gradmuU10,gradmuU11,gradmuU12,gradmuU13,gradmuU14,gradmuU15,gradmuU16,gradmuU17,gradmuU18,gradmuUx,gradmuUy,gradmuUz;
    double gradpU1,gradpU2,gradpU3,gradpU4,gradpU5,gradpU6,gradpU7,gradpU8,gradpU9,gradpU10,gradpU11,gradpU12,gradpU13,gradpU14,gradpU15,gradpU16,gradpU17,gradpU18,gradpUx,gradpUy,gradpUz;
    double gradCU1,gradCU2,gradCU3,gradCU4,gradCU5,gradCU6,gradCU7,gradCU8,gradCU9,gradCU10,gradCU11,gradCU12,gradCU13,gradCU14,gradCU15,gradCU16,gradCU17,gradCU18,gradCUx,gradCUy,gradCUz;

    double gradrhoM1,gradrhoM2,gradrhoM3,gradrhoM4,gradrhoM5,gradrhoM6,gradrhoM7,gradrhoM8,gradrhoM9,gradrhoM10,gradrhoM11,gradrhoM12,gradrhoM13,gradrhoM14,gradrhoM15,gradrhoM16,gradrhoM17,gradrhoM18,gradrhoMx,gradrhoMy,gradrhoMz;

    double FhC1,FhC2,FhC3,FhC4,FhC5,FhC6,FhC7,FhC8,FhC9,FhC10,FhC11,FhC12,FhC13,FhC14,FhC15,FhC16,FhC17,FhC18,FhCx,FhCy,FhCz;
    double FhU1,FhU2,FhU3,FhU4,FhU5,FhU6,FhU7,FhU8,FhU9,FhU10,FhU11,FhU12,FhU13,FhU14,FhU15,FhU16,FhU17,FhU18,FhUx,FhUy,FhUz;
    double FhM1,FhM2,FhM3,FhM4,FhM5,FhM6,FhM7,FhM8,FhM9,FhM10,FhM11,FhM12,FhM13,FhM14,FhM15,FhM16,FhM17,FhM18,FhMx,FhMy,FhMz;
	
	double hold1,hold2,hold3,hold4,hold5,hold6,hold7,hold8,hold9,hold10,hold11,hold12,hold13,hold14,hold15,hold16,hold17,hold18,holdx,holdy,holdz;

    double FgC1,FgC2,FgC3,FgC4,FgC5,FgC6,FgC7,FgC8,FgC9,FgC10,FgC11,FgC12,FgC13,FgC14,FgC15,FgC16,FgC17,FgC18,FgCx,FgCy,FgCz;
    double FgU1,FgU2,FgU3,FgU4,FgU5,FgU6,FgU7,FgU8,FgU9,FgU10,FgU11,FgU12,FgU13,FgU14,FgU15,FgU16,FgU17,FgU18,FgUx,FgUy,FgUz;
    double FgM1,FgM2,FgM3,FgM4,FgM5,FgM6,FgM7,FgM8,FgM9,FgM10,FgM11,FgM12,FgM13,FgM14,FgM15,FgM16,FgM17,FgM18,FgMx,FgMy,FgMz;
    
    double FgrC1,FgrC2,FgrC3,FgrC4,FgrC5,FgrC6,FgrC7,FgrC8,FgrC9,FgrC10,FgrC11,FgrC12,FgrC13,FgrC14,FgrC15,FgrC16,FgrC17,FgrC18,FgrCx,FgrCy,FgrCz;
    double FgrU1,FgrU2,FgrU3,FgrU4,FgrU5,FgrU6,FgrU7,FgrU8,FgrU9,FgrU10,FgrU11,FgrU12,FgrU13,FgrU14,FgrU15,FgrU16,FgrU17,FgrU18,FgrUx,FgrUy,FgrUz;
    double FgrM1,FgrM2,FgrM3,FgrM4,FgrM5,FgrM6,FgrM7,FgrM8,FgrM9,FgrM10,FgrM11,FgrM12,FgrM13,FgrM14,FgrM15,FgrM16,FgrM17,FgrM18,FgrMx,FgrMy,FgrMz;

	double FfC1,FfC2,FfC3,FfC4,FfC5,FfC6,FfC7,FfC8,FfC9,FfC10,FfC11,FfC12,FfC13,FfC14,FfC15,FfC16,FfC17,FfC18,FfCx,FfCy,FfCz;
    double FfU1,FfU2,FfU3,FfU4,FfU5,FfU6,FfU7,FfU8,FfU9,FfU10,FfU11,FfU12,FfU13,FfU14,FfU15,FfU16,FfU17,FfU18,FfUx,FfUy,FfUz;
    double FfM1,FfM2,FfM3,FfM4,FfM5,FfM6,FfM7,FfM8,FfM9,FfM10,FfM11,FfM12,FfM13,FfM14,FfM15,FfM16,FfM17,FfM18,FfMx,FfMy,FfMz;


    double geq0,geq1,geq2,geq3,geq4,geq5,geq6,geq7,geq8,geq9,geq10,geq11,geq12,geq13,geq14,geq15,geq16,geq17,geq18;
    double heq0,heq1,heq2,heq3,heq4,heq5,heq6,heq7,heq8,heq9,heq10,heq11,heq12,heq13,heq14,heq15,heq16,heq17,heq18;
    double feq0,feq1,feq2,feq3,feq4,feq5,feq6,feq7,feq8,feq9,feq10,feq11,feq12,feq13,feq14,feq15,feq16,feq17,feq18;

    
    double M0,M1,M2,M3,M4,M5,M6,M7,M8,M9,M10,M11,M12,M13,M14,M15,M16,M17,M18;
	
    double *CGlobal,  *muGlobal,*pGlobal,*uxGlobal,*uyGlobal,*uzGlobal,*disvGlobal,*disdGlobal,*pcGlobal,*ptGlobal;
	int *maskGlobal;

//Declariation of subfunctions

	void initialisemoments();//Sets the initial value of C,p,mu and rho
	//void inputmoments();//input comments if input=1
	void computecoordinates(int);//Computes the x,y,z position of a gridpoint from k values
	void initialise();//Run at start of simulation to set everything up
	void neibour(int);//Computes which grid points are adjacent to current grid point.
	void readinput();//get values from .par files
	void equiliberiumg();//calculate geq
	void equiliberiumh();//calculate heq
	void writemoments(long int);//write the value of the moments to file
	void computemoments();//compute the value of the moments from the density functions
	template<typename V> V mod(V,V);//adds the modulo template
	void writevelocity(int);//write tha value of the velocity to file
	void propcolh();//propogate and collide h
	void propcolg();//propogate and collide g
	void mach();//Not used any more
	void initialisesurface();//Initialises the solid surface
	void relabel();//Used in initialise surface
	void computefreeenergy();//computes values witten in writefreeenergy
	void diffBD();//computes biased differences
	void diffCD();//computes central differences
	void centralforce();//
	void equiliberiumf();//calculates equilibrium value of f not used
	void propcolf();//not used
	void setwallnodes();//sorts out nodes on the solid surface
	void momentsbound();//sorts out the simulation box boundaries
	void computeenergy();//computes variables written in write energy
	void propset();//finishes the propogation
	void exchangeC();//exchange functions send information between computing nodes
	void exchangerho();
	void exchangemu();
	void exchangep();
	void exchangevel();
	void exchangemask();
	void genCglobal();
	void generateglobalmask();//generate functions generate global versions of the data no longer used used as this was memory inefficient. Also generate the plan variables which is till useful.
	void exchangemuh();
	void exchangedencol();
	void genmuglobal();
	void genpglobal();
	void genuxglobal();
	void genuyglobal();
	void genuzglobal();
	void writeinfofile();//writes simulation start values information
	void writeenergy(long int);//writes the value of the system energy as well as some other stuff
	void dis();//Calculates dissipation
	void writedis(long int);//writes dissipation
	void gendisvGlobal();
	void gendisdGlobal();
	void writedisin(long int);
	void computesurfarea();//computes contact area between liquid and surface. Written to file in write energy
	void writeinput();//writes the .txt files which allow a simulation to be started from where another ended.
	void writesurface();
 public:

		void algorithm();
		wet(void);
		~wet(void);












};

template<typename V>
V wet::mod(V a, V b)
{
    return (a % b + b) % b;
}
