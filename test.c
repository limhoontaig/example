#include <stdio.h>

void add (int a[7], int b);
void printCode();
int main(void)
{ 
    // 함수의 이름은 함수의 시작 주소를 의미한다.
	int a[7];
	printCode();
    printf("main %p printf %p scanf %p add %p a %p\n", main, printf, scanf, add, a);

    return 0;
}


void add (int a[], int b) {

}

void printCode () {

	FILE *fp;
    int c;

	fp = fopen(__FILE__, "r");

	do {
		c = getc(fp);
		putchar(c);
	}
	while(c != EOF);

	fclose(fp);
}

