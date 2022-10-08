#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, count = 0;
    int r = 3, c = 4;  // 행과 열의 크기, 즉 3 by 4
    int* arr = (int*)malloc(r * c * sizeof(int));

    for (i = 0; i <  r; i++)
    {
        for (j = 0; j < c; j++)
        {
             *(arr + i*c + j) = ++count;
        }
    }

    for (i = 0; i <  r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%3d", *(arr + i*c + j));  
        }
        printf("\n");
    }

    for (i = 0; i <  r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%3d ", *(arr + i * c + j));  
        }
        printf("\n");
    }
    printf("\n");

    
    free(arr);
    return 0;
}
