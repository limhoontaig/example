/* Reverse an integer */

#include <stdio.h>

int main() {

    int n, number, reverse = 0, remainder;

    printf("Enter an integer:" );
    scanf("%d", &n);
    number = n;

    while (n != 0) {
	remainder = n % 10;
	reverse = reverse * 10 + remainder;
	n /= 10;
    }

    printf("Reversed number of %d = %d\n", number, reverse);
    
    return 0;
}


