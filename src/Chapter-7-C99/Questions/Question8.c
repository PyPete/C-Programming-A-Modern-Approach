//Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-hour clock.
//The input will have the form hours:minutes followed by either A, P, AM, or PM (either lower-case or
//upper-case). White space is allowed (but not required) between the numerical time and the AM/PM indicator.
//Examples of valid input:
//1:15P
//1:15PM
//1:15p
//1:15pm
//1:15 P

#include <stdio.h>

int main(void)
{
    int hour, minute, mins, num;
    char ch;
    //Departure time 1: 480mins
    //Departure time 2: 583mins
    //Departure time 3: 679mins
    //Departure time 4: 767mins
    //Departure time 5: 840mins
    //Departure time 6: 945mins
    //Departure time 7: 1140mins
    //Departure time 8: 1305mins


    printf("Enter a 12-hour time: ");
    scanf("%2d :%2d %c", &hour, &minute, &ch);
    //convert to 24 hour clock
    if (toupper(ch) == 'P')
    {
        hour = hour + 12;
    }

    mins = (hour*60)+minute;
    if (mins < 531.5)
    {
        printf("Closest departure time is 8.00 a.m., arriving at 10.16 a.m.\n");
    }
    else if (mins >= 531.5 && mins < 631)
    {
        printf("Closest departure time is 9.43 p.m., arriving at 11.52 a.m.\n");
    }
    else if (mins >= 631 && mins < 723)
    {
        printf("Closest departure time is 11.19 p.m., arriving at 1.31 p.m.\n");
    }
    else if (mins >= 723 && mins < 803.5)
    {
        printf("Closest departure time is 12.47 p.m., arriving at 3.00 p.m.\n");
    }
    else if (mins >= 803.5 && mins < 892.5)
    {
        printf("Closest departure time is 2.00 p.m., arriving at 4.08 p.m.\n");
    }
    else if (mins >= 892.5 && mins < 1042.5)
    {
        printf("Closest departure time is 3.45 p.m., arriving at 5.55 p.m.\n");
    }
    else if (mins >= 1042.5 && mins < 1222.5)
    {
        printf("Closest departure time is 7.00 p.m., arriving at 9.20 p.m.\n");
    }
    else
    {
        printf("Closest departure time is 9.45 p.m., arriving at 11.58 p.m.\n");
    }

    return 0;
}
