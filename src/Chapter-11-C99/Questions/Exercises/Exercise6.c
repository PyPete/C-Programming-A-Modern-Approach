//Rewrite the following function to use pointer arithmetic of array subscripting.
//int sum_array(const int a[], int n)
//{
//  int i, sum;
//  sum = 0;
//  for (i=0; i<n; i++
//      sum += a[i];
//  return sum;
//}


#include <stdio.h>

#define N 10

//define method
int sum_array(int *a, int n);


int main(void)
{
    //Initialise array
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int value;

    //Call method
    value = sum_array(a, N);
    //Print result
    printf("Result: %d", value);
    return 0;
}

int sum_array(int *a, int n)
{
    //Initialise sum, and pointer
    int sum = 0, *p;
    //assign pointer p to a (or a[0]), whilst p less than 10
    for (p=a; p<a+n; p++)
        sum += *p;

    return sum;
}
