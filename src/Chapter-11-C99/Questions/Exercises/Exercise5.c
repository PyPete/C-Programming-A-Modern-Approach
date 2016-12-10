//Suppose that a is a one-dimensional array and p is a pointer variable. Assuming that the
//assignment p = a has just been performed, which of the following expressions are
//illegal because of mismatched types? Of the remaining expressions, whihc are
//true (have a nonzero value)?
//a) p == a[0]   -- illegal - comparing a pointer and integer. Compiler worked though
//b) p == &a[0]  -- good - true
//c) *p == a[0]  -- good - true
//d) p[0] == a[0] -- this worked, but i thought it wouldnt. not sure why
#include <stdio.h>

int main(void)
{
    int a[5] = {2,3,3,4,5};
    int *p = a;

    printf("p == a[0]: %d\n", p == a[0]); // comparison between pointer and integer
    printf("p == &a[0]: %d\n", p == &a[0]); // expect true, or 1
    printf("*p == a[0]: %d\n", *p == a[0]);
    printf("p[0] == a[0]: %d\n", p[0] == a[0]);

    return 0;
}
