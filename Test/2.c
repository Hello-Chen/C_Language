#include <stdio.h>

int main(void)
{
    int a=12346;
    double b=123.456;
    printf("%d\n",a);
    printf("%4d\n",a);
    printf("%f\n",b);
    printf("%.2f\n",b);
    printf("%4.2f\n",b);
    printf("%-4.2f\n",b);
    return 0;
}