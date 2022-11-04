#include <stdio.h>
void printCode(void);
int main(void) {
    printCode();
    int a = 3+5, b = 1, c;
    int ap, bp;

    ap = a++;
    bp = ++b;
    b = 3 * (ap==8);
    c = 5 * (ap!=8);
    printf("a=%d b=%d c=%d ap=%d bp=%d\n", a,b,c,ap,bp);
}

void printCode(void){
    int c;
    FILE *fp;
    fp = fopen(__FILE__, "r");
    do {
	c = getc(fp);
	putchar(c);
    }
    while(c !=EOF);
    fclose(fp);
}



