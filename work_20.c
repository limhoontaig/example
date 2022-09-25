/* Fibonacci Series up to n terms */

#include <stdio.h>
int main() {

    long double i, n;

    // initialize first and second terms
    long double t1 = 0, t2 = 1;

    // initialize the next term (3rd term)
    long double nextTerm = t1 + t2;

    // get no. of terms from user
    printf("Enter the number of terms: ");
    scanf("%Lf", &n);

    // print the first two terms t1 and t2
    printf("Fibonacci Series:\n%.0Lf\n%.0Lf\n", t1, t2);

    // print 3rd to nth terms
    for (i=3; i <= n; ++i) {
	printf("%.0Lf\n", nextTerm);
	t1 = t2;
	t2 = nextTerm;
	nextTerm = t1 + t2;
    }
    printf("\n");

    return 0;
}

