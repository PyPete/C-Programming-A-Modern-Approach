//Write a program that asks the user to enter a fraction, then reduces the
//fraction to the lowest terms:
//Enter a fraction: 6/12
//In lowest terms: 1/2
#include <stdio.h>

int main(void)
{
    int a,b,temp, quotient, remainder, num, denom;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);
    a = num;
    b = denom;

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
    printf("In lowest terms: %d/%d", num/b, denom/b);
    return 0;
}

