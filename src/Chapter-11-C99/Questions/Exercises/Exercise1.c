//Suppose that the following declarations are in effect:
//int a[] = {5,15,34,54,14,2,52,72}
//int *p = &a[1], *q = &a[5]
//a)What is the value of *(p+3)? 14
//b)What is the value of *(q-3)? 34
//c)What is the value of q-p? 4 - distance between the pointers
//d)Is the condition p < q true or false? True, p has a lower index than q
//e)Is the condition *p < *q true or false? False, p value is 15, > than q (14)


#include <stdio.h>

int main(void)
{
    int a[] = {5,15,34,54,14,2,52,72};
    int *p = &a[1], *q = &a[5];

    printf("Question a) %d\n", *(p+3));
    printf("Question b) %d\n", *(q-3));
    printf("Question c) %d\n", (q-p));
    printf("Question d) %d\n", p < q);
    printf("Question d) %d\n", *p < *q);

    return 0;
}
