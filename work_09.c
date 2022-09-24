/* Swap Numbers Using Temporary Variables */

#include <stdio.h>

int main() {

    double first, second, temp;

    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    printf("\nBefore swapping\n");
    printf("first number = %.2lf\n", first);
    printf("second number = %.2lf\n", second);

    // value of first is assigned to temp
    temp = first;
    // value of second is assigned to first
    first = second;
    // value of temp(initial value of first) is assigned to second
    second = temp;

    // %.2lf displays number up 2 decimal points
      
    printf("\nAfter swapping\n");
    printf("first number = %.2lf\n", first);
    printf("second number = %.2lf\n", second);

    return 0;
}

