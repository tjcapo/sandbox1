/*  Page 91, Exercise 4.9.3
    Rewrite program 4.4 to use a while loop instead of a for loop  */

#include <stdio.h>

int main (void)
{
    int n, number, tri_num;
    
    printf ("What triangular number do you want? ");
    scanf ("%10i", &number);
    
    tri_num = 0;
    
    n = 1;
    while (n <= number) {
        tri_num += n;
        ++n;
    }
    
    printf ("Triangular number %i is %i\n", number, tri_num);
    
    return 0;
}
