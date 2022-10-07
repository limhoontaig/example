#include <stdio.h>

int main(void) {
	char* cp = NULL;
	int* ip = NULL;

	printf("%u %u \n", sizeof(char*), sizeof(int*));
	printf("%u %u \n", sizeof(cp), sizeof(ip));
	
	printf("%p %p \n", &cp, cp);
	printf("%p %p \n", &ip, ip);

	return 0;
}


