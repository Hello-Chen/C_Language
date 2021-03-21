#include <stdio.h>
#define N 3

int main(void)
{
    int a[][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%-2d ", a[i][j]);
        }
        printf("\n");
    }
    printf("----------\n");

    for (j = 0; j < N; j++)
    {
        for (i = 0; i <= j; i++)
        {
            a[i][j] *= 2;
            printf("%-2d ", a[i][j]);
        }
        printf("\n");
    }

    printf("----------\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%-2d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}