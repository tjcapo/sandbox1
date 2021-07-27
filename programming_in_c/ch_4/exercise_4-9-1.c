/*  Page 91, Exercise 4.9.1
    Rewrite program 4.2 to use a while loop instead of a for loop  */

#include <stdio.h>

int main(void)
{
    int n, triangularNumber = 0;

    n = 1;
    while (n <= 200) {
        triangularNumber += n;
        ++n;
    }

    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;
    
}