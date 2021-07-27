/*  Page 150 Exerceise 2
    Modify program_6-1 so that the array of values is initialized to 0
    Use a for loop for the initialization */

#include <stdio.h>

int main (void)
{
    int
        values[10],
        i,
        index;

    for (i = 0; i < 10; i++)
        values[i] = 0;

    values[0] = 197;
    values[2] = -100;
    values[5] = 350;
    values[3] = values[0] + values[5];
    values[9] = values[5] / 10;
    --values[2];

    for ( index = 0; index < 10; ++index)
        printf ("values[%i] = %i\n", index, values[index]);

    return 0;
        
}