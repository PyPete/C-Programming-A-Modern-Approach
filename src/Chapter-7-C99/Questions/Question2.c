//Prints a table of squares using a for statement
//Modify the square2.c program of section 6.3 so that it pauses after every 24
//squares and displays the following message:
//Press Enter to continue
//After displaying the message, the program should use getchar to read a character.
//getchar won't allow the program to continue until the user presses the Enter key
#include <stdio.h>

int main(void)
{
    short int n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++)
    {
        printf("%10d%10d\n", i, i*i);
        if (i%24==0)
        {
            printf("Press Enter to continue...\n");
            getchar();
        }
    }
    return 0;

}
