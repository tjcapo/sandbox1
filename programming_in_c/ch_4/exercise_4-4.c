/* Page 89, Exercise 4
   Generate a table of the first 10 factorials */
   
   
#include <stdio.h>


int main (void)
{
    int n, prev, fact;
    
    printf("Number   Factorial\n");
    printf("------   ---------\n");
    
    fact = 0;
    
    for (n = 1; n <= 10; n++) {
        fact = n + fact;
        printf("%2i           %i\n", n, fact);
    }
    
    printf("\n");
    
    return 0;
}
