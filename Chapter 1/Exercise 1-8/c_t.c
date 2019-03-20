#include <stdio.h>

/* count blanks, tabs and newlines */

int main()
{
    int c, nb = 0, nt = 0, nn = 0;

    printf("input = ");

    while((c = getchar()) != EOF)
    {
        if (c == ' ') 
            ++ nb;
        if (c == '\t') 
            ++ nt;
        if (c == '\n')
            ++ nn;

        if (c == '.')
        {
            break;
        }
    }

    printf("blanks = %d, tabs = %d, newlines = %d", nb, nt, nn);
    
    return 0;
}