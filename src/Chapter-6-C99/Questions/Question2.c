//Write a program that asks the user to enter two integers, then calculates
//and displays their greateset common divisor (GCD):
//Enter two integers: 12 28
//Greatest common divisor: 4
//Hint: Look at Euclids algorithm
#include <stdio.h>

int main(void)
{
    //see https://en.wikipedia.org/wiki/Euclidean_algorithm#Procedure for
    //lots of information on the algorithm
    int a, b, temp, quotient, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    //Find largest
    if (a < b)
    {
        //want a to be largest one
        //swap them
        temp = a;
        a = b;
        b = temp;
    }
    //algorithm
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
    //print result to user
    printf("Greatest common divisor: %d", b);
    return 0;
}
