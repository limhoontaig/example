#include<stdio.h>

int main(void)
{
  int i = 2;
  int j = 1;
  int result = 0;

  printf("----------\n");
  while ( i < 10 ) 
  {
    while ( j < 10 )
    {
      result = i * j;
      printf("%d * %d = %2d \n", i, j, result);
      j++;
    }
    i++;
    j = 1;
    printf("----------\n");
  }
  printf("\n반복문을 종료한 후 : i = %d, j = %d, result = %d \n", i, j, result);

  return 0;
}
