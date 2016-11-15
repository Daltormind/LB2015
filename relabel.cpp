// relabel labels nodes adjacent to solid

#include "wet.h"

void wet::relabel()
{
	for(k=k1;k<k2;k++)
	{
	neibour(k);
	if(mask[k]!=28)
	{
	// One away
	
	if(mask[d[0]]==28){mask[k]=1;}else if(mask[d[d[0]][0]]==28){mask[k]=2;}
	
	if(mask[d[1]]==28){mask[k]=1;}else if(mask[d[d[1]][1]]==28){mask[k]=2;}
	
	if(mask[d[2]]==28){mask[k]=1;}else if(mask[d[d[2]][2]]==28){mask[k]=2;}
	
	if(mask[d[3]]==28){mask[k]=1;}else if(mask[d[d[3]][3]]==28){mask[k]=2;}
	
	if(mask[d[4]]==28){mask[k]=1;}else if(mask[d[d[4]][4]]==28){mask[k]=2;}
	
	if(mask[d[5]]==28){mask[k]=1;}else if(mask[d[d[5]][5]]==28){mask[k]=2;}
	
	if(mask[d[6]]==28){mask[k]=1;}else if(mask[d[d[6]][6]]==28){mask[k]=2;}
	
	if(mask[d[7]]==28){mask[k]=1;}else if(mask[d[d[7]][7]]==28){mask[k]=2;}
	
	if(mask[d[8]]==28){mask[k]=1;}else if(mask[d[d[8]][8]]==28){mask[k]=2;}
	
	if(mask[d[9]]==28){mask[k]=1;}else if(mask[d[d[9]][9]]==28){mask[k]=2;}
	
	if(mask[d[10]]==28){mask[k]=1;}else if(mask[d[d[10]][10]]==28){mask[k]=2;}
	
	if(mask[d[11]]==28){mask[k]=1;}else if(mask[d[d[11]][11]]==28){mask[k]=2;}
	
	if(mask[d[12]]==28){mask[k]=1;}else if(mask[d[d[12]][12]]==28){mask[k]=2;}
	
	if(mask[d[13]]==28){mask[k]=1;}else if(mask[d[d[13]][13]]==28){mask[k]=2;}
	
	if(mask[d[14]]==28){mask[k]=1;}else if(mask[d[d[14]][14]]==28){mask[k]=2;}
	
	if(mask[d[15]]==28){mask[k]=1;}else if(mask[d[d[15]][15]]==28){mask[k]=2;}
	
	if(mask[d[16]]==28){mask[k]=1;}else if(mask[d[d[16]][16]]==28){mask[k]=2;}
	
	if(mask[d[17]]==28){mask[k]=1;}else if(mask[d[d[17]][17]]==28){mask[k]=2;}
	
	
	}
	}
}