/* Page 82, Program 4.6
   Counts to 5 using a while loop */
   
   
#include <stdio.h>

int main (void)
{
    int count = 1;
    
    while ( count <=5 ) {
        printf ("%i\n", count);
        ++count;
    } 
    
    return 0;
}
