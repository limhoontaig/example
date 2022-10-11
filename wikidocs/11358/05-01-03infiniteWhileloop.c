#include<stdio.h>

int main(void)
{
  int i = 1, num;
  printf("반복할 횟수를 입력하세요:");
  scanf("%d", &num);

  while ( 1 ) // 조건식이 항상 참 (무한루프)
  {
    printf("반복 횟수 : %d \n", i);
    i++;

    if (i > num)
      break; // 조건식이 참이면 반복문 탈출
  }

  printf("\n반복문을 종료한 후 : i = %d \n", i);   

  return 0;
}
