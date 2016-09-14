#include <stdio.h>
#include <math.h>

int main(void)
{
	float a,b,c,r1,r2;
	
	printf("RESOLVENTE:");
	printf("\n ingrese a, b y c:");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a!=0)
	{
		if((pow(b,2)-4*a*c)>=0)
		{
			r1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
			r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
			
			printf("\n los resultados son: %.2f y %.2f",r1,r2);
		}
		else
		{
			printf("\n valor negativo en la raiz");
		}	
	}
	else
	{
		printf("\n se genera una indeterminacion");
	}
	
	return 0;
}
