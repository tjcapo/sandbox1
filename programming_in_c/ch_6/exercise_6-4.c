/*  Page 150 Exercise 4
    Write a program that calculates the average of an array of 
    10 floating point values */


#include <stdio.h>

int main (void)  
{
    float   numbers[9],
            total = 0;

    printf ("Enter 10 numbers: \n");

    for (int i = 0; i < 10; ++i) 
        scanf ("%f", &numbers[i]);

    for (int j = 0; j < 10; j++)
        total += numbers[j];
              
    printf ("The average is %f\n", total / 10);
    
    return 0;
    
}