//Write a function that computes the value of the following polynomial
//3x^5 + 2x^4-5x^3-x^2+7x - 6
//Write a program that asks the user to enter a value for x, calls the function
//to compute the value of the polynomial, and then displays the value return by
//the function
#include <stdio.h>

int calc_polynomial(int x);

int main(void)
{
    int x;
    //ask user to enter value of x
    printf("Please enter the value of x: ");
    scanf("%d", &x);
    printf("The value is: %d", calc_polynomial(x));
    return 0;
}

int calc_polynomial(int x)
{
    //return result
    return (3*(x*x*x*x*x)) + (2*(x*x*x*x)) - (5*(x*x*x)) - (x*x) + (7*x) - 6;
}

