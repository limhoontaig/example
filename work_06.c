/* Program to Compute Quotient and Remainder */

#include <stdio.h>

int main() {
    
    int dividend, divisor, quotient, remainder;

    printf("Enter divindend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Computes quotient
    quotient = dividend / divisor;

    // Compute remainder
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}

