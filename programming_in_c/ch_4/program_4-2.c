/* Calculate the 200th triangular number
   Introduction of 'for' */

#include <stdio.h>

int main(void)
{
    int n, triangularNumber = 0;

    for (n = 1; n <= 200; n++)
        triangularNumber += n;

    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;
    
}