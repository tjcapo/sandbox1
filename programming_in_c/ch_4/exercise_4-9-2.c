/*  Page 91, Exercise 4.9.2
    Rewrite program 4.3 to use a while loop instead of a for loop  */


#include <stdio.h>

int main (void)
{
    int n, triangular_number;
    
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf("  n    Sum from 1 to n\n");
    printf(" ---   ---------------\n");
    
    triangular_number = 0;
    
    n = 1;
    while (n <= 10) {
        triangular_number += n;
        printf(" %2i          %i\n", n, triangular_number);
        ++n;
    }
    
    return 0;
}
