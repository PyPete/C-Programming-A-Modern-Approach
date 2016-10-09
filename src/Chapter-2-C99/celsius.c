#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main(void)
{
    //Initialise variables
    float fahrenheit, celsius;
    //Signify user to input value of Fahrenheit
    printf("Enter Fahrenheit temperature: ");
    //Assign value to Fahrenheit variable
    scanf("%f", &fahrenheit);
    //Calculate celsius
    celsius = (fahrenheight - FREEZING_PT) * SCALE_FACTOR;
    //Print answer to screen
    printf("Celsius equivalent: %.1f\n", celsius);
    return 0;

}
