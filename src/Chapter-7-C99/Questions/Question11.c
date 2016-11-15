//Write a program that takes a first name and last name entered by the user and
//displays the last name, a comma, and the first initial, followed by a period:
//Enter a first and last name: Lloyd Fosdick
//Fosdick, L.
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //first letter for first name
    char first_letter, ch;
    bool fl = false; //has the first letter been read
    bool fw = false;
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
            printf("%c", ch);
        }
    }
    printf(", %c", first_letter);

}
