#include <stdio.h>
void codePrint(void);
void changeArr(int* arr);
int main(void){
    codePrint();
    int arr[40];
    printf("main %p\n", main);
    printf("arr %p:\n", arr);
    
    for (int i=0; i <4; i++){
	arr[i] = i * 100;
	printf("arr[%d] %3d %p:\n", i, arr[i], &arr[i]);
    }
    changeArr(arr);
    return 0;
}

void codePrint(void){
    int c;
    FILE *fp;
    fp = fopen(__FILE__,"r");
    do {
	c =getc(fp);
	putchar(c);
    }
    while(c!=EOF);
    fclose(fp);
}

void changeArr(int* arr){
    for (int i=0; i <4; i++){
	*(arr+i) = i * 1000;
	printf("In changeARR arr[%d]= %4d &arr[%d] %p:\n",i,arr[i],i, &arr[i]);
	printf("In changeARR *(arr+%d)= %4d arr+%d %p:\n",i,*(arr+i),i,arr+i);
    }
}
