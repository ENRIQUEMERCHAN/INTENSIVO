#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

int num, tam, valor, cont=0, aux1, aux2, exp;

printf("Ingrese numero: ");
fflush(stdin);
scanf("%d",&num);

while(num<0){
	printf("El numero no debe ser negativo. Ingrese de nuevo: ");
	scanf("%d",&num);	
}

valor=num*num;

printf("Cuadrado: %d\n",valor);

do {
		
	valor=valor/10;	
	cont++;
	
}while(valor>0);

if(cont%2==0)
	exp=cont/2;
else
	exp=cont/2+1;

aux1=(num*num)/pow(10,exp);

printf("\nPrimer numero: %d",aux1);

aux2=(num*num)-(aux1*pow(10,exp));

printf("\nSegundo numero: %d",aux2);

printf("\nLa suma es: %d",(aux1+aux2));

if((aux1+aux2)==num)
	printf("\nSI");
else
	printf("\nNO");

return 0;
}
