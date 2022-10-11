#include<stdio.h>

int main(void)
{ 
    char ch;

    printf("알파벳 문자를 입력하세요. (종료시에는 q를 입력)\n");

    for ( ;  ; )
    {
        scanf("%c", &ch);
        if (ch == 'q')
            break;
    }

    printf("프로그램을 종료합니다.\n");

    return 0;
}
