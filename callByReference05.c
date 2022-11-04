#include <stdio.h>

double h(double *f, int d, double x);

int main() {
    double f[]={1,2,3,4};
    printf("%3.1f\n", h(f, 4,2));
    return 0;
}

double h(double *f, int d, double x){
    int i;
    double res = 0.0;
    for (i = d - 1; i >=0;i--){
	res = res*x + f[i];
    }
    return res;
}

