#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, c, suma;
	
	suma=0;
	
	for(i=0;i<20;i++)
	{	
		suma=suma+pow(i-1,2)*pow(i-1,2);
	}
	
	printf("\n numero: %d \n",suma);
	
	return 0;
}
