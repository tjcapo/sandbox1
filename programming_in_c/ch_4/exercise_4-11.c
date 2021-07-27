/*  Page 91, Exercise 4.11
    Write a program that calculates the sum of the digits of and integer.
    The program should accept any integer  */

#include <stdio.h>

int main(void)
{
    int 
        usr_in,
        current, 
        next,
        sum = 0;

    printf("Enter an integer: ");
    scanf("%i", &usr_in);
    
    current = usr_in;
    if (current < 0)
        current *= -1;

    while (current != 0) {
        next = current % 10;
        sum += next;
        current /= 10;
    }

    printf("The sum of the digits in %i is %i\n", usr_in, sum);

    return 0;
}