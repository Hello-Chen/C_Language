#include <stdio.h>
#include <stdlib.h>
typedef struct link
{
    int elem;
    struct link *next;
} Link;

int main(void)
{
    Link *p = (Link *)malloc(sizeof(Link));
    Link *temp = p;

    for (int i = 1; i < 5; i++)
    {
        Link *a = (Link *)malloc(sizeof(Link));
        a->elem = i;
        a->next = NULL;

        temp->next = a;
        temp = temp->next;
    }

    while (p->next)
    {
        p = p->next;
        printf("%d ", p->elem);
    }

    return 0;
}