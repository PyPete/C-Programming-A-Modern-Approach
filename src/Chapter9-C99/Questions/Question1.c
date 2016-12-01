//Write a program that asks the user to enter a series of integers, then
//sorts the integers by calling the function selection_sort. When given an array
//with n elements, selection_sort must do the following:
//1. Search the array to find the largest element, then move it to the last
//position in the array.
//2. Call itself recursively to sort the first n-1 elements of the array
#include <stdio.h>
#define LEN 10


void selection_sort(int a[], int length);


int main(void)
{
    //Array to capture user values
    int user_values[LEN];
    //Ask user to enter values
    printf("Enter the values you want to sort: ");
    //Assign values to the array
    for (int i=0; i<LEN; i++)
        scanf("%d", &user_values[i]);
    //Run method
    selection_sort(user_values, LEN-1);
    //Print the output to the screen
    for (int i=0; i<LEN; i++)
        printf("%d ", user_values[i]);
    return 0;
}


void selection_sort(int a[], int length)
{
    //temp variable to hold values
    int tmp;
    //if length of array is zero, return back to main
    //output results
    if (length == 0)
        return;
    //loop through the array and find the largest value
    for (int i=0; i<=length; i++)
    {
        if (a[i] > a[length])
        {
            //swap the values around if find a bigger one
            tmp = a[length];
            a[length] = a[i];
            a[i] = tmp;
        }
    }
    //iterate over a reduced array
    selection_sort(a, length-1);
}
