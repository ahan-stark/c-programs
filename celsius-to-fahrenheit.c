#include <stdio.h>
void main()
{
    double celsius, fahrenheit;
    printf("enter temperature in celsius : ");
    scanf("%lf", &celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("the temperature in fahrenheit is : %.2lf", fahrenheit);
}