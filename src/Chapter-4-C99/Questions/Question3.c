//Rewrite the program in Exercise 2 so that it prints the reversal of a three-digit
//number without using arithmetic to split the number into digits.
#include <stdio.h>

int main(void)
{
    int first, second, third;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &first, &second, &third);
    printf("The reversal is: %d%d%d", third, second, first);
    return 0;
}
