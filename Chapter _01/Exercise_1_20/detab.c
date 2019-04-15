#include <stdio.h>
#include <ctype.h>

#define TAB 8

/* replace tabs with the proper number of blanks */

int main()
{
    int c,i = 0;
    int j,t = 0;

    while ((c = getchar()) != EOF)
    {
        if (isalpha(c))
        {
            ++i;
            putchar(c);
        }
        if (c == '\t')
        {
            t = TAB - i;
            for (j = 0; j <= t; ++j)
            {
                printf("#");
                i = 0;
            }
        }
    }
    return 0;
}
