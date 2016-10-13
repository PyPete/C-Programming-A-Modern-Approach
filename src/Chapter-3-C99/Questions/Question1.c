//Write a program that accepts a date from the user in the form
//dd/mm/yyyy and then display it in the form yyyymmdd

#include <stdio.h>

int main(void)
{
    int year, month, day;
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("%d%d%d\n", year, month, day);
    return 0;
}
