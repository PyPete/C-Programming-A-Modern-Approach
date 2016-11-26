//Write a program that prints an n x n magic square. The user will specify the
//value of n
//This program creates a magic square of a specified size
//The size must be an odd number between 1 and 99
//Enter size of magic square: 5
//17    24  1   8   15
//23    5   7   14  16
//4     6   13  20  22
//10    12  19  21  3
//11    18  25  2   9
#include <stdio.h>

int main(void)
{
    int size, current_num=1, row=0, col=0;
    printf("This program creates a magic square of a specified size\n");
    printf("The size must be an odd number between 1 and 99\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);
    col = (size/2);
    int magic_square[size][size];
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            magic_square[i][j] = 0;
        }
    }
    magic_square[row][col] = 1;
    while(current_num<(size*size))
    {
        //set array to current number
        magic_square[row][col] = current_num;
        //adjust row and index
        //if the next column is out of bounds
        //reset to 0
        if (col+1 > size-1 && current_num%size!=0)
            col = 0;
        //if the next column is within the bounds
        //move one column right
        else if (col+1 <= size-1 && current_num%size!=0)
            col++;
        //if the next row is out of bounds
        //reset to the bottom
        if (row-1 < 0 && current_num%size!=0)
            row = size-1;
        //otherwise decrease the row
        else if (row-1 >=0 && current_num%size!=0)
            row--;
        //special move if reach the users number
        if (current_num%size == 0)
            row++;
        //advance to the next number
        current_num++;
    }
    //print to screen
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            printf("%d\t", magic_square[i][j]);
        }
        printf("\n");
    }
    return 0;
}
