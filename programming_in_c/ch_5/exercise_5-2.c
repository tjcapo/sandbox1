/*  Page 122 Exercise 2
    Take two integer inputs and determine if the first is evenly divisible
    by the second. Display in terminal  */


#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf ("Enter first number: ");
    scanf  ("%i", &num1);
    printf ("Enter second number: ");
    scanf  ("%i", &num2);

    if (num2 == 0) 
        printf ("Can't divide by zero\n");
    else if (num1 % num2 == 0) 
        printf ("%i is divisible by %i\n", num1, num2);
    else 
        printf ("%i is not divisible by %i\n", num1, num2);
    
    return 0;
}