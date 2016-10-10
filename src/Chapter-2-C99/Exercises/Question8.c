//Write a program that calculates the remaining balance on a loan
//after the first, second, and third monthly payments
#include <stdio.h>

int main(void)
{
    float amount, interest, payment;
    float first, second, third;
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    //Convert interest rate to monthly interest rate
    interest = 1+((interest / 100)/12);
    //Calculate each payment
    first = (amount*interest)-payment;
    second = (first*interest)-payment;
    third = (second*interest)-payment;
    //User feedback
    printf("Balance remaining after first payment: $%f\n", first);
    printf("Balance remaining after second payment: $%f\n", second);
    printf("Balance remaining after third payment: $%f\n", third);

    return 0;
}
