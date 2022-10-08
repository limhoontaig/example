#include <stdio.h>

int main(void) {

	printf("%013d, %13d, %013d \n", 1, 20, 36700);
    printf("%-13d, %-13d, %-13d \n", 1, 20, 3400);
    printf("%+13d, %+13d, %+13d \n", 1, 20, 34500);
    printf("%+13d, %+13d, %+13d \n", 1, 20, -300);
    printf("%-+13d, %-+13d, %-+13d \n", 1, 20, -34500);
    
	return 0;
}
