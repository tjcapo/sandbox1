/*  Page 139
    Introducing character arrays  */

#include <stdio.h>

int main (void)
{
    char word[] = {'H', 'e', 'l', 'l', 'o', '!'};

    for ( int i = 0; i < 6; ++i)
        printf ("%c", word[i]);

    printf ("\n");

    return 0;
}