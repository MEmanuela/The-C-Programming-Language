#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

/* prints input one word per line */

int main()
{
    int c, nw, state;

    state = OUT;
    nw = 0;

    printf("input = ");

    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t') 
            state = OUT;
    
        else if (state == OUT)
        {
            state = IN;
            putchar('\n');
        }

        putchar(c);

        if (c == '.')
            break; 
    }

    return 0;
}