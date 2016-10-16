//Extend Exercise 1 to include a three digit number
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    printf("The reversal is: %1d%1d%1d", num%10, (num%10)%10, num/100);
    return 0;
}
