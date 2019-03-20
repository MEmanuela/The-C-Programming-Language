#include <stdio.h>

/* verify that the expression getchar() != EOF is 0 or 1 */
/* print the value of EOF */

int main ()
{
    int c;

    printf("input= ");

    c = getchar() != EOF;
    
    printf("c = %d\n",c);

    printf("value of EOF = %d",EOF);

    return 0;
}