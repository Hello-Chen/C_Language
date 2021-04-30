#include <stdio.h>
#include <string.h>

#define MANLEN 6

typedef struct
{
    char ch[MANLEN];
    int len;
} String;

String strCat(String *s, String *t);

int main(void)
{
    String str1, str2;
    strcpy(str1.ch, "abcd");
    str1.len = strlen(str1.ch);
    strcpy(str2.ch, "efg");
    str2.len = strlen(str2.ch);

    printf("%s", str1.ch);
    printf("%s\n", str2.ch);

    String str3;
    str3 = strCat(&str1, &str2);
    printf("%s\n", str3.ch);
    printf("%d", str3.len);

    return 0;
}

String strCat(String *s, String *t)
{
    if (s->len + t->len <= MANLEN)
    {
        int i=0;
        for (i = s->len; i < s->len + t->len; i++)
        {
            s->ch[i] = t->ch[i - s->len];
        }
        s->ch[i]='\0';
        s->len += t->len;
        return *s;
    }
    else if (s->len < MANLEN)
    {
        int j=0;
        for (j = s->len; j < MANLEN; j++)
        {
            s->ch[j] = t->ch[j - s->len];
        }
        s->ch[j]='\0';
        s->len = MANLEN;
        return *s;
    }
    else
        return *s;
}