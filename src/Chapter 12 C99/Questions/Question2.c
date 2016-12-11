//Write a program that reads a message, then checks whether its a palindrome
//Ignore all characters that aren't letters. Use integer variables to keep
//track of positions in the array
//Enter a message: He lived as a devil, eh?
//Palindrome

//Include libraries
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


int main(void)
{
    //Declare variables
    char ch, sentence[99];
    int index=0, j;
    bool palindrome=true;

    //Ask user to enter a message
    printf("Enter a message: ");

    //Loop through the message
    while((ch=getchar())!='\n')
    {
        //if the char is in alpha and not a space
        if (isalpha(ch) && !isspace(ch))
        {
           //as to the character array
           sentence[index] = ch;
           //increase index
           index++;
        }
    }
    //decrease last element by 1
    index--;
    //assign dummy variable to j
    j = index;
    //loop through the message again
    for (int i=0; i<j; i++, index--)
    {
        //if the characters from either end are not the same
        if(tolower(sentence[i])!=tolower(sentence[index]))
        {
            //break
            palindrome = false;
            break;
        }
    }
    //report back to the user
    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}

