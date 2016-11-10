//Sums a series of numbers (using long variables)
//Modify the sum2.c programing of Section 7.1 to sum a series of double values
#include <stdio.h>

int main(void)
{
    double n, sum=0.0;

    printf("This program sums a series of doubles.\n");
    printf("Enter number (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%lf", &n);

    }
    printf("The sum is: %f\n", sum);
    return 0;
}
