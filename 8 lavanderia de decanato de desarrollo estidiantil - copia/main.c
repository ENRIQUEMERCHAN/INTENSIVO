#include <stdio.h>
#include <string.h>

int main(void)
{
	int np, ch, cm, p, cp, cca, mayorp=0;
	char r, nom[20], s, tipo, nomaux[20];
	float ptotal;
	
	ch=0, cm=0;
	
	printf("\n Hay un estudiante (s/n): ");
	r=getch(); r=tolower(r);
	
	while(r=='s')
	{
		printf("\n\n Nombre: ");
		fflush(stdin); // limpiar buffer.
		gets(nom);// leer cadena de caracteres.
		printf("\n Sexo (M/F): ");
		s=getch(); s=tolower(s);
		printf("\n\n Numero de prendas: ");
		scanf("%d",&np);
		
		if(s=='f')
		{
			cm++;
		}
		else
		{
			ch++;
		}
		
		cp=0, cca=0;
		
		for(p=0;p<np;p++)
		{
			printf("\n Descripcion: (P)antalon, (C)amisa, (V)estido u (O)tro: ");
			tipo=getch(); tipo=tolower(tipo);
			
			if(tipo=='p')
			{
				cp++;
			}
			if(tipo=='c')
			{
				cca++;
			}
		}// cierre del for
		
		printf("\n trajo %d pantalones y %d camisas",cp,cca);// respuesta a la pregunta a
		
		if(cp>=mayorp && cca>4)
		{
			mayorp=cp;
			strcpy(nomaux,nom);
		}
		
		ptotal=((cca*450)+(cp*650))/1000;
		
		printf("\n Trajo %.2f kg de ropa", ptotal);
		printf("\n Otro estudiante (s/n): ");
		r=tolower(getch());
		
		
	}// cierre del while
	
	if((ch+cm)>0)
	{
		if(cca>4)
		{
			printf("\n %s trajo mas pantalones (%d)",nomaux,cp);
		}
			
		if(ch<cm)
		{
			printf("\n Los hombres usan menos la lavanderia ");
		}
		else
		{
			if(cm<ch)
			{
				printf("\n Las mujeres usan menos la lavanderia ");
			}
			else
			{
				printf("\n Tanto hombres como mujeres usan por igual la lavanderia ");
			}
		}
		
	}
	
}
