/*  Page 150 Exercise 6
    Rewrite program 6.3 to generate Fibonacci numbers without using an array  */


#include <stdio.h>

int main (void)
{
    int     i = 0, 
            j = 1, 
            k, n;
    
    printf("0\n1\n");

    for (n = 0; n < 13; ++n)  {
        k = i + j;
        printf("%i\n", k);
        i = j;
        j = k;
    }

    printf("\n");

    return 0;

}