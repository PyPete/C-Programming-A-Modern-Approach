//Using the switch statement, write a program that converts a numerical grade
//into a letter grade:
//Enter numerical grade: 84
//Letter grade: B
#include <stdio.h>

int main(void)
{
    int grade, ten;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    ten = grade/10;

    if (grade < 0)
    {
        printf("You have entered an invalid value. Please pick a number between 0-100");
        exit(0);
    }
    else if (grade > 100)
    {
        printf("You have entered an invalid value. Please pick a number between 0-100");
        exit(0);
    }

    switch(ten)
    {
    case 10: case 9:
        printf("Letter grade: A\n");
        break;
    case 8:
        printf("Letter grade: B\n");
        break;
    case 7:
        printf("Letter grade: C\n");
        break;
    case 6:
        printf("Letter grade: D\n");
        break;
    default:
        printf("Letter grade: F\n");
        break;
    }



    return 0;
}
