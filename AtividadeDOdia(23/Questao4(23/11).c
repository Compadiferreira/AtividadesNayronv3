#include <stdio.h>
#include <stdlib.h>
void main(){    

 int A[6]= { 1,0,5,-2,-5,7},soma = 0;

 for (int i = 0; i < 6; i++)
 {
  if ((i == 0)|| (i==1)||(i==2))
  {
     soma = soma + A[i];
  }
 }
  printf("A soma é : %d \n",soma);
A[4] = 100;

for (int i = 0; i < 6; i++)
{
    printf("%d\n",A[i]);
}




}