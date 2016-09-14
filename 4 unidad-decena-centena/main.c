#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, cociente, resto, n2, cociente2, resto2, n3, cociente3, resto3;
	
	printf("\n ingrese numero a procesar: ");
	scanf("%d",&n);
	
	if(n>=1 && n<=9)
	{
		printf("\n La unidad es: %d",n);
	}
	
	if(n>=10 && n<=99)
	{
		cociente=n/10;
		resto=n%10;
		
		printf("\n la unidad es: %d",resto);
		printf("\n la decena es :%d",cociente);
	}
	
	if(n>=100 && n<=999)
	{
		cociente=n/10;
		resto=n%10;
		
		n2=cociente;
		
		cociente2=n2/10;
		resto2=n2%10;
		
		printf("\n la unidad es: %d",resto);
		printf("\n la decena es: %d",resto2);
		printf("\n la centena es: %d",cociente2);
		
	}
	
	if(n>=1000 && n<=9999)
	{
		cociente=n/10;
		resto=n%10;
		
		n2=cociente;
		
		cociente2=n2/10;
		resto2=n2%10;
		
		n3=cociente2;
		
		cociente3=n3/10;
		resto3=n3%10;
		
		printf("\n la unidad es: %d",resto);
		printf("\n la decenea es: %d",resto2);
		printf("\n la centena es: %d",resto3);
		printf("\n la unidad de mil es: %d",cociente3);
		
	}
		
	return 0;
}
