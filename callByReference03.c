#include <stdio.h>

void swap(int a, int *b);

int main(void)
{
    int value =3, list[4]={1,3,5,7};
    int i;
    swap(value, &list[0]);
    swap(list[2], &list[3]);
    swap(value, &list[value]);
    for (i=0;i<4;i++)
    {
	printf("list[%d] %d\n", i, list[i]);
    }
}

void swap(int a, int *b)
{
    int temp;
    temp = a;
    a = *b;
    *b = temp;
}

