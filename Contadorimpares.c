#include<stdio.h>
void main(){
int num;

printf("Escreva um numero");
scanf("%i",&num);


for (int i = 0; i < num; i++)
{
    if (i % 2 ==1)
    {
        printf(" %d",i);
    }
    
}


}