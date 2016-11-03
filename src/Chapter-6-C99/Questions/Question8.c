//Write a program that prints a one-month calendar. The user specifies the number
//of days in the month and the day of the week on which the month begins
#include <stdio.h>

int main(void)
{
    int days, start;
    printf("Enter a number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    for (int i=0; i<=start; i++)
        printf("  ");
    for (int i=1; i<=days; start++, i++)
    {
        printf("%4d", i);
        if (start%7 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}
