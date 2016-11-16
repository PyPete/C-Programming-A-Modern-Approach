//Write a program that computes the factorial of a positive integer:
//Enter a positive integer: 6
//Factorial of 6: 720
//Use short, int, long, long long, float, double, long double
#include <stdio.h>

int main(void)
{
    int integer;
    short short_num = 1;
    int int_num = 1;
    long long_num = 1;
    long long llong_num = 1;
    float float_num = 1.0f;
    double double_num = 1.0;
    long double ldouble_num = 1.0;
    printf("Enter a positive integer: ");
    scanf("%d", &integer);


    //Factorial of ten is the highest with short
    for (int i = integer; i > 0; i--)
        short_num = short_num * i;
    printf("short value: %hd\n", short_num);

    //Factorial of 16 is the highest with int
    for (int i = integer; i>0; i--)
        int_num = int_num * i;
    printf("int value: %d\n", int_num);

    //Factorial of 16 is the highest with long (same as int)
    for (int i = integer; i>0; i--)
        long_num = long_num * i;
    printf("long value: %ld\n", long_num);

    //Factorial of 20 is the highest with long long
    for (int i = integer; i>0; i--)
        llong_num = llong_num * i;
    printf("long long value: %lld\n", llong_num);

    //Factorial of 34 is the highest with float after it says inf
    for (int i = integer; i>0; i--)
        float_num = float_num * i;
    printf("float value: %f\n", float_num);

    //Factorial of 170 is the highest with double after it says inf
    for (int i = integer; i>0; i--)
        double_num = double_num * i;
    printf("Double value: %f\n", double_num);

    //Factorial of 1754 is the highest with double after it says inf
    for (int i = integer; i>0; i--)
        ldouble_num = ldouble_num * i;
    printf("Long Double value: %lf\n", ldouble_num);






    return 0;
}
