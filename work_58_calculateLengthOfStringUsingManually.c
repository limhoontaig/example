/* Claculate Length of String without Using strlen() Function */

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Programing is fun!";
    int i;

    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of the string using for statement: %d\n", i);

    printf("Length of the string using srtlen() function in string.h: %d\n", strlen(s));
    
    char line[150];

    printf("\nEnter a string: ");
    fgets(line, sizeof(line), stdin);

    printf("\nInput string:");
    puts(line);
    printf("Length of your input string: %d\n", strlen(line));


    return 0;
}

