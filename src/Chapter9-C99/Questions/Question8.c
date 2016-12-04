//Write a program that simulates the game of craps, which is playe with two dice.
//On the first roll, the player wins if the sum of the dice is 7 or 11. The player
//loses if the sum is 2,3 or 12. Any other roll is called the "point" and the game
//continues. On each subsequent roll, the player wins if he or she rolls the point
//again. The player loses by rolling 7. Any other roll is ignored and the game continues.
//At the end of each game, the program will ask the user whether or not to play again.
//When the user enters a response other than y or Y, the program will display the
//number of wins and losses and then terminate.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 5

int roll_dice(void);
bool play_game(void);

int main(void)
{
    //Declare variables
    bool result;
    int wins=0, loses=0;
    char ch = 'y';
    srand((unsigned)time(NULL));
    //While the user has not entered  n
    //keep playing
    while (ch != 'n')
    {
        //play game
        result = play_game();
        //if user wins increase the number of wins
        //if user loses increase the number of loses
        if (result == true)
            wins++;
        else
            loses++;
        //ask user if they want to play again
        printf("\nPlay again? ");
        //get answer
        ch = getchar();
    }
    //print summary of results
    printf("Wins: %d Losses: %d", wins, loses);

    return 0;
}
bool play_game(void)
{
    //initialise results
    int roll = roll_dice(), old_roll;
    printf("You rolled: %d\n", roll);
    //if roll is 2, 3, or 12. Game over pal
    if (roll == 2 || roll == 3 || roll == 12)
    {
        printf("You lose!\n");
        return false;
    }
    //if roll is 7 or 11, you win. Well done
    if (roll == 7 || roll == 11)
    {
        printf("You win!\n");
        return true;
    }
    //report the point back to the user
    printf("Your point is %d\n", roll);
    old_roll = roll;
    //loop until the user wins or loses
    while(1)
    {
        //roll dice
        roll = roll_dice();
        //if the roll is the same as the old_roll
        //user wins
        if (roll == old_roll)
        {
            printf("You rolled: %d\n", roll);
            printf("You win!\n");
            return true;
        }
        //if user rolls a 7, they lose
        else if (roll == 7)
        {
            printf("You rolled: %d\n", roll);
            printf("You lose!\n");
            return false;
        }
        //otherwise keep rolling rolling rolling
        old_roll = roll;
    }
}


int roll_dice(void)
{
    //Throw two random numbers
    int dice1 = rand() % MAX_NUM + 1;
    int dice2 = rand() % MAX_NUM + 1;
    //return the sum
    return dice1 + dice2;
}
