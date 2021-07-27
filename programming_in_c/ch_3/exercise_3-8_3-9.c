// find 

#include <stdio.h>

int main(void)
{
    int i = 365, j = 7;
    int next_multiple = i + j - i % j;

    printf("The next largest multiple of %i from %i is %i\n", j, i, 
          next_multiple);

    int i2 = 12258, j2 = 23;
    int next_multiple2 = i2 + j2 - i2 % j2;

    printf("The next largest multiple of %i from %i is %i\n", j2, i2, 
          next_multiple2);

    int i3 = 996, j3 = 4;
    int next_multiple3 = i3 + j3 - i3 % j3;

    printf("The next largest multiple of %i from %i is %i\n", j3, i3, 
          next_multiple3);
    
    return 0;

}

