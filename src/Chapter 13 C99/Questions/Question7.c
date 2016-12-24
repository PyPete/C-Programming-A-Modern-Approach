//Modify Programming Project 11 from Chapter 5 so that it uses arrays
//containing pointers to strings instead of switch statements.
#include <stdio.h>

int main(void)
{
    //variable declarations
    int num,first, second; //digit
    char *first_digits[9] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy",
                             "Eighty", "Ninety"};
    char *second_digits[9] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven",
                              "Eight", "Nine"};
    char *seperate_digits[9] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                             "Sixteen", "Seventeen", "Eighteen", "Nineteen"};


    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    first = num/10;
    second = num%10;

    if (first == 1)
    {
        printf("%s", seperate_digits[second-1]);
        exit(0);
    }
    else
    {
        printf("%s-%s", first_digits[first-2], second_digits[second-1]);
    }


    return 0;
}
