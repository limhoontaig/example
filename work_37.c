/* Sum of Natural Numbers Using Recursion */

#include <stdio.h>

int addNumbers(int n);

int main() {
    
    int num, sum;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    sum = addNumbers(num);
    printf("Sum of 1 to %d = %d.\n", num, sum);
    
    return 0;
}

// Sum of Natural Numbers Using Recursion
int addNumbers(int n) {
    if (n != 0) 
	return n + addNumbers(n - 1);
    else
	return n;
}

