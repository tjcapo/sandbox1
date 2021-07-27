/*  Page 150 Exercise 3
    Modify program 6.2 to accept any number of responses
    Use 999 as done  */


#include <stdio.h>

int main (void)
{
    int 
        ratingCounters[11],
        i, j,
        response;

    for ( i = 1; i <= 10; ++i )
        ratingCounters[i] = 0;

    printf ("Enter your responses\n");

    while ( 1 ) {
        scanf ("%i", &response);

        if (response == 999)
            break;

        if ( response < 1  ||  response > 10 )
            printf ("Bad response: %i\n", response);
        else
            ++ratingCounters[response];
    
    }

    printf("\n\nRating   Number of Responses\n");
    printf("------   --------------------\n");

    for ( i = 1; i <= 10; ++i)
        printf ("%4i%14i\n", i, ratingCounters[i]);
    
    return 0;

}