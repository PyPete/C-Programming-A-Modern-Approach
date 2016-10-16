//Write a program that asks the user to enter a two-digit number, then prints
//the number with its digits reverse. A session with the program should have
//the following appearance:
//Enter a two-digit number: 28
//The reversal is: 82;
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    printf("The reversal is: %d%d", num%10, num/10);
    return 0;
}
