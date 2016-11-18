//Checks numbers for repeated digits
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    //array of boolean false values
    bool digit_seen[10] = {false};
    int digit;
    long n = 1, num;
    //outer while loop
    while (n > 0)
    {
    //ask user for number
    printf("Enter a number: ");
    scanf("%ld", &n);
    num = n;
    //check for repeated items
    //inner while loop
    while (num>0)
    {
        digit = num % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        num /= 10;
    } //end inner while loop
    //any repeats
    if (num>0)
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");
    for (int i=0; i<10; i++)
        digit_seen[i] = false;
    } //outer while loop
    return 0;
}
