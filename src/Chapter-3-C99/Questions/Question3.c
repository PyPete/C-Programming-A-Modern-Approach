//Write a program that breaks down an ISBN entered by the user:
//
//Enter ISBN: 978-0-393-97950-3
//GS1 prefix: 978
//Group identifier: 0
//Publisher code: 393
//Item number: 97950
//Check digit: 3
#include <stdio.h>"


int main(void)
{
    int gsi, group_id, publisher_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &group_id, &publisher_code, &item_num, &check_digit);
    printf("GS1 prefix: %d\n", gsi);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check_digit);
    return 0;
}
