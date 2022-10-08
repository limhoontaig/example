#include <stdio.h>
#include <stdlib.h>

void printS(int s, int* p);

int main(void)
{
    int s = 0, i = 0;
    int* p = NULL;

    s = 3;
    p = (int*)malloc(s * sizeof(int)); // int 3개 크기 메모리 할당
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    printS(s, p);

    s = 50;  
    p = (int*)realloc(p, s * sizeof(int));  // int 50개 크기 메모리 재할당
   
    for(int j = 0, i = 0; i < s; i++, j+=100)
    {
        *(p+i) = j;
    }

    printS(s, p);
     
    s = 2;  
    p = (int*)realloc(p, s * sizeof(int));  // int 2개 크기 메모리 재할당
    p[0] = 11;
    p[1] = 22;

    printS(s, p);

    free(p);
    p = NULL;

    return 0;
}

void printS(int s, int* p)
{
    int i = 0;
    printf("--------------\n");
    for(i = 0; i < s; i++)
    {
        printf("p[%d] = %d %p\n", i, p[i], p+i);
    }
    printf("--------------\n");
}
