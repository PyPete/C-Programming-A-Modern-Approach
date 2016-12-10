//Write the following function:
//bool search(const int a[], int n, int key);
//a is an array to be searched, n is the number of elements in the array, and
//key is the search key. search should return true if key matches some element of a,
//and false if it doesn't. Use pointer arithmetic - not subscripting - to vist
//array elements.
#include <stdio.h>
#include <stdbool.h>

#define N 10

bool search(const int a[], int n, int key);

int main(void)
{
    //Initialise Variables
    int array[N] = {22, 1, 14, 15, 18, 2, 7, 29, 4, 29};
    printf("Result: %d\n", search(array, N, 22)); //True
    printf("Result: %d\n", search(array, N, 30)); //False

    return 0;
}

bool search(const int a[], int n, int key)
{
    bool found = false;
    //loop through each element of array
    for (int *p = a; p < a+n; p++)
    {
        //if the object the pointer is pointing to is the same as key
        if (*p == key)
            found = true; //return true
    }
    return found;
}
