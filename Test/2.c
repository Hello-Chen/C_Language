#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    p = (int *)malloc(40 * sizeof(int));

    for (int i = 0; i < 40; i++)
    {
        p[i]+=2;
        printf("%d",p[i]);
    }


    free(p);
    return 0;
}