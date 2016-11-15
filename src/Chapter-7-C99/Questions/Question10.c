//Write a program that counts the number of vowels (a,e,i,o and u) in a sentence
//Enter a sentence: And that's the way it is.
//Your sentence contains 6 vowels
#include <stdio.h>

int main(void)
{
    char ch;
    int total = 0;
    printf("Enter a sentence: ");
    while ((ch=getchar()) != '\n')
    {
        ch = toupper(ch);
        if (ch == 'A' || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
        {
            total++;
        }
    }
    printf("Your sentence contains %d vowels.", total);
    return 0;
}
