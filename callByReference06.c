#include <stdio.h>

void func(int * a, int b, int * c);

void main (void) {

    int a, b, c[1];
    a = 20;
    b = 20;
    c[0] = 20;
    func(&a, b,c);
    printf("a=%d b=%d c=%d\n", a,b,c[0]);

    // return 0;
}

void func(int * a, int b, int * c) {
    int x;
    x = *a;
    *a = x++;
    x=b;
    b=++x;
    --(*c);
}

