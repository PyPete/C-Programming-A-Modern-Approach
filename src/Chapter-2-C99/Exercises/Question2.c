//Write a program that computes the volume of a sphere with
//a 10-meter radius.

#include <stdio.h>
//Declare constant PI
#define PI 3.14f

int main(void)
{
    float r = 10.0f;
    float volume = (4.0f/3.0f)*PI*(r*r*r);
    printf("Volume is %f", volume);
    return 0;
}
