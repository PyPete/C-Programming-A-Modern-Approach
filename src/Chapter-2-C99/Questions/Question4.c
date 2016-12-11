//Write a program that declares several int and float variables - without
//initialising them-and then prints their values. Is there any pattern to
//the values? No trend.
#include <stdio.h>

int main(void)
{
    int a, b, c;
    float d, e, f;

    printf("%d\n", a); //prints 37
    printf("%d\n", b); //prints 8
    printf("%d\n", c); //prints 45
    printf("%f\n", d); //prints 0.00000
    printf("%f\n", e); //prints 0.A
    printf("%f\n", f); //prints 0.00000
    return 0;
}
