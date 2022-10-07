#include <stdio.h>

int main(void) {
	printf("10진수 정수: %d \n", 10); // warining! 0.5가 0으로 출력 
    printf("10진수 실수: %f \n", 0.5); 
    printf("소수점 이하 6자리: %f \n", 0.5655678); // %f의 default는 소숫점 이하 6째자리까지
    printf("소수점 이하 6자리 이상: %.8f \n", 0.5667784); // 소숫점 이하 8째자리까지
    return 0;
}
