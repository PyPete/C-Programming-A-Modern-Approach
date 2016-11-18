//Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any)
//were repeated
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int occurrences[10] = {0}; //array to track occurrences
    int digit; //current digit
    long n; //user value
    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n>0)
    {
        digit = n % 10;
        occurrences[digit]++;

        n /= 10;
    }
    printf("Digit:       ");
    for (int i=0; i<10; i++)
        printf("%4d", i);
    printf("\nOccurrences: ");
    for (int i=0; i<10; i++)
        printf("%4d", occurrences[i]);
    return 0;
}
