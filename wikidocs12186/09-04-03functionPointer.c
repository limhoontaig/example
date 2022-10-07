#include<stdio.h>

void add(int num1, int num2);
void subtract(int num1, int num2);

int main(void)
{ 
    int x, z;
    char c;
    void (*fp)(int, int);  // 함수 포인터 선언

    fp = NULL;

    printf("add 함수의 주소 : %p\n", add);
    printf("subtract 함수의 주소 : %p\n", subtract);
    printf("정수 (+ 또는 -) 정수를 입력하세요 : ");

    scanf("%d %c %d", &x, &c, &z);

    if(c == '+')
        fp = add;
    else if(c == '-')
        fp = subtract;
    else
        printf("연산자는 + 또는 - 를 입력하세요.\n");

    if((c == '+') || (c == '-'))
      fp(x, z);

    return 0;
}


void add(int num1, int num2)
{
    int result;
    result = num1 + num2;
    printf("%d + %d = %d 입니다.\n", num1, num2, result);
}

void subtract(int num1, int num2)
{
    int result;
    result = num1 - num2;
    printf("%d - %d = %d 입니다.\n", num1, num2, result);
}

