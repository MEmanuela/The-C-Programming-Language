#include <stdio.h>
#include <ctype.h>

/* histogram of the lengths of words */

int main()
{
    int c;
    
    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            printf("\n");
        }
        else
        {
            printf("#");
        }
    }
    
    return 0;
}