#include <stdio.h>

int f(int*i, int j);

int main(void) {
    int x = 10, y = 20;
    printf("f(&x, y)= %d\n", f(&x, y));
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

int f(int*i, int j){
    *i += 5;
    return (2 * *i + ++j);
}

