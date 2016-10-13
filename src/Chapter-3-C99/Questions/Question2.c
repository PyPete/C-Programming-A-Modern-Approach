//Write a program that formats product information entered by the
//user. A session with the program should look like this:
//
//Enter item number: 583
//Enter unit price: 13.5
//Enter purchase data (mm/dd/yyyy):  10/24/2010
//
//Item          Unit            Purchase
//              Price           Data
//583           $ 13.50         10/24/2010
#include <stdio.h>

int main(void)
{
    int item_num, day, month, year;
    float price;
    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase data (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tData\n");
    printf("%d\t\t$%.2f\t\t%d/%d/%d", item_num, price, day, month, year);

    return 0;
}
