//Modify the broker.c program of Section 5.2 by making both of the following changes:
//(a) Ask the user to enter the number of shares and price per share, instead of the
//value of the trade
//(b)Add statements that compute the commission charged by a rival broker ($33 plus 3c per
//share for fewer than 2000 shares; $33 plus 2c per share for 2000 shares or more). Display
//the rivals commission as well as the commissions charge by the origianl broker
#include <stdio.h>

int main(void)
{
    int num_shares;
    float price_per_share, value, commission, rival_commission;


    printf("Enter the number of shares: ");
    scanf("%d", &num_shares);

    printf("Please enter price per share: ");
    scanf("%f", &price_per_share);

    value = num_shares * price_per_share;

    if (value < 2500.00f)
        commission = 30.00f + 0.017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + 0.0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);

    //Now calculate rivals commission
    if (num_shares < 2000)
    {
        //0.03 = 3 cents - I think :-)
        rival_commission = 39.00f + (0.03f * num_shares);
    }
    else
    {
        rival_commission = 33.00f + (0.02f * num_shares);
    }
    printf("And the rivals Commission is: $%.2f\n", rival_commission);
    return 0;
}
