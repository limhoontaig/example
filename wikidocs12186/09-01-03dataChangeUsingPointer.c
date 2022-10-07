#include<stdio.h>

int main(void)
{ 
    int a = 0, b = 0, c = 0;
    int* ip = NULL;

    ip = &a;
    *ip = 10;
    printf("a=%d, b=%d,c=%d *ip=%d\n", a, b, c, *ip);

    ip = &b;
    *ip = 20;
    printf("a=%d, b=%d,c=%d *ip=%d\n", a, b, c, *ip);

    ip = &c;
    *ip = 30;
    printf("a=%d, b=%d,c=%d *ip=%d\n", a, b, c, *ip);

    return 0;
}
