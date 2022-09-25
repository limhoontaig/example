/* Prigram to Count the Number of Digits */

#include <stdio.h>

int main() {

    long long n, n1;
    int count = 0;
    printf("Enter an inreger :");
    scanf("%lld", &n);
    n1 = n;

    // iterate at least once, then n becomes 0
    // remove last digit from n in each iteration
    // increase count by 1 in each iteration
    do {
	n /= 10;
	++count;
    } while (n != 0);

    printf("Number of digits of %lld: %d\n", n1, count);

    return 0;
}

