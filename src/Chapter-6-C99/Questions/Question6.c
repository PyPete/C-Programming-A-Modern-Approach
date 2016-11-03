//Write a program that prompts the user to enter a number n, then prints all
//even squares between 1 and n. For example, if there user enters 100, the
//program should print the following:
//4
//16
//36
//64
//100
#include <stdio.h>
int main(void)
{
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i*i<=n; i++)
    {
        if ((i*i)%2 != 0)
            continue;
        printf("%d\n", i*i);
    }
    return 0;
}
