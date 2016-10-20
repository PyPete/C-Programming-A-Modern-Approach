//Write a program that asks the user to enter a time (expressed in hours and minutes,
//using the 24-hour clock). The program then displays the departure and arrival times
//for the flight whose departure time is closest to that entered by the user.
//
//Enter a 24-hour time: 13.15
//Closest departure time is 12:47pm, arriving at 3.00pm
#include <stdio.h>

int main(void)
{
    int hour, minute, mins;
    //Departure time 1: 480mins
    //Departure time 2: 583mins
    //Departure time 3: 679mins
    //Departure time 4: 767mins
    //Departure time 5: 840mins
    //Departure time 6: 945mins
    //Departure time 7: 1140mins
    //Departure time 8: 1305mins


    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
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
