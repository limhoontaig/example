/* Factors of a Positive Integer */

# include <stdio.h>

int main() {

    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("\nFactors of %d are: \n", num);

    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
