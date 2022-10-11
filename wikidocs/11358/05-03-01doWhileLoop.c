#include<stdio.h>

int main(void)
{       
    int num = 10;

    do
    {
        printf("%d", num);
        num++;
    } while (num < 10);

    printf("\n반복문을 종료한 후 : num = %d \n", num);

    return 0;
}
