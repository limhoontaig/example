#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int s, i = 0;
    int* p = NULL;

    printf("int 배열의 크기를 입력하세요.: ");
    scanf("%d", &s);

    p = (int*)calloc(s, sizeof(int));

    printf("\n연산 수행 전\n");
    for(i = 0; i < s; i++)
    {
        printf("p[%d] = %d %p\n", i, p[i], (p+i)); // 자동으로 0으로 초기화
    }


    for(i = 0; i < s; i++)
    {
        p[i] = 2 * i; // 연산 수행
    }

    printf("\n연산 수행 후\n");
    for(i = 0; i < s; i++)
    {
        printf("p[%d] = %d %p\n", i, p[i], (p+i));
    }

    free(p);
    p = NULL;

    return 0;
}
