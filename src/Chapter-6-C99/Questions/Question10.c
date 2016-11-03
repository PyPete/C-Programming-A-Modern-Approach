//Improve on programming Project 9 in Chapter 5 which asked you to write
//a program that determines which of the two dates comes earlier on the calendar.
//Generalise the program so that the user may enter any number of dates.
//The user will enter 0/0/0 to indicate that no more dates will be entered:
//Enter a date (mm/dd/yy): 3/6/08
//Enter a date (mm/dd/yy): 5/17/07
//Enter a date (mm/dd/yy): 6/3/07
//Enter a date (mm/dd/yy): 0/0/0
//5/17/07 is the earliest date
#include <stdio.h>

int main(void)
{
    int day, month, year, total = 365*99;
    int best_day, best_month, best_year, best_total;

    while(1)
    {
        printf("Enter a date (dd/mm/yy): ");
        scanf("%d/%d/%d", &day, &month, &year);
        if (day == 0 && month == 0 && year == 0)
            break;
        total = day + (month * 30) + (year * 365);
        if (total < best_total)
        {
            //update best total
            best_day = day;
            best_month = month;
            best_year = year;
            best_total = total;
        }
    }
    printf("%d/%d/%d is the earliest date", best_day, best_month, best_year);
    return 0;
}
