//Write a program that asks the user for a 24-hour time, then displays the time in
//12-hour form:
//Enter a 24-hour time: 21:11
//Equivalent 12-hour time: 9:11PM
#include <stdio.h>

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    //if hour less than or equal to 12, then
    //its all good
    if (hour <= 12)
    {
        printf("Equivalent 12-hour time: %d:%d AM\n", hour, minute);
    }
    else
    {
        printf("Equivalent 12-hour time: %d:%d PM\n", hour-12, minute);
    }

    return 0;
}
