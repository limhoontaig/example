/* to Convert Octal to Binary */

#include <stdio.h>
#include <math.h>

// function prototype
int confirmOctalNumber(int oct);
long long convertOctalToBinary(int oct);

int main() {

	int oct;
	printf("Enter an octal number: ");
	scanf("%d", &oct);
	if (confirmOctalNumber(oct) == 0) {
		printf("Error! The number %d is not an octal.\n", oct);
		return 0;
	} else
		printf("%d in octal = %lld in binary\n", oct, convertOctalToBinary(oct));
	return 0;
}

// confirm the correct octal number
int confirmOctalNumber(int oct) {

	while (oct != 0) {
		if (oct % 10 >= 8) {
		    return 0;
		}
		else {
			oct /= 10;
		}
	}
	return 1;
}

// function to convert octal to binary
long long convertOctalToBinary(int oct) {
	int dec = 0, i = 0, remainder;
	long long bin = 0;

	// converting octal to decimal
	while (oct != 0) {
		dec += (oct % 10) * pow(8, i);
		++i;
		oct /= 10;
	}
	
	// converting decimal to binary
	i = 1;
    while (dec != 0) {
		bin += (dec % 2) * i;
		dec /= 2;
		i *= 10;
	}
	return bin;
}

