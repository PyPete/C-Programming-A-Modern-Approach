//Suppose that high, low, and middle are all pointer variables of the same type,
//and that low and high point to elements of an array. Why is the following statement
//illegal, and how could if be fixed?
//middle = (low + high)/2 - cant add two pointers, only subtract
#include <stdio.h>

int main(void)
{
    int a[] = {0,1,2,3,4,5};
    int *low = &a[0], *middle, *high = &a[4];
    //*middle = low + high;
    //Couldnt think of anything simple
    middle = &a[(high - low) / 2];
    printf("%d", *middle)/2;


    return 0;
}
