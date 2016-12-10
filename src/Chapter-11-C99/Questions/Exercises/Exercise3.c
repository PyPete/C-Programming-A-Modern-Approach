//What will be the contents of the a array after the following statements are executed?
//Answer: Reverses both arrays
#include <stdio.h>

#define N 10

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[N-1], temp;

    //while index of p is less than q
    while (p < q)
    {
        //assign value of p to temp
        temp = *p;
        //set value of p to value of q, then advance p by 1
        *p++ = *q;
        //set value of q to value of temp, then decrease q by 1
        *q-- = temp;
    }
    for (int i=0; i<N; i++)
        printf("%d ", a[i]);

    return 0;
}
