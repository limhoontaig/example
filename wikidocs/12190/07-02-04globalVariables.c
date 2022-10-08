#include <stdio.h>
#include <stdlib.h>

int num; // global variable, auto initialization on 0

void grow(void);
void printCode(void);

int main(void) 
{
    printCode();
    printf("\n");
    printf("함수 호출 전 num의 값: %d\n", num);
    grow();
    printf("함수 호출 후 num의 값: %d\n", num);
    
    return 0;
}

void grow(void)
{
    num = 60;
}

void printCode(void)
{
    int c;
    FILE *fp;
    // open the current input file

    fp = fopen(__FILE__,"r");


    do {
	c = getc(fp); // read character
	putchar(c); // display character
     }
     while(c != EOF); // loop until the end of file is reached
     fclose(fp);
}

