/*  Page 123 Exercise 6
    Take integer input and display the digits in english
    ie. 123 = one two three  */


////////////////// BUG: This prints the number backwards ///////////////////

#include <stdio.h>

int main (void)
{
    int
        number,
        remainder,
        counter;

    printf ("Enter a number: ");
    scanf  ("%i", &number);

/*    if (number < 0)
        printf ("negative ");
        number = -number;
*/

    while (number != 0) {
        
        remainder = number % 10;
//        printf("remainder = %i\n", remainder);
        
        switch (remainder)
        {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            default:
                break;
        }
        
        number /= 10;
        
//        printf("number = %i\n", number);
    }

    printf ("\n");
    return 0;
}