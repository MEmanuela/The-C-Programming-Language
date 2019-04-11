#include <stdio.h>
 
#define MAX 1000

int getln(char line[], int maxline);
int reverse(char line[], char reversed[], int maxline);

/* reverse input a line at a time */

int main()
{
    int len;
    char line[MAX];
    char reversed[MAX];

    while((len = getln(line,MAX)) > 0)
    {   
        printf("reverse input= \n");
        reverse(line,reversed, len);
    }
    return 0;
}
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

int reverse(char line[], char reversed[], int maxline)
{
    int i,j;

    for(i = 0; line[i] != '\n'; ++i)
        ;

    --i;

    for (j = 0; j < maxline; ++j)
    {
        reversed[j] = line[i];
        --i;
    }
    reversed[j] = '\0';

    printf("%s\n", reversed);

    return 0;
}