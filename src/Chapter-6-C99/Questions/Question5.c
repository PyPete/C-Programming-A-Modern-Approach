//Write a program that asks the user to enter a two-digit number, then prints
//the number with its digits reverse. A session with the program should have
//the following appearance:
//Enter a two-digit number: 28
//The reversal is: 82;
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The reversal is: ");
    //use do loop as ensures one loop
    do {
        //Print remainder
        printf("%d", num%10);
        //Reduce by 10
        num /= 10;
        //test
    } while (num > 0);

    return 0;
}
