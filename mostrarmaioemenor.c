
#include<stdio.h>
void main(){

int num,menorv,maiorv;

for (int i = 0; i < 10; i++)
{
 printf("digite um numero:");
 scanf("%d",&num);
if (i == 0)
{ maiorv = num;
  menorv = num;
}else{ 
    if (num > maiorv)
    {
        maiorv = num;
    }
    if (menorv > num)
    {
        menorv = num;
    }}
}
 

printf("O seu maior valor e : %d . \n  E menor valor e :  %d ",maiorv,menorv);
}