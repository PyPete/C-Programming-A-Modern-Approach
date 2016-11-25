//write a program that encrypts a message using a Caesar cipher. The user will enter
//the message to be encrypted and the shift amount
//Enter message to be encrypted: Go ahead, make my day.
//Enter shift amount (1-25): 3
//Encrypted message: Jr dkhdg, pdnh pb gdb
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    //Variable initialisation
    char message[80];
    char ch;
    int i=0, shift=0;
    //Require user data
    printf("Enter message to be encrypted: ");
    //store user name
    while ((ch=getchar())!= '\n')
    {
        message[i] = ch;
        i++;
    }
    //Get user shift
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    for (int j=0; j<i; j++)
    {
        //if character is upper/lower or none
        //print out the adjusted message
        if (isupper(message[j]))
        {
            printf("%c", ((message[j]-'A') + shift) % 26 + 'A');
        }
        else if (islower(message[j]))
        {
            printf("%c", ((message[j]-'a') + shift) % 26 + 'a');
        }
        else
        {
            printf("%c", message[j]);
        }
    }
    return 0;
}
