/*  Page 151 Exercise 7
    Write a program that implements the _Sieve of Eratosthenes_
    Find all primes up to n = 150
    What can you say about this algorith compared to the other ones used to 
    generate prime numbers?  */



#include <stdio.h>


int main (void)
{
    int   P[150],
          i, j,
          n = 150,
          pIndex = 0;
    
    // Set all P[i] to 0
    for (int i = 0; i <= n; ++i) 
        P[i] = 0;

///////// This is broken /////////
    for (i = 2; i <= n; ++i) {
        for (j = 2; j <= i / 2; ++j)
            if (i % j == 0)
                P[i] = 1;
                
    }

    for (i = 2; i <=n; ++i)
        if (P[i] == 0)
            printf ("%i\n", i); 

    return 0;
}