#include <stdio.h>

/* Print coversion table in reverse order */

int main()
{
    float fahr;

    for(fahr = 300; fahr >= 0; fahr -= 20)
    {
        printf("%3.2f %6.1f\n",fahr,((5.0/9.0) * (fahr - 32)));
    }
    return 0;
}