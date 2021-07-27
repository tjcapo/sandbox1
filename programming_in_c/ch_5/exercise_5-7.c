/*  Page 124 Exercise 7
    Modify program 5.10 :
    Skip checking even values of (p) and (d)
    Add a test for isPrime in the conditions for the 2nd for loop  */



#include <stdio.h> 

int main (void)
{
    int    p, d;
    _Bool  isPrime;
    
    // Check numbers from 1 - 50
    for ( p = 1; p <= 50; p++ ) {
        isPrime = 1;
        
        // If p is not even, and isPrime is not true:
        // check divisibility of p by all odd numbers below (1/2 p) + 1,
        for ( d = 3; (p % 2 != 0), (isPrime != 0), (d < (p / 2) + 1); d += 2 ) 
            if ( p % d == 0 )
                isPrime = 0;

            if ( isPrime != 0 )
                printf ("%i ", p);
    }

    printf("\n");
    return 0;
}