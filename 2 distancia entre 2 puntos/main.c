#include <stdio.h>
#include <math.h>

int main(void)
{
	float x1,x2,y1,y2,d;
	
	printf("Punto 1");
	printf("\n x1=");
	scanf("%f",&x1);
	printf("\n x2=");
	scanf("%f",&x2);
	printf("\n y1 e y2");
	scanf("%f%f",&y1,&y2);
	
	d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	
	printf("\n El resultado es: %f",d);
	
	return 0;
}
