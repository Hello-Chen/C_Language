#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char *p;
    p=(char *)malloc(20);
    if (p==NULL)exit(0);

    // 随机生成字符串
    for(int n=0; n<20; n++)
        p[n] = rand()%26+'a';
    p[20]='\0';

    printf ("随机生成的字符串为：%s\n",p);
  
    free(p);
    return 0;
}