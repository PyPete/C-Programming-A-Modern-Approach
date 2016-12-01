//Modify Programming Project 5 from Chapter 5 so that it uses a function to
//compute the amount of income tax. When passed an amount of taxable income,
//the function will return the tax due.
#include <stdio.h>

float calc_tax(float income);

int main(void)
{
    float income, tax;
    printf("Please enter the amount of taxable income: ");
    scanf("%f", &income);
    printf("Tax due: %.3f", calc_tax(income));

    return 0;
}

float calc_tax(float income)
{
    if (income <= 750)
    {
        //1% tax
        return income*0.01;
    }
    else if (income > 750 && income <= 2250)
    {
        //$7.50 plus 2% of amount over $750
        return 7.50+((income-750)*0.02);
    }
    else if (income > 2250 && income <= 3750)
    {
        //$37.50 plus 3% of amount over $2,250
        return 37.50+((income-2250)*0.03);
    }
    else if (income > 3750 && income <= 5250)
    {
        //$82.50 plus 4% of amount over $3,750
        return 82.50+((income-3750)*0.04);
    }
    else if (income > 5250 && income <= 7000)
    {
        //$142.50 plus 5% of amount over $5250
        return 142.50+((income-5250)*0.05);
    }
    else
    {
        //$230.00 plus 6% of amount over $7000
        return 230.00+((income-7000)*0.06);
    }

}
