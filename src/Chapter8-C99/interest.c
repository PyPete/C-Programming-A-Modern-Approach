//Prints a table of compound interest
#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
    //Initialise variables
    int i, low_rate, num_years, year;
    double value[5];

    //Ask user to enter interest rate
    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    //Ask user to enter number of years
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    //Loop over number of rates and print table
    for (int i=0; i<NUM_RATES; i++)
    {
        printf("%6d%%", low_rate+i);
        //Initial array to 100.0
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    //loop over the number of years
    for (int year=1; year <= num_years; year++)
    {
        //print each year
        printf("%3d    ", year);
        //loop over each rate
        for (int i=0; i<NUM_RATES; i++)
        {
            value[i] += (low_rate+i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    return 0;
}
