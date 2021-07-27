/* Page 90, Exercise 6
   Change the printout of n values from 4.2 to be left-justified.
   Compare printouts of 4.2 and this program. */
   
   
#include <stdio.h>

int main (void)
{
    int n, n_sq;
    
    printf (" n       n^2\n");
    printf ("---     ------\n");
    
    for (n = 1; n <= 10; n++) {
        n_sq = n * n;
        printf("%-2i        %i\n", n, n_sq);
    }
    
    printf("\n");
    
    return 0;
}
