//Compute all the mixed difference differentials needed in collission.cpp

#include "wet.h"

void wet ::Computemixedd()
{
	dC[k][0]+=(4*C[d[0]]-3*C[d[1]]-C[d2[0]])/2/t1
	+(4*C[d[6]]-3*C[d[9]-C[d2[6]]+4*C[d[8]]-3*C[d[7]-C[d2[8]]+
	4*C[d[14]]-3*C[d[17]-C[d2[14]]+4*C[d[16]]-3*C[d[15]-C[d2[16]])/2/t2;
	
	drho[k][0]+=(4*rho[d[0]]-3*rho[d[1]]-rho[d2[0]])/2/t1
	+(4*rho[d[6]]-3*rho[d[9]-rho[d2[6]]+4*rho[d[8]]-3*rho[d[7]-rho[d2[8]]+
	4*rho[d[14]]-3*rho[d[17]-rho[d2[14]]+4*rho[d[16]]-3*rho[d[15]-rho[d2[16]])/2/t2;

	dp[k][0]+=(4*p[d[0]]-3*p[d[1]]-p[d2[0]])/2/t1
	+(4*p[d[6]]-3*p[d[9]-p[d2[6]]+4*p[d[8]]-3*p[d[7]-p[d2[8]]+
	4*p[d[14]]-3*p[d[17]-p[d2[14]]+4*p[d[16]]-3*p[d[15]-p[d2[16]])/2/t2;
	
	dmux[k]+=(4*mu[d[0]]-3*mu[d[1]]-mu[d2[0]])/2/t1
	+(4*mu[d[6]]-3*mu[d[9]-mu[d2[6]]+4*mu[d[8]]-3*mu[d[7]-mu[d2[8]]+
	4*mu[d[14]]-3*mu[d[17]-mu[d2[14]]+4*mu[d[16]]-3*mu[d[15]-mu[d2[16]])/2/t2;
	
	dgamma[k][a]+=((4*gamma[d[0]][a]-3*gamma[d[1]][a]-gamma[d2[0]][a])/2/t1
	+(4*gamma[d[6]][a]-3*gamma[d[9][a]-gamma[d2[6]][a]+4*gamma[d[8]][a]
	-3*gamma[d[7][a]-gamma[d2[8]][a]+4*gamma[d[14]][a]-3*gamma[d[17][a]
	-gamma[d2[14]][a]+4*gamma[d[16]][a]-3*gamma[d[15][a]
	-gamma[d2[16]][a])/2/t2)*(e[0][a]-u[k][a]);
	
	
	








}