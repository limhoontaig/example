/* Program to Swap Element Using Call by Reference */

#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c);

int main() {

	int a, b, c;

	printf("Enter a, b and c respectively: ");
	scanf("%d %d %d" , &a, &b, &c);

	printf("Value before swapping:\n");
	printf("a = %d address of a %p\nb = %d address of b %p\nc = %d address of c %p\n", a, &a, b, &b, c, &c);

	cyclicSwap(&a, &b, &c);

	printf("Value after swapping:\n");
	printf("a = %d address of a %p\nb = %d address of b %p\nc = %d address of c %p\n", a, &a, b, &b, c, &c);

	return 0;
}

void cyclicSwap(int *n1, int *n2, int *n3) {
	int temp;
	// swapping in cyclic order 
	temp = *n2;
	*n2 = *n1;
	*n1 = *n3;
	*n3 = temp;
}

