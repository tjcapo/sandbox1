/* Page 90, Exercise 5
   Rewrite the program to make it more readable */
   
#include <stdio.h>

int main(void)
{
    int n, two_to_the_n;
    
    printf("\nTABLE OF POWERS OF TWO\n\n");
    printf(" n      2 to the n\n");
    printf("---     ----------\n");
    
    two_to_the_n = 1;
    
    for (n = 0; n <=10; ++n) {
        printf("%2i          %i\n", n, two_to_the_n);
        two_to_the_n *= 2;
    }
    
    printf("\n");
    return 0;
}
