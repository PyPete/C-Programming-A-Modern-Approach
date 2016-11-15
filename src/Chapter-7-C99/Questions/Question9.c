//Write a program that asks the user for a 12-hour time, then displays
//the time in 24hour form:
//Enter a 12-hour time: 9:11 PM
//Equivalent 24-hour time: 21:11
#include <stdio.h>

int main(void)
{
    int hour, minute;
    char ch;
    printf("Enter a 12-hour time: ");
    scanf("%2d :%2d %c", &hour, &minute, &ch);
    //convert to 24 hour clock
    if (toupper(ch) == 'P')
    {
        hour = hour + 12;
    }
    printf("Equivalent 24-hour time: %d:%d", hour, minute);
    return 0;
}
