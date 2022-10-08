#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, count = 0;
    int r = 30, c = 4;  // 행과 열의 크기, 즉 3 by 4
    int* arr[r];

    for(i = 0; i < r; ++i)
    {
        arr[i] = (int*)malloc(c * sizeof(int));
    }

    for (i = 0; i <  r; i++)
    {
        for (j = 0; j < c; j++)
        {
             arr[i][j] = ++count;  // 또는 *(*(arr+i)+j) = ++count
        }
    }

    for (i = 0; i <  r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("arr[%2d][%d]=%3d  ", i, j, arr[i][j]);  
        }
        printf("\n");
    }

    for(i = 0; i < r; ++i)
    {
        free(arr[i]);
    }

    return 0;
}
