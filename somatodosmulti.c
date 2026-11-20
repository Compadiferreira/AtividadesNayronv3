
#include<stdio.h>

void main(){
int num,soma = 0;

for (int i = 1; i <= 1000; i++)
{
   if ((i%3== 0)&&(i%5==0) )
   { soma = soma + i;    
}}
printf("%d",soma);
}