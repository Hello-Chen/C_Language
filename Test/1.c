#include <stdio.h>
#include <string.h>
int main(void)
{
    int i, j = 0, max = 0;
    char str[5][20];
    
    for (i = 0; i < 5; i++)
    {
        printf("  请输入第 %d 个字符串：", i + 1);
        scanf("%s", str[i]);
        if (!max)
            max = strlen(str[i]);
        if (max < strlen(str[i]))
        {
            max = strlen(str[i]);
            j = i;
        }
    }
    printf("  输入的 5 个字符串中最长的字符串是：%s\n", str[j]);
    return 0;
}