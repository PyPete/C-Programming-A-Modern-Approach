//Simplify Programming Project 1(b) by taking advantage of the fact that an
//array name can be used as a pointer
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
    for (; p >= message; p--)
    {
        printf("%c", *p);
    }
    return 0;
}
