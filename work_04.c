/* Program to Multiply Two Numbers */

#include <stdio.h>

int main() {

    double a, b, product;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    // Calculating product 
    product = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("product = a * b\n");
    printf("%.2lf = %.2lf * %.2lf\n", product, a, b);
    printf("product = %.2lf\n", product);

    return 0;
}
