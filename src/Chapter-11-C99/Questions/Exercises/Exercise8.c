//Rewrite the following function to use pointer arithmetic instead of array
//subscripting. (In other words, eliminate the variable i and all users of the
//[] operator.) Make as few changes as possible
//void store_zeros(int a[], int n)
//{
//  int i;
//  for (i = 0; i<n; i++)
//      a[i] = 0;
//}
#include <stdio.h>

#define N 10

void store_zeros(int *p, int n);

int main(void)
{
    //Declare an array of values
    int array[N] = {1,2,3,4,5,6,7,8,9,10};
    //Call method to convert zeros
    store_zeros(array, N);

    //print results
    for (int i=0; i<N; i++)
        printf("%d ", array[i]);

    return 0;
}

void store_zeros(int *array, int n)
{
    //assign a pointer to the pointer (is this right?)
    //array arithmetic
    for (int *p=array; p<array+n; p++)
        *p = 0;

}
