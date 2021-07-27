/*  Page 133
    Generate Fibonacci numbers  */

#include <stdio.h>

int main (void)
{
    int 
        Fibonacci[15],
        i;

    Fibonacci[0] = 0;           // By
    Fibonacci[1] = 1;           // Definition

    for ( i = 2;  i < 15;  ++i )
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    
    for ( i = 0;  i < 15;  ++i )
        printf ("%i\n", Fibonacci[i]);

    return 0;
}