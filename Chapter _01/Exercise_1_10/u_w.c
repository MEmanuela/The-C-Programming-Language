#include <stdio.h>

/* replace each string of one or more blanks by a single blank */

int main()
{
    int c;

    printf("input = ");

    while((c = getchar()) != EOF)
    {
         if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        if (c == '\t') 
        {
            putchar('\\');
            putchar('t');
        }
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }

        if (c == '.')
        {
            break;
        }
        if (c != '\t' && c != '\b' && c != '\\')
            putchar(c);
    }
    return 0;
}