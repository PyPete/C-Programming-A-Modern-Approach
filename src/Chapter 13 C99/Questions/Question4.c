//Write a program named reverse.c that echoes its command-line arguments in
//reverse order. Running the program by typing:
//reverse void and null
//should produce null and void
#include <stdio.h>
#include <string.h>

#define MAX_WORD 15

int read_line(char str[], int n);

int main(int argc, char *argv[])
{
    char message[MAX_WORD][MAX_WORD];


    if (strcmp(argv[1], "reverse")!=0)
    {
        printf("You must start with the word 'reverse'");
        return 1;
    }
    //first two words are file name then reverse. So start index at 2
    for (int i=2; i<argc; i++)
    {
        strcpy(message[i-2], argv[i]);
    }
    for (int i=argc-3; i >= 0; i--)
           printf("%s ", message[i]);

    return 0;
}



