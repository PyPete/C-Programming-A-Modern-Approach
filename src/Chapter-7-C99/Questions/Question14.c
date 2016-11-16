//Write a program that uses Newton's method to compute the square root of a positive
//floating-point number:
//Enter a positive number: 3
//Square root: 1.73205
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y_new, y_old, x_by_y;
    printf("Enter a positive number: ");
    //for scanf you must read a double as %lf
    scanf("%lf", &x);
    y_new = 1.0;
    while (1)
    {
        y_old = y_new;
        //calculate x/y
        x_by_y = x / y_old;
        //update y_new
        y_new = (x_by_y + y_old) / 2.0;
        //check if new y is less than tolerance
        if (fabs(y_new-y_old)<0.00001)
        {
            break;
        }
    }
    printf("Square root: %f", y_new);
    return 0;
}
