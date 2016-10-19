//Write a program that calculates how many digits a number contains:
//Enter a number: 374
//The number 374 has 3 digits
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 10)
    {
        printf("The number %d has 1 digit\n", num);
    }
    else if (num > 9 && num < 100)
    {
        printf("The number %d has 2 digits\n", num);
    }
    else
    {
        printf("The number %d has 3 digits\n", num);
    }
    return 0;
}

