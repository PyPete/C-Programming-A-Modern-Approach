//Write calls of printf that display a float variable x in the following format
//a) Exponential notation; left justified in a field of size 8; one digit are the
//decimal point
//b)Exponential notation; right justified in a field of size 10; six digits after
//the decimal point
//c)Fixed decimal notation; left-justified in a field of size 8; three digits after the
//decimal point
//d)Fixed decimal notation; right-justified in field of size 6; no digits after the
//decimal point

#include <stdio.h>


int main(void)
{
    float x = 12453651.2;
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%6.0f\n", x);
    return 0;
}
