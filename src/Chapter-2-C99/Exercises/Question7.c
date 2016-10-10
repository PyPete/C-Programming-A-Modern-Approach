//Write a program that asks the user to enter a US.dollar amount
//and then shows how to pay that amount using the smallest number
//of $20, $10, and $1 bills:
#include <stdio.h>

int main(void)
{
    int amount, twenties, tens, fives;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    twenties = amount / 20;
    printf("$20 bills: %d\n", twenties);
    amount = amount - (twenties * 20);
    tens = amount / 10;
    printf("$10 bills: %d\n", tens);
    amount = amount - (tens * 10);
    fives = amount / 5;
    printf("$5 bills: %d\n", fives);
    amount = amount - (fives * 5);
    printf("$1 bills: %d\n", amount);
    return 0;
}
