#include <stdio.h>

#define MAXLINE 1000

int getln(char line[], int maxline);
int rmv_blanks(char line[],int maxline);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getln(line,MAXLINE)) > 0)
    {
        rmv_blanks(line,MAXLINE);
        printf("%s", line);
    }
    
    return 0;
}

/* getln: read a line and return its length */
int getln(char line[], int maxline)
{
    int c, i;

    for(i = 0; i < maxline - 1 && (c = getchar()) !=EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n') 
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

/* remove trailing blanks and tabs */
int rmv_blanks(char line[], int maxline)
{
    int i;

    for(i = 0; line[i] != '\n'; ++i)
        ;

    --i;

    for(i = maxline;((line[i] == ' ') || (line[i] == '\t')); --i)
        ;

    if (i = 0) 
    {
        ++i;
        line[i] = '\n';
        ++i;
        line[i] = '\0';
    }
    return i;
}