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
	
	if(mask[d[0]]==28){mask[k]=1;}else if(mask[d2[0]]==28){mask[k]=2;}
	
	if(mask[d[1]]==28){mask[k]=1;}else if(mask[d2[1]]==28){mask[k]=2;}
	
	if(mask[d[2]]==28){mask[k]=1;}else if(mask[d2[2]]==28){mask[k]=2;}
	
	if(mask[d[3]]==28){mask[k]=1;}else if(mask[d2[3]]==28){mask[k]=2;}
	
	if(mask[d[4]]==28){mask[k]=1;}else if(mask[d2[4]]==28){mask[k]=2;}
	
	if(mask[d[5]]==28){mask[k]=1;}else if(mask[d2[5]]==28){mask[k]=2;}
	
	if(mask[d[6]]==28){mask[k]=1;}else if(mask[d2[6]]==28){mask[k]=2;}
	
	if(mask[d[7]]==28){mask[k]=1;}else if(mask[d2[7]]==28){mask[k]=2;}
	
	if(mask[d[8]]==28){mask[k]=1;}else if(mask[d2[8]]==28){mask[k]=2;}
	
	if(mask[d[9]]==28){mask[k]=1;}else if(mask[d2[9]]==28){mask[k]=2;}
	
	if(mask[d[10]]==28){mask[k]=1;}else if(mask[d2[10]]==28){mask[k]=2;}
	
	if(mask[d[11]]==28){mask[k]=1;}else if(mask[d2[11]]==28){mask[k]=2;}
	
	if(mask[d[12]]==28){mask[k]=1;}else if(mask[d2[12]]==28){mask[k]=2;}
	
	if(mask[d[13]]==28){mask[k]=1;}else if(mask[d2[13]]==28){mask[k]=2;}
	
	if(mask[d[14]]==28){mask[k]=1;}else if(mask[d2[14]]==28){mask[k]=2;}
	
	if(mask[d[15]]==28){mask[k]=1;}else if(mask[d2[15]]==28){mask[k]=2;}
	
	if(mask[d[16]]==28){mask[k]=1;}else if(mask[d2[16]]==28){mask[k]=2;}
	
	if(mask[d[17]]==28){mask[k]=1;}else if(mask[d2[17]]==28){mask[k]=2;}
	
	
	}
	}
}