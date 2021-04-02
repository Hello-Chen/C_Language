#include <stdio.h>
#include <stdlib.h>

typedef struct doublyList
{
    int data;
    struct doublyList *prev, *next;
} DoublyList;

DoublyList *initDoublyList();
void showDoublyList(DoublyList *list);
DoublyList *insertDoublyList(DoublyList *list, int elem, int addIndex);
DoublyList *deleteDoublyList(DoublyList *list, int delElem);
int selectDoublyList(DoublyList *list, int elem);
DoublyList *updateDoublyList(DoublyList *list, int elem, int updateElem);

int main(void)
{
    DoublyList *list = initDoublyList();
    showDoublyList(list);

    printf("*************************\n");
    insertDoublyList(list, 10, 99);
    showDoublyList(list);

    printf("*************************\n");
    deleteDoublyList(list, 9);
    showDoublyList(list);

    printf("*************************\n");
    int elem = 0;
    printf("请输入链表中要查询的值:");
    scanf("%d", &elem);
    int flag = selectDoublyList(list, elem);

    if (flag != -1)
        printf("被查询的值在链表的第%d个位置\n", flag);
    else
        printf("链表中没有这个元素\n");

    printf("*************************\n");
    updateDoublyList(list, 1, 999);
    showDoublyList(list);

    return 0;
}

DoublyList *initDoublyList()
{
    DoublyList *list = (DoublyList *)malloc(sizeof(DoublyList));
    list->prev = NULL;
    list->data = 0;
    list->next = NULL;

    DoublyList *temp = list;
    for (int i = 1; i <= 10; i++)
    {
        DoublyList *node = (DoublyList *)malloc(sizeof(DoublyList));
        node->data = i;
        node->next = NULL;
        node->prev = NULL;

        temp->next = node;
        node->prev = temp;
        temp = node;
    }
    return list;
}

void showDoublyList(DoublyList *list)
{
    DoublyList *temp = list;
    while (temp->next != NULL)
    {
        temp = temp->next;
        printf("%d <-> ", temp->data);
    }
    printf("NULL\n");
}

DoublyList *insertDoublyList(DoublyList *list, int addIndex, int elem)
{
    /* TODO: 插入问题 */
    DoublyList *temp = list;

    for (int i = 1; i < addIndex; i++)
    {
        temp = temp->next;
        if (temp->next == NULL)
        {
            printf("insert error!\n");
            exit(0);
            return list;
        }
    }

    DoublyList *node = (DoublyList *)malloc(sizeof(DoublyList));
    node->data = elem;

    node->next = temp->next;
    temp->next->prev = node;
    temp->next = node;
    node->prev = temp;

    return list;
}

DoublyList *deleteDoublyList(DoublyList *list, int delElem)
{
    DoublyList *temp = list;
    while (temp->next)
    {
        if (temp->data == delElem)
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);

            return list;
        }
        temp = temp->next;
    }
    printf("链表中没有该元素\n");
    return list;
}

int selectDoublyList(DoublyList *list, int elem)
{
    DoublyList *temp = list;
    int count = 0;

    while (temp->next)
    {
        if (temp->data == elem)
        {
            return count;
        }
        count++;
        temp = temp->next;
    }
    return -1;
}

DoublyList *updateDoublyList(DoublyList *list, int updateElem, int elem)
{
    DoublyList *temp = list;

    for (int i = 0; i < updateElem; i++)
    {
        temp = temp->next;
    }
    temp->data = elem;

    return list;
}