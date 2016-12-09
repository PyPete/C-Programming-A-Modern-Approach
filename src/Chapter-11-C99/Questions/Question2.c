//Modify Programming Project 8 from Chapter 5 so that it includes the following
//function
//void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

//Enter a 24-hour time: 13.15
//Closest departure time is 12:47pm, arriving at 3.00pm
#include <stdio.h>

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);

int main(void)
{
    //Variable declaration
    int hour, minute, mins, departure, arrival;
    //Departure time 1: 480mins
    //Departure time 2: 583mins
    //Departure time 3: 679mins
    //Departure time 4: 767mins
    //Departure time 5: 840mins
    //Departure time 6: 945mins
    //Departure time 7: 1140mins
    //Departure time 8: 1305mins

    //Ask user to enter time
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    mins = (hour*60)+minute;

    //call scanf to find nearest departure time
    find_closest_flight(mins, &departure, &arrival);
    printf("Nearest Departure time: %d:%d", departure/60, departure%60);
    printf("This will arrive at: %d:%d", arrival/60, arrival%60);

    return 0;

}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if (desired_time < 531.5)
    {
        *departure_time = (8*60);
        *arrival_time = (10*60)+16;
    }
    else if (desired_time >= 531.5 && desired_time < 631)
    {
        *departure_time = (9*60)+43;
        *arrival_time = (11*60) + 52;
    }
    else if (desired_time >= 631 && desired_time < 723)
    {
        *departure_time = (11*60)+19;
        *arrival_time = (13*60)+31;
    }
    else if (desired_time >= 723 && desired_time < 803.5)
    {
        *departure_time = (12*60)+47;
        *arrival_time = (15*60);
    }
    else if (desired_time >= 803.5 && desired_time < 892.5)
    {
        *departure_time = (14*60);
        *arrival_time = (16*60)+8;
    }
    else if (desired_time >= 892.5 && desired_time < 1042.5)
    {
        *departure_time = (15*60)+45;
        *arrival_time = (17*60)+55;
    }
    else if (desired_time >= 1042.5 && desired_time < 1222.5)
    {
        *departure_time = 19*60;
        *arrival_time = (21*60)+20;
    }
    else
    {
        *departure_time = (21*60)+45;
        *arrival_time = (23*60)+58;
    }

}
