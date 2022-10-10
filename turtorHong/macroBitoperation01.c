#include <stdio.h>
#define N 10
#define SQR(X) (X)*(X)

int main(void) {
    printf("SQR(N): %d\n", SQR(N));
    printf("SQR(N+2): %d\n", SQR(N+2));
    printf("10>>2: %d\n", 10>>2);
    printf("10<<2: %d\n", 10<<2);
    return 0;
}
