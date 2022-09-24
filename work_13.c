/* Program to Find Roots of a Quodratis Equation *
 * ax2 + bx + c = 0, where                       *
 * a, b and c are real numbers and               *
 *  a != 0                                       *
 ************************************************/
#include <math.h>
// IMPORTANT: prohibit to occur sqrt error when compile using gcc -lm option
#include <stdio.h>

int main() {

    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    // condition for real and different roots
    if (discriminant > 0) {
	root1 = (-b + sqrt(discriminant)) / (2 * a);
	root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    }


    // condition for real and equal roots
    else if (discriminant == 0) { 
	root1 = root2 = -b  / (2 * a);
        printf("root1 = root2 = %.2lf\n", root1);
    }

    // if roots not real
    else {
	realPart = -b / (2 * a);
	imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
    
}

