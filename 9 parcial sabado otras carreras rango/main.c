#include <stdio.h>

int main(void)
{
	int a, b, c, num, indicador, r, fuera=0, jugadores=0;
	float porc=0;
	
	a=-2, b=8;
	c=(a+b)/2;
	
	indicador=0;
	
	do
	{
		printf("\n Ingrese numero a jugar: ",num);
		scanf("%d",&num);
		
		indicador=num+c;
		
		if(indicador>=a && indicador<=b)
		{
			printf("\n Gano, el indicador esta dentro del rango: ");
		}
		else
		{
			printf("\n Perdio, el indicador esta fuera del rango: ");
			fuera++;
		}
		
		jugadores++;
		
		printf("\n Desea juegar nuevamente (s/n)");
		r=tolower(getch(r));
		
	}while(r=='s');
	
	porc=(fuera*100)/jugadores;
	
	printf("\n El porcentaje de indicadores que calleron fuera del rango es: %.2f", porc);

	return 0;
}
