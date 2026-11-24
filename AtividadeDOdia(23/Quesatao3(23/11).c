#include <stdio.h>
#include <stdlib.h>
void main(){    

 int N[5],soma=0;
 float media;

for (int i = 0; i < 5; i++)
{
    printf("Digite um numero :");
    scanf("%d",&N[i]);
  
    soma = soma + N[i];
    media = soma/5;
    
}
printf("A soma é %d\n",soma);

for (int i = 0; i < 5; i++)
{
    printf("%d\n",N[i]);
    
}
printf("A media dos numeros é : %f " ,media);
}