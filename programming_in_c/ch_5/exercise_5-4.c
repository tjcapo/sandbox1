/*  Page 123 Exercise 4
    Write a printing calculator that accepts the operators +, -, *, /, S, and E
    Do not allow division by 0  */

#include <stdio.h>

int main (void)
{
    float accumulator = 0,
          input;
    
    char  operator;
    
    printf ("Begin calculations\n");

    for ( ; ; ) {
        scanf ("%f %c", &input, &operator);

        switch (operator)
        {
            case 'S':
                accumulator = input;
                printf ("=%f\n", accumulator);
                continue;
            case 'E':
                printf ("%f\n", accumulator);
                printf ("End of Calculations.\n");
                return 0;
            case '+':
                accumulator += input;
                printf ("=%f\n", accumulator);
                continue; 
            case '-':
                accumulator -= input;
                printf ("=%f\n", accumulator);
                continue;
            case '*':
                accumulator *= input;
                printf ("=%f\n", accumulator);
                continue;
            case '/':
                if (input == 0) {
                    printf ("Cant's divide by zero\n");
                    continue;
                }
                else {
                    accumulator /= input;
                    printf ("=%f\n", accumulator);
                    continue;
                }
            default:
                printf ("Unknown operator\n");
                continue;

        }
    }

    return 0;
}
