
#include<stdio.h>
void main(){

int num,soma=0,media=0;

for (int i = 0; i < 10; i++)
{
 printf("digite um numero:");
 scanf("%d",&num);
if (num > 0 )
{
    soma = soma + num;
}
media = soma/10;

}
 

printf("sua media e %d ", media);
}