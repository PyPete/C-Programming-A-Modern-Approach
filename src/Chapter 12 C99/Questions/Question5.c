//Modify Programming Project 14 from Chapter 8 so that it uses a pointer
//instead of an integer to keep track of the current position in the array
//that contains the sentence

#include <stdio.h>

int main(void)
{
    //array to capture user sentence
    char forward_sentence[50];
    char backward_sentence[50];
    //variables initialisation
    char ch, last_char;
    int oldindex=0;
    //pointers to array
    int *index=forward_sentence;
    int *first=forward_sentence;
    //ask user to enter a sentence
    printf("Enter a sentence: ");
    //get user sentence
    while((ch=getchar())!= '\n')
    {
        //assign pointer to ch
        *index = ch;
        //move to next location
        index++;
    }
    //decrease index by one
    index--;
    //get last character entered
    last_char = *index;
    //loop back from array
    for (int *i=index--; i>=first; i--)
    {
        //if a space is encountered
        if (*i==' ')
        {
            //print out that word
            for (int *j=i; j<=index; j++)
            {
                 printf("%c", *j);
            }
            index = i;
        }
        //if find the beginning for the word
        else if (i == first)
        {
            for (int *j=i; j<index; j++)
                printf("%c", *j);
        }
    }
    //print out the ?,! etc
    printf("%c", last_char);


    return 0;
}

