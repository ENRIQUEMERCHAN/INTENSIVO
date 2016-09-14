#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, cap, co, cappro=0, cuan=0, contm=0, conth=0, contco, menor=9999, aux=0;
	char tipo, r, nom[20];
	float prom=0;
	
	for(i=0;i<7;i++)
	{
		
		printf("\n Troncal %d",i+1);
		
		do
		{
			printf("\n\n Ingrese nombre del puente: ");
			fflush(stdin);
			gets(nom);
			
			printf("\n Tipo de construccion: (M)metalico, (H)hormigon o (X)mixto: ");
			tipo=tolower(getch());
			
			printf("\n\n Ingrese capacidad maxima en toneladas: ");
			scanf("%d",&cap);
			
			printf("\n Ingrese nivel de corrosion en porcentaje: ");
			scanf("%d",&co);
			
			if(tipo=='m' || tipo=='h')
			{
				if(tipo=='m')
				{
					contm++;
				}
				else
				{
					conth++;
				}
				
				if(cap>=50 && co>45)
				{
					printf("\n Estado del puente: Alto riesgo");
				}
				else
				{
					printf("\n Estado del puente: Transitable");
				}
				
			}
			else
			{
				printf("\n El estado del puente no esta definido por estar en estudio las condiciones a aplicar");
				cappro+=cap;
				cuan++;
			}
			
			if(co>65)
			{
				contco++;
			}
			
			printf("\n Otro puente a estudiar (s/n): ");
			r=tolower(getch());
				
		}while(r=='s');
		
		if(cuan>0)
		{
			prom=cappro/cuan;
		}
		
		printf("\n La capacidad promedio de los puentes de contsruccion mixta es: %.2f",prom);
		
		if(i==0 && conth<contm)
		{
			
			printf("\n Hay menos puentes de hormigon que metalicos");
		}	
		
		if(contco<menor)
		{
			menor=contco;
			aux=i;
		}
	}
	
	printf("\n La via mas segura con la menor cantidad de puentes con corrosion superior a 65 es la troncal %d",aux+1);
	
	return 0;
}
