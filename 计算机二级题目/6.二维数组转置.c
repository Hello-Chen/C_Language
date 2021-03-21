#include <stdio.h>
#define N 3

int main(void)
{
    int a[N][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%2d", a[i][j]);
        }
        printf("\n");
    }

    printf("----------\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%2d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
