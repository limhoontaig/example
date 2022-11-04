#include <stdio.h>
#include <stdlib.h>

int add(int i) {
    static int sum;
    sum = sum + i;
    printf("sum:%d\n", sum);
    
}

int main(void) {
    add(10);
    add(3);
    add(56);
    // printf("%d", sum);

    return 0;
}


