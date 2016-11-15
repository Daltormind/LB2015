//rhoomputes the mixed differenrhoes of rho ,mu rho, and p

#include "wet.h"

void wet::diffMD()
{

	for(k=k1;k<k2;k++)
	{
	if(mask[k]!=28)
    {


	/*
	for(i=0;i<dimensions;i++)
	{
		for(a=1;a<Q;a++)
		{
			drho[k][i]+=t[a]*e[a][i]*(-rho[d[d[a-1]][a-1]]+4*rho[d[a-1]]-3*rho[k])/4;
			dC[k][i]+=t[a]*e[a][i]*(-C[d[d[a-1]][a-1]]+4*C[d[a-1]]-3*C[k])/4;
			dp[k][i]+=t[a]*e[a][i]*(-p[d[d[a-1]][a-1]]+4*p[d[a-1]]-3*p[k])/4;
			dmu[k][i]+=t[a]*e[a][i]*(-mu[d[d[a-1]][a-1]]+4*mu[d[a-1]]-3*mu[k])/4;
		}
	}


	for(a=0;a<Q;a++)
	{
		for(i=0;i<dimensions;i++)
		{
			for(int b=1;b<Q;b++)
			{
				dgamma[k][a]+=t[b]*e[b][i]*(-gamma[d[d[b-1]][b-1]][a]+4*gamma[d[b-1]][a]-3*gamma[k][a])*(e[a][i]-u[k][i])/4;
			}


		}

	}
	*/
	if(mask[k]==0)
    {
	if(dimensions==3)
	{
	//Work out mixed difference for rho
	drho[k][0]*=3;
	drho[k][0]-=t1/4*(rho[d[d[0]][0]]-rho[d[d[1]][1]])+t2/4*(rho[d[d[6]][6]]+rho[d[d[8]][8]]+rho[d[d[14]][14]]+rho[d[d[16]][16]]-rho[d[d[7]][7]]-rho[d[d[9]][9]]-rho[d[d[15]][15]]-rho[d[d[17]][17]]);

	drho[k][1]*=3;
	drho[k][1]-=t1/4*(rho[d[d[2]][2]]-rho[d[d[3]][3]])+t2/4*(rho[d[d[6]][6]]+rho[d[d[7]][7]]+rho[d[d[10]][10]]+rho[d[d[12]][12]]-rho[d[d[8]][8]]-rho[d[d[9]][9]]-rho[d[d[11]][11]]-rho[d[d[13]][13]]);


	drho[k][2]*=3;
	drho[k][2]-=t1/4*(rho[d[d[4]][4]]-rho[d[d[5]][5]])+t2/4*(rho[d[d[10]][10]]+rho[d[d[11]][11]]+rho[d[d[14]][14]]+rho[d[d[15]][15]]-rho[d[d[12]][12]]-rho[d[d[13]][13]]-rho[d[d[16]][16]]-rho[d[d[17]][17]]);
	}
	if(dimensions==2)
	{
	drho[k][0]*=3;
	drho[k][0]-=t1/4*(rho[d[d[0]][0]]-rho[d[d[1]][1]])+t2/4*(rho[d[d[6]][6]]+rho[d[d[8]][8]]-rho[d[d[7]][7]]-rho[d[d[9]][9]]);

	drho[k][1]*=3;
	drho[k][1]-=t1/4*(rho[d[d[2]][2]]-rho[d[d[3]][3]])+t2/4*(rho[d[d[6]][6]]+rho[d[d[7]][7]]-rho[d[d[8]][8]]-rho[d[d[9]][9]]);
	}
	
	if(dimensions==1)
	{
		drho[k][0]*=3;
		drho[k][0]-=t1/4*(rho[d[d[0]][0]]-rho[d[d[1]][1]]);

	}

	if(dimensions==3)
	{
	//Work out mixed difference for C
	dC[k][0]*=3;
	dC[k][0]-=t1/4*(C[d[d[0]][0]]-C[d[d[1]][1]])+t2/4*(C[d[d[6]][6]]+C[d[d[8]][8]]+C[d[d[14]][14]]+C[d[d[16]][16]]-C[d[d[7]][7]]-C[d[d[9]][9]]-C[d[d[15]][15]]-C[d[d[17]][17]]);

	dC[k][1]*=3;
	dC[k][1]-=t1/4*(C[d[d[2]][2]]-C[d[d[3]][3]])+t2/4*(C[d[d[6]][6]]+C[d[d[7]][7]]+C[d[d[10]][10]]+C[d[d[12]][12]]-C[d[d[8]][8]]-C[d[d[9]][9]]-C[d[d[11]][11]]-C[d[d[13]][13]]);


	dC[k][2]*=3;
	dC[k][2]-=t1/4*(C[d[d[4]][4]]-C[d[d[5]][5]])+t2/4*(C[d[d[10]][10]]+C[d[d[11]][11]]+C[d[d[14]][14]]+C[d[d[15]][15]]-C[d[d[12]][12]]-C[d[d[13]][13]]-C[d[d[16]][16]]-C[d[d[17]][17]]);
	}
	if(dimensions==2)
	{
	dC[k][0]*=3;
	dC[k][0]-=t1/4*(C[d[d[0]][0]]-C[d[d[1]][1]])+t2/4*(C[d[d[6]][6]]+C[d[d[8]][8]]-C[d[d[7]][7]]-C[d[d[9]][9]]);

	dC[k][1]*=3;
	dC[k][1]-=t1/4*(C[d[d[2]][2]]-C[d[d[3]][3]])+t2/4*(C[d[d[6]][6]]+C[d[d[7]][7]]-C[d[d[8]][8]]-C[d[d[9]][9]]);



	}
	
	if(dimensions==1)
	{
		//dC[k][0]*=3;
		dC[k][0]+=t1/2*(-C[d[d[0]][0]]+4*C[d[0]]-3*C[k]);

	}

	if(dimensions==3)
	{
	//Work out mixed differnce for mu
	dmux[k]*=3;
	dmux[k]-=t1/4*(mu[d[d[0]][0]]-mu[d[d[1]][1]])+t2/4*(mu[d[d[6]][6]]+mu[d[d[8]][8]]+mu[d[d[14]][14]]+mu[d[d[16]][16]]-mu[d[d[7]][7]]-mu[d[d[9]][9]]-mu[d[d[15]][15]]-mu[d[d[17]][17]]);

	dmuy[k]*=3;
	dmuy[k]-=t1/4*(mu[d[d[2]][2]]-mu[d[d[3]][3]])+t2/4*(mu[d[d[6]][6]]+mu[d[d[7]][7]]+mu[d[d[10]][10]]+mu[d[d[12]][12]]-mu[d[d[8]][8]]-mu[d[d[9]][9]]-mu[d[d[11]][11]]-mu[d[d[13]][13]]);


	dmuz[k]*=3;
	dmuz[k]-=t1/4*(mu[d[d[4]][4]]-mu[d[d[5]][5]])+t2/4*(mu[d[d[10]][10]]+mu[d[d[11]][11]]+mu[d[d[14]][14]]+mu[d[d[15]][15]]-mu[d[d[12]][12]]-mu[d[d[13]][13]]-mu[d[d[16]][16]]-mu[d[d[17]][17]]);
	}
	if(dimensions==2)
	{
	dmux[k]*=3;
	dmux[k]-=t1/4*(mu[d[d[0]][0]]-mu[d[d[1]][1]])+t2/4*(mu[d[d[6]][6]]+mu[d[d[8]][8]]-mu[d[d[7]][7]]-mu[d[d[9]][9]]);

	dmuy[k]*=3;
	dmuy[k]-=t1/4*(mu[d[d[2]][2]]-mu[d[d[3]][3]])+t2/4*(mu[d[d[6]][6]]+mu[d[d[7]][7]]-mu[d[d[8]][8]]-mu[d[d[9]][9]]);


	}
	
	if(dimensions==1)
	{
		dmux[k]*=3;
		dmux[k]-=t1/4*(mu[d[d[0]][0]]-mu[d[d[1]][1]]);

	}

	if(dimensions==3)
	{
	//Work out mixed difference for p
	dp[k][0]*=3;
	dp[k][0]-=t1/4*(p[d[d[0]][0]]-p[d[d[1]][1]])+t2/4*(p[d[d[6]][6]]+p[d[d[8]][8]]+p[d[d[14]][14]]+p[d[d[16]][16]]-p[d[d[7]][7]]-p[d[d[9]][9]]-p[d[d[15]][15]]-p[d[d[17]][17]]);

	dp[k][1]*=3;
	dp[k][1]-=t1/4*(p[d[d[2]][2]]-p[d[d[3]][3]])+t2/4*(p[d[d[6]][6]]+p[d[d[7]][7]]+p[d[d[10]][10]]+p[d[d[12]][12]]-p[d[d[8]][8]]-p[d[d[9]][9]]-p[d[d[11]][11]]-p[d[d[13]][13]]);


	dp[k][2]*=3;
	dp[k][2]-=t1/4*(p[d[d[4]][4]]-p[d[d[5]][5]])+t2/4*(p[d[d[10]][10]]+p[d[d[11]][11]]+p[d[d[14]][14]]+p[d[d[15]][15]]-p[d[d[12]][12]]-p[d[d[13]][13]]-p[d[d[16]][16]]-p[d[d[17]][17]]);
	}
	if(dimensions==2)
	{
	dp[k][0]*=3;
	dp[k][0]-=t1/4*(p[d[d[0]][0]]-p[d[d[1]][1]])+t2/4*(p[d[d[6]][6]]+p[d[d[8]][8]]-p[d[d[7]][7]]-p[d[d[9]][9]]);

	dp[k][1]*=3;
	dp[k][1]-=t1/4*(p[d[d[2]][2]]-p[d[d[3]][3]])+t2/4*(p[d[d[6]][6]]+p[d[d[7]][7]]-p[d[d[8]][8]]-p[d[d[9]][9]]);

	if(dimensions)
	{
		dp[k][0]*=3;
		dp[k][0]-=t1/4*(p[d[d[0]][0]]-p[d[d[1]][1]]);

	}
	}

	//Work out mixed difference for gamma
	if(dimensions==3)
	{
	for(a=0;a<Q;a++)
	{
	dgamma[k][a]*=3;
	dgamma[k][a]-=t1/4*(gamma[d[d[0]][0]][a]-gamma[d[d[1]][1]][a])+t2/4*(gamma[d[d[6]][6]][a]+gamma[d[d[8]][8]][a]+gamma[d[d[14]][14]][a]+gamma[d[d[16]][16]][a]-gamma[d[d[7]][7]][a]-gamma[d[d[9]][9]][a]-gamma[d[d[15]][15]][a]-gamma[d[d[17]][17]][a])*(e[a][0]-ux[k]);


	dgamma[k][a]-=t1/4*(gamma[d[d[2]][2]][a]-gamma[d[d[3]][3]][a])+t2/4*(gamma[d[d[6]][6]][a]+gamma[d[d[7]][7]][a]+gamma[d[d[10]][10]][a]+gamma[d[d[12]][12]][a]-gamma[d[d[8]][8]][a]-gamma[d[d[9]][9]][a]-gamma[d[d[11]][11]][a]-gamma[d[d[13]][13]][a])*(e[a][1]-uy[k]);



	dgamma[k][a]-=t1/4*(gamma[d[d[4]][4]][a]-gamma[d[d[5]][5]][a])+t2/4*(gamma[d[d[10]][10]][a]+gamma[d[d[11]][11]][a]+gamma[d[d[14]][14]][a]+gamma[d[d[15]][15]][a]-gamma[d[d[12]][12]][a]-gamma[d[d[13]][13]][a]-gamma[d[d[16]][16]][a]-gamma[d[d[17]][17]][a])*(e[a][2]-uz[k]);
	}
	}
	if(dimensions==2)
	{
	dgamma[k][a]*=3;
	dgamma[k][a]-=t1/4*(gamma[d[d[0]][0]][a]-gamma[d[d[1]][1]][a])+t2/4*(gamma[d[d[6]][6]][a]+gamma[d[d[8]][8]][a]-gamma[d[d[7]][7]][a]-gamma[d[d[9]][9]][a])*(e[a][0]-ux[k]);


	dgamma[k][a]-=t1/4*(gamma[d[d[2]][2]][a]-gamma[d[d[3]][3]][a])+t2/4*(gamma[d[d[6]][6]][a]+gamma[d[d[7]][7]][a]-gamma[d[d[8]][8]][a]-gamma[d[d[9]][9]][a])*(e[a][1]-uy[k]);


	}
    if(dimensions==1)
    {
    	dgamma[k][a]*=3;
		dgamma[k][a]-=t1/4*(gamma[d[d[0]][0]][a]-gamma[d[d[1]][1]][a])*(e[a][0]-ux[k]);

    }
    
    
    
    }
    }
    else
    {
        if(dimensions==2)
        {
            if(d[0]==28 or d[d[0]][0]==28)
            {
                dp[k][0]*=3;


                dp[k][1]*=3;
                dp[k][1]-=t1/4*(p[d[d[2]][2]]-p[d[d[3]][3]])+t2/4*(p[d[d[7]][7]]+p[d[d[7]][7]]-p[d[d[9]][9]]-p[d[d[9]][9]]);
            }

            if(d[1]==28 or d[d[1]][1]==28)
            {
                dp[k][0]*=3;


                dp[k][1]*=3;
                dp[k][1]-=t1/4*(p[d[d[2]][2]]-p[d[d[3]][3]])+t2/4*(p[d[d[6]][6]]+p[d[d[6]][6]]-p[d[d[8]][8]]-p[d[d[8]][8]]);
            }

            if(d[2]==28 or d[d[2]][2]==28)
            {
                dp[k][0]*=3;
                dp[k][0]-=t1/4*(p[d[d[0]][0]]-p[d[d[1]][1]])+t2/4*(p[d[d[8]][8]]+p[d[d[8]][8]]-p[d[d[9]][9]]-p[d[d[9]][9]]);

                dp[k][1]*=3;
            }

            if(d[3]==28 or d[d[3]][3]==28)
            {
                dp[k][0]*=3;
                dp[k][0]-=t1/4*(p[d[d[0]][0]]-p[d[d[1]][1]])+t2/4*(p[d[d[6]][6]]+p[d[d[6]][6]]-p[d[d[7]][7]]-p[d[d[7]][7]]);

                dp[k][1]*=3;
            }
            
            //Work out appropriate values for mu
            
            if(d[0]==28 or d[d[0]][0]==28)
            {
                dmux[k]*=3;


                dmuy[k]*=3;
                dmuy[k]-=t1/4*(mu[d[d[2]][2]]-mu[d[d[3]][3]])+t2/4*(mu[d[d[7]][7]]+mu[d[d[7]][7]]-mu[d[d[9]][9]]-mu[d[d[9]][9]]);
            }

            if(d[1]==28 or d[d[1]][1]==28)
            {
                dmux[k]*=3;


                dmuy[k]*=3;
                dmuy[k]-=t1/4*(mu[d[d[2]][2]]-mu[d[d[3]][3]])+t2/4*(mu[d[d[6]][6]]+mu[d[d[6]][6]]-mu[d[d[8]][8]]-mu[d[d[8]][8]]);
            }

            if(d[2]==28 or d[d[2]][2]==28)
            {
                dmux[k]*=3;
                dmux[k]-=t1/4*(mu[d[d[0]][0]]-mu[d[d[1]][1]])+t2/4*(mu[d[d[8]][8]]+mu[d[d[8]][8]]-mu[d[d[9]][9]]-mu[d[d[9]][9]]);

                dmuy[k]*=3;
            }

            if(d[3]==28 or d[d[3]][3]==28)
            {
                dmux[k]*=3;
                dmux[k]-=t1/4*(mu[d[d[0]][0]]-mu[d[d[1]][1]])+t2/4*(mu[d[d[6]][6]]+mu[d[d[6]][6]]-mu[d[d[7]][7]]-mu[d[d[7]][7]]);

                dmuy[k]*=3;
            }
            
            //Work out values for rho
            
            if(d[0]==28 or d[d[0]][0]==28)
            {
                drho[k][0]*=3;


                drho[k][1]*=3;
                drho[k][1]-=t1/4*(rho[d[d[2]][2]]-rho[d[d[3]][3]])+t2/4*(rho[d[d[7]][7]]+rho[d[d[7]][7]]-rho[d[d[9]][9]]-rho[d[d[9]][9]]);
            }

            if(d[1]==28 or d[d[1]][1]==28)
            {
                drho[k][0]*=3;


                drho[k][1]*=3;
                drho[k][1]-=t1/4*(rho[d[d[2]][2]]-rho[d[d[3]][3]])+t2/4*(rho[d[d[6]][6]]+rho[d[d[6]][6]]-rho[d[d[8]][8]]-rho[d[d[8]][8]]);
            }

            if(d[2]==28 or d[d[2]][2]==28)
            {
                drho[k][0]*=3;
                drho[k][0]-=t1/4*(rho[d[d[0]][0]]-rho[d[d[1]][1]])+t2/4*(rho[d[d[8]][8]]+rho[d[d[8]][8]]-rho[d[d[9]][9]]-rho[d[d[9]][9]]);

                drho[k][1]*=3;
            }

            if(d[3]==28 or d[d[3]][3]==28)
            {
                drho[k][0]*=3;
                drho[k][0]-=t1/4*(rho[d[d[0]][0]]-rho[d[d[1]][1]])+t2/4*(rho[d[d[6]][6]]+rho[d[d[6]][6]]-rho[d[d[7]][7]]-rho[d[d[7]][7]]);

                drho[k][1]*=3;
            }
            
            //Work out C
            
            if(d[0]==28 or d[d[0]][0]==28)
            {
                dC[k][0]*=3;


                dC[k][1]*=3;
                dC[k][1]-=t1/4*(C[d[d[2]][2]]-C[d[d[3]][3]])+t2/4*(C[d[d[7]][7]]+C[d[d[7]][7]]-C[d[d[9]][9]]-C[d[d[9]][9]]);
            }

            if(d[1]==28 or d[d[1]][1]==28)
            {
                dC[k][0]*=3;


                dC[k][1]*=3;
                dC[k][1]-=t1/4*(C[d[d[2]][2]]-C[d[d[3]][3]])+t2/4*(C[d[d[6]][6]]+C[d[d[6]][6]]-C[d[d[8]][8]]-C[d[d[8]][8]]);
            }

            if(d[2]==28 or d[d[2]][2]==28)
            {
                dC[k][0]*=3;
                dC[k][0]-=t1/4*(C[d[d[0]][0]]-C[d[d[1]][1]])+t2/4*(C[d[d[8]][8]]+C[d[d[8]][8]]-C[d[d[9]][9]]-C[d[d[9]][9]]);

                dC[k][1]*=3;
            }

            if(d[3]==28 or d[d[3]][3]==28)
            {
                dC[k][0]*=3;
                dC[k][0]-=t1/4*(C[d[d[0]][0]]-C[d[d[1]][1]])+t2/4*(C[d[d[6]][6]]+C[d[d[6]][6]]-C[d[d[7]][7]]-C[d[d[7]][7]]);

                dC[k][1]*=3;
            }
            
            //Work out gamma
            if(d[0]==28 or d[d[0]][0]==28)
            {
                dgamma[k][a]*=3;


				dgamma[k][a]-=t1/4*(gamma[d[d[2]][2]][a]-gamma[d[d[3]][3]][a])+t2/4*(gamma[d[d[7]][7]][a]+gamma[d[d[7]][7]][a]-gamma[d[d[9]][9]][a]-gamma[d[d[9]][9]][a])*(e[a][1]-uy[k]);


            }

            if(d[1]==28 or d[d[1]][1]==28)
            {
                dgamma[k][a]*=3;


				dgamma[k][a]-=t1/4*(gamma[d[d[2]][2]][a]-gamma[d[d[3]][3]][a])+t2/4*(gamma[d[d[6]][6]][a]+gamma[d[d[6]][6]][a]-gamma[d[d[8]][8]][a]-gamma[d[d[8]][8]][a])*(e[a][1]-uy[k]);

   }

            if(d[2]==28 or d[d[2]][2]==28)
            {
                dgamma[k][a]*=3;


				dgamma[k][a]-=t1/4*(gamma[d[d[0]][0]][a]-gamma[d[d[1]][1]][a])+t2/4*(gamma[d[d[8]][8]][a]+gamma[d[d[8]][8]][a]-gamma[d[d[9]][9]][a]-gamma[d[d[9]][9]][a])*(e[a][0]-ux[k]);

            }

            if(d[3]==28 or d[d[3]][3]==28)
            {
                dgamma[k][a]*=3;


				dgamma[k][a]-=t1/4*(gamma[d[d[0]][0]][a]-gamma[d[d[1]][1]][a])+t2/4*(gamma[d[d[6]][6]][a]+gamma[d[d[6]][6]][a]-gamma[d[d[7]][7]][a]-gamma[d[d[7]][7]][a])*(e[a][0]-ux[k]);

         
            }

    }

	}


}
}