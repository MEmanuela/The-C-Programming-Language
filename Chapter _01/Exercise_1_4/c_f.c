#include <stdio.h>

/* print Fahrenheit-Celsius table */

int main()
{
    float cels;

    printf("Print Celsius - Fahrenheit table\n");

    for(cels = 0; cels <= 100; cels += 5)
    {
        printf("%3.2f %6.1f\n",cels,(cels * (9.0/5.0) + 32));
    }
    return 0;
}