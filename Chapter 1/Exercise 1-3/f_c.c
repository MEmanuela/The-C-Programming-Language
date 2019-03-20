#include <stdio.h>

/* print Fahrenheit-Celsius table */

int main()
{
    float fahr;

    printf("Print Fahrenheit-Celsius table\n");
    printf("******************************\n");

    for(fahr = 0; fahr <= 300; fahr += 20)
    {
        printf("%3.2f %6.1f\n",fahr,(5.0/9.0)*(fahr - 32));
    }
    return 0;
}