#include <stdio.h>
#include "/home/hellochen/Documents/C_Language/lib/Hello_C.h"

int main(void)
{
    int arr[][3] = {{1, 2, 3},
                    {4, 5, 3},
                    {3, 3, 3}};
    int **p = &arr[0][0];

    printf("%d\n", *(*(p + 1) + 1));

    return 0;
}