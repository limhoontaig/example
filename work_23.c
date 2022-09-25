/* Prigram to Print English Alphabet */

#include <stdio.h>

int main () {
    char c;
    for (c = 'A'; c <= 'Z'; ++c)
	printf("%c ", c);
    printf("\n");

    printf("Enter u to display uppercase alphabets.\n");
    printf("Enter l to display lowercase alphabets. \n");
    printf("Enter x to exit. \n");

    scanf("%c", &c);

    if (c == 'U' || c == 'u') {
        for (c = 'A'; c <= 'Z'; ++c)
            printf("%c ", c);
	printf("\n");
    } else if (c == 'L' || c == 'l') {
        for (c = 'a'; c <= 'z'; ++c)
            printf("%c ", c);
	printf("\n");
    } else if (c == 'x' || c == 'X') {
            return 0;
    } else {
        printf("Error! You entered an invalid character.");
	printf("\n");
    }

    return 0;
}

