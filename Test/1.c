#include <stdio.h>
#include <string.h>

int main(void)
{
    struct Book
    {
        int num;
        char name[20];
        float price;
    } a[3] = {{1, "asd", 12.2}, {2, "qwe", 65.2}, {3, "fdg", 88.2}};

    struct Book b={4,"sadada",56.4};

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d\n%s\n%.2f\n", a[i].num,a[i].name,a[i].price);
    }
    printf("%d",b.num);

    return 0;
}
