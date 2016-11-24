//Modify Programming Project 11 from Chapter 7 so that that the program labels
//its ouput::
//Enter a first and last name: Lloyd Fosdick
//You entered the name: Fosdick, L.
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //first letter for first name
    char first_letter, ch;
    char lastname[20];
    bool fl = false; //has the first letter been read
    bool fw = false;
    int i=0;
    printf("Enter a first and last name: ");
    while ((ch=getchar()) != '\n')
    {
        if (ch == " " && fl == false)
        {
            //if there is a space, and first word not passed
            //skip
            continue;
        }
        if (ch == ' ' && fl == true)
        {
            fw = true;
        }
        if (ch != ' ' && fl == false)
        {
            first_letter = ch;
            fl = true;
        }
        if (ch != ' ' && fw == true)
        {
            lastname[i] = ch;
            i++;
        }
    }
    printf("You entered the name: ");
    for (int j=0; j<i; j++)
        printf("%c", lastname[j]);


    printf(", %c", first_letter);

}
