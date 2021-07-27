/*  Page 135
    Generate prime numbers with arrays  */


#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int
        p,
        i,
        primes[50],
        primeIndex = 2;

    bool isPrime;

    // Declare first two primes
    primes[0] = 2;
    primes[1] = 3;
    
    // Start at 5 and count to 50 by 2's (even numbers are not prime)
    for ( p = 5; p <= 5000; p += 2) {
        isPrime = true;  
        
        // Check if the number is divisible by any of the primes already found
        for ( i = 1; isPrime  &&  p / primes[i] >= primes[i]; ++i)
            if ( p % primes[i] == 0 )
                isPrime = false;

            if ( isPrime == true ) {
                primes[primeIndex] = p;
                ++primeIndex;
            }
    }
    // Print all numbers in the primes array
    for ( i = 0; i < primeIndex; ++i )
        printf ("%i ", primes[i]);

    printf ("\n");

    return 0;

}