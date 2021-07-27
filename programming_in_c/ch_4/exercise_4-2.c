/* Page 89, Exercise 2
   Display a table of n and n^2 for values of n from 1-10 */
   
#include <stdio.h>

int main (void)
{
    int n, n_sq;
    
    printf (" n       n^2\n");
    printf ("---     ------\n");
    
    for (n = 1; n <= 10; n++) {
        n_sq = n * n;
        printf("%2i        %i\n", n, n_sq);
    }
    
    printf("\n");
    
    return 0;
}
