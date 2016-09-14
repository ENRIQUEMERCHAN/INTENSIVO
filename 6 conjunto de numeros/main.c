#include <stdio.h>

int main()
{
	int n, i, c, pos=0, neg=0, par=0, impar=0, entre=0, suma=0, mayor=-9999, menor=9999;
	float porc=0, prom=0;
	
	printf("\n total numeros del conjunto: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n numero");
		scanf("%d",&c);
		
		if(c>0)
		{
			pos=pos+1;
		}
		else
		{
			neg=neg+1;
		}
		
		if(c%2==0)
		{
			par=par+1;
		}
		else
		{
			impar=impar+1;
		}
		
		if(c>-30 && c<30)
		{
			entre=entre+1;
		}
		
		suma=suma+c;
		
		if(c>mayor)
		{
			mayor=c;
		}
		
		if(c<menor)
		{
			menor=c;
		}
	
	}
	
	porc=(neg*100)/n;
	prom=suma/n;
	
	printf("\n numeros positivos:%d",pos);
	printf("\n numeros pares: %d",par);
	printf("\n numeros impares: %d",impar);
	printf("\n porcentaje de negativos: %.2f",porc);
	printf("\n cantidad entre -30 y 30: %d",entre);
	printf("\n promedio: %.2f",prom);
	printf("\n numero mayor: %d", mayor);
	printf("\n numero menor: %d", menor);
	
	return 0;
}
