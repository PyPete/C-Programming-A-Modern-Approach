//Modify programming Project 17 from Chapter 8 so that it includes the
//following functions:
//void create_magic_square(int n, char magic_square[n][n])
//void print_magic_square(int n, char magic_square[n][n]);
#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);


int main(void)
{
    int size;
    printf("This program creates a magic square of a specified size\n");
    printf("The size must be an odd number between 1 and 99\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);
    int magic_square[size][size];


    create_magic_square(size, magic_square);
    print_magic_square(size, magic_square);
    return 0;
}

void create_magic_square(int n, int magic_square[n][n])
{
    int col = n/2, row=0, current_num=1;
    while(current_num<=(n*n))
    {
        //set array to current number
        magic_square[row][col] = current_num;
        //adjust row and index
        //if the next column is out of bounds
        //reset to 0
        if (col+1 > n-1 && current_num%n!=0)
            col = 0;
        //if the next column is within the bounds
        //move one column right
        else if (col+1 <= n-1 && current_num%n!=0)
            col++;
        //if the next row is out of bounds
        //reset to the bottom
        if (row-1 < 0 && current_num%n!=0)
            row = n-1;
        //otherwise decrease the row
        else if (row-1 >=0 && current_num%n!=0)
            row--;
        //special move if reach the users number
        if (current_num%n == 0)
            row++;
        //advance to the next number
        current_num++;
    }
}

void print_magic_square(int n, int magic_square[n][n])
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d\t", magic_square[i][j]);
        }
        printf("\n");
    }
}
