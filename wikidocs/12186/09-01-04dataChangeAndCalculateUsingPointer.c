#include <stdio.h>

void sourceFilePrint(void) {
	
	FILE *fp;
    int c;
   
    // open the current input file
    fp = fopen(__FILE__,"r");

    do {
         c = getc(fp);   // read character 
         putchar(c);     // display character
    }
    while(c != EOF);  // loop until the end of file is reached
    
    fclose(fp);
}

int main(void)
{ 
    int num1 = 10;
    int num2 = 0;
    int* ip = NULL;

    ip = &num1;
    num2 = *ip + num1;
    sourceFilePrint();
	printf("*ip=%d num1=%d num2=%d\n", *ip, num1, num2);

    return 0;
}
