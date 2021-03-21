#include <stdio.h>
#include <string.h>

char *fun(char (*a)[128], int num, char *max);

int main(void)
{
    char *max;
    char (*a)[128]={"asd","assd","asadd"};
    fun(a[0],3,max);
    printf("%s",max);
    return 0;
}

char *fun(char (*a)[128], int num, char *max)
{
    max = a[0];
    for (int i = 0; i < num; i++)
    {
        if (strlen(max) < strlen(a[i]))
        {
            max = a[i];
        }
    }
    return max;
}