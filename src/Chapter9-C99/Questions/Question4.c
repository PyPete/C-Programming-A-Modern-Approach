//Modify Programming Project 16 from Chapter 8 so that it includes the following
//functions:
//void read_word(int counts[26]);
//bool equal_array(int counts1[26], int counts2[26])
//main will call read_word twice, once for each of the two words entered by
//the user. As it reads a word, read_word will use the letters in the word
//to update the counts array as described in the original project.
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define LEN 26

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    //Variable declarations
    int first_word[LEN] = {0};
    int second_word[LEN] = {0};
    bool anagram;
    //Ask user to enter the first word
    printf("Enter first word: ");
    //Call read_word
    read_word(first_word);
    //Ask user to enter the second word
    printf("Enter second word: ");
    //call read_word
    read_word(second_word);
    //call anagram to test if words are the same
    anagram = equal_array(first_word, second_word);
    //output to user
    if (!anagram)
        printf("The words are not anagrams\n");
    else
        printf("The words are anagrams\n");

    return 0;
}

void read_word(int counts[])
{
    char ch;
//loop over the word until a new line is found
    while ((ch=getchar())!='\n')
    {

        //if ch is not a letter. Say a ? or !, then do nothing
        //continue jumps to the end of the loop
        if (!isalpha(ch))
            continue;
        //if the ch is an uppercase letter
        //then increment the reference. Normalise the char by substrating
        //'A'
        if (isupper(ch))
        {
            counts[ch-'A']++;
        }
        //As above for lowercase letters
        if (islower(ch))
            counts[ch-'a']++;
    }
}

bool equal_array(int counts1[], int counts2[])
{
    bool anagram = true;
    //loop through one array. Subtract the other
    //if the value is not zero. They are not anagrams
    for (int i=0; i<LEN; i++)
    {
        if (counts1[i]-counts2[i] != 0)
            anagram = false;
    }
    return anagram;
}
