//1.AEILNORSTU
//2.DG
//3.BCMP
//4.FHVWY
//5.K
//8.JX
//10.QZ
//Write a program that computes the value of a word by summing the values
//of the letters:
//Enter a word: pitfall
//Scrabble value: 12
#include <stdio.h>

int main(void)
{
    char ch;
    int total = 0;
    printf("Enter a word: ");
    while((ch=toupper(getchar()))!= '\n')
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N'
            || ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U')
        {
            total++;
        }
        else if (ch == 'D' || ch == 'G')
        {
            total = total + 2;
        }
        else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
        {
            total = total + 3;
        }
        else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
        {
            total = total + 4;
        }
        else if (ch == 'K')
        {
            total = total + 5;
        }
        else if (ch == 'J' || ch == 'X')
        {
            total = total + 8;
        }
        else
        {
            total = total + 10;
        }
    }
    printf("Scrabble value: %d", total);
    return 0;
}
