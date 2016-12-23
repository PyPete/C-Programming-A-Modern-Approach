//Write a program named sum.c that adds up its command-line arguments,
//which assumed to be integers. Running the program by typing
//sum 8 24 62
//should produce the following output:
//Total: 94
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = 0;
    //check for sum statement
    if (strcmp(argv[1], "sum")!=0)
    {
        printf("You must start with the sum statement\n");
        return 1;
    }
    for (int i=2; i < argc; i++)
    {
        sum = sum + atoi(argv[i]);
    }
    printf("Total: %d", sum);
    return 0;
}
