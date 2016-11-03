//The value of the mathematical constant e can be expressed as an infinite series:
//e = 1 + 1/1! + 1/2! + 1/3! +..
//Write a program that approximates e by computing the value of
//1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
//where n is an integer entered by the user
#include <stdio.h>

int main(void)
{
    int n;
    float e = 1.00f, fact;
    printf("Please enter a value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
            fact *= j;
        e = e + (1/fact);
    }
    printf("Value of e is %.2f", e);
    return 0;
}
