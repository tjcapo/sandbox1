/*  Page 150 Exercise 5
    What do you expect from the following code?  */

    // I expect a list of numbers, each being the sum of all before it

#include <stdio.h>

int main (void)
{
    
    int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        i, j;

    // For every number in the array, add all the numbers before it
    for ( j = 0; j < 10; ++j )
        for ( i = 0; i < j; ++i)
            numbers[j] += numbers[i];     

    // Print all the numbers
    for (j = 0; j < 10; ++j)
        printf ("%i ", numbers[j]);
    
    printf ("\n");

    return 0;

}