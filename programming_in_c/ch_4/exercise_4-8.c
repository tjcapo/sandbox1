/*  Page 91, Exercise 4.8
    Rewrite program 4.5 to prompt the user for the number of
    triangular numbers they want to find  */

#include <stdio.h>

int main (void)
{
    int n, number, triNum, counter;
    
    printf("How many triangular numbers do you want to find? ");
    scanf("%i", &counter);
    printf("\n");

    for ( ; counter >0; --counter ) {
        printf ("What triangular number do you want? ");
        scanf ("%i", &number);
        
        triNum = 0;
        
        for ( n = 1; n <= number; ++n )
            triNum += n;
            
        printf ("Triangular number %i is %i\n\n", number, triNum);
    
    }
    
    return 0;
}
