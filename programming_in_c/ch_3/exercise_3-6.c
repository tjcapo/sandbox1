// Write a program to evaluate the polynomial for x = 2.55

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x = 2.55;
    double resultant = (3 * (pow(x, 3))) - (5 * (pow(x, 2))) + 6;

    printf("3x^3 - 5x^2 + 6 where x = 2.55 evaluates to %g\n", resultant);

    return 0; 

}