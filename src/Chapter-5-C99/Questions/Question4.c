//Write a program that asks the user to enter a wind speed (in knots), then
//displays the corresponding description
#include <stdio.h>

int main(void)
{
    int wind_speed;
    printf("Please enter a wind speed (brrrrp): ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1)
    {
        printf("The wind is calm\n");
    }
    else if (wind_speed >= 1 && wind_speed <= 3)
    {
        printf("The wind is a light air\n");
    }
    else if (wind_speed >= 4 && wind_speed <= 27)
    {
        printf("The wind is a breeze\n");
    }
    else if (wind_speed >= 28 && wind_speed <= 47)
    {
        printf("The wind is a Gale\n");
    }
    else if (wind_speed >= 48 && wind_speed <= 63)
    {
        printf("The wind is a Storm\n");
    }
    else
    {
        printf("Escape while you still can!!! There's a hurricane!!!");
    }

    return 0;
}
