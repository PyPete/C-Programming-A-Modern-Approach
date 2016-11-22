//Modify Project 8 from Chapter 5 so that the departure times are stored in an
//array and the arrival times are stored in a second array.
//The programme will use a loop to search the array of departure times for
//the one closest to the time entered by the user
#include <stdio.h>
#define LEN_ARRAY 8

int main(void)
{
    //Variables Initialisation
    int departure_times[LEN_ARRAY] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival_times[LEN_ARRAY] = {616, 712, 91, 180, 248, 355, 560, 718};
    int hour, minute, mins, diff, smallest=1440, smallest_index;

    //Ask for user input
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    mins = (hour*60)+minute;

    //Loop  over arrays
    for (int i=0; i<LEN_ARRAY; i++)
    {
        //find difference - ensure no negative numbers
        diff = abs(mins-departure_times[i]);
        //if this lower than the current lowest
        if (diff < smallest)
        {
            //update lowest and the index
            smallest = diff;
            smallest_index = i;
        }
    }
    //Output results
    printf("Closest departure time is %d.%d a.m., arriving at %d.%d p.m.\n", departure_times[smallest_index]/60,
                                                                            departure_times[smallest_index]%60, arrival_times[smallest_index]/60,
                                                                            arrival_times[smallest_index]%60);
    return 0;
}
