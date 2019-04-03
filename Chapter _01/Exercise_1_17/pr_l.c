#include <stdio.h>

#define MAXLINE 1000    /* maximum input line size */

int getln(char line[], int maxline);

/* print all input lines that are longer than 80 characters */

int main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while((len = getln(line,MAXLINE)) > 0)
    {
        if (len > 80)

            printf("%s", line);
    }
    return 0;
}

int getln(char line[], int maxline)
{
    int c, i;
    for(i = 0; i < maxline - 1 && (c = getchar()) != EOF && c !='\n'; i++)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    
    return i;
}