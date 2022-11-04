#include<stdio.h>

int main(void)
{       
    char ch;

    printf("무슨 과일을 좋아하세요?\n");
    printf("\t(A)pple\n");
    printf("\t(B)anana\n");
    printf("\t(G)rape\n");
    printf("알파벳 첫글자 선택: ");

    scanf("%c", &ch);

    printf("-----------------------\n");

    switch (ch)
    {
        case ('A'|'a'): // when ch == 'A'
            printf("사과는 1000원입니다.\n");
            break;
        case ('B'|'b'): // when ch == 'B'
            printf("바나나는 2000원입니다.\n");
            break;
        case ('G'|'g'): // when ch == 'G'
            printf("포도는 5000원입니다.\n");
            break;
        default:
            printf("없는 과일입니다.\n");
    }

    printf("감사합니다.\n");

    return 0;
}
