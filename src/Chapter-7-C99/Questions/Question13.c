//Write a program that calculates the average word length for a sentence
//Enter a sentence: It was deja vu all over again
//Average word length: 3.4
//For simplicity, your program should consider a punctuation mark to be part of the word
//to which its attached.
#include <stdio.h>

int main(void)
{
    char ch;
    int total_letters = 0, total_words = 1;
    float average;
    printf("Enter a sentence: ");
    while ((ch = getchar())!= '\n')
    {
        if (ch == ' ')
            total_words++;
        else
            total_letters++;
    }
    printf("%.1f", (float)total_letters/total_words);
    return 0;
}
