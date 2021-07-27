/*  Page 106
    Implement the sign function  */
    
    
#include <stdio.h>

int main(void)
{
    int number, sign;
    
    printf ("Please type a number: ");
    scanf ("%i", &number);
    
    if (number < 0)
        sign = -1;
    else if (number == 0)
        sign = 0;
    else                   // Must be positive
        sign = 1;
    
    printf ("Sign = %i\n", sign);
    
    return 0;
}
