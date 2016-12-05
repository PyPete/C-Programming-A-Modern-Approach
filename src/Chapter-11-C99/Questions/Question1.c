//Write a program that asks the user to enter a US.dollar amount
//and then shows how to pay that amount using the smallest number
//of $20, $10, and $1 bills:
#include <stdio.h>


void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones);

int main(void)
{
    //declare variables
    int amount, twenties, tens, fives, ones;
    //ask user to enter amount
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    //call function
    pay_amount(amount, &twenties, &tens, &fives, &ones);
    //relay back to user
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);
    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones)
{
    //use * for access to object value
    //run calculation as before
    *twenties = dollars / 20;
    dollars = dollars - (*twenties * 20);
    *tens = dollars / 10;
    dollars = dollars - (*tens * 10);
    *fives = dollars / 5;
    dollars = dollars - (*fives * 5);
    *ones = dollars;
}
