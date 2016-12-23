//Write a program that finds the "smallest" and "largest" in a series of words.
//After the user enters the words, the program will determine which words would
//come first and list if the words were listen in dictionary order.
//The program must stop accepting input when the user enters a four-letter word.
//Assume that no word is more than 20 letters long. An interactive session
//with the program might look like this:
//Enter word: dog
//Enter word: zebra
//Enter word: rabbit
//Enter word: catfish
//Enter word: walrus
//Enter word: cat
//Enter word: fish

//Smallest word: cat
//Largest word: zebra
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 60

int read_line(char str[], int n);

int main(void)
{
    //Initialise variables
    char smallest[MAX_LENGTH], largest[MAX_LENGTH], current[MAX_LENGTH];

    //Get user to enter first word
    printf("Enter word: ");
    //Assign that to smallest and largest
    read_line(smallest, MAX_LENGTH);
    strcpy(largest, smallest);

    for (;;)
    {
        //main loop
        //ask user to enter more words
        printf("Enter word: ");
        read_line(current, MAX_LENGTH);

        //compare with smallest
        if (strcmp(current, smallest) < 0)
            strcpy(smallest, current);
        //compare with largest
        if (strcmp(current, largest) > 0)
            strcpy(largest, current);
        //if word is four letter. Exit loop
        if (strlen(current)==4)
            break;

    }
    //Output to user
    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);
    return 0;
}

int read_line(char str[], int n)
{
    int ch, i=0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
