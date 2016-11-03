//Write a program that finds the largest in a series of numbers entered by the
//user. The program must prompt the suer to enter numbers one by one. When the user
//enters 0 or a negative number, the program must display the largest nonnegative
//number entered:
//Enter a number: 60
//Enter a number: 38.3 etc etc
#include <stdio.h>

int main(void)
{
    float num, largest = 0;
    //Infinite loop until user exits
    while(1)
    {
        printf("Enter a number (0 will exit): ");
        scanf("%f", &num);
        //if number if 0, then exit
        if (num == 0)
        {
            break;
        }
        //else check if the new number is largest than the current largest
        else
        {
            if (num > largest)
            {
                largest = num;
            }
        }

    }
    //print largest
    printf("The largest number entered was %.2f", largest);
    return 0;
}
