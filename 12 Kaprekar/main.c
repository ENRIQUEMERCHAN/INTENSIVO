#include "stdio.h"
#include "stdlib.h"

int main(){
int num,dig,max,min,k=0;
int v1,v2,v3,v4,a1,a2,a3,a4;
char op;
    
do{
printf("\nIngrese un numero: ");
scanf("%d",&num);
while(num<1000 || num >9999){
  printf("El numero no tiene 4 digitos. Intente de nuevo: ");
  fflush(stdin);
  scanf("%d",&num);
}

if(num==0000 || num==1111 || num==2222 || num==3333 || num==4444 || num==5555 || num==6666 || num==7777 || num==8888 || num==9999){
  printf("\nNumero repdigits\n");
}else{

system("cls");

printf("\nNumero: %d",num);
printf("\n\n");

do{

dig=num%10;
v1=dig;
num=num/10;
dig=num%10;
v2=dig;
num=num/10;
dig=num%10;
v3=dig;
num=num/10;           
dig=num%10;
v4=dig;
num=num/10;

//printf("Numero: %d %d %d %d\n",v1,v2,v3,v4);

if(v1>=v2 && v2>=v3 && v3>=v4){
  a1=v1;a2=v2;a3=v3;a4=v4;
}
if(v1>=v2 && v2>=v4 && v4>=v3){
  a1=v1;a2=v2;a3=v4;a4=v3;
}
if(v2>=v1 && v1>=v3 && v3>=v4){
  a1=v2;a2=v1;a3=v3;a4=v4;
}
if(v2>=v1 && v1>=v4 && v4>=v3){
  a1=v2;a2=v1;a3=v4;a4=v3;
}
if(v3>=v4 && v4>=v1 && v1>=v2){
  a1=v3;a2=v4;a3=v1;a4=v2;
}
if(v3>=v4 && v4>=v2 && v2>=v1){
  a1=v3;a2=v4;a3=v2;a4=v1;
}
if(v4>=v3 && v3>=v1 && v1>=v2){
  a1=v4;a2=v3;a3=v1;a4=v2;
}
if(v4>=v3 && v3>=v2 && v2>=v1){
  a1=v4;a2=v3;a3=v2;a4=v1;
}
if(v1>=v4 && v4>=v2 && v2>=v3){
  a1=v1;a2=v4;a3=v2;a4=v3;
}
if(v1>=v4 && v4>=v3 && v3>=v2){
  a1=v1;a2=v4;a3=v3;a4=v2;
}
if(v4>=v1 && v1>=v2 && v2>=v3){
  a1=v4;a2=v1;a3=v2;a4=v3;
}
if(v4>=v1 && v1>=v3 && v3>=v2){
  a1=v4;a2=v1;a3=v3;a4=v2;
}
if(v2>=v3 && v3>=v1 && v1>=v4){
  a1=v2;a2=v3;a3=v1;a4=v4;
}
if(v2>=v3 && v3>=v4 && v4>=v1){
  a1=v2;a2=v3;a3=v4;a4=v1;
}
if(v3>=v1 && v1>=v2 && v2>=v4){
  a1=v3;a2=v1;a3=v2;a4=v4;
}
if(v3>=v1 && v1>=v4 && v4>=v2){
  a1=v3;a2=v1;a3=v4;a4=v2;
}
if(v1>=v3 && v3>=v2 && v2>=v4){
  a1=v1;a2=v3;a3=v2;a4=v4;
}
if(v1>=v3 && v3>=v4 && v4>=v2){
  a1=v1;a2=v3;a3=v4;a4=v2;
}
if(v2>=v4 && v4>=v1 && v1>=v3){
  a1=v2;a2=v4;a3=v1;a4=v3;
}
if(v2>=v4 && v4>=v3 && v3>=v1){
  a1=v2;a2=v4;a3=v3;a4=v1;
}
if(v3>=v2 && v2>=v1 && v1>=v4){
  a1=v3;a2=v2;a3=v1;a4=v4;
}
if(v3>=v2 && v2>=v4 && v4>=v1){
  a1=v3;a2=v2;a3=v4;a4=v1;
}
if(v4>=v2 && v2>=v1 && v1>=v3){
  a1=v4;a2=v2;a3=v1;a4=v3;
}
if(v4>=v2 && v2>=v3 && v3>=v1){
  a1=v4;a2=v2;a3=v3;a4=v1;
}

max=a1*1000+a2*100+a3*10+a4;
min=a4*1000+a3*100+a2*10+a1;

printf("%d - %d = %d\n",max,min,(max-min));
k++;
num=max-min;

}while((max-min)!=6174);

//printf("\nNumero Kaprekar: %d",k);
printf("\nNumero de vueltas para conseguir el numero de Kaprekar: %d",k,"\n");
k=0;

}//else
printf("\n¿Desea ingresar otro numero? s/n: ");
fflush(stdin);
scanf("%c",&op);
}while(op=='s' || op=='S');

return 0;
}

