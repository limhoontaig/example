#include <stdio.h>
#include <stdlib.h>

void a(int n, int *num);
void b(int n, int *lt);
void c(int *a, int *b);

int main(void){
    int n;
    int *num;
    printf("How many numbers?");
    scanf("%d", &n);
    num = (int*)malloc(sizeof(int) * n);
    a(n, num);
    b(n, num);
    for (int i=0;i<n;i++){
	printf("num[%d]=%d ", i, num[i]);
    }
    printf("\n");
    free(num);
    num = NULL;

    return 0;
}

void a(int n, int *num){
    for(int i = 0;i<n;i++)
	scanf("%d", &(num[i]));
}

void b(int n, int *lt) {
    int a, b;
    for (a=0; a < n - 1;a++){
	for (b=a+1; b < n; b++) {
	    if(lt[a]>lt[b]) c(lt+a, lt+b);
	}
    }
}

void c(int *a, int *b){
    int t;
    t=*a; *a=*b;*b=t;
}

