//Extend Exercise 1 to include a three digit number
#include <stdio.h>

int main(void)
{
    int first, second, third;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &first, &second, &third);
    printf("The reversal is: %1d%1d%1d", third, second, first);
    return 0;
}
