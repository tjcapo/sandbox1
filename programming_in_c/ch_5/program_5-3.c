/*  Page 97
    Determine if a numbe is even or odd  */

#include <stdio.h>

int main (void)
{
    int 
        number_to_test,
        remainder;

    printf ("Enter a number to test: ");
    scanf ("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
        printf("The number is even\n");
    
    if (remainder != 0)
        printf("The number is odd\n");

    return 0;
}