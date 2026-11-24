
#include <stdio.h>

void main(){    

 int A[10]= {1,2,3,4,5,6,7,8,9,10},B[10]={10,9,8,7,6,5,4,3,2,1},c[10];

printf("A subtração das arrays é:");
for (int i = 0; i < 10; i++)
{
  c[i] =  A[i] - B[i];
}
 for (int i = 0; i < 10; i++)
 {
    printf("%d\n",c[i]);
 }
}