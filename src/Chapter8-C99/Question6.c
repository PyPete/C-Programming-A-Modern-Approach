//The prototypical Internet newbie is a fellow named BIFF, who has a unique way
//of writing message. Here's a typical BIFF communique
//H3Y DUD3, C 15 R1LLY C00L!!!!!!!
//Write a "B1FF filter" that reads a message entered by the user and
//translates it into B1FF-speak:
//Enter message: Hey dude, C is rilly cool
//In B1FF speak: H3Y DUD3, C 15 R1LLY C00L!!!!!
#include <stdio.h>


int main(void)
{
    //create variables
    char message[100], ch;
    int message_length = 0;
    //tell user what to do
    printf("Enter message:");
    //loop through and find length of array and convert characters to upper
    while((ch=getchar())!= '\n')
    {
        message[message_length] = toupper(ch);
        message_length++;
    }
    //print result
    printf("In B1FF-speak: ");
    for (int i = 0; i < message_length; i++)
    {
        //convert characters
        if (message[i] == 'A')
            printf("4");
        else if (message[i] == 'B')
            printf("8");
        else if (message[i] == 'E')
            printf("3");
        else if (message[i] == 'I')
            printf("1");
        else if (message[i] == 'O')
            printf("0");
        else if (message[i] == 'S')
            printf("5");
        else
            printf("%c", message[i]);
    }
    //print how exclaimation mark
    for (int i = 0; i < 10; i++)
        printf("!");
    printf("\n");
    return 0;
}
