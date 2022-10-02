/* to Find Largest Number Using Dynamic Memory Allocation */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	double *data;

	printf("Enter the total number of elements: ");
	scanf("%d", &n);

	// Allocation memory for n elements
	data = (double *)calloc(n, sizeof(double));
	if (data == NULL) {
		printf("Error!!! memory not allocated.\n");
		exit(0);
	}

	// Storing number entered by the user.
	for (int i = 0; i < n; ++i) {
		printf("Enter number %d: ", i + 1);
		scanf("%lf", data +i);
	}

	// Finding the largest number
	for (int i = 1; i < n; ++i) {
		if (*data < *(data + i)) {
			*data = *(data + i);
		}
	}
    
	printf("Largest number = %.2lf\n", *data);

	free(data);

	return 0;
}



