
#include<stdio.h>

void main(){
int num,soma = 0;

printf("Digite o numero");
scanf("%d",&num);
printf("A soma dos divisores de %d e: ",num);
for (int i = 1; i <= num; i++)
{
   if (num%i == 0 )
   { soma = soma + i;
    printf("%d",i);
   
   if (i == num)
   {
    printf("=");
   }else{printf("+");}
   
   }
   
    
}
printf("%d",soma);
}