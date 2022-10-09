#include <stdio.h>

int f(int* i, int j);

int main() {
    int x = 10, y = 20;
    printf("Before call function f(&x,y): x %d y %d \n", x, y);
    printf("f(&x,y)=%d ", f(&x, y));
    printf("After excute function f(&x,y) x %d y %d \n", x, y);

    return 0;
}

int f(int* i, int j) {
    *i += 5;
    return (2**i + ++j);
}
