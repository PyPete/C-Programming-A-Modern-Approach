//Write a program that evaulates an expression
//Enter an expression: 1+2.5*3
//Value of expression: 10.5
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char ch;
    float value, current;
    printf("Enter an expression: ");
    scanf("%f", &current);
    value = current;
    while ((ch = getchar()) != '\n')
    {
        if (ch == '+'){
            scanf("%f", &current);
            value = value + current;
        }
        else if (ch == '-'){
            scanf("%f", &current);
            value = value - current;
        }
        else if (ch == '*'){
            scanf("%f", &current);
            value = value * current;
        }
        else
        {
            scanf("%f", &current);
            value = value / current;
        }
    }
    printf("Value of expression: %.2f", value);
    return 0;
}
