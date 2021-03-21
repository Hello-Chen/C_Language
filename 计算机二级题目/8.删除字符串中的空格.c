#include <stdio.h>

int main(void)
{
    char str[128],*p=str;
    int i=0;
    fgets(str,128,stdin);

    while(*p)
    {
        if (*p!=' ')
        {
            str[i++]=*p;
        }
        p++;
    }
    str[i]='\0';
    
    printf("%s",str);
    return 0;
}