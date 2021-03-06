/* Computes the dimensional weight of a
   box from input provided by the user */

#include <stdio.h>

int main(void)
{
    //Initialise variables
    int height, length, width, volume, weight;
    //User input - why the '&' symbol?
    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    //Calculate volume
    volume = height * length * width;
    //Calculate weight
    weight = (volume + 165) / 166;
    //Print details
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    return 0;

}
