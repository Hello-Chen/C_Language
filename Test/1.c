/**
* Author:   hellochen
* DateTime: 2021.03.22-18:08:09
* Description: 请编写函数,统计一行字符串中单词的个数,作为函数值返回。字符串在主函数中输入,规定所有单词由小写字母组成,
* 单词之间有若干个空格隔开,一行的开始没有空格。
*/

#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char str[255], ch, *p = str;

    int i = 0;

    while ((ch = getchar()) != 'q')
        str[i++] = ch;

    while (*p)
    {
        if (*p >= 'a' && *p <= 'z')
        {
            *p -= 32;
        }
        p++;
    }

    fp = fopen("./upper.txt", "w+");

    fputs(str, fp);
    rewind(fp);
    fgets(str, 255, fp);
    puts(str);
    
    fclose(fp);

    return 0;
}
