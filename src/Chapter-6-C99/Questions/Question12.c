//The value of the mathematical constant e can be expressed as an infinite series:
//e = 1 + 1/1! + 1/2! + 1/3! +..
//Write a program that approximates e by computing the value of
//1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
//where n is an integer entered by the user
#include <stdio.h>

int main(void)
{
    float e = 1.00f, fact, smallie;
    int i = 1;
    printf("Please enter a small floating point number: ");
    scanf("%d", &smallie);
    fact = 1.00f;
    while (1.00f/fact > smallie)
    {
        fact = 1.00f;
        for (int j = 1; j <= i; j++)
            fact *= j;
        e = e + (1.00f/fact);
        i++;
    }
    printf("Value of e is %.4f", e);
    return 0;
}
