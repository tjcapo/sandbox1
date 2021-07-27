/* Page 89, Exercise 3
   Generate every fifth triangular number up to 50 using provided 
   formula */
   
#include <stdio.h>

int main (void)
{
    int num, tri_num;
    
    printf("Number   Triangular Number\n");
    printf("------   -----------------\n");
    
    for ( num = 5; num <= 50; num += 5) {
        tri_num = num * (num + 1) / 2;
        printf(" %2i            %i\n", num, tri_num);
    } 
    
    printf("\n");
    
    return 0;
}
