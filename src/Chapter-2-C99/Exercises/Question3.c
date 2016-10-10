//Write a program that computes the volume of a sphere with
//a 10-meter radius.

#include <stdio.h>
//Declare constant PI
#define PI 3.14159265359f

int main(void)
{
    float r;
    printf("Please enter the radius you want to calculate: ");
    scanf("%f", &r);
    float volume = (4.0f/3.0f)*PI*(r*r*r);
    printf("Volume is %f", volume);
    return 0;
}
