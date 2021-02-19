#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[]="sdad";
    char str1[100];
    printf("%ld\n",sizeof(str));
    printf("%lu\n",strlen(str));
    printf("%s\n",str1);

    strcpy(str1,str);
    printf("%s %s\n",str,str1);
    return 0;
}