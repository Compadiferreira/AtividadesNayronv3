
#include<stdio.h>

void main(){
int num;

printf("Digite o numero");
scanf("%d",&num);

for (int i = 1; i <= num; i++)
{
   if (num%i == 0 )
   {
    printf("%i\n",i);
   }
    
}
}