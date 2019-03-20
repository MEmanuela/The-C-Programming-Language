#include <stdio.h>

/* verify that the expression getchar() != EOF is 0 or 1 */

int main ()
{
    int c;

    printf("input= ");

    c = getchar() != EOF;
    
    printf("c = %d",c);

    return 0;
}