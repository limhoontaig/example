/* Power of a Number Using the while Loop */

#include <stdio.h>
#include <math.h>

int main() {

    int base, exp, exponent;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter a exponent: ");
    scanf("%d", &exp);
    exponent = exp;

    // calculate the power
    result = pow(base, exp);
    printf("\nUsing 'pow' function of math.h\n");
    printf("%d powered %d equals %.0Lf\n", base, exponent, result);

    result = 1.0;
    exp = exponent;

    while (exp != 0) {
	result *= base;
	--exp;    
    }
    printf("\nUsing while and multiplication method.\n");
    printf("%d exponent %d equals %.0Lf\n", base, exponent, result);

    return 0;
}

