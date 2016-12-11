//a)Write a program that reads a message, then prints the reversal of the message:
//Enter a message: Don't get mad, get even.
//Reversal is: .neve teg, dam teg t'noD
//b)Revise the program to use a pointer instead of an integer to keep track of
//the current position in the array
#include <stdio.h>


int main(void)
{
    //Initialise variables
    char ch, message[99], *p=message;

    //Ask user to enter message
    printf("Enter a message: ");

    //While new line not reached
    while((ch=getchar())!='\n')
    {
        //assign value of pointer to ch
        *p = ch;
        //increment to next position
        p++;
    }
    //decrease by one increment
    p--;
    //print reverse
    printf("Reversal is: ");
    for (; p >= &message[0]; p--)
    {
        printf("%c", *p);
    }
    return 0;
}
