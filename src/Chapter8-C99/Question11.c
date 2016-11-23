//Modify Programming Project 4 from Chapter 7 so that the program labels its output
//Enter phone number: 1-800-COL-LECT
//In numeric form: 1-800-265-5328
#include <stdio.h>

int main(void)
{
    int i=0;
    char ch;
    char phone_num[15];
    printf("Enter phone number: ");
    while((ch = getchar()) != '\n')
    {
        phone_num[i] = ch;
        i++;
    }
    printf("In numeric form: ");
    for (int j=0; j<i; j++)
    {
        if (phone_num[j] == 'A' || phone_num[j] == 'B' ||
                phone_num[j] == 'C')
        {
            printf("2");
        }
        else if (phone_num[j] == 'D' || phone_num[j] == 'E' ||
                phone_num[j] == 'F')
        {
            printf("3");
        }
        else if (phone_num[j] == 'G' || phone_num[j] == 'H' ||
                phone_num[j] == 'I')
        {
            printf("4");
        }
        else if (phone_num[j] == 'J' || phone_num[j] == 'K' ||
                phone_num[j] == 'L')
        {
            printf("5");
        }
        else if (phone_num[j] == 'M' || phone_num[j] == 'N' ||
                phone_num[j] == 'O')
        {
            printf("6");
        }
        else if (phone_num[j] == 'P' || phone_num[j] == 'Q' ||
                phone_num[j] == 'R')
        {
            printf("7");
        }
        else if (phone_num[j] == 'S' || phone_num[j] == 'T' ||
                phone_num[j] == 'U')
        {
            printf("8");
        }
        else if (phone_num[j] == 'U' || phone_num[j] == 'V' ||
                phone_num[j] == 'W')
        {
            printf("9");
        }
        else if (phone_num[j] == 'X' || phone_num[j] == 'Y' ||
                phone_num[j] == 'Z')
        {
            printf("0");
        }
        else
        {
            printf("%c", phone_num[j])
;        }


    }
    return 0;
}
