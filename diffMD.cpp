//Computes the mixed differenrhoes of C ,mu rho, and p

#include "wet.h"

void wet::diffMD()
{

	for(k=k1;k<k2;k++)
	{
	if(mask[k]!=28)
    {

	if(mask[k]==0)
    {
	if(dimensions==3)
	{
	//Work out mixed difference for rho
	drho[k][0]*=3;
	drho[k][0]-=t1/4*(rho[d2[0]]-rho[d2[1]])+t2/4*(rho[d2[6]]+rho[d2[8]]+rho[d2[14]]+rho[d2[16]]-rho[d2[7]]-rho[d2[9]]-rho[d2[15]]-rho[d2[17]]);

	drho[k][1]*=3;
	drho[k][1]-=t1/4*(rho[d2[2]]-rho[d2[3]])+t2/4*(rho[d2[6]]+rho[d2[7]]+rho[d2[10]]+rho[d2[12]]-rho[d2[8]]-rho[d2[9]]-rho[d2[11]]-rho[d2[13]]);


	drho[k][2]*=3;
	drho[k][2]-=t1/4*(rho[d2[4]]-rho[d2[5]])+t2/4*(rho[d2[10]]+rho[d2[11]]+rho[d2[14]]+rho[d2[15]]-rho[d2[12]]-rho[d2[13]]-rho[d2[16]]-rho[d2[17]]);
	}
	if(dimensions==2)
	{
	drho[k][0]*=3;
	drho[k][0]-=t1/4*(rho[d2[0]]-rho[d2[1]])+t2/4*(rho[d2[6]]+rho[d2[8]]-rho[d2[7]]-rho[d2[9]]);

	drho[k][1]*=3;
	drho[k][1]-=t1/4*(rho[d2[2]]-rho[d2[3]])+t2/4*(rho[d2[6]]+rho[d2[7]]-rho[d2[8]]-rho[d2[9]]);
	}
	
	if(dimensions==1)
	{
		drho[k][0]*=3;
		drho[k][0]-=t1/4*(rho[d2[0]]-rho[d2[1]]);

	}

	if(dimensions==3)
	{
	//Work out mixed difference for C
	dC[k][0]*=3;
	dC[k][0]-=t1/4*(C[d2[0]]-C[d2[1]])+t2/4*(C[d2[6]]+C[d2[8]]+C[d2[14]]+C[d2[16]]-C[d2[7]]-C[d2[9]]-C[d2[15]]-C[d2[17]]);

	dC[k][1]*=3;
	dC[k][1]-=t1/4*(C[d2[2]]-C[d2[3]])+t2/4*(C[d2[6]]+C[d2[7]]+C[d2[10]]+C[d2[12]]-C[d2[8]]-C[d2[9]]-C[d2[11]]-C[d2[13]]);


	dC[k][2]*=3;
	dC[k][2]-=t1/4*(C[d2[4]]-C[d2[5]])+t2/4*(C[d2[10]]+C[d2[11]]+C[d2[14]]+C[d2[15]]-C[d2[12]]-C[d2[13]]-C[d2[16]]-C[d2[17]]);
	}
	if(dimensions==2)
	{
	dC[k][0]*=3;
	dC[k][0]-=t1/4*(C[d2[0]]-C[d2[1]])+t2/4*(C[d2[6]]+C[d2[8]]-C[d2[7]]-C[d2[9]]);

	dC[k][1]*=3;
	dC[k][1]-=t1/4*(C[d2[2]]-C[d2[3]])+t2/4*(C[d2[6]]+C[d2[7]]-C[d2[8]]-C[d2[9]]);



	}
	
	if(dimensions==1)
	{
		//dC[k][0]*=3;
		dC[k][0]+=t1/2*(-C[d2[0]]+4*C[d[0]]-3*C[k]);

	}

	if(dimensions==3)
	{
	//Work out mixed differnce for mu
	dmux[k]*=3;
	dmux[k]-=t1/4*(mu[d2[0]]-mu[d2[1]])+t2/4*(mu[d2[6]]+mu[d2[8]]+mu[d2[14]]+mu[d2[16]]-mu[d2[7]]-mu[d2[9]]-mu[d2[15]]-mu[d2[17]]);

	dmuy[k]*=3;
	dmuy[k]-=t1/4*(mu[d2[2]]-mu[d2[3]])+t2/4*(mu[d2[6]]+mu[d2[7]]+mu[d2[10]]+mu[d2[12]]-mu[d2[8]]-mu[d2[9]]-mu[d2[11]]-mu[d2[13]]);


	dmuz[k]*=3;
	dmuz[k]-=t1/4*(mu[d2[4]]-mu[d2[5]])+t2/4*(mu[d2[10]]+mu[d2[11]]+mu[d2[14]]+mu[d2[15]]-mu[d2[12]]-mu[d2[13]]-mu[d2[16]]-mu[d2[17]]);
	}
	if(dimensions==2)
	{
	dmux[k]*=3;
	dmux[k]-=t1/4*(mu[d2[0]]-mu[d2[1]])+t2/4*(mu[d2[6]]+mu[d2[8]]-mu[d2[7]]-mu[d2[9]]);

	dmuy[k]*=3;
	dmuy[k]-=t1/4*(mu[d2[2]]-mu[d2[3]])+t2/4*(mu[d2[6]]+mu[d2[7]]-mu[d2[8]]-mu[d2[9]]);


	}
	
	if(dimensions==1)
	{
		dmux[k]*=3;
		dmux[k]-=t1/4*(mu[d2[0]]-mu[d2[1]]);

	}

	if(dimensions==3)
	{
	//Work out mixed difference for p
	dp[k][0]*=3;
	dp[k][0]-=t1/4*(p[d2[0]]-p[d2[1]])+t2/4*(p[d2[6]]+p[d2[8]]+p[d2[14]]+p[d2[16]]-p[d2[7]]-p[d2[9]]-p[d2[15]]-p[d2[17]]);

	dp[k][1]*=3;
	dp[k][1]-=t1/4*(p[d2[2]]-p[d2[3]])+t2/4*(p[d2[6]]+p[d2[7]]+p[d2[10]]+p[d2[12]]-p[d2[8]]-p[d2[9]]-p[d2[11]]-p[d2[13]]);


	dp[k][2]*=3;
	dp[k][2]-=t1/4*(p[d2[4]]-p[d2[5]])+t2/4*(p[d2[10]]+p[d2[11]]+p[d2[14]]+p[d2[15]]-p[d2[12]]-p[d2[13]]-p[d2[16]]-p[d2[17]]);
	}
	if(dimensions==2)
	{
	dp[k][0]*=3;
	dp[k][0]-=t1/4*(p[d2[0]]-p[d2[1]])+t2/4*(p[d2[6]]+p[d2[8]]-p[d2[7]]-p[d2[9]]);

	dp[k][1]*=3;
	dp[k][1]-=t1/4*(p[d2[2]]-p[d2[3]])+t2/4*(p[d2[6]]+p[d2[7]]-p[d2[8]]-p[d2[9]]);

	if(dimensions)
	{
		dp[k][0]*=3;
		dp[k][0]-=t1/4*(p[d2[0]]-p[d2[1]]);

	}
	}

	//Work out mixed difference for gamma
	if(dimensions==3)
	{
	for(a=0;a<Q;a++)
	{
	dgamma[k][a]*=3;
	dgamma[k][a]-=t1/4*(gamma[d2[0]][a]-gamma[d2[1]][a])+t2/4*(gamma[d2[6]][a]+gamma[d2[8]][a]+gamma[d2[14]][a]+gamma[d2[16]][a]-gamma[d2[7]][a]-gamma[d2[9]][a]-gamma[d2[15]][a]-gamma[d2[17]][a])*(e[a][0]-ux[k]);


	dgamma[k][a]-=t1/4*(gamma[d2[2]][a]-gamma[d2[3]][a])+t2/4*(gamma[d2[6]][a]+gamma[d2[7]][a]+gamma[d2[10]][a]+gamma[d2[12]][a]-gamma[d2[8]][a]-gamma[d2[9]][a]-gamma[d2[11]][a]-gamma[d2[13]][a])*(e[a][1]-uy[k]);



	dgamma[k][a]-=t1/4*(gamma[d2[4]][a]-gamma[d2[5]][a])+t2/4*(gamma[d2[10]][a]+gamma[d2[11]][a]+gamma[d2[14]][a]+gamma[d2[15]][a]-gamma[d2[12]][a]-gamma[d2[13]][a]-gamma[d2[16]][a]-gamma[d2[17]][a])*(e[a][2]-uz[k]);
	}
	}
	if(dimensions==2)
	{
	dgamma[k][a]*=3;
	dgamma[k][a]-=t1/4*(gamma[d2[0]][a]-gamma[d2[1]][a])+t2/4*(gamma[d2[6]][a]+gamma[d2[8]][a]-gamma[d2[7]][a]-gamma[d2[9]][a])*(e[a][0]-ux[k]);


	dgamma[k][a]-=t1/4*(gamma[d2[2]][a]-gamma[d2[3]][a])+t2/4*(gamma[d2[6]][a]+gamma[d2[7]][a]-gamma[d2[8]][a]-gamma[d2[9]][a])*(e[a][1]-uy[k]);


	}
    if(dimensions==1)
    {
    	dgamma[k][a]*=3;
		dgamma[k][a]-=t1/4*(gamma[d2[0]][a]-gamma[d2[1]][a])*(e[a][0]-ux[k]);

    }
    
    
    
    }
    }
    else
    {
        if(dimensions==2)
        {
            if(d[0]==28 or d2[0]==28)
            {
                dp[k][0]*=3;


                dp[k][1]*=3;
                dp[k][1]-=t1/4*(p[d2[2]]-p[d2[3]])+t2/4*(p[d2[7]]+p[d2[7]]-p[d2[9]]-p[d2[9]]);
            }

            if(d[1]==28 or d2[1]==28)
            {
                dp[k][0]*=3;


                dp[k][1]*=3;
                dp[k][1]-=t1/4*(p[d2[2]]-p[d2[3]])+t2/4*(p[d2[6]]+p[d2[6]]-p[d2[8]]-p[d2[8]]);
            }

            if(d[2]==28 or d2[2]==28)
            {
                dp[k][0]*=3;
                dp[k][0]-=t1/4*(p[d2[0]]-p[d2[1]])+t2/4*(p[d2[8]]+p[d2[8]]-p[d2[9]]-p[d2[9]]);

                dp[k][1]*=3;
            }

            if(d[3]==28 or d2[3]==28)
            {
                dp[k][0]*=3;
                dp[k][0]-=t1/4*(p[d2[0]]-p[d2[1]])+t2/4*(p[d2[6]]+p[d2[6]]-p[d2[7]]-p[d2[7]]);

                dp[k][1]*=3;
            }
            
            //Work out appropriate values for mu
            
            if(d[0]==28 or d2[0]==28)
            {
                dmux[k]*=3;


                dmuy[k]*=3;
                dmuy[k]-=t1/4*(mu[d2[2]]-mu[d2[3]])+t2/4*(mu[d2[7]]+mu[d2[7]]-mu[d2[9]]-mu[d2[9]]);
            }

            if(d[1]==28 or d2[1]==28)
            {
                dmux[k]*=3;


                dmuy[k]*=3;
                dmuy[k]-=t1/4*(mu[d2[2]]-mu[d2[3]])+t2/4*(mu[d2[6]]+mu[d2[6]]-mu[d2[8]]-mu[d2[8]]);
            }

            if(d[2]==28 or d2[2]==28)
            {
                dmux[k]*=3;
                dmux[k]-=t1/4*(mu[d2[0]]-mu[d2[1]])+t2/4*(mu[d2[8]]+mu[d2[8]]-mu[d2[9]]-mu[d2[9]]);

                dmuy[k]*=3;
            }

            if(d[3]==28 or d2[3]==28)
            {
                dmux[k]*=3;
                dmux[k]-=t1/4*(mu[d2[0]]-mu[d2[1]])+t2/4*(mu[d2[6]]+mu[d2[6]]-mu[d2[7]]-mu[d2[7]]);

                dmuy[k]*=3;
            }
            
            //Work out values for rho
            
            if(d[0]==28 or d2[0]==28)
            {
                drho[k][0]*=3;


                drho[k][1]*=3;
                drho[k][1]-=t1/4*(rho[d2[2]]-rho[d2[3]])+t2/4*(rho[d2[7]]+rho[d2[7]]-rho[d2[9]]-rho[d2[9]]);
            }

            if(d[1]==28 or d2[1]==28)
            {
                drho[k][0]*=3;


                drho[k][1]*=3;
                drho[k][1]-=t1/4*(rho[d2[2]]-rho[d2[3]])+t2/4*(rho[d2[6]]+rho[d2[6]]-rho[d2[8]]-rho[d2[8]]);
            }

            if(d[2]==28 or d2[2]==28)
            {
                drho[k][0]*=3;
                drho[k][0]-=t1/4*(rho[d2[0]]-rho[d2[1]])+t2/4*(rho[d2[8]]+rho[d2[8]]-rho[d2[9]]-rho[d2[9]]);

                drho[k][1]*=3;
            }

            if(d[3]==28 or d2[3]==28)
            {
                drho[k][0]*=3;
                drho[k][0]-=t1/4*(rho[d2[0]]-rho[d2[1]])+t2/4*(rho[d2[6]]+rho[d2[6]]-rho[d2[7]]-rho[d2[7]]);

                drho[k][1]*=3;
            }
            
            //Work out C
            
            if(d[0]==28 or d2[0]==28)
            {
                dC[k][0]*=3;


                dC[k][1]*=3;
                dC[k][1]-=t1/4*(C[d2[2]]-C[d2[3]])+t2/4*(C[d2[7]]+C[d2[7]]-C[d2[9]]-C[d2[9]]);
            }

            if(d[1]==28 or d2[1]==28)
            {
                dC[k][0]*=3;


                dC[k][1]*=3;
                dC[k][1]-=t1/4*(C[d2[2]]-C[d2[3]])+t2/4*(C[d2[6]]+C[d2[6]]-C[d2[8]]-C[d2[8]]);
            }

            if(d[2]==28 or d2[2]==28)
            {
                dC[k][0]*=3;
                dC[k][0]-=t1/4*(C[d2[0]]-C[d2[1]])+t2/4*(C[d2[8]]+C[d2[8]]-C[d2[9]]-C[d2[9]]);

                dC[k][1]*=3;
            }

            if(d[3]==28 or d2[3]==28)
            {
                dC[k][0]*=3;
                dC[k][0]-=t1/4*(C[d2[0]]-C[d2[1]])+t2/4*(C[d2[6]]+C[d2[6]]-C[d2[7]]-C[d2[7]]);

                dC[k][1]*=3;
            }
            
            //Work out gamma
            if(d[0]==28 or d2[0]==28)
            {
                dgamma[k][a]*=3;


				dgamma[k][a]-=t1/4*(gamma[d2[2]][a]-gamma[d2[3]][a])+t2/4*(gamma[d2[7]][a]+gamma[d2[7]][a]-gamma[d2[9]][a]-gamma[d2[9]][a])*(e[a][1]-uy[k]);


            }

            if(d[1]==28 or d2[1]==28)
            {
                dgamma[k][a]*=3;


				dgamma[k][a]-=t1/4*(gamma[d2[2]][a]-gamma[d2[3]][a])+t2/4*(gamma[d2[6]][a]+gamma[d2[6]][a]-gamma[d2[8]][a]-gamma[d2[8]][a])*(e[a][1]-uy[k]);

   }

            if(d[2]==28 or d2[2]==28)
            {
                dgamma[k][a]*=3;


				dgamma[k][a]-=t1/4*(gamma[d2[0]][a]-gamma[d2[1]][a])+t2/4*(gamma[d2[8]][a]+gamma[d2[8]][a]-gamma[d2[9]][a]-gamma[d2[9]][a])*(e[a][0]-ux[k]);

            }

            if(d[3]==28 or d2[3]==28)
            {
                dgamma[k][a]*=3;


				dgamma[k][a]-=t1/4*(gamma[d2[0]][a]-gamma[d2[1]][a])+t2/4*(gamma[d2[6]][a]+gamma[d2[6]][a]-gamma[d2[7]][a]-gamma[d2[7]][a])*(e[a][0]-ux[k]);

         
            }

    }

	}


}
}