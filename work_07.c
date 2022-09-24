/* Program to Find the Size of Variables */

#include <stdio.h>

int main() {

    int intType;
    float floatType;
    double doubleType;
    char charType;
    
    // sizeof evaluates the size of a variable
    // either %lu or %zu format specifier
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %lu bytes\n", sizeof(doubleType));
    printf("Size of char: %lu bytes\n", sizeof(charType));
    
    return 0;
}

