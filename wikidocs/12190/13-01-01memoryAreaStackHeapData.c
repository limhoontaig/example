#include <stdio.h>

int a = 1;  // 전역 변수

int main(void)
{
    int num1 = 10, num2 = 20;  // 지역 변수
    static int s = 20;  // 정적 변수

    printf("데이터 출력 : %d %d %d %d\n", a, num1, num2, s);
    printf("Data 영역(Code Segement) main printf: %p \t %p\n", main, printf);
    printf("Data 영역(Data Segament)&a &s: %p \t %p\n", &a, &s);
    printf("Stack스텍 영역(지역변수)&num1 &num2 : %p \t %p\n", &num1, &num2);

    return 0;
}
