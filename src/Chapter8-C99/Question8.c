//Modify Programming Project 7 so that it prompts for five quiz grades
//for each of five students, then computes the total score and average
//score for each student, and the average score, high score, and low
//score for each quiz
#include <stdio.h>

int main(void)
{
    //variable declaration
    int value,total, lowest, highest;
    int grades[5][5] = {0};

    int row_totals[5] = {0};
    int column_totals[5] = {0};
    int lowest_values[5] = {0};
    int highest_values[5] = {0};
    printf("\t\t");
    for (int h=0; h<5; h++)
        printf("S%d ", h+1);

    printf("\n");
    //loop
    for (int i=0; i<5; i++)
    {
        //ask the user to enter values
        printf("Quiz %d results:", i+1);
        lowest = 100;
        highest = 0;
        for (int j=0; j<5; j++)
        {
            //assign to value
            scanf("%d",&value);
            total = total + value;
            grades[i][j] = value;
            //sum as we go along
            row_totals[i] = row_totals[i] + value;
            column_totals[j] = column_totals[j] + value;
            if (value < lowest)
                lowest = value;
            if (value > highest)
                highest = value;
        }
        lowest_values[i] = lowest;
        highest_values[i] = highest;
    }
    //print out total score
    printf("Total Score: ");
    for (int k=0; k<5; k++)
        printf(" %d", column_totals[k]);
    printf("\nAverage Scores Student: ");
    for (int l=0; l<5; l++)
        printf(" %d", column_totals[l]/5);
    printf("\nAverage Score: %d", total/25);
    printf("\nHighest values: ");
    for (int m=0; m<5; m++)
        printf(" %d", highest_values[m]);
    printf("\nLowest values: ");
    for (int n=0; n<5; n++)
        printf(" %d", lowest_values[n]);
    printf("\n");

    return 0;
}
