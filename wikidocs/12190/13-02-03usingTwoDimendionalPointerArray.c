#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, count = 0;
    int r = 3, c = 4;
    int** arr = (int**)malloc(r * sizeof(int*));

    for (i = 0; i < r; ++i)
    {
	arr[i] = (int*)malloc(c * sizeof(int));
    }

    for (i = 0; i < r; i++)
    {
	for (j = 0; j < c; j++)
	{
	    arr[i][j] = (++count) * 100;
	}
    }

    for (i = 0; i < r; i++)
    {
	for (j = 0; j < c; j++)
	{
	    printf("arr[%2d][%2d]=%3d  ", i, j, arr[i][j]);
	}
	printf("\n");
    }

    for (i = 0; i < r; ++i)
    {
	free(arr[i]);
    }

    free(arr);

    return 0;

}

