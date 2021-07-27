/*  Page 90, Exercise 4.7
    Determine the function of the decimal before the field width
    in the provided program */
    

#include <stdio.h>


int main (void)
{
    int dollars, cents, count;
    
    for (count = 1; count <= 10; ++count) {
        printf ("Enter dollars: ");
        scanf ("%i", &dollars);
        printf ("Enter cents: ");
        scanf ("%i", &cents);
        printf ("$%i.%.2i\n\n", dollars, cents);
    }
    
    printf("\n");
    return 0;
}


/*  It forces 2 places of precision in the case of a single digit
    number (so 2 cents will display as 02)
    IT DOES NOT TRUNCATE */
