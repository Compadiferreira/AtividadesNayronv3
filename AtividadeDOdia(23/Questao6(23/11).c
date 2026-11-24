
#include <stdio.h>


void main(){    

 int A[10],quantpar = 0;

 printf("Digite 10 valores : ");
    for (int i = 0; i < 10; i++)
 {
    printf("Valor %d : ",i);
    scanf("%d",&A[i]);

    if (A[i] % 2 == 0)
    {   
        quantpar = quantpar + 1;
    }
 }
 printf("A quantidade de numeros pares e %d ",quantpar);
}
