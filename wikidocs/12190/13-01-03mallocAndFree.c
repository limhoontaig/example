#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* cp = NULL;
    int* ip = NULL;

    cp = (char*)malloc(2);
    cp[0] = 'A';
    cp[1] = 'B';

    printf("%c %c\n", cp[0], cp[1]);
    printf("%p %p\n", &cp[0], &cp[1]);

    free(cp);
    cp = NULL;

    ip = (int*)malloc(8);

    ip[0] = 10;
    ip[1] = 20;

    printf("%d %d\n", ip[0], ip[1]);
    printf("%p %p\n", &ip[0], &ip[1]);

    free(ip);
    ip = NULL;

    return 0;
}
