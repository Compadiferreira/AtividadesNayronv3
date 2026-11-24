#include <stdio.h>

void main(){    

 int A[10],maiorv,menorv;

 printf("Digite 10 valores : ");
    for (int i = 0; i < 10; i++)
 {
    printf("Valor %d : ",i);
    scanf("%d",&A[i]);
    if (i == 0)
    {   
       maiorv = A[i];
       menorv = A[i];
    }
    if (A[i] < menorv)
    {
        menorv = A[i];
    }
    if (A[i] > maiorv)
    {
        maiorv = A[i];
    }
 }
 printf("Maior valor : %d \n Menor Valor: %d ",maiorv,menorv);
}