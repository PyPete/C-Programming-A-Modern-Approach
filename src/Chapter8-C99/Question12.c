//Modify programming project from chapter 7, so that the SCRABBLE values
//of the letters are stored in an array. The array will have 26 elements,
//corresponding to the 26 letters of the alphabet.
#include <stdio.h>
#define ALPHABET_LENGTH 26

int main(void)
{
    //initialise array of values
    int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1,
                      1, 3, 10, 1, 1,1,1, 4, 4, 8, 4, 10};
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J','K', 'L',
                        'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'Y', 'Z'};
    char ch;
    int total = 0;
    //ask for user input
    printf("Enter a word: ");
    //loop over the word
    while((ch=toupper(getchar()))!= '\n')
    {
        //cycle through alphabet. any hits?
        for (int i=0; i<ALPHABET_LENGTH; i++)
        {
            //if yes then add to total
            if (ch == alphabet[i])
            {
                total += values[i];
            }
        }
    }
    printf("Scrabble value: %d", total);
    return 0;
}
