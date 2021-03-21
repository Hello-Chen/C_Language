#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[128];
    int count=0;

    fgets(a,128,stdin);

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] !=' '&& (a[i+1] ==' '|| a[i+1] == '\0'))
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
