//Write a program that prompts the user to enter two dates and then indicates
//which date comes earlier on the calendar
#include <stdio.h>

int main(void)
{
    int first_m, first_d, first_y;
    int second_m, second_d, second_y;
    printf("Enter first date (dd/mm/yy): ");
    scanf("%d/%d/%d", &first_d, &first_m, &first_y);

    printf("Enter second date(dd/mm/yy: ");
    scanf("%d/%d/%d", &second_d, &second_m, &second_y);

    if (first_y < second_y)
    {
        //First year comes before second
        printf("%d/%d/%d is earlier than %d/%d/%d\n", first_d, first_m, first_y,
                                                    second_d, second_m, second_y);
    }
    else if (second_y < first_y)
    {
        //Second year comes before first
        printf("%d/%d/%d is earlier than %d/%d/%d\n", second_d, second_m, second_y,
                                                    first_d, first_m, first_y);
    }
    else
    {
        //Same year - look at month
        if (first_m < second_m)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", first_d, first_m, first_y,
                                                    second_d, second_m, second_y);
        }
        else if (second_m < first_m)
        {
            //Second month comes before first
        printf("%d/%d/%d is earlier than %d/%d/%d\n", second_d, second_m, second_y,
                                                    first_d, first_m, first_y);
        }
        else
        {
            //same month - check date
            if (first_d < second_d)
            {
                printf("%d/%d/%d is earlier than %d/%d/%d\n", first_d, first_m, first_y,
                                                    second_d, second_m, second_y);
            }
            else if (second_d < first_d)
            {
                printf("%d/%d/%d is earlier than %d/%d/%d\n", second_d, second_m, second_y,
                                                    first_d, first_m, first_y);
            }
            else
            {
                printf("Both dates are the same!\n");
            }
        }
    }
    return 0;
}
