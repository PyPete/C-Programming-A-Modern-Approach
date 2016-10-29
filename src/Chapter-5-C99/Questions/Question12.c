//Write a program that asks the user for a two-digit number, then prints the
//English word for the number:
//Enter a two-digit number: 45
//You entered the number forty-five.
#include <stdio.h>

int main(void)
{
    int num,first, second; //digit
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    first = num/10;
    second = num%10;
    if (first == 1)
    {
    if (second == 1)
        {
            printf("Eleven\n");
        }
        else if (second == 2)
        {
            printf("Twelve\n");
        }
        else if (second == 3)
        {
            printf("Thirteen\n");
        }
        else if (second == 4)
        {
            printf("Fourteen\n");
        }
        else if (second == 5)
        {
            printf("Fifteen\n");
        }
        else if (second == 6)
        {
            printf("Sixteen\n");
        }
        else if (second == 7)
        {
            printf("Seventeen\n");
        }
        else if (second == 8)
        {
            printf("Eighteen\n");
        }
        else
        {
            printf("Nineteen\n");
        }
        exit(0);
    }
    switch(first)
    {
    case 2:
        printf("Twenty");
        break;
    case 3:
        printf("Thirty");
        break;
    case 4:
        printf("Forty");
        break;
    case 5:
        printf("Fifty");
        break;
    case 6:
        printf("Sixty");
        break;
    case 7:
        printf("Seventy");
        break;
    case 8:
        printf("Eighty");
        break;
    case 9:
        printf("Ninety");
        break;
    }
    switch(second)
    {
    case 1:
        printf("-one\n");
        break;
    case 2:
        printf("-two\n");
        break;
    case 3:
        printf("-three\n");
        break;
    case 4:
        printf("-four\n");
        break;
    case 5:
        printf("-five\n");
        break;
    case 6:
        printf("-six\n");
        break;
    case 7:
        printf("-seven\n");
        break;
    case 8:
        printf("-eight\n");
        break;
    case 9:
        printf("-nine\n");
        break;
    }

    return 0;
}
