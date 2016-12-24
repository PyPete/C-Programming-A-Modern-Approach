//Checks planet names

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int word_compare(char *string1, char *string2);

int main(int argc, char *argv[1])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};

    for (int i=1; i<argc; i++)
    {
        for (int j=0; j<NUM_PLANETS; j++)
        {
            if (word_compare(argv[i], planets[j]) == 0)
            {
                printf("%s is planet %d\n", argv[i], j+1);
                break;
            }
            if (j==NUM_PLANETS)
            {
                printf("%s is not a planet\n", argv[i]);
            }
        }
    }
    return 0;
}

int word_compare(char *string1, char *string2)
{
    //compare string1 with string2
    int success = 0;
    //loop through each character of the string until end of word reached
    while (*string1 != '\0')
    {
        //compare the uppercase form of the character with
        //uppercase form of the other string
        //If different
        if (toupper(*string1)!= toupper(*string2))
        {
            //fail and return
            success = 1;
            break;
        }
        string1++;
        string2++;
    }
    return success;
}
