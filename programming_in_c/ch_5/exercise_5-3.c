/*  Page 123 Exercise 3
    Accept two integers from user. 
    Divide first by second.
    Display the result to 3 decimal places.
    Do not allow division by 0.  */

#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf ("Enter first number: ");
    scanf  ("%i", &num1);
    printf ("Enter second number: ");
    scanf  ("%i", &num2);

    if (num2 == 0)
        printf ("Can't divide by 0\n");
    else 
        printf ("%i / %i = %.3f\n", num1, num2, (float) num1 / num2);

}