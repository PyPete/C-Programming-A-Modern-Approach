//Write a program that reads a 5x5 array of integers and then prints the
//row sums and the column sums:
//Enter row 1: 8 3 9 0 10
//Enter row 2: 3 5 17 1 1
//Enter row 3: 2 8 6 23 1
//Enter row 4: 15 7 3 2 9
//Enter row 5: 6 14 2 6 0
//Row totals: 30 27 40 36 28
//Column totals: 34 37 37 32 21
#include <stdio.h>

int main(void)
{
    //variable declaration
    int value;
    int matrix[5][5] = {0};
    int row_totals[5] = {0};
    int column_totals[5] = {0};

    //loop
    for (int i=0; i<5; i++)
    {
        //ask the user to enter values
        printf("Enter row %d:", i+1);
        for (int j=0; j<5; j++)
        {
            //assign to value
            scanf("%d",&value);
            matrix[i][j] = value;
            //sum as we go along
            row_totals[i] = row_totals[i] + value;
            column_totals[j] = column_totals[j] + value;
        }
    }
    //print out results
    printf("Row totals: ");
    for (int k=0; k<5; k++)
        printf(" %d", row_totals[k]);
    printf("\nColumn totals: ");
    for (int l=0; l<5; l++)
        printf(" %d", column_totals[l]);

    return 0;
}
