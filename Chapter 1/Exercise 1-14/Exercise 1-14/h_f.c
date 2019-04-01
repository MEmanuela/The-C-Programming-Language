#include <stdio.h>

#include <stdlib.h>

/* histogram of frequencies of different characters: a,f,h */

#define max 10

int main()
{
    int c,x;
    
    printf("the character is: ");
    x = getchar();

    printf("input: ");
    while((c = getchar())!= EOF)
    {
        if (c == ' ' || c == '\n'  || c == '\t') 
        {
            /* printf("out of the word => new line in histogram\n"); */
            putchar('\n');
        }
        else if (c == x) 
        {
            putchar('*');
        }
           
    }

    return 0;
}
