#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int s = 0, i = 0;
    int* p = NULL;

    s = 3;
    p = (int*)malloc(s * sizeof(int)); // int 3개 크기 메모리 할당
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    for(i = 0; i < s; i++)
    {
        printf("p[%d] = %d %p\n", i, p[i], p+i);
    }

    printf("--------------\n");

    s = 5;  
    p = (int*)realloc(p, s * sizeof(int));  // int 5개 크기 메모리 재할당
    p[3] = 40;
    p[4] = 50;

    for(i = 0; i < s; i++)
    {
        printf("p[%d] = %d %p\n", i, p[i], (p+i));
    }

    printf("--------------\n");

    s = 2;  
    p = (int*)realloc(p, s * sizeof(int));  // int 2개 크기 메모리 재할당
    p[0] = 11;
    p[1] = 22;

    for(i = 0; i < s; i++)
    {
        printf("p[%d] = %d %p\n", i, p[i], p + i);
    }


    free(p);
    p = NULL;

    return 0;
}
