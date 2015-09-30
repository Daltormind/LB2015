//Computemoments


#include "wet.h"

void wet::computemoments()
{



//Compute Composition C
for(k=k1;k<k2;k++)
{
if(mask[k]!=28)
{

		
		

		if(dimensions==3)
		{
		C[k]=h0[k]+h1[k]+h2[k]+h3[k]+h4[k]+h7[k]+h8[k]+h9[k]+h10[k]+h11[k]+h12[k]+h13[k]+h14[k]+h15[k]+h16[k]+h17[k]+h18[k]+h5[k]+h6[k]; //Compute C from updated velocity distributions
		
		  
		    
		  
	}
		if(dimensions==2)
		{
		C[k]=h0[k]+h1[k]+h2[k]+h3[k]+h4[k]+h7[k]+h8[k]+h9[k]+h10[k]; //Compute C from updated velocity distributions
		/*
	if(mask[k]==1)
		  {
		    C[k]=0.0;
		  }
		*/
		}
		//rho[k]=f[k][0]+f[k][1]+f[k][2]+f[k][3]+f[k][4]+f[k][7]+f[k][8]+f[k][9]+f[k][10];
		
	
	//printf("CHECK: st=%i Nd=%i\n",st,Nd);		     	    
			//	cout << "Nd=" << Nd << " st=" << st << endl;	
		/*    if(st%Nd==0)
	      { 


		//cout << " New drop added " << endl;
		int centre,check,count;
		check=0;
		count=0;
		double test,num;
		srand(st);
		centre=rand()%(Ly-40) +20;
		

		do
		  {
		    check=0;
		for(k=k1;k<k2;k++)
		  {
		    	computecoordinates(k);
		    	if((xk-xcentre)*(xk-xcentre)+(yk-centre)*(yk-centre)<=(R+2*ep)*(R+2*ep))
			  {
		    if(C[k]>0.01){check=1;}
			  }
		    
			  }
		count=count+1;
		srand(st+50*count);
		centre=rand()%(Ly-40) +20;
		cout << count << " " << centre << " " <<  check << endl;
		  }
		while(check==1 && count<=50);

		if(check!=1)
		  {
		for(k=k1;k<k2;k++)
		  {
		computecoordinates(k);
		if((xk-xcentre)*(xk-xcentre)+(yk-centre)*(yk-centre)<=(R+2*ep)*(R+2*ep))
		  {
		    //  cout << "entered new drop loop " << endl;
				num=sqrt((xk-xcentre)*(xk-xcentre)+(yk-centre)*(yk-centre));
				test=tanh(2.0*(-num+R)/ep);
				C[k]=0.5 + 0.5*test;
				
				
				
			
		  }
		  }
		  }
	      }
		*/
 


		
		rho[k]=C[k]*rho1+(1-C[k])*rho2; //Compute Rho from updated moments
		
		tau[k]=1.0/(C[k]/tau1+(1-C[k])/tau2); // Compute tau for updated moments
		if(rt==1){
	if (mask[k]==1 || mask[k]==3){tau[k]=0.5;}
		}
	
//	if(st%10000==0){tau[k]=0.5;}
		/*
		computecoordinates(k);
		if(xk==68 and yk==27 and zk == 49)
		  {
		    cout << st << " " << C[k]  << " " << h0[k] << " " << h1[k] <<  " " << h2[k] << " " << h3[k] << " " << h4[k] << " " << h5[k] << " " << h6[k] << " " << h7[k]  <<  " " << h8[k] << " " << h9[k] << " " << h10[k] << " " << h11[k] << " " << h12[k] << " " << h13[k] << " " << h14[k] << " " << h15[k] << " " << h16[k] << " " << h17[k] << " " << h18[k] << endl; 
		  }
		*/
}
}

exchangeC();
exchangerho();
/*
for(k=k1;k<k2;k++)
  {
    computecoordinates(k);
    cenxu=xk*C[k];
    cenxl=C[k];
  }

cenx=cenxu/cenxl;
if(rho[k]>0.1) G[0]=-0.0000002*(cenx-300);
*/
for(k=k1;k<k2;k++)//Initialise free energy 
	{
		if(mask[k]!=28)
		{
			if (mask[k]==0 || mask[k]==2)
            {
            if(dimensions==3)
            {
            d2C=(C[d[k][6]]+C[d[k][7]]+C[d[k][8]]+C[d[k][9]]+C[d[k][10]]+C[d[k][11]]+C[d[k][12]]+C[d[k][13]]+C[d[k][14]]+C[d[k][15]]+C[d[k][16]]+C[d[k][17]]+2.0*(C[d[k][0]]+C[d[k][1]]+C[d[k][2]]+C[d[k][3]]+C[d[k][4]]+C[d[k][5]])-24.0*C[k])/(6.0*dt*dt);
			}
			if(dimensions==2)
			{
            d2C=(C[d[k][6]]+C[d[k][7]]+C[d[k][8]]+C[d[k][9]]+4.0*(C[d[k][0]]+C[d[k][1]]+C[d[k][2]]+C[d[k][3]])-20.0*C[k])/(6.0*dt*dt);
			}
			}
			/*
			else if (mask[k]==1 || mask[k]==4)
			{
			
				dC=Wc*(C[k]-C[k]*C[k]);
				if(mask[d[k][0]]==28)
    	{hold1=C[d[k][1]]-2*dC;}else{hold1=C[d[k][0]];}
    	
    	if(mask[d[k][1]]==28)
    	{hold2=C[d[k][0]]-2*dC;}else{hold2=C[d[k][1]];}
    	
    	if(mask[d[k][2]]==28)
    	{hold3=C[d[k][3]]-2*dC;}else{hold3=C[d[k][2]];}
    	
    	if(mask[d[k][3]]==28)
    	{hold4=C[d[k][2]]-2*dC;}else{hold4=C[d[k][3]];}
    	
    	if(mask[d[k][4]]==28)
    	{hold5=C[d[k][5]]-2*dC;}else{hold5=C[d[k][4]];}
    	
    	if(mask[d[k][5]]==28)
    	{hold6=C[d[k][4]]-2*dC;}else{hold6=C[d[k][5]];}
    	
    	if(mask[d[k][6]]==28)
    	{hold7=C[d[k][9]]-2*dC;}else{hold7=C[d[k][6]];}
    	
    	if(mask[d[k][7]]==28)
    	{hold8=C[d[k][8]]-2*dC;}else{hold8=C[d[k][7]];}
    	
    	if(mask[d[k][8]]==28)
    	{hold9=C[d[k][7]]-2*dC;}else{hold9=C[d[k][8]];}
    	
    	if(mask[d[k][9]]==28)
    	{hold10=C[d[k][6]]-2*dC;}else{hold10=C[d[k][9]];}
    	
    	if(mask[d[k][10]]==28)
    	{hold11=C[d[k][13]]-2*dC;}else{hold11=C[d[k][10]];}
    	
    	if(mask[d[k][11]]==28)
    	{hold12=C[d[k][12]]-2*dC;}else{hold12=C[d[k][11]];}
    	
    	if(mask[d[k][12]]==28)
    	{hold13=C[d[k][11]]-2*dC;}else{hold13=C[d[k][12]];}
    	
    	if(mask[d[k][13]]==28)
    	{hold14=C[d[k][10]]-2*dC;}else{hold14=C[d[k][13]];}
    	
    	if(mask[d[k][14]]==28)
    	{hold15=C[d[k][17]]-2*dC;}else{hold15=C[d[k][14]];}
    	
    	if(mask[d[k][15]]==28)
    	{hold16=C[d[k][16]]-2*dC;}else{hold16=C[d[k][15]];}
    	
    	if(mask[d[k][16]]==28)
    	{hold17=C[d[k][15]]-2*dC;}else{hold17=C[d[k][16]];}
    	
    	if(mask[d[k][17]]==28)
    	{hold18=C[d[k][14]]-2*dC;}else{hold18=C[d[k][17]];}
			
			if(dimensions==3)
            {
            d2C=(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*C[k])/(6.0*dt*dt);
			}
			if(dimensions==2)
			{
            d2C=(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*C[k])/(6.0*dt*dt);
			}
			
			}
			*/
			else if (mask[k]==3)
			{
			
				dC=Wc[k]*(C[k]-C[k]*C[k]);
				if(mask[d[k][0]]==28)
    	{hold1=C[d[k][1]]-2*dC;}else{hold1=C[d[k][0]];}
    	
    	if(mask[d[k][1]]==28)
    	{hold2=C[d[k][0]]-2*dC;}else{hold2=C[d[k][1]];}
    	
    	if(mask[d[k][2]]==28)
    	{hold3=C[d[k][3]]-2*dC;}else{hold3=C[d[k][2]];}
    	
    	if(mask[d[k][3]]==28)
    	{hold4=C[d[k][2]]-2*dC;}else{hold4=C[d[k][3]];}
    	
    	if(mask[d[k][4]]==28)
    	{hold5=C[d[k][5]]-2*dC;}else{hold5=C[d[k][4]];}
    	
    	if(mask[d[k][5]]==28)
    	{hold6=C[d[k][4]]-2*dC;}else{hold6=C[d[k][5]];}
    	
    	if(mask[d[k][6]]==28 || mask[d[k][6]]==3)
    	{hold7=C[d[k][9]]-2*dC;
  if(mask[d[k][9]]==28 || mask[d[k][9]]==3){hold7=C[k];}
}else{hold7=C[d[k][6]];}
    	
    	if(mask[d[k][7]]==28 || mask[d[k][7]]==3)
    	{hold8=C[d[k][8]]-2*dC;
	   if(mask[d[k][8]]==28 || mask[d[k][8]]==3){hold8=C[k];}
}else{hold8=C[d[k][7]];}
    	
    	if(mask[d[k][8]]==28 || mask[d[k][8]]==3)
    	{hold9=C[d[k][7]]-2*dC;}
 if(mask[d[k][7]]==28 || mask[d[k][7]]==3){hold9=C[k];}
else{hold9=C[d[k][8]];}
    	
    	if(mask[d[k][9]]==28 || mask[d[k][9]]==3)
    	{hold10=C[d[k][6]]-2*dC;}
	 if(mask[d[k][6]]==28 || mask[d[k][6]]==3){hold10=C[k];}
else{hold10=C[d[k][9]];}
    	
    	if(mask[d[k][10]]==28 || mask[d[k][10]]==3)
    	{hold11=C[d[k][13]]-2*dC;}
 if(mask[d[k][13]]==28 || mask[d[k][13]]==3){hold11=C[k];}
else{hold11=C[d[k][10]];}
    	
    	if(mask[d[k][11]]==28 || mask[d[k][11]]==3)
    	{hold12=C[d[k][12]]-2*dC;
 if(mask[d[k][12]]==28 || mask[d[k][12]]==3){hold12=C[k];}
}else{hold12=C[d[k][11]];}
    	
    	if(mask[d[k][12]]==28 || mask[d[k][12]]==3)
    	{hold13=C[d[k][11]]-2*dC;
 if(mask[d[k][11]]==28 || mask[d[k][11]]==3){hold13=C[k];}
}else{hold13=C[d[k][12]];}
    	
    	if(mask[d[k][13]]==28 || mask[d[k][13]]==3)
    	{hold14=C[d[k][10]]-2*dC;
 if(mask[d[k][10]]==28 || mask[d[k][10]]==3){hold14=C[k];}
}else{hold14=C[d[k][13]];}
    	
    	if(mask[d[k][14]]==28 || mask[d[k][14]]==3)
    	{hold15=C[d[k][17]]-2*dC;
 if(mask[d[k][17]]==28 || mask[d[k][17]]==3){hold15=C[k];}
}else{hold15=C[d[k][14]];}
    	
    	if(mask[d[k][15]]==28 || mask[d[k][15]]==3)
    	{hold16=C[d[k][16]]-2*dC;
 if(mask[d[k][16]]==28 || mask[d[k][16]]==3){hold16=C[k];}
}else{hold16=C[d[k][15]];}
    	
    	if(mask[d[k][16]]==28 || mask[d[k][16]]==3)
    	{hold17=C[d[k][15]]-2*dC;
 if(mask[d[k][15]]==28 || mask[d[k][15]]==3){hold17=C[k];}
}else{hold17=C[d[k][16]];}
    	
    	if(mask[d[k][17]]==28 || mask[d[k][17]]==3)
    	{hold18=C[d[k][14]]-2*dC;
 if(mask[d[k][14]]==28 || mask[d[k][14]]==3){hold18=C[k];}
}else{hold18=C[d[k][17]];}
			
			if(dimensions==3)
            {
            d2C=(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*C[k])/(6.0*dt*dt);
			}
			if(dimensions==2)
			{
            d2C=(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*C[k])/(6.0*dt*dt);
			}
			
			}
			    
	else if (mask[k]==1)
	      {
			
				dC=Wc[k]*(C[k]-C[k]*C[k]);
				if(mask[d[k][0]]==28)
    	{hold1=C[d[k][1]]-2*dC;}else{hold1=C[d[k][0]];}
    	
    	if(mask[d[k][1]]==28)
    	{hold2=C[d[k][0]]-2*dC;}else{hold2=C[d[k][1]];}
    	
    	if(mask[d[k][2]]==28)
    	{hold3=C[d[k][3]]-2*dC;}else{hold3=C[d[k][2]];}
    	
    	if(mask[d[k][3]]==28)
    	{hold4=C[d[k][2]]-2*dC;}else{hold4=C[d[k][3]];}
    	
    	if(mask[d[k][4]]==28)
    	{hold5=C[d[k][5]]-2*dC;}else{hold5=C[d[k][4]];}
    	
    	if(mask[d[k][5]]==28)
    	{hold6=C[d[k][4]]-2*dC;}else{hold6=C[d[k][5]];}
    	
    	if(mask[d[k][6]]==28)
    	{hold7=C[d[k][9]]-2*dC;
	  if(mask[d[k][9]]==28){hold7=C[k];}
}else{hold7=C[d[k][6]];}
    	
    	if(mask[d[k][7]]==28)
    	{hold8=C[d[k][8]]-2*dC;
	  if(mask[d[k][8]]==28){hold8=C[k];}
}else{hold8=C[d[k][7]];}
    	
    	if(mask[d[k][8]]==28)
    	{hold9=C[d[k][7]]-2*dC;
	  if(mask[d[k][7]]==28){hold9=C[k];}
}else{hold9=C[d[k][8]];}
    	
    	if(mask[d[k][9]]==28)
    	{hold10=C[d[k][6]]-2*dC;
	  if(mask[d[k][6]]==28){hold10=C[k];}
}else{hold10=C[d[k][9]];}
    	
    	if(mask[d[k][10]]==28)
    	{hold11=C[d[k][13]]-2*dC;
	  if(mask[d[k][13]]==28){hold11=C[k];}
}else{hold11=C[d[k][10]];}
    	
    	if(mask[d[k][11]]==28)
    	{hold12=C[d[k][12]]-2*dC;
	  if(mask[d[k][12]]==28){hold12=C[k];}
}else{hold12=C[d[k][11]];}
    	
    	if(mask[d[k][12]]==28)
    	{hold13=C[d[k][11]]-2*dC;
	  if(mask[d[k][11]]==28){hold13=C[k];}
}else{hold13=C[d[k][12]];}
    	
    	if(mask[d[k][13]]==28)
    	{hold14=C[d[k][10]]-2*dC;
	  if(mask[d[k][10]]==28){hold14=C[k];}
}else{hold14=C[d[k][13]];}
    	
    	if(mask[d[k][14]]==28)
    	{hold15=C[d[k][17]]-2*dC;
	  if(mask[d[k][17]]==28){hold15=C[k];}
}else{hold15=C[d[k][14]];}
    	
    	if(mask[d[k][15]]==28)
    	{hold16=C[d[k][16]]-2*dC;
	  if(mask[d[k][16]]==28){hold16=C[k];}
}else{hold16=C[d[k][15]];}
    	
    	if(mask[d[k][16]]==28)
    	{hold17=C[d[k][15]]-2*dC;
	  if(mask[d[k][15]]==28){hold17=C[k];}
	}else{hold17=C[d[k][16]];}
    	
    	if(mask[d[k][17]]==28)
    	{hold18=C[d[k][14]]-2*dC;
	  if(mask[d[k][14]]==28){hold18=C[k];}
}else{hold18=C[d[k][17]];}
			
			if(dimensions==3)
            {
            d2C=(hold7+hold8+hold9+hold10+hold11+hold12+hold13+hold14+hold15+hold16+hold17+hold18+2.0*(hold1+hold2+hold3+hold4+hold5+hold6)-24.0*C[k])/(6.0*dt*dt);
			}
			if(dimensions==2)
			{
            d2C=(hold7+hold8+hold9+hold10+4.0*(hold1+hold2+hold3+hold4)-20.0*C[k])/(6.0*dt*dt);
			}
			
			}
	    
		
			
		
	/*		
	else if(mask[k]==1)
	{
		dC=Wc*(C[k]-C[k]*C[k]);
		d2C=(C[d[k][7]] + C[d[k][9]] + 4.0*C[d[k][1]] - 6.0*dC + 2.0*C[d[k][2]] + 2.0*C[d[k][3]]-10.0*C[k])/(3.0*dt*dt);

	}
	else if(mask[k]==2)
	{
		dC=Wc*(C[k]-C[k]*C[k]);
		d2C=(C[d[k][6]]+C[d[k][8]]+4.0*C[d[k][1]] + 2.0*C[d[k][2]] + 2.0*C[d[k][3]]-10.0*C[k] -6.0*dC )/(3.0*dt*dt);

	}
	else if(mask[k]==3)
	{
		dC=Wc*(C[k]-C[k]*C[k]);
		d2C=(C[d[k][8]]+C[d[k][9]]+4.0*C[d[k][3]] + 2.0*C[d[k][0]] + 2.0*C[d[k][1]]-10.0*C[k] -6.0*dC )/(3.0*dt*dt);

	}
	else if(mask[k]==4)
	{
		dC=Wc*(C[k]-C[k]*C[k]);
		d2C=(C[d[k][6]]+C[d[k][7]]+4.0*C[d[k][2]] + 2.0*C[d[k][0]] + 2.0*C[d[k][1]]-10.0*C[k] -6.0*dC )/(3.0*dt*dt);

	}
	else if(mask[k]==7)
	{
	dC=Wc*(C[k]-C[k]*C[k]);
	d2C=1.0/6.0*(C[d[k][8]] + 2.0*C[d[k][9]] + C[d[k][7]]+ 4.0*C[d[k][3]] + 4.0*C[d[k][2]]
	+4.0*C[d[k][0]] + 4.0*C[d[k][1]] - 20.0*C[k]);
	}	
	else if(mask[k]==8)
	{
	dC=Wc*(C[k]-C[k]*C[k]);
	d2C=1.0/6.0*(C[d[k][6]] + 2.0*C[d[k][8]] + C[d[k][9]]+ 4.0*C[d[k][3]] + 4.0*C[d[k][2]]
	+4.0*C[d[k][0]] + 4.0*C[d[k][1]] - 20.0*C[k]);
	}	
	else if(mask[k]==9)
	{
	dC=Wc*(C[k]-C[k]*C[k]);
	d2C=1.0/6.0*(C[d[k][6]] + 2.0*C[d[k][7]] + C[d[k][79]]+ 4.0*C[d[k][3]] + 4.0*C[d[k][2]]
	+4.0*C[d[k][0]] + 4.0*C[d[k][1]] - 20.0*C[k]);
	}	
	else if(mask[k]==10)
	{
	dC=Wc*(C[k]-C[k]*C[k]);
	d2C=1.0/6.0*(C[d[k][8]] + 2.0*C[d[k][6]] + C[d[k][7]]+ 4.0*C[d[k][3]] + 4.0*C[d[k][2]]
	+4.0*C[d[k][0]] + 4.0*C[d[k][1]] - 20.0*C[k]);
	}					
	*/		
			
			
			mu[k]=2*B*( C[k]*pow(C[k]-1.0,2) + pow(C[k],2)*(C[k]-1.0) ) - kappa*d2C;

            
            
            //d2rho=(rho[d[k][6]]+rho[d[k][7]]+rho[d[k][8]]+rho[d[k][9]]+4.0*(rho[d[k][0]]+rho[d[k][1]]+rho[d[k][2]]+rho[d[k][3]])-20.0*rho[k])/6.0;
            
            //mu[k]=0.0;//4.0*B*(rho[k]-rho1)*(rho[k]-rho2)*(rho[k]-(rho2+rho1)*0.5)-kappa*d2rho; 
            /*
			if(C[k]<0)
			{
			muh[k]=mu[k]+2*BA*C[k];
			}
			else{muh[k]=mu[k];}
			*/
		}
	}
	
exchangemu();
//exchangemuh();

//Compute Macroscopic velocity
for(k=k1;k<k2;k++)
{
if(mask[k]!=28)

{
			if(mask[k]==0 || mask[k]==2)
			{
            gradCC1=0.5*(C[d[k][0]]-C[d[k][1]])/dt;
			gradCC2=0.5*(C[d[k][1]]-C[d[k][0]])/dt;
    		gradCC3=0.5*(C[d[k][2]]-C[d[k][3]])/dt;
    		gradCC4=0.5*(C[d[k][3]]-C[d[k][2]])/dt;
    		gradCC7=0.5*(C[d[k][6]]-C[d[k][9]])/dt;
    		gradCC8=0.5*(C[d[k][7]]-C[d[k][8]])/dt;
    		gradCC9=0.5*(C[d[k][8]]-C[d[k][7]])/dt;
    		gradCC10=0.5*(C[d[k][9]]-C[d[k][6]])/dt;
    		
    		gradCC5=0.5*(C[d[k][4]]-C[d[k][5]])/dt;
    		gradCC6=0.5*(C[d[k][5]]-C[d[k][4]])/dt;
    		gradCC11=0.5*(C[d[k][10]]-C[d[k][13]])/dt;
    		gradCC12=0.5*(C[d[k][11]]-C[d[k][12]])/dt;
    		gradCC13=0.5*(C[d[k][12]]-C[d[k][11]])/dt;
    		gradCC14=0.5*(C[d[k][13]]-C[d[k][10]])/dt;
    		gradCC15=0.5*(C[d[k][14]]-C[d[k][17]])/dt;
    		gradCC16=0.5*(C[d[k][15]]-C[d[k][16]])/dt;
   			 gradCC17=0.5*(C[d[k][16]]-C[d[k][15]])/dt;
    		gradCC18=0.5*(C[d[k][17]]-C[d[k][14]])/dt;
			}
		
	else if(mask[k]==1)
			{
				if(mask[d[k][0]]==28 || mask[d[k][1]]==28)
    	{gradCC1=0.0;gradCC2=0.0;}
    	else
	        {			
                gradCC1=0.5*(C[d[k][0]]-C[d[k][1]])/dt;
    	        gradCC2=0.5*(C[d[k][1]]-C[d[k][0]])/dt;
    	    	}
    
    	
		if(mask[d[k][2]]==28 || mask[d[k][3]]==28)
    	{gradCC3=0.0;gradCC4=0.0;}
    	else
    	{			
    		
    		gradCC3=0.5*(C[d[k][2]]-C[d[k][3]])/dt;
    		
    		
    		
    		gradCC4=0.5*(C[d[k][3]]-C[d[k][2]])/dt;
    		

		}
		
		
		
		if(mask[d[k][4]]==28 || mask[d[k][5]]==28)
    	{gradCC5=0.0;gradCC6=0.0;}
    	else
    	{			
    		gradCC5=0.5*(C[d[k][4]]-C[d[k][5]])/dt;
    		
    		
    		gradCC6=0.5*(C[d[k][5]]-C[d[k][4]])/dt;
    		

		}
		
		
    
    	if(mask[d[k][6]]==28 || mask[d[k][9]]==28)
    	{gradCC7=0.0;gradCC10=0.0;}
    	else
    	{			
    		gradCC7=0.5*(C[d[k][6]]-C[d[k][9]])/dt;
    		
    		
    		gradCC10=0.5*(C[d[k][9]]-C[d[k][6]])/dt;
    		

		}
		
		if(mask[d[k][7]]==28 || mask[d[k][8]]==28)
    	{gradCC8=0.0;
    	gradCC9=0.0;}
    	else
    	{			
    		gradCC8=0.5*(C[d[k][7]]-C[d[k][8]])/dt;
    		
    		
    		gradCC9=0.5*(C[d[k][8]]-C[d[k][7]])/dt;
    		

		}
		
		
		if(mask[d[k][10]]==28 || mask[d[k][13]]==28)
    	{gradCC11=0.0;
    	gradCC14=0.0;}
    	else
    	{			
    		gradCC11=0.5*(C[d[k][10]]-C[d[k][13]])/dt;
    		
    		
    		gradCC14=0.5*(C[d[k][13]]-C[d[k][10]])/dt;
    		

		}
		
		if(mask[d[k][11]]==28 || mask[d[k][12]]==28)
    	{gradCC12=0.0;
    	gradCC13=0.0;}
    	else
    	{			
    		gradCC12=0.5*(C[d[k][11]]-C[d[k][12]])/dt;
    		
    		
    		gradCC13=0.5*(C[d[k][12]]-C[d[k][11]])/dt;
    		

		}
		
		if(mask[d[k][14]]==28 || mask[d[k][17]]==28)
    	{gradCC15=0.0;
    	gradCC18=0.0;}
    	else
    	{			
    		gradCC15=0.5*(C[d[k][14]]-C[d[k][17]])/dt;
    		
    		
    		gradCC18=0.5*(C[d[k][17]]-C[d[k][14]])/dt;
    		

		}
		
		if(mask[d[k][15]]==28 || mask[d[k][16]]==28)
    	{gradCC16=0.0;
    	gradCC17=0.0;}
    	else
    	{			
    		gradCC16=0.5*(C[d[k][15]]-C[d[k][16]])/dt;
    		
    		
    		gradCC17=0.5*(C[d[k][16]]-C[d[k][15]])/dt;
    		

		}
		
		
    
			}
				
	else if(mask[k]==3)
			{
				if(mask[d[k][0]]==28 || mask[d[k][1]]==28 ||  mask[d[k][0]]==3 || mask[d[k][1]]==3 )
    	{gradCC1=0.0;gradCC2=0.0;}
    	else
	        {			
                gradCC1=0.5*(C[d[k][0]]-C[d[k][1]])/dt;
    	        gradCC2=0.5*(C[d[k][1]]-C[d[k][0]])/dt;
    	    	}
    
    	
		if(mask[d[k][2]]==28 || mask[d[k][3]]==28 ||  mask[d[k][2]]==3 || mask[d[k][3]]==3 )
    	{gradCC3=0.0;gradCC4=0.0;}
    	else
    	{			
    		
    		gradCC3=0.5*(C[d[k][2]]-C[d[k][3]])/dt;
    		
    		
    		
    		gradCC4=0.5*(C[d[k][3]]-C[d[k][2]])/dt;
    		

		}
		
		
		
		if(mask[d[k][4]]==28 || mask[d[k][5]]==28 ||  mask[d[k][4]]==3 || mask[d[k][5]]==3 )
    	{gradCC5=0.0;gradCC6=0.0;}
    	else
    	{			
    		gradCC5=0.5*(C[d[k][4]]-C[d[k][5]])/dt;
    		
    		
    		gradCC6=0.5*(C[d[k][5]]-C[d[k][4]])/dt;
    		

		}
		
		
    
    	if(mask[d[k][6]]==28 || mask[d[k][9]]==28 ||  mask[d[k][6]]==3 || mask[d[k][9]]==3 )
    	{gradCC7=0.0;gradCC10=0.0;}
    	else
    	{			
    		gradCC7=0.5*(C[d[k][6]]-C[d[k][9]])/dt;
    		
    		
    		gradCC10=0.5*(C[d[k][9]]-C[d[k][6]])/dt;
    		

		}
		
		if(mask[d[k][7]]==28 || mask[d[k][8]]==28 ||  mask[d[k][7]]==3 || mask[d[k][8]]==3 )
    	{gradCC8=0.0;
    	gradCC9=0.0;}
    	else
    	{			
    		gradCC8=0.5*(C[d[k][7]]-C[d[k][8]])/dt;
    		
    		
    		gradCC9=0.5*(C[d[k][8]]-C[d[k][7]])/dt;
    		

		}
		
		
		if(mask[d[k][10]]==28 || mask[d[k][13]]==28 ||  mask[d[k][10]]==3 || mask[d[k][13]]==3 )
    	{gradCC11=0.0;
    	gradCC14=0.0;}
    	else
    	{			
    		gradCC11=0.5*(C[d[k][10]]-C[d[k][13]])/dt;
    		
    		
    		gradCC14=0.5*(C[d[k][13]]-C[d[k][10]])/dt;
    		

		}
		
		if(mask[d[k][11]]==28 || mask[d[k][12]]==28 ||  mask[d[k][11]]==3 || mask[d[k][12]]==3 )
    	{gradCC12=0.0;
    	gradCC13=0.0;}
    	else
    	{			
    		gradCC12=0.5*(C[d[k][11]]-C[d[k][12]])/dt;
    		
    		
    		gradCC13=0.5*(C[d[k][12]]-C[d[k][11]])/dt;
    		

		}
		
		if(mask[d[k][14]]==28 || mask[d[k][17]]==28 ||  mask[d[k][14]]==3 || mask[d[k][17]]==3 )
    	{gradCC15=0.0;
    	gradCC18=0.0;}
    	else
    	{			
    		gradCC15=0.5*(C[d[k][14]]-C[d[k][17]])/dt;
    		
    		
    		gradCC18=0.5*(C[d[k][17]]-C[d[k][14]])/dt;
    		

		}
		
		if(mask[d[k][15]]==28 || mask[d[k][16]]==28 || mask[d[k][15]]==3 || mask[d[k][16]]==3 )
    	{gradCC16=0.0;
    	gradCC17=0.0;}
    	else
    	{			
    		gradCC16=0.5*(C[d[k][15]]-C[d[k][16]])/dt;
    		
    		
    		gradCC17=0.5*(C[d[k][16]]-C[d[k][15]])/dt;
    		

		}
		
		
    
			}
			
			if(dimensions==2)
			{
    		gradCCx=1.0/3.0*(gradCC1-gradCC2)+1.0/12.0*(gradCC7-gradCC8+gradCC9-gradCC10);
    		gradCCy=1.0/3.0*(gradCC3-gradCC4)+1.0/12.0*(gradCC7+gradCC8-gradCC9-gradCC10);
    		}
    		if(dimensions==3)
    		{
    		gradCCx=1.0/6.0*(gradCC1-gradCC2)+1.0/12.0*(gradCC7-gradCC8+gradCC9-gradCC10+gradCC15+gradCC17-gradCC16-gradCC18);
    		gradCCy=1.0/6.0*(gradCC3-gradCC4)+1.0/12.0*(gradCC7+gradCC8-gradCC9-gradCC10+gradCC11+gradCC13-gradCC12-gradCC14);
    		gradCCz=1.0/6.0*(gradCC5-gradCC6)+1.0/12.0*(gradCC11+gradCC12-gradCC13-gradCC14+gradCC16+gradCC15-gradCC17-gradCC18);
    		}
			
			/*
			if(st<50)
			{
            ux[k]=0.0;//(3.0*(g1[k]-g2[k]+g7[k]-g10[k]+g9[k]-g8[k])-0.5*C[k]*gradmuCx)/rho[k];
            uy[k]=0.0;//(3.0*(g3[k]-g4[k]+g7[k]-g10[k]+g8[k]-g9[k])-0.5*C[k]*gradmuCy)/rho[k];
			}
			else
			{
				ux[k]=(3.0*(g1[k]-g2[k]+g7[k]-g10[k]+g9[k]-g8[k])-0.5*C[k]*gradmuCx)/rho[k];
            	uy[k]=(3.0*(g3[k]-g4[k]+g7[k]-g10[k]+g8[k]-g9[k])-0.5*C[k]*gradmuCy)/rho[k];
			}
			*/
			
			
			
			//ux[k]=0.0;
		      //uy[k]=0.0;
		     // uz[k]=0.0;
			 
			 if(dimensions==3)
			 {
			   ux[k]=(3.0*(g1[k]-g2[k]+g7[k]-g10[k]+g9[k]-g8[k]+g15[k]+g17[k]-g18[k]-g16[k])+0.5*dt*mu[k]*gradCCx)/rho[k];
			   uy[k]=(3.0*(g3[k]-g4[k]+g7[k]-g10[k]+g8[k]-g9[k]+g11[k]+g13[k]-g12[k]-g14[k])+0.5*dt*mu[k]*gradCCy)/rho[k];
			   uz[k]=(3.0*(g5[k]-g6[k]+g11[k]-g14[k]+g12[k]-g13[k]+g15[k]+g16[k]-g17[k]-g18[k])+0.5*dt*mu[k]*gradCCz)/rho[k];
			  

			 
 /*
			   if(st==1)
			     {
			       ux[k]=C[k]*uxi;
			       uy[k]=C[k]*uyi;
			       uz[k]=C[k]*uzi;
			       /*
			       computecoordinates(k);
			       /*
			       double cth,sth,r,rs,xkd,ykd;

			       ykd=double(yk);
			       xkd=double(xk);
			       cth=(xk+yk)/sqrt(xk*xk+yk*yk);
			       sth=sqrt(1-cth*cth);

			       r=sqrt(xk*xk+yk*yk);
			       rs=r*sth;
			       
			       if(yk>xk){uy[k]=C[k]*uyi;}
			      


			       if(xk>yk){ux[k]=C[k]*uxi;}
			       if(zk>50){uz[k]=C[k]*uzi;}
			       
			     }
			 */


	}
			
			if(dimensions==2)
			{
			   ux[k]=(3.0*(g1[k]-g2[k]+g7[k]-g10[k]+g9[k]-g8[k])+0.5*dt*mu[k]*gradCCx)/rho[k];
			   uy[k]=(3.0*(g3[k]-g4[k]+g7[k]-g10[k]+g8[k]-g9[k])+0.5*dt*mu[k]*gradCCy)/rho[k];
			  	uz[k]=0.0;
				/*
				if(st==5000)
				  {
				    ux[k]+=uxi;
				    uy[k]+=uyi;
				    uz[k]=0.0;
				  }
				*/
			/*
	if(mask[k]==1)
			  {
			    ux[k]=0.0;
			    uy[k]=0.0;
			  }
			*/
			}
}
}

exchangevel();

//Compute macroscopic pressure

for(k=k1;k<k2;k++)
{
if(mask[k]!=28)
{
			
			if(mask[k]==0 || mask[k]==2)
			{
            gradrhoC1=0.5*(rho[d[k][0]]-rho[d[k][1]])/dt;
			gradrhoC2=0.5*(rho[d[k][1]]-rho[d[k][0]])/dt;
    		gradrhoC3=0.5*(rho[d[k][2]]-rho[d[k][3]])/dt;
    		gradrhoC4=0.5*(rho[d[k][3]]-rho[d[k][2]])/dt;
    		gradrhoC7=0.5*(rho[d[k][6]]-rho[d[k][9]])/dt;
    		gradrhoC8=0.5*(rho[d[k][7]]-rho[d[k][8]])/dt;
    		gradrhoC9=0.5*(rho[d[k][8]]-rho[d[k][7]])/dt;
    		gradrhoC10=0.5*(rho[d[k][9]]-rho[d[k][6]])/dt;
    		
    		gradrhoC5=0.5*(rho[d[k][4]]-rho[d[k][5]])/dt;
    gradrhoC6=0.5*(rho[d[k][5]]-rho[d[k][4]])/dt;
    gradrhoC11=0.5*(rho[d[k][10]]-rho[d[k][13]])/dt;
    gradrhoC12=0.5*(rho[d[k][11]]-rho[d[k][12]])/dt;
    gradrhoC13=0.5*(rho[d[k][12]]-rho[d[k][11]])/dt;
    gradrhoC14=0.5*(rho[d[k][13]]-rho[d[k][10]])/dt;
    gradrhoC15=0.5*(rho[d[k][14]]-rho[d[k][17]])/dt;
    gradrhoC16=0.5*(rho[d[k][15]]-rho[d[k][16]])/dt;
    gradrhoC17=0.5*(rho[d[k][16]]-rho[d[k][15]])/dt;
    gradrhoC18=0.5*(rho[d[k][17]]-rho[d[k][14]])/dt;
    }
			
    else if(mask[k]==1)
			{
				if(mask[d[k][0]]==28 || mask[d[k][1]]==28)
    	{gradrhoC1=0.0;gradrhoC2=0.0;}
    	else
    	{			
    		
    		gradrhoC1=0.5*(C[d[k][0]]-C[d[k][1]])/dt;
    		
    		
    		
    		gradrhoC2=0.5*(C[d[k][1]]-C[d[k][0]])/dt;
    		

		}
    
    	
		if(mask[d[k][2]]==28 || mask[d[k][3]]==28)
    	{gradrhoC3=0.0;gradrhoC4=0.0;}
    	else
    	{			
    		
    		gradrhoC3=0.5*(C[d[k][2]]-C[d[k][3]])/dt;
    		
    		
    		
    		gradrhoC4=0.5*(C[d[k][3]]-C[d[k][2]])/dt;
    		

		}
		
		
		
		if(mask[d[k][4]]==28 || mask[d[k][5]]==28)
    	{gradrhoC5=0.0;gradrhoC6=0.0;}
    	else
    	{			
    		gradrhoC5=0.5*(C[d[k][4]]-C[d[k][5]])/dt;
    		
    		
    		gradrhoC6=0.5*(C[d[k][5]]-C[d[k][4]])/dt;
    		

		}
		
		
    
    	if(mask[d[k][6]]==28 || mask[d[k][9]]==28)
    	{gradrhoC7=0.0;gradrhoC10=0.0;}
    	else
    	{			
    		gradrhoC7=0.5*(C[d[k][6]]-C[d[k][9]])/dt;
    		
    		
    		gradrhoC10=0.5*(C[d[k][9]]-C[d[k][6]])/dt;
    		

		}
		
		if(mask[d[k][7]]==28 || mask[d[k][8]]==28)
    	{gradrhoC8=0.0;
    	gradrhoC9=0.0;}
    	else
    	{			
    		gradrhoC8=0.5*(C[d[k][7]]-C[d[k][8]])/dt;
    		
    		
    		gradrhoC9=0.5*(C[d[k][8]]-C[d[k][7]])/dt;
    		

		}
		
		
		if(mask[d[k][10]]==28 || mask[d[k][13]]==28)
    	{gradrhoC11=0.0;
    	gradrhoC14=0.0;}
    	else
    	{			
    		gradrhoC11=0.5*(C[d[k][10]]-C[d[k][13]])/dt;
    		
    		
    		gradrhoC14=0.5*(C[d[k][13]]-C[d[k][10]])/dt;
    		

		}
		
		if(mask[d[k][11]]==28 || mask[d[k][12]]==28)
    	{gradrhoC12=0.0;
    	gradrhoC13=0.0;}
    	else
    	{			
    		gradrhoC12=0.5*(C[d[k][11]]-C[d[k][12]])/dt;
    		
    		
    		gradrhoC13=0.5*(C[d[k][12]]-C[d[k][11]])/dt;
    		

		}
		
		if(mask[d[k][14]]==28 || mask[d[k][17]]==28)
    	{gradrhoC15=0.0;
    	gradrhoC18=0.0;}
    	else
    	{			
    		gradrhoC15=0.5*(C[d[k][14]]-C[d[k][17]])/dt;
    		
    		
    		gradrhoC18=0.5*(C[d[k][17]]-C[d[k][14]])/dt;
    		

		}
		
		if(mask[d[k][15]]==28 || mask[d[k][16]]==28)
    	{gradrhoC16=0.0;
    	gradrhoC17=0.0;}
    	else
    	{			
    		gradrhoC16=0.5*(C[d[k][15]]-C[d[k][16]])/dt;
    		
    		
    		gradrhoC17=0.5*(C[d[k][16]]-C[d[k][15]])/dt;
    		

		}
		
		
    
			}

    else if(mask[k]==3)
			{
				if(mask[d[k][0]]==28 || mask[d[k][1]]==28 ||  mask[d[k][0]]==3 || mask[d[k][1]]==3 )
    	{gradrhoC1=0.0;gradrhoC2=0.0;}
    	else
    	{			
    		
    		gradrhoC1=0.5*(C[d[k][0]]-C[d[k][1]])/dt;
    		
    		
    		
    		gradrhoC2=0.5*(C[d[k][1]]-C[d[k][0]])/dt;
    		

		}
    
    	
		if(mask[d[k][2]]==28 || mask[d[k][3]]==28 ||  mask[d[k][2]]==3 || mask[d[k][3]]==3 )
    	{gradrhoC3=0.0;gradrhoC4=0.0;}
    	else
    	{			
    		
    		gradrhoC3=0.5*(C[d[k][2]]-C[d[k][3]])/dt;
    		
    		
    		
    		gradrhoC4=0.5*(C[d[k][3]]-C[d[k][2]])/dt;
    		

		}
		
		
		
		if(mask[d[k][4]]==28 || mask[d[k][5]]==28 ||  mask[d[k][4]]==3 || mask[d[k][5]]==3 )
    	{gradrhoC5=0.0;gradrhoC6=0.0;}
    	else
    	{			
    		gradrhoC5=0.5*(C[d[k][4]]-C[d[k][5]])/dt;
    		
    		
    		gradrhoC6=0.5*(C[d[k][5]]-C[d[k][4]])/dt;
    		

		}
		
		
    
    	if(mask[d[k][6]]==28 || mask[d[k][9]]==28 ||  mask[d[k][6]]==3 || mask[d[k][9]]==3 )
    	{gradrhoC7=0.0;gradrhoC10=0.0;}
    	else
    	{			
    		gradrhoC7=0.5*(C[d[k][6]]-C[d[k][9]])/dt;
    		
    		
    		gradrhoC10=0.5*(C[d[k][9]]-C[d[k][6]])/dt;
    		

		}
		
		if(mask[d[k][7]]==28 || mask[d[k][8]]==28 ||  mask[d[k][7]]==3 || mask[d[k][8]]==3 )
    	{gradrhoC8=0.0;
    	gradrhoC9=0.0;}
    	else
    	{			
    		gradrhoC8=0.5*(C[d[k][7]]-C[d[k][8]])/dt;
    		
    		
    		gradrhoC9=0.5*(C[d[k][8]]-C[d[k][7]])/dt;
    		

		}
		
		
		if(mask[d[k][10]]==28 || mask[d[k][13]]==28 ||  mask[d[k][10]]==3 || mask[d[k][13]]==3 )
    	{gradrhoC11=0.0;
    	gradrhoC14=0.0;}
    	else
    	{			
    		gradrhoC11=0.5*(C[d[k][10]]-C[d[k][13]])/dt;
    		
    		
    		gradrhoC14=0.5*(C[d[k][13]]-C[d[k][10]])/dt;
    		

		}
		
		if(mask[d[k][11]]==28 || mask[d[k][12]]==28 ||  mask[d[k][11]]==3 || mask[d[k][12]]==3 )
    	{gradrhoC12=0.0;
    	gradrhoC13=0.0;}
    	else
    	{			
    		gradrhoC12=0.5*(C[d[k][11]]-C[d[k][12]])/dt;
    		
    		
    		gradrhoC13=0.5*(C[d[k][12]]-C[d[k][11]])/dt;
    		

		}
		
		if(mask[d[k][14]]==28 || mask[d[k][17]]==28 || mask[d[k][14]]==3 || mask[d[k][17]]==3 )
    	{gradrhoC15=0.0;
    	gradrhoC18=0.0;}
    	else
    	{			
    		gradrhoC15=0.5*(C[d[k][14]]-C[d[k][17]])/dt;
    		
    		
    		gradrhoC18=0.5*(C[d[k][17]]-C[d[k][14]])/dt;
    		

		}
		
		if(mask[d[k][15]]==28 || mask[d[k][16]]==28 || mask[d[k][15]]==3 || mask[d[k][16]]==3 )
    	{gradrhoC16=0.0;
    	gradrhoC17=0.0;}
    	else
    	{			
    		gradrhoC16=0.5*(C[d[k][15]]-C[d[k][16]])/dt;
    		
    		
    		gradrhoC17=0.5*(C[d[k][16]]-C[d[k][15]])/dt;
    		

		}
		
		
    
			}

    
    		
    		if(dimensions==3)
    		{
    		gradrhoCx=1.0/6.0*(gradrhoC1-gradrhoC2)+1.0/12.0*(gradrhoC7-gradrhoC8+gradrhoC9-gradrhoC10+gradrhoC15+gradrhoC17-gradrhoC16-gradrhoC18);
    		gradrhoCy=1.0/6.0*(gradrhoC3-gradrhoC4)+1.0/12.0*(gradrhoC7+gradrhoC8-gradrhoC9-gradrhoC10+gradrhoC11+gradrhoC13-gradrhoC12-gradrhoC14);
    		gradrhoCz=1.0/6.0*(gradrhoC5-gradrhoC6)+1.0/12.0*(gradrhoC11+gradrhoC12-gradrhoC13-gradrhoC14+gradrhoC16+gradrhoC15-gradrhoC17-gradrhoC18);
    		}
    		if (dimensions==2)
    		{
            gradrhoCx=1.0/3.0*(gradrhoC1-gradrhoC2)+1.0/12.0*(gradrhoC7-gradrhoC8+gradrhoC9-gradrhoC10);
    		gradrhoCy=1.0/3.0*(gradrhoC3-gradrhoC4)+1.0/12.0*(gradrhoC7+gradrhoC8-gradrhoC9-gradrhoC10);
			}
			
			
	/*
	if(st<50)
	{
	p[k]=0.0;
    }
    
    else
    {
    p[k]=g0[k]+g1[k]+g2[k]+g3[k]+g4[k]+g7[k]+g8[k]+g9[k]+g10[k]+ux[k]*gradrhoCx/6.0+gradrhoCy*uy[k]/6.0;
	}
    */
    
    //p[k]=0.0;
    if (dimensions==3)
    {
      p[k]=g0[k]+g1[k]+g2[k]+g3[k]+g4[k]+g7[k]+g8[k]+g9[k]+g10[k]+g11[k]+g12[k]+g13[k]+g14[k]+g15[k]+g16[k]+g17[k]+g18[k]+g5[k]+g6[k]+dt*ux[k]*gradrhoCx/6.0+dt*gradrhoCy*uy[k]/6.0+dt*gradrhoCz*uz[k]/6.0;//compute pressure
	}
	if(dimensions==2)
	{
	    p[k]=g0[k]+g1[k]+g2[k]+g3[k]+g4[k]+g7[k]+g8[k]+g9[k]+g10[k]+dt*ux[k]*gradrhoCx/6.0+dt*gradrhoCy*uy[k]/6.0;//compute pressure

	}
}
}

exchangep();




}



