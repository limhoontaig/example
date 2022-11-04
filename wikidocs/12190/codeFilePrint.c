#include <stdio.h>
#include <stdlib.h>

void printCode(void);

int main(void) 
{
    printCode();
    printf("\n");
    
    return 0;
}

void printCode(void)
{
    int c;
    FILE *fp;

    // open the current input file
    fp = fopen("/home/limht/example/pointerArray02.c","r");
    

    do {
	c = getc(fp); // read character
	putchar(c); // display character
     }
     while(c != EOF); // loop until the end of file is reached
     fclose(fp);
}

