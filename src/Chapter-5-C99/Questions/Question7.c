//Write a program that finds the largest and smallest of four integers entered by the user
#include <stdio.h>

int main(void)
{
    int first, second, third, fourth;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);
    //ok well I struggled with this.
    if (first > second)
    {
        //if first is bigger than second
        //then swap them around
        int temp_var = first;
        first = second;
        second = temp_var;
        //else first already lower than second
    }
    if (third > fourth)
    {
        //as above
        int temp_var = third;
        third = fourth;
        fourth = temp_var;
    }
    //four if statements
    printf("Largest: %d\n", second > fourth ? second : fourth);
    printf("Smallest: %d\n", first < third ? first : third);

    return 0;
}
