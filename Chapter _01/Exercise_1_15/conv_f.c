#include <stdio.h>

float conversion (float fahr)
{
    float celsius;

    celsius = (5.0/9.0)*(fahr - 32);

    return celsius;
}

int main()
{
    float fahr;

    printf("Print Fahrenheit-Celsius table\n");
    printf("******************************\n");

    for(fahr = 0; fahr <= 300; fahr += 20)
    {
        printf("%3.2f %6.1f\n",fahr,(conversion(fahr)));
    }

    return 0;
}