//Write a program that reverses the words in a sentence:
//Enter a sentence: you can cage a swallow can't you?
//Reversal of sentence: you can't swallow a cage can you?
#include <stdio.h>

int main(void)
{
    //array to capture user sentence
    char forward_sentence[50];
    char backward_sentence[50];
    //variables initialisation
    char ch, last_char;
    int index=0,oldindex=0, j = 0;
    //ask user to enter a sentence
    printf("Enter a sentence: ");
    //get user sentence
    while((ch=getchar())!= '\n')
    {
        forward_sentence[index] = ch;
        index++;
    }
    //get last character entered
    last_char = forward_sentence[index-1];
    index--;
    //loop back from array
    for (int i=index-1; i>=0; i--)
    {
        //if a space is encountered
        if (forward_sentence[i]==' ')
        {
            //print out that word
            for (int j=i; j<index; j++)
                printf("%c", forward_sentence[j]);
            index = i;
        }
        //if find the beginning for the word
        else if (i == 0)
        {
            printf(" ");
            for (int j=i; j<index; j++)
                printf("%c", forward_sentence[j]);
        }
    }
    //print out the ?,! etc
    printf("%c", last_char);


    return 0;
}

