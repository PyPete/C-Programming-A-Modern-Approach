//write a program that asks the user to enter values for x and n,
//calls power to compute x^n, and then displays the value returned by the function
#include <stdio.h>

double power(double x, int n);

int main(void)
{
    //Declare variables
    double x;
    int n;
    //Ask for user to enter value of x and n
    printf("Enter a value of x and n:");
    //Assign variables
    scanf("%lf %d", &x, &n);
    //print result to screen
    printf("%.4f", power(x,n));

    return 0;

}

double power(double x, int n)
{
    //if n is equal to 0 return 1
    if (n == 0)
        return 1;
    //find if n even or odd
    if (n%2==0)
        return power(x,n/2) * power(x, n/2);
    else
        return x * power(x, n-1);

}
