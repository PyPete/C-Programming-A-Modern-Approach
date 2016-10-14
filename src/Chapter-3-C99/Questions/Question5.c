//Write program that asks the user to enter to the numbers from 1 to 16
//(in any order) and then displays the numbers in a 4 by 4 arrangement,
//followed by the sums of rows, columns, and diagonals:
//Enter the numbers from 1 to 16 in any order:
//16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//16  3  2 13
// 5 10 11  8
// 9  6  7 12
// 4 15 14  1
//
//Row sums: 34 34 34 34
//Column sums: 34 34 34 34
//Diagonal sums: 34 34
#include <stdio.h>

int main(void)
{
    int one, two, three, four, five, six, seven, eight;
    int nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;
    printf("Enter the numbers from 1 to 16 in any order: \n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &one, &two, &three, &four, &five, &six, &seven, &eight,
                                            &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);
    printf("%4d%4d%4d%4d\n", one, two, three, four);
    printf("%4d%4d%4d%4d\n", five, six, seven, eight);
    printf("%4d%4d%4d%4d\n", nine, ten, eleven, twelve); //there has to be a quicker way
    printf("%4d%4d%4d%4d\n", thirteen, fourteen, fifteen, sixteen);
    printf("\n");
    printf("Row sums: %4d%4d%4d%4d\n", (one+two+three+four), (five+six+seven+eight),
                                    (nine+ten+eleven+twelve), (thirteen+fourteen+fifteen+sixteen));
    printf("Column sums: %4d%4d%4d%4d\n", (one+five+nine+thirteen), (two+six+ten+fourteen), (three+seven+eleven+fifteen),
                                        (four+eight+twelve+sixteen));
    printf("Diagonal sums: %4d%4d\n", (one+six+eleven+sixteen), (four+seven+ten+thirteen));
    return 0;
}

