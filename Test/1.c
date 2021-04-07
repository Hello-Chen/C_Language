#include <stdio.h>
#include <stdlib.h>

typedef struct linkStack
{
    int data;
    struct linkStack *next;
} LinkStack;

void push(LinkStack *stack, int elem);
void showLinkStack(LinkStack *stack);
LinkStack *initLinkStack();

int main(void)
{
    LinkStack *stack = initLinkStack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 200);

    showLinkStack(stack);

    return 0;
}

LinkStack *initLinkStack()
{
    LinkStack *top = (LinkStack *)malloc(sizeof(LinkStack));
    top->next = NULL;

    return top;
}

void push(LinkStack *stack, int elem)
{
    LinkStack *top = (LinkStack *)malloc(sizeof(LinkStack));
    top->data = elem;
    stack->next = top;
    top = stack;
}

void showLinkStack(LinkStack *stack)
{
    while (stack->next != NULL)
    {
        stack = stack->next;
        printf("%d", stack->data);
    }
    printf("\n");
}
