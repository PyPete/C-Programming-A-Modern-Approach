//Write a program that asks the user to enter a value for x and
//then displays the value of the following polynomial:
//3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
//Hint: C doesn't have an exponentiation operator, so you'll need to
//multiply x by itself repeatedly in order to compute the powers of x.
//(For example, x * x * x is cubed.)
#include <stdio.h>

int main(void)
{
    int x;
    printf("Please enter a value of x: ");
    scanf("%d", &x);
    printf("Answer: %d", (3*(x*x*x*x*x))+(2*(x*x*x*x))-
           (5*(x*x*x)) - (x*x) + (7*x)-6);
    return 0;
}
