// Write a program that converts 27 from degrees F to degrees C

#include <stdio.h>

int main(void)
{
    int F_in = 27;

    float C_out = (F_in - 32) / 1.8;

    printf("%i degrees F is %g degrees C.\n", F_in, C_out);

    return 0; 
}