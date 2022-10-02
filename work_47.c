/* Population Standard Deviation */

// SD of a population

#include <math.h>
#include <stdio.h>

// function prototype
float calculateSD(float data[]);

int main() {

    int i;
    float data[10];
    
    printf("Enter 10 elements: ");
    
    for (i = 0; i < 10; ++i) {
		scanf("%f", &data[i]);
        printf("Number %d: %f\n", (i + 1), data[i]);
		if (i < 9) {
			printf("Next Number %d: ", i + 2);
		} else {
			printf("\nCaculate Standard Deviation:\n");
		}
    }
    
    printf("Standard Deviation = %.6f\n", calculateSD(data));
    
    return 0;
}

float calculateSD(float data[]) {
    
    float sum = 0.0, mean, SD = 0.0;
    
    int i;
    
    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }
    
    mean = sum / 10;
    
    for (i = 0; i < 10; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    
    return sqrt(SD / 10);
}
