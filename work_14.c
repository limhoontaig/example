/* to Check Leap Year 
 * A leap year is exactly dicisible by 4 except for century years(years ending with 00).
 * The century year is a leap year only if it is perfectly divisible by 400. */

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // leap year if perfectly divisible by 400
    if (year % 400 == 0) {
	printf("%d is a leap year.\n", year);
    }

    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0) {
	printf("%d is not a leap year.\n", year);
    }

    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0) {
	printf("%d is a leap year.\n",year);
    }

    // all other years are not leap years
    else {
	printf("%d is not a leap year.\n, year");
    }

    return 0;

}

    
