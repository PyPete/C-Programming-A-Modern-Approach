//Modify the addfrac.c program so that the user enters both fractions at
//the same time, separated by a plus sign
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char sign;
    printf("Enter two fractions separated by a +,-,* or /: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &sign, &num2, &denom2);
    if (sign == '+')
    {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (sign == '-')
    {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (sign == '*')
    {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
    }
    else
    {
        result_num = num1 * denom2;
        result_denom = num2 * denom1;
    }



    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
