
#include<stdio.h>
void main(){

int num,soma=0;

for (int i = 0; i < 10; i++)
{
 printf("digite um numero:");
 scanf("%d",&num);

 soma = soma + num;

printf("  A soma e %d \n",soma);
}
}