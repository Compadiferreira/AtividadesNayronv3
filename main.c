
#include <stdio.h>


void main(){    

 int A[100],quantidade = 0;

 for (int i = 1; i < 150; i++)
 {
   if (!(i % 7 ==0))
   {
     A[i] = i;
    printf("%d \n",A[i]);
    quantidade = quantidade + 1;
   }                        //Por algum motivo a quantidade ta parando em 104,mesmo com break  tentando travar em 100,entao esta estourando o memoria apos o A[100],mas n sei
   if (quantidade >= 100)
   {
    break;
   }
 }
 
 printf("A quantidade de digitos nao multiplos de 7 são : %d ",quantidade);
}