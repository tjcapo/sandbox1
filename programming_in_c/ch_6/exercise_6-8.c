/*  Page 151 Exercise 8
    Make a program to test variable length arrays  */

#include <stdio.h>

int main (void)
{
    int a = 20;

    printf("a = %i\n", a);

    int g[a];

    for (int i = 0; i <= a; i++)
        printf("%i\n", i);

    return 0;
    
}