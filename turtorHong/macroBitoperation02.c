#include <stdio.h>
#define VALUE1 1
#define VALUE2 2

int main(void) {
    float i;
    int j, k, m;
    i = 100 / 300;
    j = VALUE1 & VALUE2;
    k = VALUE1 | VALUE2;
    if(j&&k||k) m = i+j;
    else m = j+k;
    printf("i=%.1f j=%d k=%d m=%03d\n", i,j,k,m);
    return 0;
}
