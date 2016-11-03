//Write a program that calculates the remaining balance on a loan
//after the first, second, and third monthly payments
#include <stdio.h>

int main(void)
{
    float amount, interest, payment;
    float first, second, third;
    int num;
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    //Convert interest rate to monthly interest rate
    interest = 1+((interest / 100)/12);
    //ask user for the number of payments
    printf("Enter the number of payments: ");
    scanf("%d", &num);
    for (int i=0; i<num; i++)
    {
        amount = (amount*interest)-payment;
    }
    printf("Balance remaining: $%f\n", amount);

    return 0;
}
