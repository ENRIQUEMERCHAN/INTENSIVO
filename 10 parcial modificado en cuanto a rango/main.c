#include <stdio.h>

int main(void)
{
	int a, b, c, num, indicador=0, r, fuera=0, jugadores=0;
	float porc=0;
	
	printf("\n Ingrese los valores para el rango a jugar: ");
	printf("\n Ingrese el valor de a: ");
	scanf("%d",&a);
	printf("\n Ingrese el valor de b: ");
	scanf("%d",&b);
	
	c=(a+b)/2;
	
	printf("\n Indicador en: %d",c);
	do
	{
		printf("\n Ingrese numero a jugar: ",num);
		scanf("%d",&num);
		
		indicador=num+c;
		
		if(a<b)
		{
			if(indicador>=a && indicador<=b)
			{
				printf("\n Gano, el indicador esta dentro del rango: ");
			}
			else
			{
				printf("\n Perdio, el indicador esta fuera del rango: ");
				fuera++;
			}
		}
		else
		{
			if(indicador>=b && indicador<=a)
			{
				printf("\n Gano, el indicador esta dentro del rango: ");
			}
			else
			{
				printf("\n Perdio, el indicador esta fuera del rango:");
				fuera++;
			}
		}
		
		jugadores++;
		
		printf("\n Desea juegar nuevamente (s/n)");
		r=tolower(getch(r));
		
	}while(r=='s');
	
	porc=(fuera*100)/jugadores;
	
	printf("\n El porcentaje de indicadores que calleron fuera del rango es: %.2f", porc);

	return 0;
}
