#include <stdio.h>

int main(void)
{
	int i, num=25000, aux;
	
	for(i=num; i>0; i--)
	{
		if(num%i==0)
		{
			aux=num/i;
			printf("\n %d batallones de %d hombres",i,aux);
		}
	}

	return 0;
}
