#include <stdio.h>

int main(void)
{
	int i, n, c;
	
	printf("\n Ingrese numero a procesar: ");
	scanf("%d",&n);
	
	c=n;
	
	for(i=n-1;i>=1;i--)
	{
		c=c*i;
	}
	
	printf("\n el factorial del numero es: %d",c);
	
	return 0;
}
