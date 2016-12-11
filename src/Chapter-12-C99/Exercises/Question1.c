//a)Write a program that reads a message, then prints the reversal of the message:
//Enter a message: Don't get mad, get even.
//Reversal is: .neve teg, dam teg t'noD
//b)Revise the program to use a pointer instead of an integer to keep track of
//the current position in the array
#include <stdio.h>


int main(void)
{
    int index=0;
    char ch, message[99];
    printf("Enter a message: ");

    while((ch=getchar())!='\n')
    {
        message[index] = ch;
        index++;
    }
    printf("Reversal is: ");
    for (int i=index-1; i>=0; i--)
    {
        printf("%c", message[i]);
    }
    return 0;
}
