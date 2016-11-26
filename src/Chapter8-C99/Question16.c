//Write a program that tests whether two words are anagrams:
//Enter first word: smartest
//Enter second word: mattress
//The words are anagrams
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define LEN 26

int main(void)
{
    //Define variables
    //first_word    - an array to track the letters found
    //anagram       - boolean to show if second letter is an anagram
    //ch            - general char variable
    int first_word[LEN] = {0};
    bool anagram = true;
    char ch;
    //Ask user to enter first word
    printf("Enter first word: ");
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
            first_word[ch-'A']++;
        }
        //As above for lowercase letters
        if (islower(ch))
            first_word[ch-'a']++;
    }
    //Ask the user to enter a second word
    printf("Enter second word: ");
    //As above loop through the word, but this time decrement the
    //relevant index
    while ((ch=getchar())!='\n')
    {
        if (!isalpha(ch))
            continue;
        if (isupper(ch))
            first_word[ch-'A']--;
        if (islower(ch))
            first_word[ch-'a']--;
    }
    //For the third loop we run through the first_word array
    //if there are any values not 0 then the words are not anagrams
    for (int i=0; i<LEN; i++)
    {
        if (first_word[i]!=0)
        {
            anagram = false;
        }
    }
    //Output results to the user
    if (!anagram)
        printf("The words are not anagrams\n");
    else
        printf("The words are anagrams\n");

    return 0;
}
