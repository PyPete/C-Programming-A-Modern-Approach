//Write a program that generates a "random walk" across a 10x10 array. The
//array will contain characters. The program must randomly "walk" from element
//to element, always going up, down, left, or right by one element. The elements
//visisted by the program will be labeled with the letters A through Z, in the order
//visited.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char board[10][10] = {'. '};
    bool visited_board[10][10] = {false};
    bool carry_on = true;
    bool move_board[4] = {false};
    const char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                         'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                         'U', 'V', 'W', 'X', 'Y', 'Z'};
    int letters_in_alphabet = 26;
    int rand_num, col=0, row=0, temp_col, temp_row, move=0;
    srand((unsigned)time(NULL));
    board[0][0] = 'A';
    visited_board[0][0] = true;
    while(carry_on == true)
    {
        //loop over move
        while (1)
        {
            temp_col = col;
            temp_row = row;
            //pick a random number between 0-3
            rand_num = rand()%4;
            //check can go in that direction
            //if 0 move up
            if (rand_num == 0)
            {
                temp_row--;
                move_board[0] = true;
            }
            //if one move right
            else if (rand_num == 1)
            {
                temp_col++;
                move_board[1] = true;
            }
            //if two move down
            else if (rand_num == 2)
            {
                temp_row++;
                move_board[2] = true;
            }
            //if three move left
            else
            {
                temp_col--;
                move_board[3] = true;
            }
            //check bounds
            if (temp_col <= 9 && temp_col >= 0 && temp_row <= 9 && temp_row >= 0
                && visited_board[temp_row][temp_col]==false)
            {
                //valid move so break
                break;
            }
            if (move_board[0] == true && move_board[1] == true &&
                move_board[2] == true && move_board[3] == true)
            {
                //cant take any more moves
                carry_on = false;
                break;
            }
        }
        //check carry on
        if (carry_on == false)
            break;
        //update position
        col = temp_col;
        row = temp_row;
        //update move
        move++;
        //add character to the board
        board[row][col] = alphabet[move];
        //update the boolean board to check if there is an item there
        visited_board[row][col] = true;
        //stop programme if you have gone through the alphabet
        if (move == 25)
            break;
        //result move array
        for (int h=0; h<4; h++)
            move_board[h]=false;
    }
    //print board
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
