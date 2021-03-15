#include <stdio.h>

int main(void)
{
    char a[] = "programming", b[] = "language";
    char *p1, *p2;
    p1 = a, p2 = b;
    for (int i = 0; i < 7; i++)
    {
        if (*(p1 + i) == *(p2 + i))
            printf("%c", *(p1 + i));
    }
    sadsa
    return 0;
}