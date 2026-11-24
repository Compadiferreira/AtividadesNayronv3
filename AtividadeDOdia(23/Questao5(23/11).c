#include <stdio.h>

void main(){    

 int A[8],x,y;

for (int i = 0; i < 8; i++)
{
    printf("Digite o %d numero : ",i);
    scanf("%d",&A[i]);
}
for (int i = 0; i < 8; i++)
{
    printf("%d\n",A[i]);
}


printf("Digite agora quais posições você quer encontrar de 0 A 7: X E Y\n");
scanf("%d""%d",&x,&y);

printf("O valor X presente na posição %d é : %d ",x,A[x]);
printf("O valor Y presente na posição %d é : %d",y ,A[y]);

}
