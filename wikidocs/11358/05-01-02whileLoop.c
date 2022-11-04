#include<stdio.h>

int main(void)
{
  int i = 0, sum = 0;

  while ( i <= 10 ) 
  {
    sum = sum + i;
    printf("i = %2d, sum = %3d \n", i, sum);
    i++;
   }

   printf("\n반복문을 종료한 후 : i = %2d, sum = %3d \n", i, sum);

   return 0;
}
