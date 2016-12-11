//Write the following funtion:
//double inner_product(const double *a, const double *b,
//                      int n);
//a and b both point to arrays of length n. The function should return a[0] * b[0] +
//a[1] * b[1] + ... + a[n-1] * b[n-1]. Use pointer arithmetic - not subscripting - to
//visit array elements
#include <stdio.h>

#define N 10

double inner_product(const double *a, const double *b,
                     int n);

int main(void)
{
    double array1[N] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.0};
    double array2[N] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.0};
    double sum;

    sum = inner_product(array1, array2, N);
    printf("Sum: %f", sum);


}

double inner_product(const double *a, const double *b,
                     int n)
{
    double *p1, *p2, sum=0;

    //loop through one array
    for (p1=a, p2=b; p1<a+n; p1++, p2++)
    {
        sum += (*p1 * *p2);
    }
    return sum;

}
