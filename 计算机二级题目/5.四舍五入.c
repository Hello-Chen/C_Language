#include <stdio.h>
double fun(double h);
int main(void)
{
    double a=123.454;
    printf("%f",fun(a));
    return 0;
}

double fun(double h)
{
    int temp=(int)(h*1000+5)/10;
    
    return (double)temp/100.0;
}