#include <stdio.h>

#define MAX 10

/* histogram of the lengths of words */

int main()
{
    int c;

    int word[MAX];

    int i, j, nw = 0, nc = 0;

    for(i = 0; i < MAX; i++)
    {
        word[i] = 0;
    }

    int rel = 0;

    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            printf("\n");
        }
        else
        {
            printf("#");
        }
        
        if (c == '$') 
        {
            rel = 1;
        }
        
    }

    printf("--------------------------------------\n");

    /* vertical orientation */

    while (rel == 1)
    {
        printf("input= ");

        while((c = getchar()) != EOF)
        {
            ++nc;

            if (c == ' ' || c == '\t' || c == '\n') 
            {
                word[nw] = nc - 1;  /* to exclude the space in word length */

                ++nw;               /* next word */
            
                nc = 0;             /* resetting word length */
            }
            if (c == '$')
                break;
        
        }
    
        for(i = MAX; i >= 1; i--)
        {
            for(j = 0; j <= nw; j++)
            {
                if (i <= word[j]) 
                {
                    putchar('#');
                }
                else
                {
                    putchar(' ');
                }
            }
        
        putchar('\n');
        }
    }
        return 0;
}