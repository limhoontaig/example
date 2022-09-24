/* Sum of Natual Numbers Using while LooP */

#include <stdio.h>

int main() {

    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i = 1;

    while (i <= n) {
	sum += i;
	++i;
    }

    printf("Sum 1 to %d = %d\n", n, sum);

    return 0;
    
}


