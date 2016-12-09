//Modify Programming Project 3 from Chapter 6 so that it includes the following
//function:
//void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
//numerator and denominator are the numerator and denominator of a fraction.
//Reduce_numerator and reduced_denominator are pointers to variables in which the
//function will store the numerator and denominator of the fraction once it has
//been reduced to lowest terms

//Libraries to include
#include <stdio.h>

//Method declarations
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    //variable declarations
    int num, denom, red_num, red_denom;

    //Ask user to enter fraction
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    //Call method reduce
    reduce(num, denom, &red_num, &red_denom);

    //print to screen
    printf("In lowest terms: %d/%d", red_num, red_denom);
    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int a,b,temp, quotient, remainder;
    a = numerator;
    b = denominator;

    //find largest
    if (a<b)
    {
        //swap values
        temp = a;
        a = b;
        b = temp;
    }

        while(1)
    {
        //calculate the remainder and quotient
        remainder = a%b;
        quotient = a/b;
        //If quotient if 0 then found the answer and break
        if (remainder == 0)
            break;
        //Otherwise continue with Euclid algorithm
        a = b;
        b = remainder;
    }
    *reduced_numerator = numerator / b;
    *reduced_denominator = denominator / b;

}
