#include <stdio.h>

/* replace each string of one or more blanks by a single blank */

int main()
{
    int c;

    printf("input = ");

    while((c = getchar()) != EOF)
    {
        if (c == ' ') 
        {
            while (c == ' ')
                c = getchar();
                putchar(' ');
        }
        putchar(c);

        if (c == '.')
        {
            break;
        }
    }
    return 0;
}