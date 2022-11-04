#include <stdio.h>

void printCode(void) {
    int c;
    FILE *fp;
    fp = fopen(__FILE__,"r");
    do {
	c = getc(fp);
	putchar(c);
    } while (c != EOF);
    fclose(fp);
}

int main(void){
    printCode();
    printf("\n");
    int i = 3;
    do {
	printf("Inside do while statement i = %d\n", i);
	i++;
    } while (i < 3);
    printf("After do while ststement sum = %d\n", i);

    printf("\n");
    
    i = 3;
    while (i < 3) {
	printf("Inside while statemwnt i = %d\n", i);
	i++;
    }
    printf("After while statement sum = %d\n", i);
    
    printf("\n");

    int a,b;
    a =2;
    while(a-->0){
	printf("Inside while statement a= %d\n",a);
    }

    for (b=0; b<2;b++) {
	printf("Inside for statement using while loop a= %d\n",a, a++);
	printf("Inside for statement b= %d\n", b);
    }

    return 0;
}


