#include <stdio.h>
#include <ctype.h>

#define TAB 8

/* replace strings of blanks by the minimum number of tabs and blanks to achieve the same spacing */

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
        if (c == ' ')
        {
            ++j;
            t = TAB - i;
            while (j < t)
            {
                putchar('\t');
            }
            putchar(c);
        }
    }
    return 0;
}
