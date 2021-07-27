// Evaluate the expression and display answer in exponential format

#include <stdio.h>
#include <math.h>

int main(void)
{
    double answer = (3.31 * pow(10, -8) * 2.01 * pow(10, -7)) / 
                    (7.16 * pow(10, -6) + 2.01 * pow(10, -8));

    printf("The answer is %g\n", answer);

    return 0;
    
}